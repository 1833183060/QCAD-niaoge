// Auto generated by Testing Dashboard
// File        : scripts/Draw/Text/Tests/Text18.js
// Timestamp   : 2015-10-05 16:34:35
// Description : 

include('scripts/Pro/Developer/TestingDashboard/TdbTest.js');

function Text18() {
    TdbTest.call(this, 'scripts/Draw/Text/Tests/Text18.js');
}

Text18.prototype = new TdbTest();

Text18.prototype.test00 = function() {
    qDebug('running Text18.test00()...');
    this.setUp();
    this.importFile('scripts/Draw/Text/Tests/data/text18.dxf');
    this.selectAll();
    this.triggerCommand('explode');
    this.verifyDrawing('Text18_000.dxf');
    this.triggerCommand('explode');
    this.deselectAll();
    this.verifyDrawing('Text18_001.dxf');
    this.tearDown();
    qDebug('finished Text18.test00()');
};

