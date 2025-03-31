/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Control
{
namespace Model
{
  enum class ScopePermission
  {
    NOT_SET,
    GetObject,
    GetObjectAttributes,
    ListMultipartUploadParts,
    ListBucket,
    ListBucketMultipartUploads,
    PutObject,
    DeleteObject,
    AbortMultipartUpload
  };

namespace ScopePermissionMapper
{
AWS_S3CONTROL_API ScopePermission GetScopePermissionForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForScopePermission(ScopePermission value);
} // namespace ScopePermissionMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
