// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaPluginLoader.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaPluginLoader::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RPluginLoader*) 0)));
        protoCreated = true;
    }

    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
        engine.setDefaultPrototype(
            qMetaTypeId<RPluginLoader*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    
            REcmaHelper::registerFunction(&engine, &ctor, getPluginSuffix, "getPluginSuffix");
            
            REcmaHelper::registerFunction(&engine, &ctor, getPluginFiles, "getPluginFiles");
            
            REcmaHelper::registerFunction(&engine, &ctor, loadPlugins, "loadPlugins");
            
            REcmaHelper::registerFunction(&engine, &ctor, unloadPlugins, "unloadPlugins");
            
            REcmaHelper::registerFunction(&engine, &ctor, unloadPlugin, "unloadPlugin");
            
            REcmaHelper::registerFunction(&engine, &ctor, postInitPlugins, "postInitPlugins");
            
            REcmaHelper::registerFunction(&engine, &ctor, initTranslations, "initTranslations");
            
            REcmaHelper::registerFunction(&engine, &ctor, countPlugins, "countPlugins");
            
            REcmaHelper::registerFunction(&engine, &ctor, getPluginInfo, "getPluginInfo");
            
            REcmaHelper::registerFunction(&engine, &ctor, getPluginsPath, "getPluginsPath");
            
            REcmaHelper::registerFunction(&engine, &ctor, hasPlugin, "hasPlugin");
            
            REcmaHelper::registerFunction(&engine, &ctor, checkPluginLicenses, "checkPluginLicenses");
            
            REcmaHelper::registerFunction(&engine, &ctor, checkPluginLicense, "checkPluginLicense");
            

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RPluginLoader",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaPluginLoader::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RPluginLoader(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
    
            // constructor without variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RPluginLoader
                    * cppResult =
                    new
                    RPluginLoader
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RPluginLoader(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaPluginLoader::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RPluginLoader"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaPluginLoader::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaPluginLoader::getPluginSuffix
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPluginLoader::getPluginSuffix", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPluginLoader::getPluginSuffix";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QString'
    QString cppResult =
        RPluginLoader::
       getPluginSuffix();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPluginLoader.getPluginSuffix().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPluginLoader::getPluginSuffix", context, engine);
            return result;
        }
         QScriptValue
        REcmaPluginLoader::getPluginFiles
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPluginLoader::getPluginFiles", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPluginLoader::getPluginFiles";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QStringList'
    QStringList cppResult =
        RPluginLoader::
       getPluginFiles();
        // return type: QStringList
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPluginLoader.getPluginFiles().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPluginLoader::getPluginFiles", context, engine);
            return result;
        }
         QScriptValue
        REcmaPluginLoader::loadPlugins
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPluginLoader::loadPlugins", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPluginLoader::loadPlugins";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    RPluginLoader::
       loadPlugins(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPluginLoader.loadPlugins().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPluginLoader::loadPlugins", context, engine);
            return result;
        }
         QScriptValue
        REcmaPluginLoader::unloadPlugins
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPluginLoader::unloadPlugins", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPluginLoader::unloadPlugins";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    RPluginLoader::
       unloadPlugins();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPluginLoader.unloadPlugins().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPluginLoader::unloadPlugins", context, engine);
            return result;
        }
         QScriptValue
        REcmaPluginLoader::unloadPlugin
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPluginLoader::unloadPlugin", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPluginLoader::unloadPlugin";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    RPluginLoader::
       unloadPlugin(a0);
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    RPluginLoader::
       unloadPlugin(a0
        ,
    a1);
    } else


        
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isQObject()
        ) /* type: QObject * */
    
    ){
    // prepare arguments:
    
            // argument isQObject
            QObject *
            a0 =
            qobject_cast<
            QObject *>
            ( context->argument(
            0
            ).
            toQObject()
            );
        
    // end of arguments

    // call C++ function:
    // return type 'void'
    RPluginLoader::
       unloadPlugin(a0);
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isQObject()
        ) /* type: QObject * */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
            // argument isQObject
            QObject *
            a0 =
            qobject_cast<
            QObject *>
            ( context->argument(
            0
            ).
            toQObject()
            );
        
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    RPluginLoader::
       unloadPlugin(a0
        ,
    a1);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPluginLoader.unloadPlugin().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPluginLoader::unloadPlugin", context, engine);
            return result;
        }
         QScriptValue
        REcmaPluginLoader::postInitPlugins
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPluginLoader::postInitPlugins", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPluginLoader::postInitPlugins";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: RPluginInterface::InitStatus */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    RPluginInterface::InitStatus
                    a0 =
                    (RPluginInterface::InitStatus)
                    (int)
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    RPluginLoader::
       postInitPlugins(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPluginLoader.postInitPlugins().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPluginLoader::postInitPlugins", context, engine);
            return result;
        }
         QScriptValue
        REcmaPluginLoader::initTranslations
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPluginLoader::initTranslations", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPluginLoader::initTranslations";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    RPluginLoader::
       initTranslations();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPluginLoader.initTranslations().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPluginLoader::initTranslations", context, engine);
            return result;
        }
         QScriptValue
        REcmaPluginLoader::countPlugins
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPluginLoader::countPlugins", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPluginLoader::countPlugins";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'int'
    int cppResult =
        RPluginLoader::
       countPlugins();
        // return type: int
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPluginLoader.countPlugins().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPluginLoader::countPlugins", context, engine);
            return result;
        }
         QScriptValue
        REcmaPluginLoader::getPluginInfo
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPluginLoader::getPluginInfo", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPluginLoader::getPluginInfo";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: int */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    int
                    a0 =
                    (int)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'RPluginInfo'
    RPluginInfo cppResult =
        RPluginLoader::
       getPluginInfo(a0);
        // return type: RPluginInfo
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'RPluginInfo'
    RPluginInfo cppResult =
        RPluginLoader::
       getPluginInfo(a0);
        // return type: RPluginInfo
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPluginLoader.getPluginInfo().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPluginLoader::getPluginInfo", context, engine);
            return result;
        }
         QScriptValue
        REcmaPluginLoader::getPluginsPath
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPluginLoader::getPluginsPath", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPluginLoader::getPluginsPath";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QString'
    QString cppResult =
        RPluginLoader::
       getPluginsPath();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPluginLoader.getPluginsPath().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPluginLoader::getPluginsPath", context, engine);
            return result;
        }
         QScriptValue
        REcmaPluginLoader::hasPlugin
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPluginLoader::hasPlugin", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPluginLoader::hasPlugin";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        RPluginLoader::
       hasPlugin(a0);
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPluginLoader.hasPlugin().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPluginLoader::hasPlugin", context, engine);
            return result;
        }
         QScriptValue
        REcmaPluginLoader::checkPluginLicenses
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPluginLoader::checkPluginLicenses", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPluginLoader::checkPluginLicenses";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        RPluginLoader::
       checkPluginLicenses();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPluginLoader.checkPluginLicenses().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPluginLoader::checkPluginLicenses", context, engine);
            return result;
        }
         QScriptValue
        REcmaPluginLoader::checkPluginLicense
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPluginLoader::checkPluginLicense", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPluginLoader::checkPluginLicense";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isQObject()
        ) /* type: QObject * */
    
    ){
    // prepare arguments:
    
            // argument isQObject
            QObject *
            a0 =
            qobject_cast<
            QObject *>
            ( context->argument(
            0
            ).
            toQObject()
            );
        
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        RPluginLoader::
       checkPluginLicense(a0);
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPluginLoader.checkPluginLicense().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPluginLoader::checkPluginLicense", context, engine);
            return result;
        }
         QScriptValue REcmaPluginLoader::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RPluginLoader* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RPluginLoader(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaPluginLoader::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RPluginLoader* self = getSelf("RPluginLoader", context);
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
    RPluginLoader* REcmaPluginLoader::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RPluginLoader* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RPluginLoader >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RPluginLoader.%1(): "
                        "This object is not a RPluginLoader").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RPluginLoader* REcmaPluginLoader::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RPluginLoader* selfBase = getSelf(fName, context);
                RPluginLoader* self = dynamic_cast<RPluginLoader*>(selfBase);
                //return REcmaHelper::scriptValueTo<RPluginLoader >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RPluginLoader.%1(): "
                    "This object is not a RPluginLoader").arg(fName),
                    context);
            }

            return self;
            


        }
        