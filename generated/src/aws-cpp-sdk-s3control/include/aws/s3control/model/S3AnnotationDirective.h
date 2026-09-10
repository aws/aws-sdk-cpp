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
enum class S3AnnotationDirective { NOT_SET, COPY, EXCLUDE };

namespace S3AnnotationDirectiveMapper {
AWS_S3CONTROL_API S3AnnotationDirective GetS3AnnotationDirectiveForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForS3AnnotationDirective(S3AnnotationDirective value);
}  // namespace S3AnnotationDirectiveMapper
}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
