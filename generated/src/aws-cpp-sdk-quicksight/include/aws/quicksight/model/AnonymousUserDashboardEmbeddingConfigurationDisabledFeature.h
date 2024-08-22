/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class AnonymousUserDashboardEmbeddingConfigurationDisabledFeature
  {
    NOT_SET,
    SHARED_VIEW
  };

namespace AnonymousUserDashboardEmbeddingConfigurationDisabledFeatureMapper
{
AWS_QUICKSIGHT_API AnonymousUserDashboardEmbeddingConfigurationDisabledFeature GetAnonymousUserDashboardEmbeddingConfigurationDisabledFeatureForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAnonymousUserDashboardEmbeddingConfigurationDisabledFeature(AnonymousUserDashboardEmbeddingConfigurationDisabledFeature value);
} // namespace AnonymousUserDashboardEmbeddingConfigurationDisabledFeatureMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
