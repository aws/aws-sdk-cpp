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
  enum class StateMachineStatus
  {
    NOT_SET,
    ACTIVE,
    DELETING
  };

namespace StateMachineStatusMapper
{
AWS_SFN_API StateMachineStatus GetStateMachineStatusForName(const Aws::String& name);

AWS_SFN_API Aws::String GetNameForStateMachineStatus(StateMachineStatus value);
} // namespace StateMachineStatusMapper
} // namespace Model
} // namespace SFN
} // namespace Aws
