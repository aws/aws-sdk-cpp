/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3-crt/S3Crt_EXPORTS.h>

namespace Aws {
namespace S3Crt {
namespace Model {
enum class Permission { NOT_SET, FULL_CONTROL, WRITE, WRITE_ACP, READ, READ_ACP };

namespace PermissionMapper {
AWS_S3CRT_API Permission GetPermissionForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForPermission(Permission value);
}  // namespace PermissionMapper
}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
