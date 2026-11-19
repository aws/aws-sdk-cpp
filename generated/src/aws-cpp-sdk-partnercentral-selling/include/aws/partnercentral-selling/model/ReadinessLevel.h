/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
enum class ReadinessLevel { NOT_SET, SalesReady, MarketingReady, LowPotential };

namespace ReadinessLevelMapper {
AWS_PARTNERCENTRALSELLING_API ReadinessLevel GetReadinessLevelForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForReadinessLevel(ReadinessLevel value);
}  // namespace ReadinessLevelMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
