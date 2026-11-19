/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <gtest/gtest.h>
#include <harness/FuzzDomains.h>
#include <harness/FuzzSchemas.h>
#include <harness/ReferenceParity.h>
#include <smithy/client/schema/Codec.h>

#include <string>
#include <tuple>

using namespace smithy::schema;
using namespace smithy::schema::fuzz;

namespace {

ReferenceReading Json(const char* schemaId, const std::string& bytes) {
  const auto reading = ReadJsonReference(*FindFuzzSchema(schemaId), bytes);
  EXPECT_TRUE(reading.has_value()) << bytes;
  return reading.has_value() ? reading.value() : ReferenceReading();
}

ReferenceReading Xml(const char* schemaId, const std::string& bytes) {
  const auto reading = ReadXmlReference(*FindFuzzSchema(schemaId), bytes);
  EXPECT_TRUE(reading.has_value()) << bytes;
  return reading.has_value() ? reading.value() : ReferenceReading();
}

int MemberIndex(const char* schemaId, const char* member) { return FindFuzzSchema(schemaId)->GetMember(member).value()->GetMemberIndex(); }

FuzzValue With(int index, FuzzValue value) {
  FuzzValue s = FuzzValue::Struct();
  s.SetMember(index, std::move(value));
  return s;
}

void ExpectReads(const ReferenceReading& reading, const char* schemaId, const FuzzValue& expected) {
  EXPECT_EQ(reading.mustReject, "");
  EXPECT_EQ(reading.acceptanceUnjudged, "");
  EXPECT_EQ(reading.valueUnjudged, "");
  EXPECT_EQ(FindMismatch(expected, reading.value, *FindFuzzSchema(schemaId), CodecTolerance::Exact().ReadByCrtJson()), "");
}

}  // namespace

TEST(ReferenceParity, CodecOutputMatchesTheReferences) {
  for (const auto& seed : JsonByteSeeds("JsonReferenceFuzz.JsonMatchesReference")) {
    EXPECT_EQ(JsonReferenceMismatch(std::get<0>(seed)), "") << std::get<0>(seed);
  }
  for (const auto& seed : ByteSeeds(XmlCodec(), "XmlReferenceFuzz.XmlMatchesReference")) {
    EXPECT_EQ(XmlReferenceMismatch(std::get<0>(seed)), "") << std::get<0>(seed);
  }
}

TEST(ReferenceParity, SeedValuesSerializeToWhatTheReferencesRead) {
  for (const auto& tapeSeed : TapeSeeds()) {
    for (const auto& schema : FuzzSchemas()) {
      ChoiceTape jsonTape(std::get<0>(tapeSeed), std::get<1>(tapeSeed));
      const FuzzValue jsonValue = BuildStruct(*schema, jsonTape);
      EXPECT_EQ(JsonOutputReferenceMismatch(schema, jsonValue), "") << schema->GetId();
      ChoiceTape xmlTape(std::get<0>(tapeSeed), std::get<1>(tapeSeed));
      const FuzzValue xmlValue = BuildStruct(*schema, xmlTape);
      EXPECT_EQ(XmlOutputReferenceMismatch(schema, xmlValue), "") << schema->GetId();
    }
  }
}

TEST(ReferenceParity, SimplePayloadsMatch) {
  EXPECT_EQ(JsonReferenceMismatch("{\"value\":\"a\"}"), "");
  EXPECT_EQ(XmlReferenceMismatch("<StringValue><value>a &amp; b</value></StringValue>"), "");
  EXPECT_EQ(AwsQueryResponseReferenceMismatch("<R><FuzzOperationResult><value>7</value></FuzzOperationResult></R>"), "");
}

TEST(ReferenceParity, JsonReadsTheWholeTree) {
  const auto reading = Json("NestedStructureValue",
                            "{\"str\":\"s\",\"list\":[\"a\",null,5,\"b\"],\"map\":{\"k\":1,\"k\":2,\"x\":\"no\"},\"nested\":{\"int\":3},"
                            "\"union\":{\"intVariant\":4},\"unmodeled\":[1]}");
  const auto schema = FindFuzzSchema("NestedStructureValue");
  FuzzValue expected = FuzzValue::Struct();
  expected.SetMember(MemberIndex("NestedStructureValue", "str"), FuzzValue::String("s"));
  expected.SetMember(MemberIndex("NestedStructureValue", "list"), FuzzValue::List({FuzzValue::String("a"), FuzzValue::String("b")}));
  expected.SetMember(MemberIndex("NestedStructureValue", "map"), FuzzValue::Map({{"k", FuzzValue::Integer(2)}}));
  expected.SetMember(
      MemberIndex("NestedStructureValue", "nested"),
      With((*schema->GetMember("nested").value()->GetMemberTarget())->GetMember("int").value()->GetMemberIndex(), FuzzValue::Integer(3)));
  expected.SetMember(MemberIndex("NestedStructureValue", "union"),
                     With((*schema->GetMember("union").value()->GetMemberTarget())->GetMember("intVariant").value()->GetMemberIndex(),
                          FuzzValue::Integer(4)));
  ExpectReads(reading, "NestedStructureValue", expected);
}

