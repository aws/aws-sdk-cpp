/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/crt/Types.h>
#include <fuzztest/fuzztest.h>
#include <gtest/gtest.h>
#include <harness/DynamicStruct.h>
#include <harness/FuzzDomains.h>
#include <harness/FuzzSchemas.h>
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/client/schema/Codec.h>
#include <smithy/client/schema/Document.h>
#include <smithy/client/schema/JsonShapeDeserializer.h>
#include <smithy/client/schema/Schema.h>

#include <cstdint>
#include <string>
#include <vector>

using namespace smithy::schema;

namespace {

Aws::Crt::ByteCursor CursorOf(const std::string& bytes) {
  return Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(bytes.data()), bytes.size());
}

fuzz::FuzzValue HolderWith(const std::shared_ptr<const Document>& document) {
  fuzz::FuzzValue value = fuzz::FuzzValue::Struct();
  value.SetMember(0, fuzz::FuzzValue::FromDocument(document));
  return value;
}

void ReadDocumentNeverCrashes(const std::string& bytes) {
  fuzz::DynamicStruct shape(fuzz::DocumentHolderSchema(), fuzz::FuzzValue::Struct());
  JsonCodec().DeserializeShape(CursorOf(bytes), shape);

  const auto document = Schema::CreateDocument("FuzzDocument");
  JsonShapeDeserializer bare(CursorOf(bytes));
  bare.ReadDocument(*document);
}

void DocumentRoundTrips(const std::vector<uint64_t>& choices, const std::vector<std::string>& strings) {
  fuzz::ChoiceTape tape(choices, strings);
  const auto document = fuzz::BuildDocument(tape);
  ASSERT_NE(document, nullptr);
  const auto holder = fuzz::DocumentHolderSchema();
  fuzz::DynamicStruct original(holder, HolderWith(document));

  const JsonCodec codec;
  const auto payload = codec.Serialize(*holder, original);
  ASSERT_TRUE(payload.IsSuccess()) << payload.GetError().GetMessage();
  const std::string bytes(payload.GetResult().data(), payload.GetResult().size());
  fuzz::DynamicStruct decoded(holder, fuzz::FuzzValue::Struct());
  const auto error = codec.DeserializeShape(CursorOf(bytes), decoded);
  ASSERT_FALSE(error.has_value()) << error->GetMessage() << " payload=" << payload.GetResult();

  const auto& members = decoded.GetValue().GetMembers();
  const auto member = members.find(0);
  // A null member reads back as absent: readers skip null members.
  if (document->IsNull()) {
    EXPECT_EQ(member, members.end()) << payload.GetResult();
  } else {
    ASSERT_NE(member, members.end()) << "document member lost: " << payload.GetResult();
    EXPECT_TRUE(fuzz::DocumentsEquivalent(*document, *member->second.GetDocument())) << payload.GetResult();
  }
}

void NonJsonCodecsRejectDocuments(const std::vector<uint64_t>& choices, const std::vector<std::string>& strings) {
  fuzz::ChoiceTape tape(choices, strings);
  const auto holder = fuzz::DocumentHolderSchema();
  fuzz::DynamicStruct shape(holder, HolderWith(fuzz::BuildDocument(tape)));

  EXPECT_FALSE(CborCodec().Serialize(*holder, shape).IsSuccess());
  EXPECT_FALSE(XmlCodec().Serialize(*holder, shape).IsSuccess());
  const OperationRequestContext context{"FuzzOperation", "2026-10-06"};
  EXPECT_FALSE(AwsQueryProtocol().SerializeRequest(context, *holder, shape).IsSuccess());
}

}  // namespace

FUZZ_TEST(JsonDocumentFuzz, ReadDocumentNeverCrashes).WithDomains(fuzz::PayloadDomain("json.dict")).WithSeeds([] {
  return fuzz::JsonByteSeeds("JsonDocumentFuzz.ReadDocumentNeverCrashes");
});

FUZZ_TEST(JsonDocumentFuzz, DocumentRoundTrips).WithDomains(fuzz::ChoicesDomain(), fuzz::StringPoolDomain("json.dict")).WithSeeds([] {
  return fuzz::TapeSeeds("JsonDocumentFuzz.DocumentRoundTrips");
});

FUZZ_TEST(JsonDocumentFuzz, NonJsonCodecsRejectDocuments)
    .WithDomains(fuzz::ChoicesDomain(), fuzz::StringPoolDomain("json.dict"))
    .WithSeeds([] { return fuzz::TapeSeeds("JsonDocumentFuzz.NonJsonCodecsRejectDocuments"); });
