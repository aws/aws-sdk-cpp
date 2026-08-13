/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import org.junit.jupiter.api.Test;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.BlobShape;
import software.amazon.smithy.model.shapes.BooleanShape;
import software.amazon.smithy.model.shapes.DocumentShape;
import software.amazon.smithy.model.shapes.DoubleShape;
import software.amazon.smithy.model.shapes.FloatShape;
import software.amazon.smithy.model.shapes.IntegerShape;
import software.amazon.smithy.model.shapes.ListShape;
import software.amazon.smithy.model.shapes.LongShape;
import software.amazon.smithy.model.shapes.MapShape;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.shapes.TimestampShape;
import software.amazon.smithy.model.shapes.UnionShape;

import java.util.List;

import static org.junit.jupiter.api.Assertions.*;

class CppTypeMapperTest {

    @Test
    void stringShape_mapsToAwsString() {
        StringShape shape = StringShape.builder().id("com.example#Foo").build();
        Model model = Model.builder().addShape(shape).build();
        assertEquals("Aws::String", CppTypeMapper.getCppType(shape, model));
    }

    @Test
    void integerShape_mapsToInt() {
        IntegerShape shape = IntegerShape.builder().id("com.example#Foo").build();
        Model model = Model.builder().addShape(shape).build();
        assertEquals("int", CppTypeMapper.getCppType(shape, model));
    }

    @Test
    void integerShape_wideIntegers_mapsToInt64() {
        // C2J's CBOR type mapping widens integer -> int64_t (CORAL_TYPE_TO_CBOR_CPP_TYPE_MAPPING),
        // used in CBOR sub-object and result headers ($protocol == smithy-rpc-v2-cbor).
        IntegerShape shape = IntegerShape.builder().id("com.example#Foo").build();
        Model model = Model.builder().addShape(shape).build();
        assertEquals("int64_t", CppTypeMapper.getCppType(shape, model, true));
    }

    @Test
    void longShape_wideIntegers_staysLongLong() {
        // Only integer widens under CBOR; long is long long in every mapping.
        LongShape shape = LongShape.builder().id("com.example#Foo").build();
        Model model = Model.builder().addShape(shape).build();
        assertEquals("long long", CppTypeMapper.getCppType(shape, model, true));
    }

    @Test
    void longShape_mapsToLongLong() {
        LongShape shape = LongShape.builder().id("com.example#Foo").build();
        Model model = Model.builder().addShape(shape).build();
        assertEquals("long long", CppTypeMapper.getCppType(shape, model));
    }

    @Test
    void booleanShape_mapsToBool() {
        BooleanShape shape = BooleanShape.builder().id("com.example#Foo").build();
        Model model = Model.builder().addShape(shape).build();
        assertEquals("bool", CppTypeMapper.getCppType(shape, model));
    }

    @Test
    void doubleShape_mapsToDouble() {
        DoubleShape shape = DoubleShape.builder().id("com.example#Foo").build();
        Model model = Model.builder().addShape(shape).build();
        assertEquals("double", CppTypeMapper.getCppType(shape, model));
    }

    @Test
    void floatShape_mapsToDouble() {
        FloatShape shape = FloatShape.builder().id("com.example#Foo").build();
        Model model = Model.builder().addShape(shape).build();
        assertEquals("double", CppTypeMapper.getCppType(shape, model));
    }

    @Test
    void blobShape_mapsToAwsByteBuffer() {
        BlobShape shape = BlobShape.builder().id("com.example#Foo").build();
        Model model = Model.builder().addShape(shape).build();
        assertEquals("Aws::Utils::ByteBuffer", CppTypeMapper.getCppType(shape, model));
    }

    @Test
    void sensitiveBlobShape_mapsToCryptoBuffer() {
        // C2J maps a @sensitive blob to CryptoBuffer (the "sensitive_blob" type-mapping key in
        // CppViewHelper), while a plain blob stays ByteBuffer.
        BlobShape shape = BlobShape.builder().id("com.example#Foo")
            .addTrait(new software.amazon.smithy.model.traits.SensitiveTrait())
            .build();
        Model model = Model.builder().addShape(shape).build();
        assertEquals("Aws::Utils::CryptoBuffer", CppTypeMapper.getCppType(shape, model));
    }

