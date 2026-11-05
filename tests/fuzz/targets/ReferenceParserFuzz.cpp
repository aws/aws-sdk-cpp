/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <fuzztest/fuzztest.h>
#include <gtest/gtest.h>
#include <harness/FuzzDomains.h>
#include <harness/FuzzSchemas.h>
#include <harness/ReferenceParity.h>
#include <smithy/client/schema/Codec.h>

#include <cstdint>
#include <string>
#include <vector>

using namespace smithy::schema;

namespace {

void JsonMatchesReference(const std::string& bytes) { EXPECT_EQ(fuzz::JsonReferenceMismatch(bytes), "") << bytes; }

void XmlMatchesReference(const std::string& bytes) { EXPECT_EQ(fuzz::XmlReferenceMismatch(bytes), "") << bytes; }

template <typename OutputMismatch>
void ExpectOutputMatchesReference(OutputMismatch outputMismatch, const std::vector<uint64_t>& choices,
                                  const std::vector<std::string>& strings) {
  for (const auto& schema : fuzz::FuzzSchemas()) {
    fuzz::ChoiceTape tape(choices, strings);
    const fuzz::FuzzValue value = fuzz::BuildStruct(*schema, tape);
    EXPECT_EQ(outputMismatch(schema, value), "") << schema->GetId() << " value=" << value.Describe();
  }
}

void JsonSerializedOutputMatchesReference(const std::vector<uint64_t>& choices, const std::vector<std::string>& strings) {
  ExpectOutputMatchesReference(&fuzz::JsonOutputReferenceMismatch, choices, strings);
}

void XmlSerializedOutputMatchesReference(const std::vector<uint64_t>& choices, const std::vector<std::string>& strings) {
  ExpectOutputMatchesReference(&fuzz::XmlOutputReferenceMismatch, choices, strings);
}

}  // namespace

FUZZ_TEST(JsonReferenceFuzz, JsonMatchesReference).WithDomains(fuzz::PayloadDomain("json.dict")).WithSeeds([] {
  return fuzz::JsonByteSeeds("JsonReferenceFuzz.JsonMatchesReference");
});

FUZZ_TEST(XmlReferenceFuzz, XmlMatchesReference).WithDomains(fuzz::PayloadDomain("xml.dict")).WithSeeds([] {
  return fuzz::ByteSeeds(XmlCodec(), "XmlReferenceFuzz.XmlMatchesReference");
});

FUZZ_TEST(JsonReferenceFuzz, JsonSerializedOutputMatchesReference)
    .WithDomains(fuzz::ChoicesDomain(), fuzz::StringPoolDomain("json.dict"))
    .WithSeeds([] { return fuzz::TapeSeeds("JsonReferenceFuzz.JsonSerializedOutputMatchesReference"); });

FUZZ_TEST(XmlReferenceFuzz, XmlSerializedOutputMatchesReference)
    .WithDomains(fuzz::ChoicesDomain(), fuzz::StringPoolDomain("xml.dict"))
    .WithSeeds([] { return fuzz::TapeSeeds("XmlReferenceFuzz.XmlSerializedOutputMatchesReference"); });
