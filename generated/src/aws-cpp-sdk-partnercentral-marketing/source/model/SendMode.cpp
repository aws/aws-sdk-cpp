/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/SendMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace SendModeMapper {

static const int ON_ACTIVATION_HASH = HashingUtils::HashString("ON_ACTIVATION");
static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");

SendMode GetSendModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ON_ACTIVATION_HASH) {
    return SendMode::ON_ACTIVATION;
  } else if (hashCode == SCHEDULED_HASH) {
    return SendMode::SCHEDULED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SendMode>(hashCode);
  }

  return SendMode::NOT_SET;
}

Aws::String GetNameForSendMode(SendMode enumValue) {
  switch (enumValue) {
    case SendMode::NOT_SET:
      return {};
    case SendMode::ON_ACTIVATION:
      return "ON_ACTIVATION";
    case SendMode::SCHEDULED:
      return "SCHEDULED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SendModeMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
