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
  enum class SearchQueryScopeType
  {
    NOT_SET,
    NAME,
    CONTENT
  };

namespace SearchQueryScopeTypeMapper
{
AWS_WORKDOCS_API SearchQueryScopeType GetSearchQueryScopeTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForSearchQueryScopeType(SearchQueryScopeType value);
} // namespace SearchQueryScopeTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
