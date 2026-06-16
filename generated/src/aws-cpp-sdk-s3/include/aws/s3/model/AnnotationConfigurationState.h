/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/S3_EXPORTS.h>

namespace Aws {
namespace S3 {
namespace Model {
enum class AnnotationConfigurationState { NOT_SET, ENABLED, DISABLED };

namespace AnnotationConfigurationStateMapper {
AWS_S3_API AnnotationConfigurationState GetAnnotationConfigurationStateForName(const Aws::String& name);

AWS_S3_API Aws::String GetNameForAnnotationConfigurationState(AnnotationConfigurationState value);
}  // namespace AnnotationConfigurationStateMapper
}  // namespace Model
}  // namespace S3
}  // namespace Aws
