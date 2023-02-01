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
  enum class InputTimecodeSource
  {
    NOT_SET,
    ZEROBASED,
    EMBEDDED
  };

namespace InputTimecodeSourceMapper
{
AWS_MEDIALIVE_API InputTimecodeSource GetInputTimecodeSourceForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputTimecodeSource(InputTimecodeSource value);
} // namespace InputTimecodeSourceMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
