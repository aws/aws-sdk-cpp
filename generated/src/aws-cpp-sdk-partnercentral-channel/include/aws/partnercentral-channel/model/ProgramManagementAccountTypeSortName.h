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
enum class ProgramManagementAccountTypeSortName { NOT_SET, UpdatedAt };

namespace ProgramManagementAccountTypeSortNameMapper {
AWS_PARTNERCENTRALCHANNEL_API ProgramManagementAccountTypeSortName GetProgramManagementAccountTypeSortNameForName(const Aws::String& name);

AWS_PARTNERCENTRALCHANNEL_API Aws::String GetNameForProgramManagementAccountTypeSortName(ProgramManagementAccountTypeSortName value);
}  // namespace ProgramManagementAccountTypeSortNameMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
