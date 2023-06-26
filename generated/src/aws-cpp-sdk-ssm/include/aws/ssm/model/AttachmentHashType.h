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
  enum class AttachmentHashType
  {
    NOT_SET,
    Sha256
  };

namespace AttachmentHashTypeMapper
{
AWS_SSM_API AttachmentHashType GetAttachmentHashTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForAttachmentHashType(AttachmentHashType value);
} // namespace AttachmentHashTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
