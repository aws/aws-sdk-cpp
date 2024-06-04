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
  enum class TaxRegistrationNumberType
  {
    NOT_SET,
    TaxRegistrationNumber,
    LocalRegistrationNumber
  };

namespace TaxRegistrationNumberTypeMapper
{
AWS_TAXSETTINGS_API TaxRegistrationNumberType GetTaxRegistrationNumberTypeForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForTaxRegistrationNumberType(TaxRegistrationNumberType value);
} // namespace TaxRegistrationNumberTypeMapper
} // namespace Model
} // namespace TaxSettings
} // namespace Aws
