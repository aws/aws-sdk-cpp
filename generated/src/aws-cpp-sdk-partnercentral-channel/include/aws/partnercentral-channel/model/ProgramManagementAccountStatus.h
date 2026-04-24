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
enum class ProgramManagementAccountStatus { NOT_SET, PENDING, ACTIVE, INACTIVE };

namespace ProgramManagementAccountStatusMapper {
AWS_PARTNERCENTRALCHANNEL_API ProgramManagementAccountStatus GetProgramManagementAccountStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALCHANNEL_API Aws::String GetNameForProgramManagementAccountStatus(ProgramManagementAccountStatus value);
}  // namespace ProgramManagementAccountStatusMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
