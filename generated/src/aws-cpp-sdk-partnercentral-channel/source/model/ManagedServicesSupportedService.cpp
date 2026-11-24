/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-channel/model/ManagedServicesSupportedService.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
namespace ManagedServicesSupportedServiceMapper {

static const int MONITORING_HASH = HashingUtils::HashString("MONITORING");
static const int PATCHING_HASH = HashingUtils::HashString("PATCHING");
static const int SECURITY_HASH = HashingUtils::HashString("SECURITY");
static const int BACKUP_AND_DISASTER_RECOVERY_HASH = HashingUtils::HashString("BACKUP_AND_DISASTER_RECOVERY");
static const int FINANCIAL_OPERATIONS_HASH = HashingUtils::HashString("FINANCIAL_OPERATIONS");
static const int INFRASTRUCTURE_AS_CODE_AND_AUTOMATION_HASH = HashingUtils::HashString("INFRASTRUCTURE_AS_CODE_AND_AUTOMATION");
static const int WELL_ARCHITECTED_HASH = HashingUtils::HashString("WELL_ARCHITECTED");
static const int ARTIFICIAL_INTELLIGENCE_AND_MACHINE_LEARNING_OPERATIONS_HASH =
    HashingUtils::HashString("ARTIFICIAL_INTELLIGENCE_AND_MACHINE_LEARNING_OPERATIONS");

ManagedServicesSupportedService GetManagedServicesSupportedServiceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MONITORING_HASH) {
    return ManagedServicesSupportedService::MONITORING;
  } else if (hashCode == PATCHING_HASH) {
    return ManagedServicesSupportedService::PATCHING;
  } else if (hashCode == SECURITY_HASH) {
    return ManagedServicesSupportedService::SECURITY;
  } else if (hashCode == BACKUP_AND_DISASTER_RECOVERY_HASH) {
    return ManagedServicesSupportedService::BACKUP_AND_DISASTER_RECOVERY;
  } else if (hashCode == FINANCIAL_OPERATIONS_HASH) {
    return ManagedServicesSupportedService::FINANCIAL_OPERATIONS;
  } else if (hashCode == INFRASTRUCTURE_AS_CODE_AND_AUTOMATION_HASH) {
    return ManagedServicesSupportedService::INFRASTRUCTURE_AS_CODE_AND_AUTOMATION;
  } else if (hashCode == WELL_ARCHITECTED_HASH) {
    return ManagedServicesSupportedService::WELL_ARCHITECTED;
  } else if (hashCode == ARTIFICIAL_INTELLIGENCE_AND_MACHINE_LEARNING_OPERATIONS_HASH) {
    return ManagedServicesSupportedService::ARTIFICIAL_INTELLIGENCE_AND_MACHINE_LEARNING_OPERATIONS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ManagedServicesSupportedService>(hashCode);
  }

  return ManagedServicesSupportedService::NOT_SET;
}

Aws::String GetNameForManagedServicesSupportedService(ManagedServicesSupportedService enumValue) {
  switch (enumValue) {
    case ManagedServicesSupportedService::NOT_SET:
      return {};
    case ManagedServicesSupportedService::MONITORING:
      return "MONITORING";
    case ManagedServicesSupportedService::PATCHING:
      return "PATCHING";
    case ManagedServicesSupportedService::SECURITY:
      return "SECURITY";
    case ManagedServicesSupportedService::BACKUP_AND_DISASTER_RECOVERY:
      return "BACKUP_AND_DISASTER_RECOVERY";
    case ManagedServicesSupportedService::FINANCIAL_OPERATIONS:
      return "FINANCIAL_OPERATIONS";
    case ManagedServicesSupportedService::INFRASTRUCTURE_AS_CODE_AND_AUTOMATION:
      return "INFRASTRUCTURE_AS_CODE_AND_AUTOMATION";
    case ManagedServicesSupportedService::WELL_ARCHITECTED:
      return "WELL_ARCHITECTED";
    case ManagedServicesSupportedService::ARTIFICIAL_INTELLIGENCE_AND_MACHINE_LEARNING_OPERATIONS:
      return "ARTIFICIAL_INTELLIGENCE_AND_MACHINE_LEARNING_OPERATIONS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ManagedServicesSupportedServiceMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
