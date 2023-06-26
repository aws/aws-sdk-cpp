/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mgn
{
namespace Model
{
  enum class LifeCycleState
  {
    NOT_SET,
    STOPPED,
    NOT_READY,
    READY_FOR_TEST,
    TESTING,
    READY_FOR_CUTOVER,
    CUTTING_OVER,
    CUTOVER,
    DISCONNECTED,
    DISCOVERED,
    PENDING_INSTALLATION
  };

namespace LifeCycleStateMapper
{
AWS_MGN_API LifeCycleState GetLifeCycleStateForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForLifeCycleState(LifeCycleState value);
} // namespace LifeCycleStateMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
