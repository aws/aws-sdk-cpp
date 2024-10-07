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
  enum class AIPromptTemplateType
  {
    NOT_SET,
    TEXT
  };

namespace AIPromptTemplateTypeMapper
{
AWS_QCONNECT_API AIPromptTemplateType GetAIPromptTemplateTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForAIPromptTemplateType(AIPromptTemplateType value);
} // namespace AIPromptTemplateTypeMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
