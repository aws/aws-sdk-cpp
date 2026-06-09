/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/SystemEventType.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace SystemEventTypeMapper {

static const int SYSTEM_CREATED_HASH = HashingUtils::HashString("SYSTEM_CREATED");
static const int SYSTEM_DELETED_HASH = HashingUtils::HashString("SYSTEM_DELETED");
static const int SYSTEM_USER_JOURNEY_CREATED_HASH = HashingUtils::HashString("SYSTEM_USER_JOURNEY_CREATED");
static const int SYSTEM_USER_JOURNEY_UPDATED_HASH = HashingUtils::HashString("SYSTEM_USER_JOURNEY_UPDATED");
static const int SYSTEM_USER_JOURNEY_DELETED_HASH = HashingUtils::HashString("SYSTEM_USER_JOURNEY_DELETED");
static const int SYSTEM_SERVICE_ASSOCIATED_HASH = HashingUtils::HashString("SYSTEM_SERVICE_ASSOCIATED");
static const int SYSTEM_SERVICE_DISASSOCIATED_HASH = HashingUtils::HashString("SYSTEM_SERVICE_DISASSOCIATED");
static const int SYSTEM_POLICY_ASSOCIATED_HASH = HashingUtils::HashString("SYSTEM_POLICY_ASSOCIATED");
static const int SYSTEM_POLICY_DISASSOCIATED_HASH = HashingUtils::HashString("SYSTEM_POLICY_DISASSOCIATED");

SystemEventType GetSystemEventTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SYSTEM_CREATED_HASH) {
    return SystemEventType::SYSTEM_CREATED;
  } else if (hashCode == SYSTEM_DELETED_HASH) {
    return SystemEventType::SYSTEM_DELETED;
  } else if (hashCode == SYSTEM_USER_JOURNEY_CREATED_HASH) {
    return SystemEventType::SYSTEM_USER_JOURNEY_CREATED;
  } else if (hashCode == SYSTEM_USER_JOURNEY_UPDATED_HASH) {
    return SystemEventType::SYSTEM_USER_JOURNEY_UPDATED;
  } else if (hashCode == SYSTEM_USER_JOURNEY_DELETED_HASH) {
    return SystemEventType::SYSTEM_USER_JOURNEY_DELETED;
  } else if (hashCode == SYSTEM_SERVICE_ASSOCIATED_HASH) {
    return SystemEventType::SYSTEM_SERVICE_ASSOCIATED;
  } else if (hashCode == SYSTEM_SERVICE_DISASSOCIATED_HASH) {
    return SystemEventType::SYSTEM_SERVICE_DISASSOCIATED;
  } else if (hashCode == SYSTEM_POLICY_ASSOCIATED_HASH) {
    return SystemEventType::SYSTEM_POLICY_ASSOCIATED;
  } else if (hashCode == SYSTEM_POLICY_DISASSOCIATED_HASH) {
    return SystemEventType::SYSTEM_POLICY_DISASSOCIATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SystemEventType>(hashCode);
  }

  return SystemEventType::NOT_SET;
}

Aws::String GetNameForSystemEventType(SystemEventType enumValue) {
  switch (enumValue) {
    case SystemEventType::NOT_SET:
      return {};
    case SystemEventType::SYSTEM_CREATED:
      return "SYSTEM_CREATED";
    case SystemEventType::SYSTEM_DELETED:
      return "SYSTEM_DELETED";
    case SystemEventType::SYSTEM_USER_JOURNEY_CREATED:
      return "SYSTEM_USER_JOURNEY_CREATED";
    case SystemEventType::SYSTEM_USER_JOURNEY_UPDATED:
      return "SYSTEM_USER_JOURNEY_UPDATED";
    case SystemEventType::SYSTEM_USER_JOURNEY_DELETED:
      return "SYSTEM_USER_JOURNEY_DELETED";
    case SystemEventType::SYSTEM_SERVICE_ASSOCIATED:
      return "SYSTEM_SERVICE_ASSOCIATED";
    case SystemEventType::SYSTEM_SERVICE_DISASSOCIATED:
      return "SYSTEM_SERVICE_DISASSOCIATED";
    case SystemEventType::SYSTEM_POLICY_ASSOCIATED:
      return "SYSTEM_POLICY_ASSOCIATED";
    case SystemEventType::SYSTEM_POLICY_DISASSOCIATED:
      return "SYSTEM_POLICY_DISASSOCIATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SystemEventTypeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
