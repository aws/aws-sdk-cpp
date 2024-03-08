/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{
  enum class Order
  {
    NOT_SET,
    ASC,
    DESC
  };

namespace OrderMapper
{
AWS_CONNECTWISDOMSERVICE_API Order GetOrderForName(const Aws::String& name);

AWS_CONNECTWISDOMSERVICE_API Aws::String GetNameForOrder(Order value);
} // namespace OrderMapper
} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
