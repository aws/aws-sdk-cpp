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
  enum class IsraelCustomerType
  {
    NOT_SET,
    Business,
    Individual
  };

namespace IsraelCustomerTypeMapper
{
AWS_TAXSETTINGS_API IsraelCustomerType GetIsraelCustomerTypeForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForIsraelCustomerType(IsraelCustomerType value);
} // namespace IsraelCustomerTypeMapper
} // namespace Model
} // namespace TaxSettings
} // namespace Aws
