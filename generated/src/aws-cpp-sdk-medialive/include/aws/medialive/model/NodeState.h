/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class NodeState
  {
    NOT_SET,
    CREATED,
    REGISTERING,
    READY_TO_ACTIVATE,
    REGISTRATION_FAILED,
    ACTIVATION_FAILED,
    ACTIVE,
    READY,
    IN_USE,
    DEREGISTERING,
    DRAINING,
    DEREGISTRATION_FAILED,
    DEREGISTERED
  };

namespace NodeStateMapper
{
AWS_MEDIALIVE_API NodeState GetNodeStateForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForNodeState(NodeState value);
} // namespace NodeStateMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
