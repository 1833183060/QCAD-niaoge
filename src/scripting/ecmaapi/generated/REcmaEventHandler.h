// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMAEVENTHANDLER_H
        #define RECMAEVENTHANDLER_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "REcmaShellEventHandler.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaEventHandler {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getQObject(QScriptContext *context,
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
        isUrl
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getUrlsFromMimeData
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        drawInfoLabel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        drawSnapLabel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        dragEnter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateTextLabel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateSnapInfo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        viewportChanged
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        horizontalScrolled
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        verticalScrolled
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static REventHandler* getSelf(const QString& fName, QScriptContext* context)
    ;static REcmaShellEventHandler* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  void fromScriptValue(const QScriptValue& value,
        REventHandler*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            REventHandler*>(o);
        }
    static  QScriptValue toScriptValue(QScriptEngine *engine,
        REventHandler*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    };
    #endif
    