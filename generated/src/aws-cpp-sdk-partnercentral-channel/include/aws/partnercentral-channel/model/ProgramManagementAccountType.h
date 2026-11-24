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
enum class ProgramManagementAccountType { NOT_SET, RESALE_BILLING_TRANSFER, MANAGED_SERVICES };

namespace ProgramManagementAccountTypeMapper {
AWS_PARTNERCENTRALCHANNEL_API ProgramManagementAccountType GetProgramManagementAccountTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALCHANNEL_API Aws::String GetNameForProgramManagementAccountType(ProgramManagementAccountType value);
}  // namespace ProgramManagementAccountTypeMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
