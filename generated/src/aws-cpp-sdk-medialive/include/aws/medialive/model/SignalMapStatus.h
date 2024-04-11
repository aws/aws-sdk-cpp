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
  enum class SignalMapStatus
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    CREATE_COMPLETE,
    CREATE_FAILED,
    UPDATE_IN_PROGRESS,
    UPDATE_COMPLETE,
    UPDATE_REVERTED,
    UPDATE_FAILED,
    READY,
    NOT_READY
  };

namespace SignalMapStatusMapper
{
AWS_MEDIALIVE_API SignalMapStatus GetSignalMapStatusForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForSignalMapStatus(SignalMapStatus value);
} // namespace SignalMapStatusMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
