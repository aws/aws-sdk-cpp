/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace repostspace
{
namespace Model
{
  enum class FeatureEnableParameter
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace FeatureEnableParameterMapper
{
AWS_REPOSTSPACE_API FeatureEnableParameter GetFeatureEnableParameterForName(const Aws::String& name);

AWS_REPOSTSPACE_API Aws::String GetNameForFeatureEnableParameter(FeatureEnableParameter value);
} // namespace FeatureEnableParameterMapper
} // namespace Model
} // namespace repostspace
} // namespace Aws
