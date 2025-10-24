﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/RecommendationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace RecommendationTypeMapper {

static const int KNOWLEDGE_CONTENT_HASH = HashingUtils::HashString("KNOWLEDGE_CONTENT");
static const int GENERATIVE_RESPONSE_HASH = HashingUtils::HashString("GENERATIVE_RESPONSE");
static const int GENERATIVE_ANSWER_HASH = HashingUtils::HashString("GENERATIVE_ANSWER");
static const int DETECTED_INTENT_HASH = HashingUtils::HashString("DETECTED_INTENT");
static const int GENERATIVE_ANSWER_CHUNK_HASH = HashingUtils::HashString("GENERATIVE_ANSWER_CHUNK");
static const int BLOCKED_GENERATIVE_ANSWER_CHUNK_HASH = HashingUtils::HashString("BLOCKED_GENERATIVE_ANSWER_CHUNK");
static const int INTENT_ANSWER_CHUNK_HASH = HashingUtils::HashString("INTENT_ANSWER_CHUNK");
static const int BLOCKED_INTENT_ANSWER_CHUNK_HASH = HashingUtils::HashString("BLOCKED_INTENT_ANSWER_CHUNK");
static const int EMAIL_RESPONSE_CHUNK_HASH = HashingUtils::HashString("EMAIL_RESPONSE_CHUNK");
static const int EMAIL_OVERVIEW_CHUNK_HASH = HashingUtils::HashString("EMAIL_OVERVIEW_CHUNK");
static const int EMAIL_GENERATIVE_ANSWER_CHUNK_HASH = HashingUtils::HashString("EMAIL_GENERATIVE_ANSWER_CHUNK");

RecommendationType GetRecommendationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == KNOWLEDGE_CONTENT_HASH) {
    return RecommendationType::KNOWLEDGE_CONTENT;
  } else if (hashCode == GENERATIVE_RESPONSE_HASH) {
    return RecommendationType::GENERATIVE_RESPONSE;
  } else if (hashCode == GENERATIVE_ANSWER_HASH) {
    return RecommendationType::GENERATIVE_ANSWER;
  } else if (hashCode == DETECTED_INTENT_HASH) {
    return RecommendationType::DETECTED_INTENT;
  } else if (hashCode == GENERATIVE_ANSWER_CHUNK_HASH) {
    return RecommendationType::GENERATIVE_ANSWER_CHUNK;
  } else if (hashCode == BLOCKED_GENERATIVE_ANSWER_CHUNK_HASH) {
    return RecommendationType::BLOCKED_GENERATIVE_ANSWER_CHUNK;
  } else if (hashCode == INTENT_ANSWER_CHUNK_HASH) {
    return RecommendationType::INTENT_ANSWER_CHUNK;
  } else if (hashCode == BLOCKED_INTENT_ANSWER_CHUNK_HASH) {
    return RecommendationType::BLOCKED_INTENT_ANSWER_CHUNK;
  } else if (hashCode == EMAIL_RESPONSE_CHUNK_HASH) {
    return RecommendationType::EMAIL_RESPONSE_CHUNK;
  } else if (hashCode == EMAIL_OVERVIEW_CHUNK_HASH) {
    return RecommendationType::EMAIL_OVERVIEW_CHUNK;
  } else if (hashCode == EMAIL_GENERATIVE_ANSWER_CHUNK_HASH) {
    return RecommendationType::EMAIL_GENERATIVE_ANSWER_CHUNK;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecommendationType>(hashCode);
  }

  return RecommendationType::NOT_SET;
}

Aws::String GetNameForRecommendationType(RecommendationType enumValue) {
  switch (enumValue) {
    case RecommendationType::NOT_SET:
      return {};
    case RecommendationType::KNOWLEDGE_CONTENT:
      return "KNOWLEDGE_CONTENT";
    case RecommendationType::GENERATIVE_RESPONSE:
      return "GENERATIVE_RESPONSE";
    case RecommendationType::GENERATIVE_ANSWER:
      return "GENERATIVE_ANSWER";
    case RecommendationType::DETECTED_INTENT:
      return "DETECTED_INTENT";
    case RecommendationType::GENERATIVE_ANSWER_CHUNK:
      return "GENERATIVE_ANSWER_CHUNK";
    case RecommendationType::BLOCKED_GENERATIVE_ANSWER_CHUNK:
      return "BLOCKED_GENERATIVE_ANSWER_CHUNK";
    case RecommendationType::INTENT_ANSWER_CHUNK:
      return "INTENT_ANSWER_CHUNK";
    case RecommendationType::BLOCKED_INTENT_ANSWER_CHUNK:
      return "BLOCKED_INTENT_ANSWER_CHUNK";
    case RecommendationType::EMAIL_RESPONSE_CHUNK:
      return "EMAIL_RESPONSE_CHUNK";
    case RecommendationType::EMAIL_OVERVIEW_CHUNK:
      return "EMAIL_OVERVIEW_CHUNK";
    case RecommendationType::EMAIL_GENERATIVE_ANSWER_CHUNK:
      return "EMAIL_GENERATIVE_ANSWER_CHUNK";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecommendationTypeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
