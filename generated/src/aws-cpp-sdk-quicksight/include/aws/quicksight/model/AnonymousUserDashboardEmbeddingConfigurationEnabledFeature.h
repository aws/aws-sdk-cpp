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
  enum class AnonymousUserDashboardEmbeddingConfigurationEnabledFeature
  {
    NOT_SET,
    SHARED_VIEW
  };

namespace AnonymousUserDashboardEmbeddingConfigurationEnabledFeatureMapper
{
AWS_QUICKSIGHT_API AnonymousUserDashboardEmbeddingConfigurationEnabledFeature GetAnonymousUserDashboardEmbeddingConfigurationEnabledFeatureForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAnonymousUserDashboardEmbeddingConfigurationEnabledFeature(AnonymousUserDashboardEmbeddingConfigurationEnabledFeature value);
} // namespace AnonymousUserDashboardEmbeddingConfigurationEnabledFeatureMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
