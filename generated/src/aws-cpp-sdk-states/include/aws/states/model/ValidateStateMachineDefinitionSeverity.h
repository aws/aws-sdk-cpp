/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SFN
{
namespace Model
{
  enum class ValidateStateMachineDefinitionSeverity
  {
    NOT_SET,
    ERROR_,
    WARNING
  };

namespace ValidateStateMachineDefinitionSeverityMapper
{
AWS_SFN_API ValidateStateMachineDefinitionSeverity GetValidateStateMachineDefinitionSeverityForName(const Aws::String& name);

AWS_SFN_API Aws::String GetNameForValidateStateMachineDefinitionSeverity(ValidateStateMachineDefinitionSeverity value);
} // namespace ValidateStateMachineDefinitionSeverityMapper
} // namespace Model
} // namespace SFN
} // namespace Aws
