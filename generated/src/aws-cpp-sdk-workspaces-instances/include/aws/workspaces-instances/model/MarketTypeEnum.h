/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{
  enum class MarketTypeEnum
  {
    NOT_SET,
    spot,
    capacity_block
  };

namespace MarketTypeEnumMapper
{
AWS_WORKSPACESINSTANCES_API MarketTypeEnum GetMarketTypeEnumForName(const Aws::String& name);

AWS_WORKSPACESINSTANCES_API Aws::String GetNameForMarketTypeEnum(MarketTypeEnum value);
} // namespace MarketTypeEnumMapper
} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
