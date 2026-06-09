/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/ServiceEventType.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace ServiceEventTypeMapper {

static const int SERVICE_CREATED_HASH = HashingUtils::HashString("SERVICE_CREATED");
static const int SERVICE_DELETED_HASH = HashingUtils::HashString("SERVICE_DELETED");
static const int SERVICE_SYSTEM_ASSOCIATED_HASH = HashingUtils::HashString("SERVICE_SYSTEM_ASSOCIATED");
static const int SERVICE_SYSTEM_DISASSOCIATED_HASH = HashingUtils::HashString("SERVICE_SYSTEM_DISASSOCIATED");
static const int SERVICE_RESOURCES_ASSOCIATED_HASH = HashingUtils::HashString("SERVICE_RESOURCES_ASSOCIATED");
static const int SERVICE_RESOURCES_DISASSOCIATED_HASH = HashingUtils::HashString("SERVICE_RESOURCES_DISASSOCIATED");
static const int SERVICE_WORKFLOW_UPDATED_HASH = HashingUtils::HashString("SERVICE_WORKFLOW_UPDATED");
static const int SERVICE_INPUT_SOURCES_UPDATED_HASH = HashingUtils::HashString("SERVICE_INPUT_SOURCES_UPDATED");
static const int SERVICE_POLICY_ASSOCIATED_HASH = HashingUtils::HashString("SERVICE_POLICY_ASSOCIATED");
static const int SERVICE_POLICY_DISASSOCIATED_HASH = HashingUtils::HashString("SERVICE_POLICY_DISASSOCIATED");
static const int SERVICE_FUNCTION_CREATED_HASH = HashingUtils::HashString("SERVICE_FUNCTION_CREATED");
static const int SERVICE_FUNCTION_UPDATED_HASH = HashingUtils::HashString("SERVICE_FUNCTION_UPDATED");
static const int SERVICE_FUNCTION_DELETED_HASH = HashingUtils::HashString("SERVICE_FUNCTION_DELETED");
static const int SERVICE_FUNCTION_RESOURCES_ADDED_HASH = HashingUtils::HashString("SERVICE_FUNCTION_RESOURCES_ADDED");
static const int SERVICE_FUNCTION_RESOURCES_REMOVED_HASH = HashingUtils::HashString("SERVICE_FUNCTION_RESOURCES_REMOVED");
static const int SERVICE_ACHIEVABILITY_UPDATED_HASH = HashingUtils::HashString("SERVICE_ACHIEVABILITY_UPDATED");
static const int ASSERTION_CREATED_HASH = HashingUtils::HashString("ASSERTION_CREATED");
static const int ASSERTION_UPDATED_HASH = HashingUtils::HashString("ASSERTION_UPDATED");
static const int ASSERTION_DELETED_HASH = HashingUtils::HashString("ASSERTION_DELETED");

ServiceEventType GetServiceEventTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SERVICE_CREATED_HASH) {
    return ServiceEventType::SERVICE_CREATED;
  } else if (hashCode == SERVICE_DELETED_HASH) {
    return ServiceEventType::SERVICE_DELETED;
  } else if (hashCode == SERVICE_SYSTEM_ASSOCIATED_HASH) {
    return ServiceEventType::SERVICE_SYSTEM_ASSOCIATED;
  } else if (hashCode == SERVICE_SYSTEM_DISASSOCIATED_HASH) {
    return ServiceEventType::SERVICE_SYSTEM_DISASSOCIATED;
  } else if (hashCode == SERVICE_RESOURCES_ASSOCIATED_HASH) {
    return ServiceEventType::SERVICE_RESOURCES_ASSOCIATED;
  } else if (hashCode == SERVICE_RESOURCES_DISASSOCIATED_HASH) {
    return ServiceEventType::SERVICE_RESOURCES_DISASSOCIATED;
  } else if (hashCode == SERVICE_WORKFLOW_UPDATED_HASH) {
    return ServiceEventType::SERVICE_WORKFLOW_UPDATED;
  } else if (hashCode == SERVICE_INPUT_SOURCES_UPDATED_HASH) {
    return ServiceEventType::SERVICE_INPUT_SOURCES_UPDATED;
  } else if (hashCode == SERVICE_POLICY_ASSOCIATED_HASH) {
    return ServiceEventType::SERVICE_POLICY_ASSOCIATED;
  } else if (hashCode == SERVICE_POLICY_DISASSOCIATED_HASH) {
    return ServiceEventType::SERVICE_POLICY_DISASSOCIATED;
  } else if (hashCode == SERVICE_FUNCTION_CREATED_HASH) {
    return ServiceEventType::SERVICE_FUNCTION_CREATED;
  } else if (hashCode == SERVICE_FUNCTION_UPDATED_HASH) {
    return ServiceEventType::SERVICE_FUNCTION_UPDATED;
  } else if (hashCode == SERVICE_FUNCTION_DELETED_HASH) {
    return ServiceEventType::SERVICE_FUNCTION_DELETED;
  } else if (hashCode == SERVICE_FUNCTION_RESOURCES_ADDED_HASH) {
    return ServiceEventType::SERVICE_FUNCTION_RESOURCES_ADDED;
  } else if (hashCode == SERVICE_FUNCTION_RESOURCES_REMOVED_HASH) {
    return ServiceEventType::SERVICE_FUNCTION_RESOURCES_REMOVED;
  } else if (hashCode == SERVICE_ACHIEVABILITY_UPDATED_HASH) {
    return ServiceEventType::SERVICE_ACHIEVABILITY_UPDATED;
  } else if (hashCode == ASSERTION_CREATED_HASH) {
    return ServiceEventType::ASSERTION_CREATED;
  } else if (hashCode == ASSERTION_UPDATED_HASH) {
    return ServiceEventType::ASSERTION_UPDATED;
  } else if (hashCode == ASSERTION_DELETED_HASH) {
    return ServiceEventType::ASSERTION_DELETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ServiceEventType>(hashCode);
  }

  return ServiceEventType::NOT_SET;
}