    @Test
    void timestampShape_mapsToAwsDateTime() {
        TimestampShape shape = TimestampShape.builder().id("com.example#Foo").build();
        Model model = Model.builder().addShape(shape).build();
        assertEquals("Aws::Utils::DateTime", CppTypeMapper.getCppType(shape, model));
    }

    @Test
    void listOfStrings_mapsToAwsVector() {
        StringShape str = StringShape.builder().id("com.example#Str").build();
        ListShape list = ListShape.builder()
            .id("com.example#StringList")
            .member(MemberShape.builder().id("com.example#StringList$member").target("com.example#Str").build())
            .build();
        Model model = Model.builder().addShapes(str, list).build();
        assertEquals("Aws::Vector<Aws::String>", CppTypeMapper.getCppType(list, model));
    }

    @Test
    void mapOfStringToString_mapsToAwsMap() {
        StringShape str = StringShape.builder().id("com.example#Str").build();
        MapShape map = MapShape.builder()
            .id("com.example#StringMap")
            .key(MemberShape.builder().id("com.example#StringMap$key").target("com.example#Str").build())
            .value(MemberShape.builder().id("com.example#StringMap$value").target("com.example#Str").build())
            .build();
        Model model = Model.builder().addShapes(str, map).build();
        assertEquals("Aws::Map<Aws::String, Aws::String>", CppTypeMapper.getCppType(map, model));
    }

    @Test
    void sparseListOfStrings_wrapsElementInOptional() {
        // C2J wraps a @sparse list's element type in Aws::Crt::Optional (CppViewHelper), so the
        // member type becomes Aws::Vector<Aws::Crt::Optional<Aws::String>>.
        StringShape str = StringShape.builder().id("com.example#Str").build();
        ListShape list = ListShape.builder()
            .id("com.example#SparseStringList")
            .member(MemberShape.builder().id("com.example#SparseStringList$member").target("com.example#Str").build())
            .addTrait(new software.amazon.smithy.model.traits.SparseTrait())
            .build();
        Model model = Model.builder().addShapes(str, list).build();
        assertEquals("Aws::Vector<Aws::Crt::Optional<Aws::String>>", CppTypeMapper.getCppType(list, model));
    }

    @Test
    void sparseMapOfStringToString_wrapsValueInOptional() {
        // C2J wraps a @sparse map's value type in Aws::Crt::Optional; the key is untouched.
        StringShape str = StringShape.builder().id("com.example#Str").build();
        MapShape map = MapShape.builder()
            .id("com.example#SparseStringMap")
            .key(MemberShape.builder().id("com.example#SparseStringMap$key").target("com.example#Str").build())
            .value(MemberShape.builder().id("com.example#SparseStringMap$value").target("com.example#Str").build())
            .addTrait(new software.amazon.smithy.model.traits.SparseTrait())
            .build();
        Model model = Model.builder().addShapes(str, map).build();
        assertEquals("Aws::Map<Aws::String, Aws::Crt::Optional<Aws::String>>", CppTypeMapper.getCppType(map, model));
    }

    @Test
    void getIncludesForShape_withSparseListMember_includesOptionalHeader() {
        // A @sparse list/map member wraps its element/value in Aws::Crt::Optional, which lives in
        // <aws/crt/Optional.h>. Matches C2J's generated SparseNullsOperationRequest.h.
        StringShape str = StringShape.builder().id("com.example#Str").build();
        ListShape list = ListShape.builder()
            .id("com.example#SparseStringList")
            .member(MemberShape.builder().id("com.example#SparseStringList$member").target("com.example#Str").build())
            .addTrait(new software.amazon.smithy.model.traits.SparseTrait())
            .build();
        StructureShape struct = StructureShape.builder()
            .id("com.example#MyRequest")
            .addMember("items", list.getId())
            .build();
        Model model = Model.builder().addShapes(str, list, struct).build();

        List<String> includes = CppTypeMapper.getIncludesForShape(struct, model, "myservice");
        assertTrue(includes.contains("<aws/crt/Optional.h>"),
            "Shape with sparse list member should include Optional.h: " + includes);
    }

