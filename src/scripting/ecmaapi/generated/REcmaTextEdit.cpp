// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaTextEdit.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaTextEdit::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RTextEdit*) 0)));
        protoCreated = true;
    }

    
        // primary base class QTextBrowser:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QTextBrowser*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class QTextBrowser
        REcmaHelper::registerFunction(&engine, proto, getQTextBrowser, "getQTextBrowser");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, sizeHint, "sizeHint");
            
            REcmaHelper::registerFunction(&engine, proto, minimumSizeHint, "minimumSizeHint");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RTextEdit*>(), *proto);

        
                        qScriptRegisterMetaType<
                        RTextEdit*>(
                        &engine, toScriptValue, fromScriptValue, *proto);
                    
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RTextEdit",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaTextEdit::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RTextEdit(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: QWidget * */
            
    ){
    // prepare arguments:
    
            // argument isQObject
            QWidget *
            a0 =
            qobject_cast<
            QWidget *>
            ( context->argument(
            0
            ).
            toQObject()
            );
        
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RTextEdit
                    * cppResult =
                    new
                    RTextEdit
                    (
                    a0
                    );
                
                    result = engine->newQObject(context->thisObject(), cppResult, QScriptEngine::QtOwnership);
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RTextEdit(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaTextEdit::getQTextBrowser(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QTextBrowser* cppResult =
                    qscriptvalue_cast<RTextEdit*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaTextEdit::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RTextEdit"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaTextEdit::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QTextBrowser");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaTextEdit::sizeHint
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaTextEdit::sizeHint", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaTextEdit::sizeHint";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTextEdit* self = 
                        getSelf("sizeHint", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QSize'
    QSize cppResult =
        
               self->sizeHint();
        // return type: QSize
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTextEdit.sizeHint().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaTextEdit::sizeHint", context, engine);
            return result;
        }
         QScriptValue
        REcmaTextEdit::minimumSizeHint
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaTextEdit::minimumSizeHint", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaTextEdit::minimumSizeHint";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTextEdit* self = 
                        getSelf("minimumSizeHint", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QSize'
    QSize cppResult =
        
               self->minimumSizeHint();
        // return type: QSize
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTextEdit.minimumSizeHint().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaTextEdit::minimumSizeHint", context, engine);
            return result;
        }
         QScriptValue REcmaTextEdit::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RTextEdit* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RTextEdit(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaTextEdit::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RTextEdit* self = getSelf("RTextEdit", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RTextEdit* REcmaTextEdit::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RTextEdit* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RTextEdit >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RTextEdit.%1(): "
                        "This object is not a RTextEdit").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RTextEdit* REcmaTextEdit::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RTextEdit* selfBase = getSelf(fName, context);
                RTextEdit* self = dynamic_cast<RTextEdit*>(selfBase);
                //return REcmaHelper::scriptValueTo<RTextEdit >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RTextEdit.%1(): "
                    "This object is not a RTextEdit").arg(fName),
                    context);
            }

            return self;
            


        }
         void fromScriptValue(const QScriptValue& value,
        RTextEdit*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RTextEdit*>(o);
        }
     QScriptValue toScriptValue(QScriptEngine *engine,
        RTextEdit*
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
    