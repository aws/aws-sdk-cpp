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
  enum class SupplementalTaxRegistrationType
  {
    NOT_SET,
    VAT
  };

namespace SupplementalTaxRegistrationTypeMapper
{
AWS_TAXSETTINGS_API SupplementalTaxRegistrationType GetSupplementalTaxRegistrationTypeForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForSupplementalTaxRegistrationType(SupplementalTaxRegistrationType value);
} // namespace SupplementalTaxRegistrationTypeMapper
} // namespace Model
} // namespace TaxSettings
} // namespace Aws