    @Test
    void getIncludesForShape_withSparseMapMember_includesOptionalHeader() {
        StringShape str = StringShape.builder().id("com.example#Str").build();
        MapShape map = MapShape.builder()
            .id("com.example#SparseStringMap")
            .key(MemberShape.builder().id("com.example#SparseStringMap$key").target("com.example#Str").build())
            .value(MemberShape.builder().id("com.example#SparseStringMap$value").target("com.example#Str").build())
            .addTrait(new software.amazon.smithy.model.traits.SparseTrait())
            .build();
        StructureShape struct = StructureShape.builder()
            .id("com.example#MyRequest")
            .addMember("data", map.getId())
            .build();
        Model model = Model.builder().addShapes(str, map, struct).build();

        List<String> includes = CppTypeMapper.getIncludesForShape(struct, model, "myservice");
        assertTrue(includes.contains("<aws/crt/Optional.h>"),
            "Shape with sparse map member should include Optional.h: " + includes);
    }

    @Test
    void getIncludesForShape_withoutSparse_noOptionalHeader() {
        StringShape str = StringShape.builder().id("com.example#Str").build();
        ListShape list = ListShape.builder()
            .id("com.example#StringList")
            .member(MemberShape.builder().id("com.example#StringList$member").target("com.example#Str").build())
            .build();
        StructureShape struct = StructureShape.builder()
            .id("com.example#MyRequest")
            .addMember("items", list.getId())
            .build();
        Model model = Model.builder().addShapes(str, list, struct).build();

        List<String> includes = CppTypeMapper.getIncludesForShape(struct, model, "myservice");
        assertFalse(includes.contains("<aws/crt/Optional.h>"),
            "Non-sparse list member should not include Optional.h: " + includes);
    }

    @Test
    void structureShape_mapsToShapeName() {
        StructureShape struct = StructureShape.builder().id("com.example#MyStruct").build();
        Model model = Model.builder().addShape(struct).build();
        assertEquals("MyStruct", CppTypeMapper.getCppType(struct, model));
    }

    @Test
    void unionShape_mapsToShapeName() {
        UnionShape union = UnionShape.builder()
            .id("com.example#MyUnion")
            .addMember("variant", StringShape.builder().id("com.example#Str").build().getId())
            .build();
        StringShape str = StringShape.builder().id("com.example#Str").build();
        Model model = Model.builder().addShapes(str, union).build();
        assertEquals("MyUnion", CppTypeMapper.getCppType(union, model));
    }

    @Test
    void enumShape_lowerCamelName_mapsToUpperCamelType() {
        // IAM-style lowerCamel enum shape names must map to UpperCamel C++ types, matching C2J.
        software.amazon.smithy.model.shapes.EnumShape en = software.amazon.smithy.model.shapes.EnumShape.builder()
            .id("com.example#statusType").addMember("Active", "Active").build();
        Model model = Model.builder().addShape(en).build();
        assertEquals("StatusType", CppTypeMapper.getCppType(en, model));
        assertEquals(java.util.Optional.of("StatusType::NOT_SET"), CppTypeMapper.getDefaultValue(en));
        assertEquals(java.util.Optional.of("<aws/iam/model/StatusType.h>"),
            CppTypeMapper.getIncludeForMemberType(en, model, "iam"));
    }

    @Test
    void legacyEnumStringShape_mapsToEnumType() {
        // Smithy 1.0 models a closed set as a `string` shape carrying the @enum trait (not a 2.0
        // EnumShape). C2J treats these as enums, so a member targeting one must resolve to the
        // enum C++ type, NOT Aws::String. Mirrors ShapeClassifier / EnumResolver detection.
        software.amazon.smithy.model.traits.EnumTrait enumTrait =
            software.amazon.smithy.model.traits.EnumTrait.builder()
                .addEnum(software.amazon.smithy.model.traits.EnumDefinition.builder()
                    .value("Case.Created").name("Case_Created").build())
                .build();
        StringShape shape = StringShape.builder().id("com.example#AuditEventType")
            .addTrait(enumTrait).build();
        Model model = Model.builder().addShape(shape).build();
        assertEquals("AuditEventType", CppTypeMapper.getCppType(shape, model));
        assertEquals(java.util.Optional.of("AuditEventType::NOT_SET"), CppTypeMapper.getDefaultValue(shape));
        assertEquals(java.util.Optional.of("<aws/connectcases/model/AuditEventType.h>"),
            CppTypeMapper.getIncludeForMemberType(shape, model, "connectcases"));
    }

