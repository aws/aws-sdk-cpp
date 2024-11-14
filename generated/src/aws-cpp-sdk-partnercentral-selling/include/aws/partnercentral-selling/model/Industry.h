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
  enum class Industry
  {
    NOT_SET,
    Aerospace,
    Agriculture,
    Automotive,
    Computers_and_Electronics,
    Consumer_Goods,
    Education,
    Energy_Oil_and_Gas,
    Energy_Power_and_Utilities,
    Financial_Services,
    Gaming,
    Government,
    Healthcare,
    Hospitality,
    Life_Sciences,
    Manufacturing,
    Marketing_and_Advertising,
    Media_and_Entertainment,
    Mining,
    Non_Profit_Organization,
    Professional_Services,
    Real_Estate_and_Construction,
    Retail,
    Software_and_Internet,
    Telecommunications,
    Transportation_and_Logistics,
    Travel,
    Wholesale_and_Distribution,
    Other
  };

namespace IndustryMapper
{
AWS_PARTNERCENTRALSELLING_API Industry GetIndustryForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForIndustry(Industry value);
} // namespace IndustryMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
