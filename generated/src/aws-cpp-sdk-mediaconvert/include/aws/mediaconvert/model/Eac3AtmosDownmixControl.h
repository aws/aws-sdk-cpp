/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class Eac3AtmosDownmixControl
  {
    NOT_SET,
    SPECIFIED,
    INITIALIZE_FROM_SOURCE
  };

namespace Eac3AtmosDownmixControlMapper
{
AWS_MEDIACONVERT_API Eac3AtmosDownmixControl GetEac3AtmosDownmixControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForEac3AtmosDownmixControl(Eac3AtmosDownmixControl value);
} // namespace Eac3AtmosDownmixControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
