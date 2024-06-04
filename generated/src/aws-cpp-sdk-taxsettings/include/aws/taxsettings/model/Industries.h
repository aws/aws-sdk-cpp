/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TaxSettings
{
namespace Model
{
  enum class Industries
  {
    NOT_SET,
    CirculatingOrg,
    ProfessionalOrg,
    Banks,
    Insurance,
    PensionAndBenefitFunds,
    DevelopmentAgencies
  };

namespace IndustriesMapper
{
AWS_TAXSETTINGS_API Industries GetIndustriesForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForIndustries(Industries value);
} // namespace IndustriesMapper
} // namespace Model
} // namespace TaxSettings
} // namespace Aws
