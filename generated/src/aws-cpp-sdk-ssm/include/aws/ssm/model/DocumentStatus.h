/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class DocumentStatus
  {
    NOT_SET,
    Creating,
    Active,
    Updating,
    Deleting,
    Failed
  };

namespace DocumentStatusMapper
{
AWS_SSM_API DocumentStatus GetDocumentStatusForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForDocumentStatus(DocumentStatus value);
} // namespace DocumentStatusMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
