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
  enum class SearchResourceType
  {
    NOT_SET,
    FOLDER,
    DOCUMENT,
    COMMENT,
    DOCUMENT_VERSION
  };

namespace SearchResourceTypeMapper
{
AWS_WORKDOCS_API SearchResourceType GetSearchResourceTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForSearchResourceType(SearchResourceType value);
} // namespace SearchResourceTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
