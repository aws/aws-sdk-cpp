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
  enum class AssistantType
  {
    NOT_SET,
    AGENT
  };

namespace AssistantTypeMapper
{
AWS_QCONNECT_API AssistantType GetAssistantTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForAssistantType(AssistantType value);
} // namespace AssistantTypeMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