    @Test
    void structureShape_lowerCamelName_mapsToUpperCamelType() {
        StructureShape struct = StructureShape.builder().id("com.example#nestedThing").build();
        Model model = Model.builder().addShape(struct).build();
        assertEquals("NestedThing", CppTypeMapper.getCppType(struct, model));
        assertEquals(java.util.Optional.of("<aws/iam/model/NestedThing.h>"),
            CppTypeMapper.getIncludeForMemberType(struct, model, "iam"));
    }

    @Test
    void documentShape_mapsToAwsDocument() {
        DocumentShape shape = DocumentShape.builder().id("com.example#Foo").build();
        Model model = Model.builder().addShape(shape).build();
        assertEquals("Aws::Utils::Document", CppTypeMapper.getCppType(shape, model));
    }

    @Test
    void nestedList_mapsToNestedVector() {
        StringShape str = StringShape.builder().id("com.example#Str").build();
        ListShape innerList = ListShape.builder()
            .id("com.example#InnerList")
            .member(MemberShape.builder().id("com.example#InnerList$member").target("com.example#Str").build())
            .build();
        ListShape outerList = ListShape.builder()
            .id("com.example#OuterList")
            .member(MemberShape.builder().id("com.example#OuterList$member").target("com.example#InnerList").build())
            .build();
        Model model = Model.builder().addShapes(str, innerList, outerList).build();
        assertEquals("Aws::Vector<Aws::Vector<Aws::String>>", CppTypeMapper.getCppType(outerList, model));
    }

    @Test
    void mapOfStringToStruct_mapsToAwsMap() {
        StringShape str = StringShape.builder().id("com.example#Str").build();
        StructureShape struct = StructureShape.builder().id("com.example#MyData").build();
        MapShape map = MapShape.builder()
            .id("com.example#DataMap")
            .key(MemberShape.builder().id("com.example#DataMap$key").target("com.example#Str").build())
            .value(MemberShape.builder().id("com.example#DataMap$value").target("com.example#MyData").build())
            .build();
        Model model = Model.builder().addShapes(str, struct, map).build();
        assertEquals("Aws::Map<Aws::String, MyData>", CppTypeMapper.getCppType(map, model));
    }

    // --- getDefaultValue tests ---

    @Test
    void defaultValue_int_isZero() {
        IntegerShape shape = IntegerShape.builder().id("com.example#Foo").build();
        assertEquals(java.util.Optional.of("0"), CppTypeMapper.getDefaultValue(shape));
    }

    @Test
    void defaultValue_long_isZero() {
        LongShape shape = LongShape.builder().id("com.example#Foo").build();
        assertEquals(java.util.Optional.of("0"), CppTypeMapper.getDefaultValue(shape));
    }

    @Test
    void defaultValue_bool_isFalse() {
        BooleanShape shape = BooleanShape.builder().id("com.example#Foo").build();
        assertEquals(java.util.Optional.of("false"), CppTypeMapper.getDefaultValue(shape));
    }

    @Test
    void defaultValue_double_isZero() {
        DoubleShape shape = DoubleShape.builder().id("com.example#Foo").build();
        assertEquals(java.util.Optional.of("0.0"), CppTypeMapper.getDefaultValue(shape));
    }

    @Test
    void defaultValue_string_isEmpty() {
        StringShape shape = StringShape.builder().id("com.example#Foo").build();
        assertTrue(CppTypeMapper.getDefaultValue(shape).isEmpty());
    }

    // --- needsHasBeenSetFlag tests ---

    @Test
    void needsHasBeenSetFlag_primitives() {
        assertTrue(CppTypeMapper.needsHasBeenSetFlag(IntegerShape.builder().id("com.example#I").build()));
        assertTrue(CppTypeMapper.needsHasBeenSetFlag(LongShape.builder().id("com.example#L").build()));
        assertTrue(CppTypeMapper.needsHasBeenSetFlag(BooleanShape.builder().id("com.example#B").build()));
        assertTrue(CppTypeMapper.needsHasBeenSetFlag(DoubleShape.builder().id("com.example#D").build()));
        assertTrue(CppTypeMapper.needsHasBeenSetFlag(FloatShape.builder().id("com.example#F").build()));
    }

