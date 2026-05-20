/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/payment-cryptography-data/model/RandomKeyMaxLength.h>

using namespace Aws::Utils;

namespace Aws {
namespace PaymentCryptographyData {
namespace Model {
namespace RandomKeyMaxLengthMapper {

static const int BYTES_8_HASH = HashingUtils::HashString("BYTES_8");
static const int BYTES_16_HASH = HashingUtils::HashString("BYTES_16");
static const int BYTES_24_HASH = HashingUtils::HashString("BYTES_24");

RandomKeyMaxLength GetRandomKeyMaxLengthForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BYTES_8_HASH) {
    return RandomKeyMaxLength::BYTES_8;
  } else if (hashCode == BYTES_16_HASH) {
    return RandomKeyMaxLength::BYTES_16;
  } else if (hashCode == BYTES_24_HASH) {
    return RandomKeyMaxLength::BYTES_24;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RandomKeyMaxLength>(hashCode);
  }

  return RandomKeyMaxLength::NOT_SET;
}

Aws::String GetNameForRandomKeyMaxLength(RandomKeyMaxLength enumValue) {
  switch (enumValue) {
    case RandomKeyMaxLength::NOT_SET:
      return {};
    case RandomKeyMaxLength::BYTES_8:
      return "BYTES_8";
    case RandomKeyMaxLength::BYTES_16:
      return "BYTES_16";
    case RandomKeyMaxLength::BYTES_24:
      return "BYTES_24";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RandomKeyMaxLengthMapper
}  // namespace Model
}  // namespace PaymentCryptographyData
}  // namespace Aws
