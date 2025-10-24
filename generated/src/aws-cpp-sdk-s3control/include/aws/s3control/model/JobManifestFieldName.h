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
enum class JobManifestFieldName { NOT_SET, Ignore, Bucket, Key, VersionId };

namespace JobManifestFieldNameMapper {
AWS_S3CONTROL_API JobManifestFieldName GetJobManifestFieldNameForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForJobManifestFieldName(JobManifestFieldName value);
}  // namespace JobManifestFieldNameMapper
}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
