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
  enum class EndpointErrorCondition
  {
    NOT_SET,
    STALE_MANIFEST,
    INCOMPLETE_MANIFEST,
    MISSING_DRM_KEY,
    SLATE_INPUT
  };

namespace EndpointErrorConditionMapper
{
AWS_MEDIAPACKAGEV2_API EndpointErrorCondition GetEndpointErrorConditionForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForEndpointErrorCondition(EndpointErrorCondition value);
} // namespace EndpointErrorConditionMapper
} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
