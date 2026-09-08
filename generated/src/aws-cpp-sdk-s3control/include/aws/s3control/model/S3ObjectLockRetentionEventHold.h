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
enum class S3ObjectLockRetentionEventHold { NOT_SET, ON, OFF };

namespace S3ObjectLockRetentionEventHoldMapper {
AWS_S3CONTROL_API S3ObjectLockRetentionEventHold GetS3ObjectLockRetentionEventHoldForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForS3ObjectLockRetentionEventHold(S3ObjectLockRetentionEventHold value);
}  // namespace S3ObjectLockRetentionEventHoldMapper
}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
