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
enum class Format { NOT_SET, CSV, Parquet };

namespace FormatMapper {
AWS_S3CONTROL_API Format GetFormatForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForFormat(Format value);
}  // namespace FormatMapper
}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
