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
  enum class MultiplexState
  {
    NOT_SET,
    CREATING,
    CREATE_FAILED,
    IDLE,
    STARTING,
    RUNNING,
    RECOVERING,
    STOPPING,
    DELETING,
    DELETED
  };

namespace MultiplexStateMapper
{
AWS_MEDIALIVE_API MultiplexState GetMultiplexStateForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForMultiplexState(MultiplexState value);
} // namespace MultiplexStateMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
