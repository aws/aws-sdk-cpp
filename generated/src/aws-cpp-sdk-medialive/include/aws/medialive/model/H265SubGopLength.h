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
  enum class H265SubGopLength
  {
    NOT_SET,
    DYNAMIC,
    FIXED
  };

namespace H265SubGopLengthMapper
{
AWS_MEDIALIVE_API H265SubGopLength GetH265SubGopLengthForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH265SubGopLength(H265SubGopLength value);
} // namespace H265SubGopLengthMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
