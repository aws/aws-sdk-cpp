/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

namespace Aws {
namespace QConnect {
namespace Model {
enum class ToolType { NOT_SET, MODEL_CONTEXT_PROTOCOL, RETURN_TO_CONTROL, CONSTANT };

namespace ToolTypeMapper {
AWS_QCONNECT_API ToolType GetToolTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForToolType(ToolType value);
}  // namespace ToolTypeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
