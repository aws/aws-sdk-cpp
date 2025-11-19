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
enum class Program { NOT_SET, SOLUTION_PROVIDER, DISTRIBUTION, DISTRIBUTION_SELLER };

namespace ProgramMapper {
AWS_PARTNERCENTRALCHANNEL_API Program GetProgramForName(const Aws::String& name);

AWS_PARTNERCENTRALCHANNEL_API Aws::String GetNameForProgram(Program value);
}  // namespace ProgramMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
