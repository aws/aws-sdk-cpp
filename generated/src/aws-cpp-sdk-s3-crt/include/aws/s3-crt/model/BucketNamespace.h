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
enum class BucketNamespace { NOT_SET, account_regional, global };

namespace BucketNamespaceMapper {
AWS_S3CRT_API BucketNamespace GetBucketNamespaceForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForBucketNamespace(BucketNamespace value);
}  // namespace BucketNamespaceMapper
}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
