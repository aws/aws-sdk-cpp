/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Snowball
{
namespace Model
{
  enum class AddressType
  {
    NOT_SET,
    CUST_PICKUP,
    AWS_SHIP
  };

namespace AddressTypeMapper
{
AWS_SNOWBALL_API AddressType GetAddressTypeForName(const Aws::String& name);

AWS_SNOWBALL_API Aws::String GetNameForAddressType(AddressType value);
} // namespace AddressTypeMapper
} // namespace Model
} // namespace Snowball
} // namespace Aws
