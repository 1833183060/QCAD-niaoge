// Auto generated by Testing Dashboard
// File        : scripts/Modify/BreakOut/Tests/BreakOutTest13.js
// Timestamp   : 2016-12-21 15:07:40
// Description : 

include('scripts/Pro/Developer/TestingDashboard/TdbTest.js');

function BreakOutTest13() {
    TdbTest.call(this, 'scripts/Modify/BreakOut/Tests/BreakOutTest13.js');
}

BreakOutTest13.prototype = new TdbTest();

BreakOutTest13.prototype.test00 = function() {
    qDebug('running BreakOutTest13.test00()...');
    this.setUp();
    this.importFile('scripts/Modify/BreakOut/Tests/data/closed_polyline.dxf');
    TdbTest.clickOnWidget('MainWindow::CadQToolBar::CadToolBar::MainToolsPanel::ModifyToolsPanelButton');
    TdbTest.clickOnWidget('MainWindow::CadQToolBar::CadToolBar::ModifyToolsPanel::BreakOutButton');
    this.setToolOption('BreakOut/RemoveSegment', 'true');
    this.updateToolOptions();
    this.setZoom(11.789473684210526, new RVector(-32.2321, -38.7545, 0, true));
    var p = new RVector(44.870536, 42.232143);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(48.517857, 58.348214);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(48.517857, 58.008929);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    this.verifyDrawing('BreakOutTest13_000.dxf');
    this.tearDown();
    qDebug('finished BreakOutTest13.test00()');
};

