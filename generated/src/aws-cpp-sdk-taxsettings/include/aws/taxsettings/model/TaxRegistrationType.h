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
  enum class TaxRegistrationType
  {
    NOT_SET,
    VAT,
    GST,
    CPF,
    CNPJ,
    SST,
    TIN,
    NRIC
  };

namespace TaxRegistrationTypeMapper
{
AWS_TAXSETTINGS_API TaxRegistrationType GetTaxRegistrationTypeForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForTaxRegistrationType(TaxRegistrationType value);
} // namespace TaxRegistrationTypeMapper
} // namespace Model
} // namespace TaxSettings
} // namespace Aws
