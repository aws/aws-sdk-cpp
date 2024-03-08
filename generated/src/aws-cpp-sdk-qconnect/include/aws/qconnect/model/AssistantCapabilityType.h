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
  enum class AssistantCapabilityType
  {
    NOT_SET,
    V1,
    V2
  };

namespace AssistantCapabilityTypeMapper
{
AWS_QCONNECT_API AssistantCapabilityType GetAssistantCapabilityTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForAssistantCapabilityType(AssistantCapabilityType value);
} // namespace AssistantCapabilityTypeMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
