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
  enum class DocumentThumbnailType
  {
    NOT_SET,
    SMALL,
    SMALL_HQ,
    LARGE
  };

namespace DocumentThumbnailTypeMapper
{
AWS_WORKDOCS_API DocumentThumbnailType GetDocumentThumbnailTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForDocumentThumbnailType(DocumentThumbnailType value);
} // namespace DocumentThumbnailTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
