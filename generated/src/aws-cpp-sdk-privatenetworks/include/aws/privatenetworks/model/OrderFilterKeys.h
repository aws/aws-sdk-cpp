/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{
  enum class OrderFilterKeys
  {
    NOT_SET,
    STATUS,
    NETWORK_SITE
  };

namespace OrderFilterKeysMapper
{
AWS_PRIVATENETWORKS_API OrderFilterKeys GetOrderFilterKeysForName(const Aws::String& name);

AWS_PRIVATENETWORKS_API Aws::String GetNameForOrderFilterKeys(OrderFilterKeys value);
} // namespace OrderFilterKeysMapper
} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
