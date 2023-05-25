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
  enum class AttachmentsSourceKey
  {
    NOT_SET,
    SourceUrl,
    S3FileUrl,
    AttachmentReference
  };

namespace AttachmentsSourceKeyMapper
{
AWS_SSM_API AttachmentsSourceKey GetAttachmentsSourceKeyForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForAttachmentsSourceKey(AttachmentsSourceKey value);
} // namespace AttachmentsSourceKeyMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
