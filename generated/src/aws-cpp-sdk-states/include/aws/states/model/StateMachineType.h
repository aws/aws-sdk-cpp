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
  enum class StateMachineType
  {
    NOT_SET,
    STANDARD,
    EXPRESS
  };

namespace StateMachineTypeMapper
{
AWS_SFN_API StateMachineType GetStateMachineTypeForName(const Aws::String& name);

AWS_SFN_API Aws::String GetNameForStateMachineType(StateMachineType value);
} // namespace StateMachineTypeMapper
} // namespace Model
} // namespace SFN
} // namespace Aws
