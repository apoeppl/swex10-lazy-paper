/*************************************************/
/* START of Test */
#include <Test.h>

#include <x10/array/Array.h>
#include <x10/lang/String.h>
#include <x10/lang/Double.h>
#include <x10/array/RectRegion1D.h>
#include <x10/lang/Int.h>
#include <x10/array/Region.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/lang/Boolean.h>

//#line 2 "/Users/nax/Documents/Papers/swex10_paw/code/Test.x10": x10.ast.X10MethodDecl_c
void Test::main(x10::array::Array<x10::lang::String*>* id__0) {
    
    //#line 3 "/Users/nax/Documents/Papers/swex10_paw/code/Test.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10_double>* a =  ((new (memset(x10aux::alloc<x10::array::Array<x10_double> >(), 0, sizeof(x10::array::Array<x10_double>))) x10::array::Array<x10_double>()))
    ;
    
    //#line 337 "/Users/nax/Documents/Development/TUMX10/x10-2.3.1-src/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10::array::RectRegion1D* myReg6176 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
    ;
    
    //#line 337 "/Users/nax/Documents/Development/TUMX10/x10-2.3.1-src/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
    (myReg6176)->::x10::array::RectRegion1D::_constructor(((x10_int) ((((x10_int)10)) - (((x10_int)1)))));
    
    //#line 338 "/Users/nax/Documents/Development/TUMX10/x10-2.3.1-src/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    a->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg6176);
    
    //#line 338 "/Users/nax/Documents/Development/TUMX10/x10-2.3.1-src/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    a->FMGL(rank) = ((x10_int)1);
    
    //#line 338 "/Users/nax/Documents/Development/TUMX10/x10-2.3.1-src/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    a->FMGL(rect) = true;
    
    //#line 338 "/Users/nax/Documents/Development/TUMX10/x10-2.3.1-src/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    a->FMGL(zeroBased) = true;
    
    //#line 338 "/Users/nax/Documents/Development/TUMX10/x10-2.3.1-src/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    a->FMGL(rail) = true;
    
    //#line 338 "/Users/nax/Documents/Development/TUMX10/x10-2.3.1-src/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    a->FMGL(size) = ((x10_int)10);
    
    //#line 340 "/Users/nax/Documents/Development/TUMX10/x10-2.3.1-src/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    a->FMGL(layout_min0) = a->FMGL(layout_stride1) = a->FMGL(layout_min1) =
      ((x10_int)0);
    
    //#line 341 "/Users/nax/Documents/Development/TUMX10/x10-2.3.1-src/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    a->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
    
    //#line 342 "/Users/nax/Documents/Development/TUMX10/x10-2.3.1-src/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10::util::IndexedMemoryChunk<x10_double > r6177 = x10::util::IndexedMemoryChunk<void>::allocate<x10_double >(((x10_int)10), 8, false, false);
    
    //#line 343 "/Users/nax/Documents/Development/TUMX10/x10-2.3.1-src/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int i5088max6173 = ((x10_int) ((((x10_int)10)) - (((x10_int)1))));
    
    //#line 343 "/Users/nax/Documents/Development/TUMX10/x10-2.3.1-src/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
    {
        x10_int i6174;
        for (
             //#line 343 "/Users/nax/Documents/Development/TUMX10/x10-2.3.1-src/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
             i6174 = ((x10_int)0); ((i6174) <= (i5088max6173)); 
                                                                //#line 343 "/Users/nax/Documents/Development/TUMX10/x10-2.3.1-src/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                i6174 = ((x10_int) ((i6174) + (((x10_int)1)))))
        {
            
            //#line 343 "/Users/nax/Documents/Development/TUMX10/x10-2.3.1-src/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i6175 = i6174;
            
            //#line 344 "/Users/nax/Documents/Development/TUMX10/x10-2.3.1-src/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
            (r6177)->__set(i6175, 42.0);
        }
    }
    
    //#line 346 "/Users/nax/Documents/Development/TUMX10/x10-2.3.1-src/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    a->FMGL(raw) = r6177;
    
    //#line 4 "/Users/nax/Documents/Papers/swex10_paw/code/Test.x10": x10.ast.X10LocalDecl_c
    x10_double b = (__extension__ ({
        
        //#line 453 "/Users/nax/Documents/Development/TUMX10/x10-2.3.1-src/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 452 "/Users/nax/Documents/Development/TUMX10/x10-2.3.1-src/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_double ret6171;
        
        //#line 456 "/Users/nax/Documents/Development/TUMX10/x10-2.3.1-src/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
        ret6171 = (a->FMGL(raw))->__apply(((x10_int)3));
        ret6171;
    }))
    ;
    
}

//#line 1 "/Users/nax/Documents/Papers/swex10_paw/code/Test.x10": x10.ast.X10MethodDecl_c
Test* Test::Test____this__Test() {
    
    //#line 1 "/Users/nax/Documents/Papers/swex10_paw/code/Test.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 1 "/Users/nax/Documents/Papers/swex10_paw/code/Test.x10": x10.ast.X10ConstructorDecl_c
void Test::_constructor() {
    
    //#line 1 "/Users/nax/Documents/Papers/swex10_paw/code/Test.x10": x10.ast.AssignPropertyCall_c
    
}
Test* Test::_make() {
    Test* this_ = new (memset(x10aux::alloc<Test>(), 0, sizeof(Test))) Test();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t Test::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Test::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void Test::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* Test::_deserializer(x10aux::deserialization_buffer& buf) {
    Test* this_ = new (memset(x10aux::alloc<Test>(), 0, sizeof(Test))) Test();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void Test::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType Test::rtt;
void Test::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("Test",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of Test */
/*************************************************/
