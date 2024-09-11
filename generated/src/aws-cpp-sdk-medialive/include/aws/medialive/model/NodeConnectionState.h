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
  enum class NodeConnectionState
  {
    NOT_SET,
    CONNECTED,
    DISCONNECTED
  };

namespace NodeConnectionStateMapper
{
AWS_MEDIALIVE_API NodeConnectionState GetNodeConnectionStateForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForNodeConnectionState(NodeConnectionState value);
} // namespace NodeConnectionStateMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
