/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Synthetics
{
namespace Model
{
  enum class ResourceToTag
  {
    NOT_SET,
    lambda_function
  };

namespace ResourceToTagMapper
{
AWS_SYNTHETICS_API ResourceToTag GetResourceToTagForName(const Aws::String& name);

AWS_SYNTHETICS_API Aws::String GetNameForResourceToTag(ResourceToTag value);
} // namespace ResourceToTagMapper
} // namespace Model
} // namespace Synthetics
} // namespace Aws
