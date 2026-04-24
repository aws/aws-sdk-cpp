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
enum class ListProgramManagementAccountsSortName { NOT_SET, UpdatedAt };

namespace ListProgramManagementAccountsSortNameMapper {
AWS_PARTNERCENTRALCHANNEL_API ListProgramManagementAccountsSortName
GetListProgramManagementAccountsSortNameForName(const Aws::String& name);

AWS_PARTNERCENTRALCHANNEL_API Aws::String GetNameForListProgramManagementAccountsSortName(ListProgramManagementAccountsSortName value);
}  // namespace ListProgramManagementAccountsSortNameMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
