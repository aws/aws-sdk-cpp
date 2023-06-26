/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Outposts
{
namespace Model
{
  enum class OrderType
  {
    NOT_SET,
    OUTPOST,
    REPLACEMENT
  };

namespace OrderTypeMapper
{
AWS_OUTPOSTS_API OrderType GetOrderTypeForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForOrderType(OrderType value);
} // namespace OrderTypeMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
