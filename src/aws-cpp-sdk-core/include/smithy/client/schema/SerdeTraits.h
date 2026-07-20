/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

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

extern template class TraitKey<TimestampFormatTrait>;

}  // namespace schema
}  // namespace smithy
