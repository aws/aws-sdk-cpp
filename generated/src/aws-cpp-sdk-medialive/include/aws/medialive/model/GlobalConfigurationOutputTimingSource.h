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
  enum class GlobalConfigurationOutputTimingSource
  {
    NOT_SET,
    INPUT_CLOCK,
    SYSTEM_CLOCK
  };

namespace GlobalConfigurationOutputTimingSourceMapper
{
AWS_MEDIALIVE_API GlobalConfigurationOutputTimingSource GetGlobalConfigurationOutputTimingSourceForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForGlobalConfigurationOutputTimingSource(GlobalConfigurationOutputTimingSource value);
} // namespace GlobalConfigurationOutputTimingSourceMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
