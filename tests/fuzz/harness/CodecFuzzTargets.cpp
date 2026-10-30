/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/HashingUtils.h>
#include <aws/crt/Types.h>
#include <gtest/gtest.h>
#include <harness/CodecFuzzTargets.h>
#include <harness/DynamicStruct.h>
#include <harness/FuzzDomains.h>
#include <harness/FuzzSchemas.h>

#include <memory>

namespace smithy {
namespace schema {
namespace fuzz {

namespace {

Aws::Crt::ByteCursor CursorOf(const std::string& bytes) {
  return Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(bytes.data()), bytes.size());
}

Aws::String Base64(const std::string& bytes) {
  return Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::ByteBuffer(reinterpret_cast<const unsigned char*>(bytes.data()), bytes.size()));
}

void ExpectReadBackUnchanged(const Codec& codec, const CodecTolerance& tolerance, const std::shared_ptr<const Schema>& schema,
                             const DynamicStruct& first, const std::string& bytes) {
  const auto payload = codec.Serialize(*schema, first);
  ASSERT_TRUE(payload.IsSuccess()) << schema->GetId() << ": read but could not write: " << payload.GetError().GetMessage()
                                   << " input(base64)=" << Base64(bytes);
  const std::string reserialized(payload.GetResult().data(), payload.GetResult().size());
  DynamicStruct second(schema, FuzzValue::Struct());
  const auto error = codec.DeserializeShape(CursorOf(reserialized), second);
  ASSERT_FALSE(error.has_value()) << schema->GetId() << ": own output rejected: " << error->GetMessage()
                                  << " output=" << payload.GetResult();
  EXPECT_EQ(FindMismatch(first.GetValue(), second.GetValue(), *schema, tolerance), "")
      << schema->GetId() << " output=" << payload.GetResult() << " input(base64)=" << Base64(bytes);

  // Tolerated losses happen on the first write only.
  const auto secondPayload = codec.Serialize(*schema, second);
  ASSERT_TRUE(secondPayload.IsSuccess()) << schema->GetId() << ": " << secondPayload.GetError().GetMessage();
  const std::string secondBytes(secondPayload.GetResult().data(), secondPayload.GetResult().size());
  DynamicStruct third(schema, FuzzValue::Struct());
  ASSERT_FALSE(codec.DeserializeShape(CursorOf(secondBytes), third).has_value()) << schema->GetId() << " output=" << secondBytes;
  const auto thirdPayload = codec.Serialize(*schema, third);
  ASSERT_TRUE(thirdPayload.IsSuccess()) << schema->GetId() << ": " << thirdPayload.GetError().GetMessage();
  EXPECT_EQ(thirdPayload.GetResult(), secondPayload.GetResult()) << schema->GetId() << " input(base64)=" << Base64(bytes);
}

void ExpectRoundTrip(const Codec& codec, const CodecTolerance& tolerance, const std::shared_ptr<const Schema>& schema,
                     const FuzzValue& value) {
  DynamicStruct original(schema, value);
  const auto payload = codec.Serialize(*schema, original);
  ASSERT_TRUE(payload.IsSuccess()) << schema->GetId() << ": " << payload.GetError().GetMessage() << " value=" << value.Describe();
  const std::string bytes(payload.GetResult().data(), payload.GetResult().size());
  DynamicStruct decoded(schema, FuzzValue::Struct());
  const auto error = codec.DeserializeShape(CursorOf(bytes), decoded);
  ASSERT_FALSE(error.has_value()) << schema->GetId() << ": " << error->GetMessage() << " payload=" << payload.GetResult();
  EXPECT_EQ(FindMismatch(value, decoded.GetValue(), *schema, tolerance), "")
      << schema->GetId() << " payload=" << payload.GetResult() << " value=" << value.Describe();
}

}  // namespace

void DeserializeNeverCrashes(const Codec& codec, const std::string& bytes) {
  for (const auto& schema : FuzzSchemas()) {
    DynamicStruct shape(schema, FuzzValue::Struct());
    codec.DeserializeShape(CursorOf(bytes), shape);
  }
}

void ReserializeIsStable(const Codec& codec, const CodecTolerance& tolerance, const std::string& bytes) {
  for (const auto& schema : FuzzSchemas()) {
    DynamicStruct first(schema, FuzzValue::Struct());
    if (!codec.DeserializeShape(CursorOf(bytes), first).has_value()) {
      ExpectReadBackUnchanged(codec, tolerance, schema, first, bytes);
    }
  }
}

void RoundTripsTypedValues(const Codec& codec, const CodecTolerance& tolerance, const std::vector<uint64_t>& choices,
                           const std::vector<std::string>& strings) {
  const bool documents = CodecSupportsDocuments(codec);
  for (const auto& schema : FuzzSchemas()) {
    ChoiceTape tape(choices, strings);
    const FuzzValue value = BuildStruct(*schema, tape);
    // Only JSON supports documents; NonJsonCodecsRejectDocuments covers the rest.
    if (documents || !ContainsDocument(value)) {
      ExpectRoundTrip(codec, tolerance, schema, value);
    }
  }
}

bool CodecSupportsDocuments(const Codec& codec) { return dynamic_cast<const JsonCodec*>(&codec) != nullptr; }

}  // namespace fuzz
}  // namespace schema
}  // namespace smithy
