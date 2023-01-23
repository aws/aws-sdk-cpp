/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class FeatureStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace FeatureStatusMapper
{
AWS_SESV2_API FeatureStatus GetFeatureStatusForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForFeatureStatus(FeatureStatus value);
} // namespace FeatureStatusMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