Aws::String GetNameForServiceEventType(ServiceEventType enumValue) {
  switch (enumValue) {
    case ServiceEventType::NOT_SET:
      return {};
    case ServiceEventType::SERVICE_CREATED:
      return "SERVICE_CREATED";
    case ServiceEventType::SERVICE_DELETED:
      return "SERVICE_DELETED";
    case ServiceEventType::SERVICE_SYSTEM_ASSOCIATED:
      return "SERVICE_SYSTEM_ASSOCIATED";
    case ServiceEventType::SERVICE_SYSTEM_DISASSOCIATED:
      return "SERVICE_SYSTEM_DISASSOCIATED";
    case ServiceEventType::SERVICE_RESOURCES_ASSOCIATED:
      return "SERVICE_RESOURCES_ASSOCIATED";
    case ServiceEventType::SERVICE_RESOURCES_DISASSOCIATED:
      return "SERVICE_RESOURCES_DISASSOCIATED";
    case ServiceEventType::SERVICE_WORKFLOW_UPDATED:
      return "SERVICE_WORKFLOW_UPDATED";
    case ServiceEventType::SERVICE_INPUT_SOURCES_UPDATED:
      return "SERVICE_INPUT_SOURCES_UPDATED";
    case ServiceEventType::SERVICE_POLICY_ASSOCIATED:
      return "SERVICE_POLICY_ASSOCIATED";
    case ServiceEventType::SERVICE_POLICY_DISASSOCIATED:
      return "SERVICE_POLICY_DISASSOCIATED";
    case ServiceEventType::SERVICE_FUNCTION_CREATED:
      return "SERVICE_FUNCTION_CREATED";
    case ServiceEventType::SERVICE_FUNCTION_UPDATED:
      return "SERVICE_FUNCTION_UPDATED";
    case ServiceEventType::SERVICE_FUNCTION_DELETED:
      return "SERVICE_FUNCTION_DELETED";
    case ServiceEventType::SERVICE_FUNCTION_RESOURCES_ADDED:
      return "SERVICE_FUNCTION_RESOURCES_ADDED";
    case ServiceEventType::SERVICE_FUNCTION_RESOURCES_REMOVED:
      return "SERVICE_FUNCTION_RESOURCES_REMOVED";
    case ServiceEventType::SERVICE_ACHIEVABILITY_UPDATED:
      return "SERVICE_ACHIEVABILITY_UPDATED";
    case ServiceEventType::ASSERTION_CREATED:
      return "ASSERTION_CREATED";
    case ServiceEventType::ASSERTION_UPDATED:
      return "ASSERTION_UPDATED";
    case ServiceEventType::ASSERTION_DELETED:
      return "ASSERTION_DELETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ServiceEventTypeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
