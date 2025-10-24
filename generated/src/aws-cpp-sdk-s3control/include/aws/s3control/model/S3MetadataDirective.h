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
enum class S3MetadataDirective { NOT_SET, COPY, REPLACE };

namespace S3MetadataDirectiveMapper {
AWS_S3CONTROL_API S3MetadataDirective GetS3MetadataDirectiveForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForS3MetadataDirective(S3MetadataDirective value);
}  // namespace S3MetadataDirectiveMapper
}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
