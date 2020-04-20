#ifndef QTSCRIPTSHELL_QSQLTABLEMODEL_H
#define QTSCRIPTSHELL_QSQLTABLEMODEL_H

#include <qsqltablemodel.h>

#include <QtScript/qscriptvalue.h>

class QtScriptShell_QSqlTableModel : public QSqlTableModel
{
public:
    QtScriptShell_QSqlTableModel(QObject*  parent = 0, QSqlDatabase  db = QSqlDatabase());
    ~QtScriptShell_QSqlTableModel();

    QModelIndex  buddy(const QModelIndex&  index) const;
    bool  canFetchMore(const QModelIndex&  parent) const;
    void childEvent(QChildEvent*  arg__1);
    void clear();
    int  columnCount(const QModelIndex&  parent) const;
    void customEvent(QEvent*  arg__1);
    QVariant  data(const QModelIndex&  idx, int  role = Qt::DisplayRole) const;
    bool  deleteRowFromTable(int  row);
    bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void fetchMore(const QModelIndex&  parent);
    Qt::ItemFlags  flags(const QModelIndex&  index) const;
    QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
    QModelIndex  index(int  row, int  column, const QModelIndex&  parent) const;
    bool  insertColumns(int  column, int  count, const QModelIndex&  parent);
    bool  insertRowIntoTable(const QSqlRecord&  values);
    bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
    QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
    QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits, Qt::MatchFlags  flags) const;
    QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const;
    QStringList  mimeTypes() const;
    QString  orderByClause() const;
    void queryChange();
    bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
    bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
    void revert();
    void revertRow(int  row);
    int  rowCount(const QModelIndex&  parent = QModelIndex()) const;
    bool  select();
    QString  selectStatement() const;
    bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
    void setEditStrategy(QSqlTableModel::EditStrategy  strategy);
    void setFilter(const QString&  filter);
    bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role);
    bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
    void setSort(int  column, Qt::SortOrder  order);
    void setTable(const QString&  tableName);
    void sort(int  column, Qt::SortOrder  order);
    QSize  span(const QModelIndex&  index) const;
    bool  submit();
    Qt::DropActions  supportedDropActions() const;
    void timerEvent(QTimerEvent*  arg__1);
    bool  updateRowInTable(int  row, const QSqlRecord&  values);

    QScriptValue __qtscript_self;
};

#endif // QTSCRIPTSHELL_QSQLTABLEMODEL_H
