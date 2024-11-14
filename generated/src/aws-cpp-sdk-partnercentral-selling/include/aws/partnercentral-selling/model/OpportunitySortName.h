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
  enum class OpportunitySortName
  {
    NOT_SET,
    LastModifiedDate,
    Identifier,
    CustomerCompanyName
  };

namespace OpportunitySortNameMapper
{
AWS_PARTNERCENTRALSELLING_API OpportunitySortName GetOpportunitySortNameForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForOpportunitySortName(OpportunitySortName value);
} // namespace OpportunitySortNameMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
