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
enum class AIPromptType {
  NOT_SET,
  ANSWER_GENERATION,
  INTENT_LABELING_GENERATION,
  QUERY_REFORMULATION,
  SELF_SERVICE_PRE_PROCESSING,
  SELF_SERVICE_ANSWER_GENERATION,
  EMAIL_RESPONSE,
  EMAIL_OVERVIEW,
  EMAIL_GENERATIVE_ANSWER,
  EMAIL_QUERY_REFORMULATION
};

namespace AIPromptTypeMapper {
AWS_QCONNECT_API AIPromptType GetAIPromptTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForAIPromptType(AIPromptType value);
}  // namespace AIPromptTypeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
