/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/S3Control_EXPORTS.h>

namespace Aws {
namespace S3Control {
namespace Model {
enum class SseKmsEncryptedObjectsStatus { NOT_SET, Enabled, Disabled };

namespace SseKmsEncryptedObjectsStatusMapper {
AWS_S3CONTROL_API SseKmsEncryptedObjectsStatus GetSseKmsEncryptedObjectsStatusForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForSseKmsEncryptedObjectsStatus(SseKmsEncryptedObjectsStatus value);
}  // namespace SseKmsEncryptedObjectsStatusMapper
}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
