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
  enum class SortOrder
  {
    NOT_SET,
    ASC,
    DESC
  };

namespace SortOrderMapper
{
AWS_WORKDOCS_API SortOrder GetSortOrderForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForSortOrder(SortOrder value);
} // namespace SortOrderMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
