/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{
  enum class TextTransformation
  {
    NOT_SET,
    NONE,
    COMPRESS_WHITE_SPACE,
    HTML_ENTITY_DECODE,
    LOWERCASE,
    CMD_LINE,
    URL_DECODE
  };

namespace TextTransformationMapper
{
AWS_WAFREGIONAL_API TextTransformation GetTextTransformationForName(const Aws::String& name);

AWS_WAFREGIONAL_API Aws::String GetNameForTextTransformation(TextTransformation value);
} // namespace TextTransformationMapper
} // namespace Model
} // namespace WAFRegional
} // namespace Aws
