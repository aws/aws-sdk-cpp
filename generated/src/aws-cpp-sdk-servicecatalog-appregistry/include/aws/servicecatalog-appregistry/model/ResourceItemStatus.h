/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppRegistry
{
namespace Model
{
  enum class ResourceItemStatus
  {
    NOT_SET,
    SUCCESS,
    FAILED,
    IN_PROGRESS,
    SKIPPED
  };

namespace ResourceItemStatusMapper
{
AWS_APPREGISTRY_API ResourceItemStatus GetResourceItemStatusForName(const Aws::String& name);

AWS_APPREGISTRY_API Aws::String GetNameForResourceItemStatus(ResourceItemStatus value);
} // namespace ResourceItemStatusMapper
} // namespace Model
} // namespace AppRegistry
} // namespace Aws
