/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SupplyChain
{
namespace Model
{
  enum class InstanceState
  {
    NOT_SET,
    Initializing,
    Active,
    CreateFailed,
    DeleteFailed,
    Deleting,
    Deleted
  };

namespace InstanceStateMapper
{
AWS_SUPPLYCHAIN_API InstanceState GetInstanceStateForName(const Aws::String& name);

AWS_SUPPLYCHAIN_API Aws::String GetNameForInstanceState(InstanceState value);
} // namespace InstanceStateMapper
} // namespace Model
} // namespace SupplyChain
} // namespace Aws