    @Test
    void needsHasBeenSetFlag_nonPrimitives() {
        assertFalse(CppTypeMapper.needsHasBeenSetFlag(StringShape.builder().id("com.example#S").build()));
        assertFalse(CppTypeMapper.needsHasBeenSetFlag(BlobShape.builder().id("com.example#Bl").build()));
        assertFalse(CppTypeMapper.needsHasBeenSetFlag(TimestampShape.builder().id("com.example#T").build()));
    }

    // --- getIncludeForMemberType tests ---

    @Test
    void includeForString() {
        StringShape shape = StringShape.builder().id("com.example#Str").build();
        Model model = Model.builder().addShape(shape).build();
        assertEquals(java.util.Optional.of("<aws/core/utils/memory/stl/AWSString.h>"),
            CppTypeMapper.getIncludeForMemberType(shape, model, "myservice"));
    }

    @Test
    void includeForBlob() {
        BlobShape shape = BlobShape.builder().id("com.example#Blob").build();
        Model model = Model.builder().addShape(shape).build();
        assertEquals(java.util.Optional.of("<aws/core/utils/Array.h>"),
            CppTypeMapper.getIncludeForMemberType(shape, model, "myservice"));
    }

    @Test
    void includeForTimestamp() {
        TimestampShape shape = TimestampShape.builder().id("com.example#Ts").build();
        Model model = Model.builder().addShape(shape).build();
        assertEquals(java.util.Optional.of("<aws/core/utils/DateTime.h>"),
            CppTypeMapper.getIncludeForMemberType(shape, model, "myservice"));
    }

    @Test
    void includeForList() {
        StringShape str = StringShape.builder().id("com.example#Str").build();
        ListShape list = ListShape.builder()
            .id("com.example#MyList")
            .member(MemberShape.builder().id("com.example#MyList$member").target("com.example#Str").build())
            .build();
        Model model = Model.builder().addShapes(str, list).build();
        assertEquals(java.util.Optional.of("<aws/core/utils/memory/stl/AWSVector.h>"),
            CppTypeMapper.getIncludeForMemberType(list, model, "myservice"));
    }

    @Test
    void includeForMap() {
        StringShape str = StringShape.builder().id("com.example#Str").build();
        MapShape map = MapShape.builder()
            .id("com.example#MyMap")
            .key(MemberShape.builder().id("com.example#MyMap$key").target("com.example#Str").build())
            .value(MemberShape.builder().id("com.example#MyMap$value").target("com.example#Str").build())
            .build();
        Model model = Model.builder().addShapes(str, map).build();
        assertEquals(java.util.Optional.of("<aws/core/utils/memory/stl/AWSMap.h>"),
            CppTypeMapper.getIncludeForMemberType(map, model, "myservice"));
    }

    @Test
    void includeForStructure() {
        StructureShape struct = StructureShape.builder().id("com.example#Widget").build();
        Model model = Model.builder().addShape(struct).build();
        assertEquals(java.util.Optional.of("<aws/myservice/model/Widget.h>"),
            CppTypeMapper.getIncludeForMemberType(struct, model, "myservice"));
    }

    @Test
    void includeForDocument() {
        DocumentShape doc = DocumentShape.builder().id("com.example#Doc").build();
        Model model = Model.builder().addShape(doc).build();
        assertEquals(java.util.Optional.of("<aws/core/utils/Document.h>"),
            CppTypeMapper.getIncludeForMemberType(doc, model, "myservice"));
    }

    @Test
    void includeForPrimitive_returnsEmpty() {
        IntegerShape shape = IntegerShape.builder().id("com.example#I").build();
        Model model = Model.builder().addShape(shape).build();
        assertTrue(CppTypeMapper.getIncludeForMemberType(shape, model, "myservice").isEmpty());
    }

    // --- getIncludesForShape tests ---

