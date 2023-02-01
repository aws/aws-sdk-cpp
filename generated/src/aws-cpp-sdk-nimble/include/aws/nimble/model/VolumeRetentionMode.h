/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{
  enum class VolumeRetentionMode
  {
    NOT_SET,
    RETAIN,
    DELETE_
  };

namespace VolumeRetentionModeMapper
{
AWS_NIMBLESTUDIO_API VolumeRetentionMode GetVolumeRetentionModeForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForVolumeRetentionMode(VolumeRetentionMode value);
} // namespace VolumeRetentionModeMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
