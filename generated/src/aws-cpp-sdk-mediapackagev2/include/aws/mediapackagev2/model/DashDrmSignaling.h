/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{
  enum class DashDrmSignaling
  {
    NOT_SET,
    INDIVIDUAL,
    REFERENCED
  };

namespace DashDrmSignalingMapper
{
AWS_MEDIAPACKAGEV2_API DashDrmSignaling GetDashDrmSignalingForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForDashDrmSignaling(DashDrmSignaling value);
} // namespace DashDrmSignalingMapper
} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
