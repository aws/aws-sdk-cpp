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
  enum class UzbekistanTaxRegistrationNumberType
  {
    NOT_SET,
    Business,
    Individual
  };

namespace UzbekistanTaxRegistrationNumberTypeMapper
{
AWS_TAXSETTINGS_API UzbekistanTaxRegistrationNumberType GetUzbekistanTaxRegistrationNumberTypeForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForUzbekistanTaxRegistrationNumberType(UzbekistanTaxRegistrationNumberType value);
} // namespace UzbekistanTaxRegistrationNumberTypeMapper
} // namespace Model
} // namespace TaxSettings
} // namespace Aws
