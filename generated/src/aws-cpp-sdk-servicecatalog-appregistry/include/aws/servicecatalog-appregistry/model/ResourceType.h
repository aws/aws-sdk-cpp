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
  enum class ResourceType
  {
    NOT_SET,
    CFN_STACK,
    RESOURCE_TAG_VALUE
  };

namespace ResourceTypeMapper
{
AWS_APPREGISTRY_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_APPREGISTRY_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace AppRegistry
} // namespace Aws
