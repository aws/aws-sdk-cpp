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
  enum class LineItemStatus
  {
    NOT_SET,
    PREPARING,
    BUILDING,
    SHIPPED,
    DELIVERED,
    INSTALLING,
    INSTALLED,
    ERROR_,
    CANCELLED,
    REPLACED
  };

namespace LineItemStatusMapper
{
AWS_OUTPOSTS_API LineItemStatus GetLineItemStatusForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForLineItemStatus(LineItemStatus value);
} // namespace LineItemStatusMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
