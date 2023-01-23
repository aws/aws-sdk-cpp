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
  enum class DocumentVersionStatus
  {
    NOT_SET,
    ACTIVE
  };

namespace DocumentVersionStatusMapper
{
AWS_WORKDOCS_API DocumentVersionStatus GetDocumentVersionStatusForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForDocumentVersionStatus(DocumentVersionStatus value);
} // namespace DocumentVersionStatusMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
