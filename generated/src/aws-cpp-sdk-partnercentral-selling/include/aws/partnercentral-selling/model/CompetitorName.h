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
  enum class CompetitorName
  {
    NOT_SET,
    Oracle_Cloud,
    On_Prem,
    Co_location,
    Akamai,
    AliCloud,
    Google_Cloud_Platform,
    IBM_Softlayer,
    Microsoft_Azure,
    Other_Cost_Optimization,
    No_Competition,
    _Other
  };

namespace CompetitorNameMapper
{
AWS_PARTNERCENTRALSELLING_API CompetitorName GetCompetitorNameForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForCompetitorName(CompetitorName value);
} // namespace CompetitorNameMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
