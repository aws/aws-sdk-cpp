/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{
  enum class ChangeSetState
  {
    NOT_SET,
    PENDING_GENERATION,
    FAILED_GENERATION,
    READY_TO_EXECUTE,
    EXECUTING,
    EXECUTION_SUCCEEDED,
    OUT_OF_DATE
  };

namespace ChangeSetStateMapper
{
AWS_NETWORKMANAGER_API ChangeSetState GetChangeSetStateForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForChangeSetState(ChangeSetState value);
} // namespace ChangeSetStateMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
