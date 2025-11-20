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
enum class Coverage { NOT_SET, ENTIRE_ORGANIZATION, MANAGEMENT_ACCOUNT_ONLY };

namespace CoverageMapper {
AWS_PARTNERCENTRALCHANNEL_API Coverage GetCoverageForName(const Aws::String& name);

AWS_PARTNERCENTRALCHANNEL_API Aws::String GetNameForCoverage(Coverage value);
}  // namespace CoverageMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