TEST(ReferenceParity, JsonContainerOfTheWrongTypeIsEmptyAndScalarIsAbsent) {
  ExpectReads(Json("StringListValue", "{\"values\":5}"), "StringListValue", With(0, FuzzValue::List({})));
  ExpectReads(Json("IntegerValue", "{\"value\":\"5\"}"), "IntegerValue", FuzzValue::Struct());
  ExpectReads(Json("ByteValue", "{\"value\":200}"), "ByteValue", FuzzValue::Struct());
}

TEST(ReferenceParity, JsonReadingsTheCodecMustReject) {
  EXPECT_NE(Json("IntegerValue", "{\"value\":1.5}").mustReject, "");
  EXPECT_NE(Json("IntegerValue", "{\"value\":3000000000}").mustReject, "");
  EXPECT_NE(Json("DoubleValue", "{\"value\":1e400}").mustReject, "");
  EXPECT_NE(Json("TimestampValue", "{\"value\":1e300}").mustReject, "");
  EXPECT_NE(Json("UnionValue", "{\"value\":{\"stringVariant\":\"a\",\"intVariant\":1}}").mustReject, "");
  EXPECT_NE(Json("StringValue", "[1]").mustReject, "");
  EXPECT_EQ(Json("UnionValue", "{\"value\":{\"stringVariant\":\"a\",\"intVariant\":null}}").mustReject, "");
}

TEST(ReferenceParity, JsonLongsBeyondTwoToThe53AreKnownOnlyToTheNearestDouble) {
  const auto reading = Json("LongValue", "{\"value\":9007199254740993}");
  EXPECT_EQ(reading.mustReject, "");
  EXPECT_EQ(FindMismatch(With(0, FuzzValue::Integer(9007199254740993LL)), reading.value, *FindFuzzSchema("LongValue"),
                         CodecTolerance::Exact().ReadByCrtJson()),
            "");
  EXPECT_NE(Json("LongValue", "{\"value\":9223372036854775807}").acceptanceUnjudged, "");
  EXPECT_NE(Json("LongValue", "{\"value\":1e19}").mustReject, "");
}

TEST(ReferenceParity, JsonReferenceRejectsTrailingData) {
  EXPECT_FALSE(ReadJsonReference(*FindFuzzSchema("StringValue"), "{} {}").has_value());
}

TEST(ReferenceParity, XmlReadsAttributesAndNamedAndFlattenedContainers) {
  const auto reading = Xml("XmlTraits",
                           "<XmlRoot attr=\"a\" int-attr=\"3\"><flatList>x</flatList><other/><flatList>y</flatList>"
                           "<namedList><item>1</item><item>no</item><item>2</item></namedList>"
                           "<namedMap><pair><k>a</k><v>1</v></pair><pair><k>b</k></pair><pair><v>2</v></pair></namedMap>"
                           "<Inner><str>s</str></Inner><Inner><str>second</str></Inner></XmlRoot>");
  const auto schema = FindFuzzSchema("XmlTraits");
  FuzzValue expected = FuzzValue::Struct();
  expected.SetMember(MemberIndex("XmlTraits", "attr"), FuzzValue::String("a"));
  expected.SetMember(MemberIndex("XmlTraits", "intAttr"), FuzzValue::Integer(3));
  expected.SetMember(MemberIndex("XmlTraits", "flatList"), FuzzValue::List({FuzzValue::String("x"), FuzzValue::String("y")}));
  expected.SetMember(MemberIndex("XmlTraits", "namedList"), FuzzValue::List({FuzzValue::Integer(1), FuzzValue::Integer(2)}));
  expected.SetMember(MemberIndex("XmlTraits", "namedMap"), FuzzValue::Map({{"a", FuzzValue::Integer(1)}, {"", FuzzValue::Integer(2)}}));
  expected.SetMember(
      MemberIndex("XmlTraits", "nested"),
      With((*schema->GetMember("nested").value()->GetMemberTarget())->GetMember("str").value()->GetMemberIndex(), FuzzValue::String("s")));
  ExpectReads(reading, "XmlTraits", expected);
}

TEST(ReferenceParity, XmlReadingsTheCodecMustRejectOrCannotJudge) {
  EXPECT_NE(Xml("StringValue", "<a/><b/>").mustReject, "");
  EXPECT_NE(Xml("IntegerValue", "<IntegerValue><value>99999999999</value></IntegerValue>").mustReject, "");
  EXPECT_NE(Xml("UnionValue", "<U><value><stringVariant>a</stringVariant><intVariant>1</intVariant></value></U>").mustReject, "");
  EXPECT_NE(Xml("StringValue", "<StringValue><value>a<b/>c</value></StringValue>").valueUnjudged, "");
  EXPECT_EQ(Xml("IntegerValue", "<IntegerValue><value>abc</value></IntegerValue>").mustReject, "");
}

