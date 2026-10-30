/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/Optional.h>

#include <cstdint>

namespace smithy {
namespace schema {
namespace fuzz {

// Scalar text parsers for the reference oracles, written apart from the codecs' so a bug in theirs shows up as a mismatch.

enum class IntegerTextKind { VALUE, OUT_OF_RANGE, NOT_AN_INTEGER };

struct IntegerText {
  IntegerTextKind kind = IntegerTextKind::NOT_AN_INTEGER;
  int64_t value = 0;
};

// An optional sign, then decimal digits only.
IntegerText ParseIntegerText(const Aws::String& text);

// The whole text as strtod reads it in the C locale; empty if any of it is left over.
Aws::Crt::Optional<double> ParseDoubleText(const Aws::String& text);

// DateTime(seconds), empty where system_clock cannot hold the value.
Aws::Crt::Optional<Aws::Utils::DateTime> EpochSecondsInClockRange(double seconds);

}  // namespace fuzz
}  // namespace schema
}  // namespace smithy
