/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/SFN_EXPORTS.h>

namespace Aws {
namespace SFN {
namespace Model {
enum class ValidateStateMachineDefinitionResultCode { NOT_SET, OK, FAIL };

namespace ValidateStateMachineDefinitionResultCodeMapper {
AWS_SFN_API ValidateStateMachineDefinitionResultCode GetValidateStateMachineDefinitionResultCodeForName(const Aws::String& name);

AWS_SFN_API Aws::String GetNameForValidateStateMachineDefinitionResultCode(ValidateStateMachineDefinitionResultCode value);
}  // namespace ValidateStateMachineDefinitionResultCodeMapper
}  // namespace Model
}  // namespace SFN
}  // namespace Aws
