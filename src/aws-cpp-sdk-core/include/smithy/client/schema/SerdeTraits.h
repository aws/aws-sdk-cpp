/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/Trait.h>
#include <smithy/client/schema/TraitKey.h>

#include <cstdint>

namespace smithy {
namespace schema {

class TimestampFormatTrait : public Trait {
 public:
  enum class Format : std::uint8_t { DATE_TIME, HTTP_DATE, EPOCH_SECONDS };

  explicit TimestampFormatTrait(Format format) : m_format(format) {}
  Format GetFormat() const { return m_format; }
  static const TraitKey<TimestampFormatTrait>& KEY() { return TraitKey<TimestampFormatTrait>::Instance(); }

 private:
  Format m_format;
};

class Ec2QueryNameTrait : public Trait {
 public:
  explicit Ec2QueryNameTrait(const Aws::String& value) : m_value(value) {}
  const Aws::String& GetValue() const { return m_value; }
  static const TraitKey<Ec2QueryNameTrait>& KEY() { return TraitKey<Ec2QueryNameTrait>::Instance(); }

 private:
  Aws::String m_value;
};

extern template class TraitKey<TimestampFormatTrait>;
extern template class TraitKey<Ec2QueryNameTrait>;

inline TimestampFormatTrait::Format ResolveTimestampFormat(const Schema& schema,
                                                           TimestampFormatTrait::Format protocolDefault) {
  const auto trait = schema.GetTrait(TimestampFormatTrait::KEY());
  return trait ? trait->GetFormat() : protocolDefault;
}

inline Aws::String EpochSecondsText(const Aws::Utils::DateTime& value) {
  const int64_t millis = value.Millis();
  const bool negative = millis < 0;
  const int64_t magnitude = negative ? -millis : millis;
  Aws::String out = (negative ? "-" : "") + Aws::Utils::StringUtils::to_string(magnitude / 1000);
  const int64_t fraction = magnitude % 1000;
  if (fraction != 0) {
    Aws::String digits = Aws::Utils::StringUtils::to_string(fraction);
    digits = Aws::String(3 - digits.size(), '0') + digits;
    while (digits.back() == '0') {
      digits.pop_back();
    }
    out += "." + digits;
  }
  return out;
}

inline Aws::String FormatTimestampText(const Aws::Utils::DateTime& value, TimestampFormatTrait::Format format) {
  switch (format) {
    case TimestampFormatTrait::Format::HTTP_DATE:
      return value.ToGmtString(Aws::Utils::DateFormat::RFC822);
    case TimestampFormatTrait::Format::EPOCH_SECONDS:
      return EpochSecondsText(value);
    case TimestampFormatTrait::Format::DATE_TIME:
    default:
      return value.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
  }
}

}  // namespace schema
}  // namespace smithy
