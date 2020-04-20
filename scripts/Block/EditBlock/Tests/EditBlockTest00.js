// Auto generated by Testing Dashboard
// File        : scripts/Block/EditBlock/Tests/EditBlockTest00.js
// Timestamp   : 2015-04-21 13:44:33
// Description : 

include('scripts/Pro/Developer/TestingDashboard/TdbTest.js');

function EditBlockTest00() {
    TdbTest.call(this, 'scripts/Block/EditBlock/Tests/EditBlockTest00.js');
}

EditBlockTest00.prototype = new TdbTest();

EditBlockTest00.prototype.test00 = function() {
    qDebug('running EditBlockTest00.test00()...');
    this.setUp();
    TdbTest.clickOnWidget('MainWindow::CadQToolBar::CadToolBar::MainToolsPanel::LineToolsPanelButton');
    TdbTest.clickOnWidget('MainWindow::CadQToolBar::CadToolBar::LineToolsPanel::Line2PButton');
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(9.9, 20.1);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(10.2, 10.2);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(20.3, 10.1);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(31, 14.3);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(26.3, 13.9);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(26.1, 14.1);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    TdbTest.clickOnWidget('MainWindow::CadQToolBar::CadToolBar::MainToolsPanel::SelectToolsPanelButton');
    TdbTest.clickOnWidget('MainWindow::CadQToolBar::CadToolBar::SelectToolsPanel::SelectAllButton');
    TdbTest.clickOnWidget('MainWindow::CadQToolBar::CadToolBar::SelectToolsPanel::BackButton');
    TdbTest.clickOnWidget('MainWindow::CadQToolBar::CadToolBar::MainToolsPanel::CreateBlockButton');
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(10, 10);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.dlgStart();
    this.dlgAppendCode('var map = new Map()');
    this.dlgAppendCode("map.put('DialogOpenedByTdb/BlockName', 'block 1')");
    this.dlgAppendCode("WidgetFactory.restoreState(dialog, 'DialogOpenedByTdb', undefined, false, undefined, map)");
    this.dlgEnd();
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var w = objectFromPath('MainWindow::BlockListDock::BlockListWidget::BlockList::qt_scrollarea_viewport');
    this.sendMouseEvent(w, QEvent.MouseButtonPress, new QPoint(58, 48), Qt.LeftButton, 1, 0);
    var w = objectFromPath('MainWindow::BlockListDock::BlockListWidget::BlockList::qt_scrollarea_viewport');
    this.sendMouseEvent(w, QEvent.MouseButtonRelease, new QPoint(58, 48), Qt.LeftButton, 0, 0);
    TdbTest.clickOnWidget('MainWindow::BlockListDock::BlockListWidget::EditBlock');
    TdbTest.clickOnWidget('MainWindow::CadQToolBar::CadToolBar::MainToolsPanel::LineToolsPanelButton');
    TdbTest.clickOnWidget('MainWindow::CadQToolBar::CadToolBar::LineToolsPanel::Line2PButton');
    this.setZoom(37.75609756097561, new RVector(2.05846, 0.787145, 0, true));
    var p = new RVector(0.060401, 9.966085);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(37.75609756097561, new RVector(2.05846, 0.787145, 0, true));
    var p = new RVector(10.125, 9.966085);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(37.75609756097561, new RVector(2.05846, 0.787145, 0, true));
    var p = new RVector(9.992571, 0.245801);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(7.343992, 4.192183);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(7.052649, 5.066214);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    TdbTest.clickOnWidget('MainWindow::BlockListDock::BlockListWidget::CloseBlock');
    this.verifyDrawing('EditBlockTest00_000.dxf');
    this.tearDown();
    qDebug('finished EditBlockTest00.test00()');
};

