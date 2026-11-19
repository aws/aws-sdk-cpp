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
enum class EngagementGroupSortName { NOT_SET, Count, UpdatedAt };

namespace EngagementGroupSortNameMapper {
AWS_PARTNERCENTRALSELLING_API EngagementGroupSortName GetEngagementGroupSortNameForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForEngagementGroupSortName(EngagementGroupSortName value);
}  // namespace EngagementGroupSortNameMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
