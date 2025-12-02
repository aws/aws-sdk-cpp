/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/model/IntegrationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
namespace IntegrationStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

IntegrationStatus GetIntegrationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return IntegrationStatus::ACTIVE;
  } else if (hashCode == DELETING_HASH) {
    return IntegrationStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IntegrationStatus>(hashCode);
  }

  return IntegrationStatus::NOT_SET;
}

Aws::String GetNameForIntegrationStatus(IntegrationStatus enumValue) {
  switch (enumValue) {
    case IntegrationStatus::NOT_SET:
      return {};
    case IntegrationStatus::ACTIVE:
      return "ACTIVE";
    case IntegrationStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IntegrationStatusMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
