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
  enum class GlobalConfigurationOutputLockingMode
  {
    NOT_SET,
    EPOCH_LOCKING,
    PIPELINE_LOCKING
  };

namespace GlobalConfigurationOutputLockingModeMapper
{
AWS_MEDIALIVE_API GlobalConfigurationOutputLockingMode GetGlobalConfigurationOutputLockingModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForGlobalConfigurationOutputLockingMode(GlobalConfigurationOutputLockingMode value);
} // namespace GlobalConfigurationOutputLockingModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
