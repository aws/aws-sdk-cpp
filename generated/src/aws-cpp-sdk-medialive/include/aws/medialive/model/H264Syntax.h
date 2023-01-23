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
  enum class H264Syntax
  {
    NOT_SET,
    DEFAULT,
    RP2027
  };

namespace H264SyntaxMapper
{
AWS_MEDIALIVE_API H264Syntax GetH264SyntaxForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH264Syntax(H264Syntax value);
} // namespace H264SyntaxMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
