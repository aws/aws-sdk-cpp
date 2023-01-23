/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RAM
{
namespace Model
{
  enum class ResourceShareStatus
  {
    NOT_SET,
    PENDING,
    ACTIVE,
    FAILED,
    DELETING,
    DELETED
  };

namespace ResourceShareStatusMapper
{
AWS_RAM_API ResourceShareStatus GetResourceShareStatusForName(const Aws::String& name);

AWS_RAM_API Aws::String GetNameForResourceShareStatus(ResourceShareStatus value);
} // namespace ResourceShareStatusMapper
} // namespace Model
} // namespace RAM
} // namespace Aws
