/**
 * Copyright (c) 2011-2013 by Andrew Mustun. All rights reserved.
 * 
 * This file is part of the QCAD project.
 *
 * QCAD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QCAD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QCAD.
 */
// Auto generated by Testing Dashboard
// File        : scripts/Draw/Line/Line2P/Tests/LinesSnapDistance.js
// Timestamp   : 2011-02-11 14:53:11
// Description : Lines drawn with distance snap

include('scripts/Pro/Developer/TestingDashboard/TdbTest.js');

function LinesSnapDistance() {
    TdbTest.call(this, 'scripts/Draw/Line/Line2P/Tests/LinesSnapDistance.js');
}

LinesSnapDistance.prototype = new TdbTest();

LinesSnapDistance.prototype.test00 = function() {
    qDebug('running LinesSnapDistance.test00()...');
    this.setUp();
    this.clickOnWidget('MainWindow::MainToolsPanel::LineToolsPanelButton');
    this.clickOnWidget('MainWindow::LineToolsPanel::Line2PButton');
    this.zoomTo(-28.95, -21.449999999999996, 28.950000000000003, 21.450000000000006);
    var p = new RVector(-20, 10);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.zoomTo(-28.95, -21.449999999999996, 28.950000000000003, 21.450000000000006);
    var p = new RVector(-10, -20);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.sendMouseEventToGv(QEvent.MouseButtonPress, new QPoint(445, 238), Qt.RightButton, 2, 0);
    this.sendMouseEventToGv(QEvent.MouseButtonRelease, new QPoint(445, 238), Qt.RightButton, 0, 0);
    this.zoomTo(-28.95, -21.449999999999996, 28.950000000000003, 21.450000000000006);
    var p = new RVector(10, 20);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.zoomTo(-28.95, -21.449999999999996, 28.950000000000003, 21.450000000000006);
    var p = new RVector(20, -10);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);    
    this.sendMouseEventToGv(QEvent.MouseButtonPress, new QPoint(443, 318), Qt.RightButton, 2, 0);
    this.sendMouseEventToGv(QEvent.MouseButtonRelease, new QPoint(443, 318), Qt.RightButton, 0, 0);
    this.clickOnWidget('MainWindow::SnapToolsPanel::SnapDistanceButton');
    this.setToolOption('SnapDistance/Distance',  [ 5, 0 ] );
    this.updateToolOptions();
    this.zoomTo(-28.95, -21.449999999999996, 28.950000000000003, 21.450000000000006);
    var p = new RVector(-18.41886116991581, 5.256583509747431);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.zoomTo(-28.95, -21.449999999999996, 28.950000000000003, 21.450000000000006);
    var p = new RVector(18.41886116991581, -5.256583509747431);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setToolOption('SnapDistance/Distance',  [ 13, 0 ] );
    this.updateToolOptions();
    this.zoomTo(-28.95, -21.449999999999996, 28.950000000000003, 21.450000000000006);
    var p = new RVector(-14.11096095821889, -7.667117125343319);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.zoomTo(-28.95, -21.449999999999996, 28.950000000000003, 21.450000000000006);
    var p = new RVector(14.11096095821889, 7.667117125343319);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.sendMouseEventToGv(QEvent.MouseButtonPress, new QPoint(401, 215), Qt.RightButton, 2, 0);
    this.sendMouseEventToGv(QEvent.MouseButtonRelease, new QPoint(401, 215), Qt.RightButton, 0, 0);
    this.sendMouseEventToGv(QEvent.MouseButtonPress, new QPoint(294, 334), Qt.RightButton, 2, 0);
    this.sendMouseEventToGv(QEvent.MouseButtonRelease, new QPoint(294, 334), Qt.RightButton, 0, 0);
    this.verifyDrawing('LinesSnapDistance_000.dxf');
    this.tearDown();
    qDebug('finished LinesSnapDistance.test00()');
};

