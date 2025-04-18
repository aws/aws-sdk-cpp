/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QConnect
{
namespace Model
{
  enum class AIPromptAPIFormat
  {
    NOT_SET,
    ANTHROPIC_CLAUDE_MESSAGES,
    ANTHROPIC_CLAUDE_TEXT_COMPLETIONS,
    MESSAGES,
    TEXT_COMPLETIONS
  };

namespace AIPromptAPIFormatMapper
{
AWS_QCONNECT_API AIPromptAPIFormat GetAIPromptAPIFormatForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForAIPromptAPIFormat(AIPromptAPIFormat value);
} // namespace AIPromptAPIFormatMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
