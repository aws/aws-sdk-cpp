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
  enum class SaudiArabiaTaxRegistrationNumberType
  {
    NOT_SET,
    TaxRegistrationNumber,
    TaxIdentificationNumber,
    CommercialRegistrationNumber
  };

namespace SaudiArabiaTaxRegistrationNumberTypeMapper
{
AWS_TAXSETTINGS_API SaudiArabiaTaxRegistrationNumberType GetSaudiArabiaTaxRegistrationNumberTypeForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForSaudiArabiaTaxRegistrationNumberType(SaudiArabiaTaxRegistrationNumberType value);
} // namespace SaudiArabiaTaxRegistrationNumberTypeMapper
} // namespace Model
} // namespace TaxSettings
} // namespace Aws
