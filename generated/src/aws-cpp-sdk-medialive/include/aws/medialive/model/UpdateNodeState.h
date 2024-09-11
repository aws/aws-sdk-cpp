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
  enum class UpdateNodeState
  {
    NOT_SET,
    ACTIVE,
    DRAINING
  };

namespace UpdateNodeStateMapper
{
AWS_MEDIALIVE_API UpdateNodeState GetUpdateNodeStateForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForUpdateNodeState(UpdateNodeState value);
} // namespace UpdateNodeStateMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
