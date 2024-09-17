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
  enum class MalaysiaServiceTaxCode
  {
    NOT_SET,
    Consultancy,
    Digital_Service_And_Electronic_Medium,
    IT_Services,
    Training_Or_Coaching
  };

namespace MalaysiaServiceTaxCodeMapper
{
AWS_TAXSETTINGS_API MalaysiaServiceTaxCode GetMalaysiaServiceTaxCodeForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForMalaysiaServiceTaxCode(MalaysiaServiceTaxCode value);
} // namespace MalaysiaServiceTaxCodeMapper
} // namespace Model
} // namespace TaxSettings
} // namespace Aws
