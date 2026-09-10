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
enum class S3ObjectLockEventHold { NOT_SET, ON, OFF };

namespace S3ObjectLockEventHoldMapper {
AWS_S3CONTROL_API S3ObjectLockEventHold GetS3ObjectLockEventHoldForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForS3ObjectLockEventHold(S3ObjectLockEventHold value);
}  // namespace S3ObjectLockEventHoldMapper
}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
