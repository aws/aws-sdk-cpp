/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    FOLDER,
    DOCUMENT
  };

namespace ResourceTypeMapper
{
AWS_WORKDOCS_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
