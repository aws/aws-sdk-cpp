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
  enum class ContentCategoryType
  {
    NOT_SET,
    IMAGE,
    DOCUMENT,
    PDF,
    SPREADSHEET,
    PRESENTATION,
    AUDIO,
    VIDEO,
    SOURCE_CODE,
    OTHER
  };

namespace ContentCategoryTypeMapper
{
AWS_WORKDOCS_API ContentCategoryType GetContentCategoryTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForContentCategoryType(ContentCategoryType value);
} // namespace ContentCategoryTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
