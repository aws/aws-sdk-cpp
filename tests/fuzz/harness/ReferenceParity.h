/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/Optional.h>
#include <harness/FuzzValue.h>
#include <smithy/client/schema/Schema.h>

#include <memory>
#include <string>

namespace smithy {
namespace schema {
namespace fuzz {

// Walked by the protocol's rules, not the codec's code. Each reason is empty when it does not apply.
struct ReferenceReading {
  FuzzValue value = FuzzValue::Struct();
  Aws::String mustReject;
  Aws::String acceptanceUnjudged;
  Aws::String valueUnjudged;
};

// Why tinyxml2 tolerates markup in `bytes` that the codec rejects; empty when it does not.
Aws::String TinyXmlLeniency(const std::string& bytes);

Aws::Crt::Optional<ReferenceReading> ReadJsonReference(const Schema& root, const std::string& bytes);

// `resultWrapper` is entered first when the root has that child, as awsQuery responses are read.
Aws::Crt::Optional<ReferenceReading> ReadXmlReference(const Schema& root, const std::string& bytes, const Aws::String& resultWrapper = "");

// Each returns empty when the codec and its reference agree, otherwise the first difference.
Aws::String JsonReferenceMismatch(const std::string& bytes);
Aws::String XmlReferenceMismatch(const std::string& bytes);
Aws::String AwsQueryResponseReferenceMismatch(const std::string& bytes);
Aws::String JsonOutputReferenceMismatch(const std::shared_ptr<const Schema>& schema, const FuzzValue& value);
Aws::String XmlOutputReferenceMismatch(const std::shared_ptr<const Schema>& schema, const FuzzValue& value);

}  // namespace fuzz
}  // namespace schema
}  // namespace smithy
