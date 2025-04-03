/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class AttachmentContentTransferEncoding
  {
    NOT_SET,
    BASE64,
    QUOTED_PRINTABLE,
    SEVEN_BIT
  };

namespace AttachmentContentTransferEncodingMapper
{
AWS_SESV2_API AttachmentContentTransferEncoding GetAttachmentContentTransferEncodingForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForAttachmentContentTransferEncoding(AttachmentContentTransferEncoding value);
} // namespace AttachmentContentTransferEncodingMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
