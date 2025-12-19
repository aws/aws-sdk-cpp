/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

namespace Aws {
namespace MediaTailor {
namespace Model {
enum class CompressionMethod { NOT_SET, NONE, GZIP };

namespace CompressionMethodMapper {
AWS_MEDIATAILOR_API CompressionMethod GetCompressionMethodForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForCompressionMethod(CompressionMethod value);
}  // namespace CompressionMethodMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
