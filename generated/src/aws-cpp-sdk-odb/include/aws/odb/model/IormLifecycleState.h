/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace odb
{
namespace Model
{
  enum class IormLifecycleState
  {
    NOT_SET,
    BOOTSTRAPPING,
    DISABLED,
    ENABLED,
    FAILED,
    UPDATING
  };

namespace IormLifecycleStateMapper
{
AWS_ODB_API IormLifecycleState GetIormLifecycleStateForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForIormLifecycleState(IormLifecycleState value);
} // namespace IormLifecycleStateMapper
} // namespace Model
} // namespace odb
} // namespace Aws
