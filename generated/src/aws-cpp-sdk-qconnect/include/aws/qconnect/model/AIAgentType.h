/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

namespace Aws {
namespace QConnect {
namespace Model {
enum class AIAgentType {
  NOT_SET,
  MANUAL_SEARCH,
  ANSWER_RECOMMENDATION,
  SELF_SERVICE,
  EMAIL_RESPONSE,
  EMAIL_OVERVIEW,
  EMAIL_GENERATIVE_ANSWER
};

namespace AIAgentTypeMapper {
AWS_QCONNECT_API AIAgentType GetAIAgentTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForAIAgentType(AIAgentType value);
}  // namespace AIAgentTypeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
