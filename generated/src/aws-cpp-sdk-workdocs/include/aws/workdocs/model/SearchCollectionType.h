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
  enum class SearchCollectionType
  {
    NOT_SET,
    OWNED,
    SHARED_WITH_ME
  };

namespace SearchCollectionTypeMapper
{
AWS_WORKDOCS_API SearchCollectionType GetSearchCollectionTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForSearchCollectionType(SearchCollectionType value);
} // namespace SearchCollectionTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
