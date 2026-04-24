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
enum class ToolOverrideInputValueType { NOT_SET, STRING, NUMBER, JSON_STRING };

namespace ToolOverrideInputValueTypeMapper {
AWS_QCONNECT_API ToolOverrideInputValueType GetToolOverrideInputValueTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForToolOverrideInputValueType(ToolOverrideInputValueType value);
}  // namespace ToolOverrideInputValueTypeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
