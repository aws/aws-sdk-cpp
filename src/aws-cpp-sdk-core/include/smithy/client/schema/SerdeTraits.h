/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>
#include <smithy/client/schema/Trait.h>
#include <smithy/client/schema/TraitKey.h>

namespace smithy {
namespace schema {

class TimestampFormatTrait : public Trait {
 public:
  enum class Format { DATE_TIME, HTTP_DATE, EPOCH_SECONDS };

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

}
}
