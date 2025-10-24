﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/QueryResultType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace QueryResultTypeMapper {

static const int KNOWLEDGE_CONTENT_HASH = HashingUtils::HashString("KNOWLEDGE_CONTENT");
static const int INTENT_ANSWER_HASH = HashingUtils::HashString("INTENT_ANSWER");
static const int GENERATIVE_ANSWER_HASH = HashingUtils::HashString("GENERATIVE_ANSWER");
static const int GENERATIVE_ANSWER_CHUNK_HASH = HashingUtils::HashString("GENERATIVE_ANSWER_CHUNK");
static const int BLOCKED_GENERATIVE_ANSWER_CHUNK_HASH = HashingUtils::HashString("BLOCKED_GENERATIVE_ANSWER_CHUNK");
static const int INTENT_ANSWER_CHUNK_HASH = HashingUtils::HashString("INTENT_ANSWER_CHUNK");
static const int BLOCKED_INTENT_ANSWER_CHUNK_HASH = HashingUtils::HashString("BLOCKED_INTENT_ANSWER_CHUNK");
static const int EMAIL_RESPONSE_CHUNK_HASH = HashingUtils::HashString("EMAIL_RESPONSE_CHUNK");
static const int EMAIL_OVERVIEW_CHUNK_HASH = HashingUtils::HashString("EMAIL_OVERVIEW_CHUNK");
static const int EMAIL_GENERATIVE_ANSWER_CHUNK_HASH = HashingUtils::HashString("EMAIL_GENERATIVE_ANSWER_CHUNK");

QueryResultType GetQueryResultTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == KNOWLEDGE_CONTENT_HASH) {
    return QueryResultType::KNOWLEDGE_CONTENT;
  } else if (hashCode == INTENT_ANSWER_HASH) {
    return QueryResultType::INTENT_ANSWER;
  } else if (hashCode == GENERATIVE_ANSWER_HASH) {
    return QueryResultType::GENERATIVE_ANSWER;
  } else if (hashCode == GENERATIVE_ANSWER_CHUNK_HASH) {
    return QueryResultType::GENERATIVE_ANSWER_CHUNK;
  } else if (hashCode == BLOCKED_GENERATIVE_ANSWER_CHUNK_HASH) {
    return QueryResultType::BLOCKED_GENERATIVE_ANSWER_CHUNK;
  } else if (hashCode == INTENT_ANSWER_CHUNK_HASH) {
    return QueryResultType::INTENT_ANSWER_CHUNK;
  } else if (hashCode == BLOCKED_INTENT_ANSWER_CHUNK_HASH) {
    return QueryResultType::BLOCKED_INTENT_ANSWER_CHUNK;
  } else if (hashCode == EMAIL_RESPONSE_CHUNK_HASH) {
    return QueryResultType::EMAIL_RESPONSE_CHUNK;
  } else if (hashCode == EMAIL_OVERVIEW_CHUNK_HASH) {
    return QueryResultType::EMAIL_OVERVIEW_CHUNK;
  } else if (hashCode == EMAIL_GENERATIVE_ANSWER_CHUNK_HASH) {
    return QueryResultType::EMAIL_GENERATIVE_ANSWER_CHUNK;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QueryResultType>(hashCode);
  }

  return QueryResultType::NOT_SET;
}

Aws::String GetNameForQueryResultType(QueryResultType enumValue) {
  switch (enumValue) {
    case QueryResultType::NOT_SET:
      return {};
    case QueryResultType::KNOWLEDGE_CONTENT:
      return "KNOWLEDGE_CONTENT";
    case QueryResultType::INTENT_ANSWER:
      return "INTENT_ANSWER";
    case QueryResultType::GENERATIVE_ANSWER:
      return "GENERATIVE_ANSWER";
    case QueryResultType::GENERATIVE_ANSWER_CHUNK:
      return "GENERATIVE_ANSWER_CHUNK";
    case QueryResultType::BLOCKED_GENERATIVE_ANSWER_CHUNK:
      return "BLOCKED_GENERATIVE_ANSWER_CHUNK";
    case QueryResultType::INTENT_ANSWER_CHUNK:
      return "INTENT_ANSWER_CHUNK";
    case QueryResultType::BLOCKED_INTENT_ANSWER_CHUNK:
      return "BLOCKED_INTENT_ANSWER_CHUNK";
    case QueryResultType::EMAIL_RESPONSE_CHUNK:
      return "EMAIL_RESPONSE_CHUNK";
    case QueryResultType::EMAIL_OVERVIEW_CHUNK:
      return "EMAIL_OVERVIEW_CHUNK";
    case QueryResultType::EMAIL_GENERATIVE_ANSWER_CHUNK:
      return "EMAIL_GENERATIVE_ANSWER_CHUNK";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QueryResultTypeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
