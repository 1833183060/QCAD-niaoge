// Auto generated by Testing Dashboard
// File        : scripts/Draw/Text/Tests/Text09.js
// Timestamp   : 2015-10-05 16:34:35
// Description : 

include('scripts/Pro/Developer/TestingDashboard/TdbTest.js');

function Text09() {
    TdbTest.call(this, 'scripts/Draw/Text/Tests/Text09.js');
}

Text09.prototype = new TdbTest();

Text09.prototype.test00 = function() {
    qDebug('running Text09.test00()...');
    this.setUp();
    this.importFile('scripts/Draw/Text/Tests/data/text09.dxf');
    this.selectAll();
    this.triggerCommand('explode');
    this.verifyDrawing('Text09_000.dxf');
    this.triggerCommand('explode');
    this.deselectAll();
    this.verifyDrawing('Text09_001.dxf');
    this.tearDown();
    qDebug('finished Text09.test00()');
};

