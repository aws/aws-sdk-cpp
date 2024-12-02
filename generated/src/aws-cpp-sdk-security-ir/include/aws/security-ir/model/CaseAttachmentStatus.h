/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityIR
{
namespace Model
{
  enum class CaseAttachmentStatus
  {
    NOT_SET,
    Verified,
    Failed,
    Pending
  };

namespace CaseAttachmentStatusMapper
{
AWS_SECURITYIR_API CaseAttachmentStatus GetCaseAttachmentStatusForName(const Aws::String& name);

AWS_SECURITYIR_API Aws::String GetNameForCaseAttachmentStatus(CaseAttachmentStatus value);
} // namespace CaseAttachmentStatusMapper
} // namespace Model
} // namespace SecurityIR
} // namespace Aws
