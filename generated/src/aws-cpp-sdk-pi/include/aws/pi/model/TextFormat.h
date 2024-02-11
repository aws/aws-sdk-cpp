/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PI
{
namespace Model
{
  enum class TextFormat
  {
    NOT_SET,
    PLAIN_TEXT,
    MARKDOWN
  };

namespace TextFormatMapper
{
AWS_PI_API TextFormat GetTextFormatForName(const Aws::String& name);

AWS_PI_API Aws::String GetNameForTextFormat(TextFormat value);
} // namespace TextFormatMapper
} // namespace Model
} // namespace PI
} // namespace Aws
