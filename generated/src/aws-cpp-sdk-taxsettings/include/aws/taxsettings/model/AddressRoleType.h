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
  enum class AddressRoleType
  {
    NOT_SET,
    TaxAddress,
    BillingAddress,
    ContactAddress
  };

namespace AddressRoleTypeMapper
{
AWS_TAXSETTINGS_API AddressRoleType GetAddressRoleTypeForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForAddressRoleType(AddressRoleType value);
} // namespace AddressRoleTypeMapper
} // namespace Model
} // namespace TaxSettings
} // namespace Aws
