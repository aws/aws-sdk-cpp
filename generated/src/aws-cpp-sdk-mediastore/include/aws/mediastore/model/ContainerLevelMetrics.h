/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaStore
{
namespace Model
{
  enum class ContainerLevelMetrics
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ContainerLevelMetricsMapper
{
AWS_MEDIASTORE_API ContainerLevelMetrics GetContainerLevelMetricsForName(const Aws::String& name);

AWS_MEDIASTORE_API Aws::String GetNameForContainerLevelMetrics(ContainerLevelMetrics value);
} // namespace ContainerLevelMetricsMapper
} // namespace Model
} // namespace MediaStore
} // namespace Aws
