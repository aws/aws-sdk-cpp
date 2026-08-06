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
enum class FunctionType { NOT_SET, HTTP_REQUEST, CUSTOM_OUTPUT, CONCURRENT_EXECUTOR, SEQUENTIAL_EXECUTOR };

namespace FunctionTypeMapper {
AWS_MEDIATAILOR_API FunctionType GetFunctionTypeForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForFunctionType(FunctionType value);
}  // namespace FunctionTypeMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
