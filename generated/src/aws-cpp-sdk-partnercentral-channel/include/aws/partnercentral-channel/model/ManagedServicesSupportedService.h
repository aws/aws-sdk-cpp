/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
enum class ManagedServicesSupportedService {
  NOT_SET,
  MONITORING,
  PATCHING,
  SECURITY,
  BACKUP_AND_DISASTER_RECOVERY,
  FINANCIAL_OPERATIONS,
  INFRASTRUCTURE_AS_CODE_AND_AUTOMATION,
  WELL_ARCHITECTED,
  ARTIFICIAL_INTELLIGENCE_AND_MACHINE_LEARNING_OPERATIONS
};

namespace ManagedServicesSupportedServiceMapper {
AWS_PARTNERCENTRALCHANNEL_API ManagedServicesSupportedService GetManagedServicesSupportedServiceForName(const Aws::String& name);

AWS_PARTNERCENTRALCHANNEL_API Aws::String GetNameForManagedServicesSupportedService(ManagedServicesSupportedService value);
}  // namespace ManagedServicesSupportedServiceMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