TEST(ReferenceParity, AwsQueryResultWrapperIsEnteredWhenPresent) {
  const auto wrapped =
      ReadXmlReference(*FindFuzzSchema("StringValue"),
                       "<R><FuzzOperationResult><value>in</value></FuzzOperationResult><value>out</value></R>", "FuzzOperationResult");
  ASSERT_TRUE(wrapped.has_value());
  ExpectReads(wrapped.value(), "StringValue", With(0, FuzzValue::String("in")));
  const auto bare = ReadXmlReference(*FindFuzzSchema("StringValue"), "<R><value>out</value></R>", "FuzzOperationResult");
  ASSERT_TRUE(bare.has_value());
  ExpectReads(bare.value(), "StringValue", With(0, FuzzValue::String("out")));
}

TEST(ReferenceParity, LegacyLeniencyOutsideTheRootIsModeled) {
  // tinyxml2 drops a closing tag that closes nothing; the codec must reject it.
  EXPECT_NE(Xml("StringValue", "<a></a></b>").mustReject, "");
  // Before the root, tinyxml2 loses the root as well, so it rejects the document itself.
  EXPECT_FALSE(ReadXmlReference(*FindFuzzSchema("StringValue"), "</x><a/>").has_value());
  EXPECT_EQ(Xml("StringValue", "<a><!-- </b> --><v x=\"</y>\"/></a>").mustReject, "");
  EXPECT_EQ(XmlReferenceMismatch("<l></l></:>"), "");
  EXPECT_EQ(XmlReferenceMismatch(std::string("<:/>\v")), "");
  // tinyxml2 tolerates whitespace before an element name and junk in an end tag; the codec rejects both as malformed.
  EXPECT_EQ(XmlReferenceMismatch(std::string("<\t:/>")), "");
  EXPECT_EQ(XmlReferenceMismatch("<t></t\t:=\"\">"), "");
  // cJSON skips control bytes as whitespace; both skip a leading byte-order mark.
  EXPECT_EQ(JsonReferenceMismatch(std::string("{}\x01")), "");
  EXPECT_EQ(JsonReferenceMismatch("\xEF\xBB\xBF{}"), "");
  // cJSON reads a \u escape without four hex digits as U+0000; the codec rejects it.
  EXPECT_EQ(JsonReferenceMismatch("{\"\":\"\\u\t\t\t\t\"}"), "");
  EXPECT_EQ(XmlReferenceMismatch("<e><?\?></e>"), "");
}

TEST(ReferenceParity, XmlScalarsAreReadAsLegacyClientsReadThem) {
  ExpectReads(Xml("IntegerValue", "<IntegerValue><value>\n 42\t</value></IntegerValue>"), "IntegerValue", With(0, FuzzValue::Integer(42)));
  ExpectReads(Xml("BooleanValue", "<BooleanValue><value> TRUE </value></BooleanValue>"), "BooleanValue", With(0, FuzzValue::Boolean(true)));
  ExpectReads(Xml("BooleanValue", "<BooleanValue><value>1</value></BooleanValue>"), "BooleanValue", FuzzValue::Struct());
  ExpectReads(Xml("StringValue", "<StringValue><value> x </value></StringValue>"), "StringValue", With(0, FuzzValue::String(" x ")));
  EXPECT_NE(Xml("LongValue", "<LongValue><value> 9223372036854775808 </value></LongValue>").mustReject, "");
  for (const char* payload :
       {"<IntegerValue><value> 42 </value></IntegerValue>", "<DoubleValue><value> 2.5 </value></DoubleValue>",
        "<BooleanValue><value>False</value></BooleanValue>", "<TimestampValue><value> 2020-01-02T03:04:05Z </value></TimestampValue>"}) {
    EXPECT_EQ(XmlReferenceMismatch(payload), "") << payload;
  }
}

TEST(ReferenceParity, OnlyMarkupTinyXmlToleratesIsExcusedFromTheAcceptanceCheck) {
  for (const char* lenient : {"< a/>", "<a></a x>", "<a></a\tb>", "<a/>\f", "<a/>\v"}) {
    EXPECT_NE(TinyXmlLeniency(lenient), "") << lenient;
  }
  EXPECT_NE(TinyXmlLeniency("\t\xEF\xBB\xBF<a/>"), "");
  EXPECT_EQ(TinyXmlLeniency("\xEF\xBB\xBF<a/>"), "");
  for (const char* strict : {"<a><b>1</b></a>", "<a></a >", "<a></a\n>", "<a x=\"1\"/>", "<a>1 &lt; 2</a>"}) {
    EXPECT_EQ(TinyXmlLeniency(strict), "") << strict;
  }
}

TEST(ReferenceParity, XmlReferencesToNulAreNotJudged) {
  EXPECT_NE(Xml("XmlTraits", "<XmlRoot attr=\"a&#0;b\"/>").valueUnjudged, "");
  EXPECT_NE(Xml("XmlTraits", "<XmlRoot attr=\"&#x00;\"/>").valueUnjudged, "");
  EXPECT_NE(Xml("StringValue", "<StringValue><value>a&#000;b</value></StringValue>").valueUnjudged, "");
  EXPECT_EQ(Xml("StringValue", "<StringValue><value>&#10;&#x30;</value></StringValue>").valueUnjudged, "");
}