    @Test
    void getIncludesForShape_sorted_and_deduplicated() {
        StringShape str = StringShape.builder().id("com.example#Str").build();
        TimestampShape ts = TimestampShape.builder().id("com.example#Ts").build();
        IntegerShape intShape = IntegerShape.builder().id("com.example#Int").build();
        StructureShape struct = StructureShape.builder()
            .id("com.example#MyRequest")
            .addMember("name", str.getId())
            .addMember("createdAt", ts.getId())
            .addMember("count", intShape.getId())
            .addMember("label", str.getId())  // duplicate string member
            .build();
        Model model = Model.builder().addShapes(str, ts, intShape, struct).build();

        List<String> includes = CppTypeMapper.getIncludesForShape(struct, model, "myservice");
        assertEquals(2, includes.size());
        assertEquals("<aws/core/utils/DateTime.h>", includes.get(0));
        assertEquals("<aws/core/utils/memory/stl/AWSString.h>", includes.get(1));
    }

    @Test
    void getIncludesForShape_withListMember_includesVectorAndElement() {
        StringShape str = StringShape.builder().id("com.example#Str").build();
        ListShape list = ListShape.builder()
            .id("com.example#StrList")
            .member(MemberShape.builder().id("com.example#StrList$member").target("com.example#Str").build())
            .build();
        StructureShape struct = StructureShape.builder()
            .id("com.example#MyRequest")
            .addMember("items", list.getId())
            .build();
        Model model = Model.builder().addShapes(str, list, struct).build();

        List<String> includes = CppTypeMapper.getIncludesForShape(struct, model, "myservice");
        assertTrue(includes.contains("<aws/core/utils/memory/stl/AWSVector.h>"));
        assertTrue(includes.contains("<aws/core/utils/memory/stl/AWSString.h>"));
    }

    @Test
    void getIncludesForShape_withIdempotencyTokenMember_includesUuidHeader() {
        // C2J adds <aws/core/utils/UUID.h> to any shape carrying an @idempotencyToken member,
        // because such members are brace-initialized with Aws::Utils::UUID::PseudoRandomUUID()
        // (CppViewHelper.java). The include must be present for the initializer to compile.
        StringShape str = StringShape.builder().id("com.example#Str").build();
        StructureShape struct = StructureShape.builder()
            .id("com.example#MyRequest")
            .addMember(MemberShape.builder()
                .id("com.example#MyRequest$clientToken").target("com.example#Str")
                .addTrait(new software.amazon.smithy.model.traits.IdempotencyTokenTrait())
                .build())
            .build();
        Model model = Model.builder().addShapes(str, struct).build();

        List<String> includes = CppTypeMapper.getIncludesForShape(struct, model, "myservice");
        assertTrue(includes.contains("<aws/core/utils/UUID.h>"),
            "Shape with idempotency-token member should include UUID.h: " + includes);
    }

    @Test
    void getIncludesForShape_withoutIdempotencyToken_noUuidHeader() {
        StringShape str = StringShape.builder().id("com.example#Str").build();
        StructureShape struct = StructureShape.builder()
            .id("com.example#MyRequest")
            .addMember("name", str.getId())
            .build();
        Model model = Model.builder().addShapes(str, struct).build();

        List<String> includes = CppTypeMapper.getIncludesForShape(struct, model, "myservice");
        assertFalse(includes.contains("<aws/core/utils/UUID.h>"),
            "Shape without idempotency-token member should not include UUID.h: " + includes);
    }

    @Test
    void getIncludesForShape_withMapMember_includesMapKeyAndValue() {
        StringShape str = StringShape.builder().id("com.example#Str").build();
        StructureShape valueStruct = StructureShape.builder().id("com.example#Item").build();
        MapShape map = MapShape.builder()
            .id("com.example#ItemMap")
            .key(MemberShape.builder().id("com.example#ItemMap$key").target("com.example#Str").build())
            .value(MemberShape.builder().id("com.example#ItemMap$value").target("com.example#Item").build())
            .build();
        StructureShape struct = StructureShape.builder()
            .id("com.example#MyRequest")
            .addMember("data", map.getId())
            .build();
        Model model = Model.builder().addShapes(str, valueStruct, map, struct).build();

        List<String> includes = CppTypeMapper.getIncludesForShape(struct, model, "myservice");
        assertTrue(includes.contains("<aws/core/utils/memory/stl/AWSMap.h>"));
        assertTrue(includes.contains("<aws/core/utils/memory/stl/AWSString.h>"));
        assertTrue(includes.contains("<aws/myservice/model/Item.h>"));
    }
}
