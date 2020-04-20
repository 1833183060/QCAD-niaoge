// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMAPASTEOPERATION_H
        #define RECMAPASTEOPERATION_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RPasteOperation.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaPasteOperation {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRClipboardOperation(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getROperation(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRRequireHeap(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        setOffsets
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setRotations
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCenters
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setOffset
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getOffset
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setRotation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRotation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCenter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCenter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setFlipHorizontal
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFlipHorizontal
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setFlipVertical
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFlipVertical
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setToCurrentLayer
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getToCurrentLayer
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setOverwriteLayers
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getOverwriteLayers
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setOverwriteBlocks
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getOverwriteBlocks
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setBlockName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBlockName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLayerName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayerName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setAttribute
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setBlockProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        apply
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoundary
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RPasteOperation* getSelf(const QString& fName, QScriptContext* context)
    ;static RPasteOperation* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    