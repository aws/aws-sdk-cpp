﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

namespace Aws {
namespace QConnect {
namespace Model {
enum class RecommendationType {
  NOT_SET,
  KNOWLEDGE_CONTENT,
  GENERATIVE_RESPONSE,
  GENERATIVE_ANSWER,
  DETECTED_INTENT,
  GENERATIVE_ANSWER_CHUNK,
  BLOCKED_GENERATIVE_ANSWER_CHUNK,
  INTENT_ANSWER_CHUNK,
  BLOCKED_INTENT_ANSWER_CHUNK,
  EMAIL_RESPONSE_CHUNK,
  EMAIL_OVERVIEW_CHUNK,
  EMAIL_GENERATIVE_ANSWER_CHUNK
};

namespace RecommendationTypeMapper {
AWS_QCONNECT_API RecommendationType GetRecommendationTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForRecommendationType(RecommendationType value);
}  // namespace RecommendationTypeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
