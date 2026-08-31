/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/Support_EXPORTS.h>

namespace Aws {
namespace Support {
namespace Model {
enum class UploadStatus { NOT_SET, attachment_ready, attachment_not_ready, failed };

namespace UploadStatusMapper {
AWS_SUPPORT_API UploadStatus GetUploadStatusForName(const Aws::String& name);

AWS_SUPPORT_API Aws::String GetNameForUploadStatus(UploadStatus value);
}  // namespace UploadStatusMapper
}  // namespace Model
}  // namespace Support
}  // namespace Aws
