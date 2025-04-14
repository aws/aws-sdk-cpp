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
  enum class IndonesiaTaxRegistrationNumberType
  {
    NOT_SET,
    NIK,
    PassportNumber,
    NPWP,
    NITKU
  };

namespace IndonesiaTaxRegistrationNumberTypeMapper
{
AWS_TAXSETTINGS_API IndonesiaTaxRegistrationNumberType GetIndonesiaTaxRegistrationNumberTypeForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForIndonesiaTaxRegistrationNumberType(IndonesiaTaxRegistrationNumberType value);
} // namespace IndonesiaTaxRegistrationNumberTypeMapper
} // namespace Model
} // namespace TaxSettings
} // namespace Aws
