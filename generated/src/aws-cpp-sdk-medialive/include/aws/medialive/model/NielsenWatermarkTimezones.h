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
  enum class NielsenWatermarkTimezones
  {
    NOT_SET,
    AMERICA_PUERTO_RICO,
    US_ALASKA,
    US_ARIZONA,
    US_CENTRAL,
    US_EASTERN,
    US_HAWAII,
    US_MOUNTAIN,
    US_PACIFIC,
    US_SAMOA,
    UTC
  };

namespace NielsenWatermarkTimezonesMapper
{
AWS_MEDIALIVE_API NielsenWatermarkTimezones GetNielsenWatermarkTimezonesForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForNielsenWatermarkTimezones(NielsenWatermarkTimezones value);
} // namespace NielsenWatermarkTimezonesMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
