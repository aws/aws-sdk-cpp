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
  enum class ResourceSortType
  {
    NOT_SET,
    DATE,
    NAME
  };

namespace ResourceSortTypeMapper
{
AWS_WORKDOCS_API ResourceSortType GetResourceSortTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForResourceSortType(ResourceSortType value);
} // namespace ResourceSortTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
