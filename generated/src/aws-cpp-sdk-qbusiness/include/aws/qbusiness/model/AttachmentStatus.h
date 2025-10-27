/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>

namespace Aws {
namespace QBusiness {
namespace Model {
enum class AttachmentStatus { NOT_SET, FAILED, SUCCESS };

namespace AttachmentStatusMapper {
AWS_QBUSINESS_API AttachmentStatus GetAttachmentStatusForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForAttachmentStatus(AttachmentStatus value);
}  // namespace AttachmentStatusMapper
}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
