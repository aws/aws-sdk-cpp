/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/WorkDocs_EXPORTS.h>

namespace Aws {
namespace WorkDocs {
namespace Model {
enum class FolderContentType { NOT_SET, ALL, DOCUMENT, FOLDER };

namespace FolderContentTypeMapper {
AWS_WORKDOCS_API FolderContentType GetFolderContentTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForFolderContentType(FolderContentType value);
}  // namespace FolderContentTypeMapper
}  // namespace Model
}  // namespace WorkDocs
}  // namespace Aws
