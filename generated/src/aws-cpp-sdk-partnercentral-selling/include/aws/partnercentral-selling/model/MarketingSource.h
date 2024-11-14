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
  enum class MarketingSource
  {
    NOT_SET,
    Marketing_Activity,
    None
  };

namespace MarketingSourceMapper
{
AWS_PARTNERCENTRALSELLING_API MarketingSource GetMarketingSourceForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForMarketingSource(MarketingSource value);
} // namespace MarketingSourceMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
