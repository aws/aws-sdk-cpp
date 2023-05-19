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
  enum class ResourceTypeNotFound
  {
    NOT_SET,
    CHANNEL_GROUP,
    CHANNEL,
    ORIGIN_ENDPOINT
  };

namespace ResourceTypeNotFoundMapper
{
AWS_MEDIAPACKAGEV2_API ResourceTypeNotFound GetResourceTypeNotFoundForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForResourceTypeNotFound(ResourceTypeNotFound value);
} // namespace ResourceTypeNotFoundMapper
} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
