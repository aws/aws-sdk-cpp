/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{
  enum class Colorimetry
  {
    NOT_SET,
    BT601,
    BT709,
    BT2020,
    BT2100,
    ST2065_1,
    ST2065_3,
    XYZ
  };

namespace ColorimetryMapper
{
AWS_MEDIACONNECT_API Colorimetry GetColorimetryForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForColorimetry(Colorimetry value);
} // namespace ColorimetryMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
