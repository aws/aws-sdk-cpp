/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/WhatsAppSourceConfigurationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace WhatsAppSourceConfigurationStatusMapper {

static const int VALID_HASH = HashingUtils::HashString("VALID");
static const int INVALID_HASH = HashingUtils::HashString("INVALID");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");

WhatsAppSourceConfigurationStatus GetWhatsAppSourceConfigurationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VALID_HASH) {
    return WhatsAppSourceConfigurationStatus::VALID;
  } else if (hashCode == INVALID_HASH) {
    return WhatsAppSourceConfigurationStatus::INVALID;
  } else if (hashCode == REJECTED_HASH) {
    return WhatsAppSourceConfigurationStatus::REJECTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WhatsAppSourceConfigurationStatus>(hashCode);
  }

  return WhatsAppSourceConfigurationStatus::NOT_SET;
}

Aws::String GetNameForWhatsAppSourceConfigurationStatus(WhatsAppSourceConfigurationStatus enumValue) {
  switch (enumValue) {
    case WhatsAppSourceConfigurationStatus::NOT_SET:
      return {};
    case WhatsAppSourceConfigurationStatus::VALID:
      return "VALID";
    case WhatsAppSourceConfigurationStatus::INVALID:
      return "INVALID";
    case WhatsAppSourceConfigurationStatus::REJECTED:
      return "REJECTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WhatsAppSourceConfigurationStatusMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
