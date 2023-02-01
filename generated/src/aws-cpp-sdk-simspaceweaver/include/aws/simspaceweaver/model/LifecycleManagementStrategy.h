/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SimSpaceWeaver
{
namespace Model
{
  enum class LifecycleManagementStrategy
  {
    NOT_SET,
    Unknown,
    PerWorker,
    BySpatialSubdivision,
    ByRequest
  };

namespace LifecycleManagementStrategyMapper
{
AWS_SIMSPACEWEAVER_API LifecycleManagementStrategy GetLifecycleManagementStrategyForName(const Aws::String& name);

AWS_SIMSPACEWEAVER_API Aws::String GetNameForLifecycleManagementStrategy(LifecycleManagementStrategy value);
} // namespace LifecycleManagementStrategyMapper
} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
