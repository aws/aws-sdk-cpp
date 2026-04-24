/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/Outposts_EXPORTS.h>

namespace Aws {
namespace Outposts {
namespace Model {
enum class OrderStatus {
  NOT_SET,
  RECEIVED,
  PENDING,
  PROCESSING,
  INSTALLING,
  FULFILLED,
  CANCELLED,
  PREPARING,
  IN_PROGRESS,
  DELIVERED,
  COMPLETED,
  ERROR_
};

namespace OrderStatusMapper {
AWS_OUTPOSTS_API OrderStatus GetOrderStatusForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForOrderStatus(OrderStatus value);
}  // namespace OrderStatusMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
