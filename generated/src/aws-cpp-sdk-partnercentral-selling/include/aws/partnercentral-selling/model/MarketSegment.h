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
enum class MarketSegment { NOT_SET, Enterprise, Large, Medium, Small, Micro };

namespace MarketSegmentMapper {
AWS_PARTNERCENTRALSELLING_API MarketSegment GetMarketSegmentForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForMarketSegment(MarketSegment value);
}  // namespace MarketSegmentMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
