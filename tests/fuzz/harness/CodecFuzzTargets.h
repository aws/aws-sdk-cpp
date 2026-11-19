/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <harness/FuzzValue.h>
#include <smithy/client/schema/Codec.h>

#include <cstdint>
#include <string>
#include <vector>

namespace smithy {
namespace schema {
namespace fuzz {

void DeserializeNeverCrashes(const Codec& codec, const std::string& bytes);

void ReserializeIsStable(const Codec& codec, const CodecTolerance& tolerance, const std::string& bytes);

void RoundTripsTypedValues(const Codec& codec, const CodecTolerance& tolerance, const std::vector<uint64_t>& choices,
                           const std::vector<std::string>& strings);

bool CodecSupportsDocuments(const Codec& codec);

}  // namespace fuzz
}  // namespace schema
}  // namespace smithy
