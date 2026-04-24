/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/payment-cryptography/model/As2805KeyVariant.h>

using namespace Aws::Utils;

namespace Aws {
namespace PaymentCryptography {
namespace Model {
namespace As2805KeyVariantMapper {

static const int TERMINAL_MAJOR_KEY_VARIANT_00_HASH = HashingUtils::HashString("TERMINAL_MAJOR_KEY_VARIANT_00");
static const int PIN_ENCRYPTION_KEY_VARIANT_28_HASH = HashingUtils::HashString("PIN_ENCRYPTION_KEY_VARIANT_28");
static const int MESSAGE_AUTHENTICATION_KEY_VARIANT_24_HASH = HashingUtils::HashString("MESSAGE_AUTHENTICATION_KEY_VARIANT_24");
static const int DATA_ENCRYPTION_KEY_VARIANT_22_HASH = HashingUtils::HashString("DATA_ENCRYPTION_KEY_VARIANT_22");

As2805KeyVariant GetAs2805KeyVariantForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TERMINAL_MAJOR_KEY_VARIANT_00_HASH) {
    return As2805KeyVariant::TERMINAL_MAJOR_KEY_VARIANT_00;
  } else if (hashCode == PIN_ENCRYPTION_KEY_VARIANT_28_HASH) {
    return As2805KeyVariant::PIN_ENCRYPTION_KEY_VARIANT_28;
  } else if (hashCode == MESSAGE_AUTHENTICATION_KEY_VARIANT_24_HASH) {
    return As2805KeyVariant::MESSAGE_AUTHENTICATION_KEY_VARIANT_24;
  } else if (hashCode == DATA_ENCRYPTION_KEY_VARIANT_22_HASH) {
    return As2805KeyVariant::DATA_ENCRYPTION_KEY_VARIANT_22;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<As2805KeyVariant>(hashCode);
  }

  return As2805KeyVariant::NOT_SET;
}

Aws::String GetNameForAs2805KeyVariant(As2805KeyVariant enumValue) {
  switch (enumValue) {
    case As2805KeyVariant::NOT_SET:
      return {};
    case As2805KeyVariant::TERMINAL_MAJOR_KEY_VARIANT_00:
      return "TERMINAL_MAJOR_KEY_VARIANT_00";
    case As2805KeyVariant::PIN_ENCRYPTION_KEY_VARIANT_28:
      return "PIN_ENCRYPTION_KEY_VARIANT_28";
    case As2805KeyVariant::MESSAGE_AUTHENTICATION_KEY_VARIANT_24:
      return "MESSAGE_AUTHENTICATION_KEY_VARIANT_24";
    case As2805KeyVariant::DATA_ENCRYPTION_KEY_VARIANT_22:
      return "DATA_ENCRYPTION_KEY_VARIANT_22";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace As2805KeyVariantMapper
}  // namespace Model
}  // namespace PaymentCryptography
}  // namespace Aws
