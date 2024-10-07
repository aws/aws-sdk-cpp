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
  enum class AIAgentAssociationConfigurationType
  {
    NOT_SET,
    KNOWLEDGE_BASE
  };

namespace AIAgentAssociationConfigurationTypeMapper
{
AWS_QCONNECT_API AIAgentAssociationConfigurationType GetAIAgentAssociationConfigurationTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForAIAgentAssociationConfigurationType(AIAgentAssociationConfigurationType value);
} // namespace AIAgentAssociationConfigurationTypeMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
