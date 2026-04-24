/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/security-ir/SecurityIR_EXPORTS.h>

namespace Aws {
namespace SecurityIR {
namespace Model {
enum class ActionType { NOT_SET, Evidence, Investigation, Summarization };

namespace ActionTypeMapper {
AWS_SECURITYIR_API ActionType GetActionTypeForName(const Aws::String& name);

AWS_SECURITYIR_API Aws::String GetNameForActionType(ActionType value);
}  // namespace ActionTypeMapper
}  // namespace Model
}  // namespace SecurityIR
}  // namespace Aws
