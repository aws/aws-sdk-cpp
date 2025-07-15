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
  enum class FeatureEnableStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED,
    NOT_ALLOWED
  };

namespace FeatureEnableStatusMapper
{
AWS_REPOSTSPACE_API FeatureEnableStatus GetFeatureEnableStatusForName(const Aws::String& name);

AWS_REPOSTSPACE_API Aws::String GetNameForFeatureEnableStatus(FeatureEnableStatus value);
} // namespace FeatureEnableStatusMapper
} // namespace Model
} // namespace repostspace
} // namespace Aws
