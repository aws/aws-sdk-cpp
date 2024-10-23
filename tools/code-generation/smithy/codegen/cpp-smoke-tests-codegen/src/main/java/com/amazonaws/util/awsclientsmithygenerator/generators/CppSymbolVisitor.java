/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

 package com.amazonaws.util.awsclientsmithygenerator.generators;

 import software.amazon.smithy.codegen.core.*;
 import software.amazon.smithy.model.Model;
 import software.amazon.smithy.model.shapes.*;
 import software.amazon.smithy.utils.StringUtils;
 
 import java.util.logging.Logger;
 
 import static java.lang.String.format;
 
 /**
  * For a list of simple types see <a href = https://smithy.io/2.0/spec/simple-types.html#simple-types>Smithy Simple Types</a>
  * For a list of aggregate types see <a href = https://smithy.io/2.0/spec/aggregate-types.html#>Aggregate Types</a>
  */
 
 public class CppSymbolVisitor implements SymbolProvider, ShapeVisitor<Symbol> {
 
     private static final Logger LOGGER = Logger.getLogger(CppSymbolVisitor.class.getName());
     private final Model model;

     public CppSymbolVisitor(Model model) {
         this.model = model;
     }
 
     /**
      * @param shape The smithy shape
      * @return Returns the C++ Symbol
      */
     @Override
     public Symbol toSymbol(Shape shape) {
         Symbol symbol = shape.accept(this);
         LOGGER.info(() -> format("Creating symbol from %s: %s", shape, symbol));
         return symbol;
     }
 
     @Override
     public String toMemberName(MemberShape shape) {
         return StringUtils.capitalize(SymbolProvider.super.toMemberName(shape));
     }
 
     @Override
     public Symbol blobShape(BlobShape blobShape) {
         return createSymbolBuilder(blobShape, "Aws::Utils::ByteBuffer").build();
     }
 
     @Override
     public Symbol booleanShape(BooleanShape booleanShape) {
         return createSymbolBuilder(booleanShape, "bool").build();
     }
 
     @Override
     public Symbol listShape(ListShape listShape) {
         var targetShape = model.expectShape(listShape.getMember().getTarget());
         var targetSymbol = targetShape.accept(this);
         return createSymbolBuilder(listShape, "Aws::Vector<" + targetSymbol + ">")
                 .addReference(targetSymbol)
                 .build();
     }
 
     /**
      * Per <a href = https://smithy.io/2.0/spec/aggregate-types.html#map>map type</a>, the key MUST target a string
      */
     @Override
     public Symbol mapShape(MapShape mapShape) {
         var keyShape = model.expectShape(mapShape.getKey().getTarget());
         var keyType = keyShape.accept(this);
         var valueShape = model.expectShape(mapShape.getValue().getTarget());
         var valueType = valueShape.accept(this);
         return createSymbolBuilder(mapShape, "Aws::Map<"+keyType +"," + valueType + ">")
                 .addReference(valueType)
                 .build();
     }
 
     @Override
     public Symbol byteShape(ByteShape byteShape) {
         return createSymbolBuilder(byteShape, "char").build();
     }
 
     @Override
     public Symbol shortShape(ShortShape shortShape) {
         return createSymbolBuilder(shortShape, "short").build();
     }
 
     @Override
     public Symbol integerShape(IntegerShape integerShape) {
         return createSymbolBuilder(integerShape, "int").build();
     }
 
     @Override
     public Symbol intEnumShape(IntEnumShape shape) {
         return ShapeVisitor.super.intEnumShape(shape);
     }
 
     @Override
     public Symbol longShape(LongShape longShape) {
         return createSymbolBuilder(longShape, "long").build();
     }
 
     @Override
     public Symbol floatShape(FloatShape floatShape) {
         return createSymbolBuilder(floatShape, "float").build();
     }
 
     @Override
     public Symbol documentShape(DocumentShape documentShape) {
        return createSymbolBuilder(documentShape, "double").build();
    }
 
     @Override
     public Symbol doubleShape(DoubleShape doubleShape) {
         return createSymbolBuilder(doubleShape, "double").build();
     }
 
     @Override
     public Symbol bigIntegerShape(BigIntegerShape bigIntegerShape) {
        return createSymbolBuilder(bigIntegerShape, "unsigned int").build();
    }
 
     @Override
     public Symbol bigDecimalShape(BigDecimalShape bigDecimalShape) {
        return createSymbolBuilder(bigDecimalShape, "long long").build();
     }
 
     @Override
     public Symbol operationShape(OperationShape operationShape) {
         throw new CodegenException("cpp is not a smithy-based code generator and has only implemented smoke test generation. Generating the operation shape is not yet supported.");
     }
 
     @Override
     public Symbol resourceShape(ResourceShape resourceShape) {
        throw new CodegenException("cpp is not a smithy-based code generator and has only implemented smoke test generation. Generating the operation shape is not yet supported.");
    }
 
     @Override
     public Symbol serviceShape(ServiceShape serviceShape) {
        throw new CodegenException("cpp is not a smithy-based code generator and has only implemented smoke test generation. Generating the operation shape is not yet supported.");
    }
 
     @Override
     public Symbol stringShape(StringShape stringShape) {
         return createSymbolBuilder(stringShape, "string").build();
     }
 
     @Override
     public Symbol enumShape(EnumShape shape) {
         return ShapeVisitor.super.enumShape(shape);
     }
 
     @Override
     public Symbol structureShape(StructureShape structureShape) {

         String modeledName = getModeledShapeName(structureShape);
         return createSymbolBuilder(structureShape, modeledName).build();
     }
 
     @Override
     public Symbol unionShape(UnionShape unionShape) {
         return createSymbolBuilder(unionShape, getModeledShapeName(unionShape)).build();
     }
 
     //TODO: Once a full smithy code generator is implemented, this should be updated
     @Override
     public Symbol memberShape(MemberShape memberShape) {
         Shape targetShape = model.getShape(memberShape.getTarget())
                 .orElseThrow(() -> new CodegenException("Shape not found: " + memberShape.getTarget()));
         return toSymbol(targetShape);
     }
 
     @Override
     public Symbol timestampShape(TimestampShape timestampShape) {
         return createSymbolBuilder(timestampShape, "Aws::Utils::DateTime").build();
     }
 
     private String getModeledShapeName(Shape shape) {
         return StringUtils.capitalize(shape.getId().getName());
     }
 
     private Symbol.Builder createSymbolBuilder(Shape shape, String typeName) {
         return Symbol.builder().putProperty("shape", shape).name(typeName);
     }
 }