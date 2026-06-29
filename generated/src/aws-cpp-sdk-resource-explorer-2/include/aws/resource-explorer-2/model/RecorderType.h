/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>

namespace Aws {
namespace ResourceExplorer2 {
namespace Model {
enum class RecorderType { NOT_SET, AWS, THIRD_PARTY };

namespace RecorderTypeMapper {
AWS_RESOURCEEXPLORER2_API RecorderType GetRecorderTypeForName(const Aws::String& name);

AWS_RESOURCEEXPLORER2_API Aws::String GetNameForRecorderType(RecorderType value);
}  // namespace RecorderTypeMapper
}  // namespace Model
}  // namespace ResourceExplorer2
}  // namespace Aws
