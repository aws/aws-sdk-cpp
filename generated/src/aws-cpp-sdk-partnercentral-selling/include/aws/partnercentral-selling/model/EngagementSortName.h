/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{
  enum class EngagementSortName
  {
    NOT_SET,
    CreatedDate
  };

namespace EngagementSortNameMapper
{
AWS_PARTNERCENTRALSELLING_API EngagementSortName GetEngagementSortNameForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForEngagementSortName(EngagementSortName value);
} // namespace EngagementSortNameMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
