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
enum class QueryResultType {
  NOT_SET,
  KNOWLEDGE_CONTENT,
  INTENT_ANSWER,
  GENERATIVE_ANSWER,
  GENERATIVE_ANSWER_CHUNK,
  BLOCKED_GENERATIVE_ANSWER_CHUNK,
  INTENT_ANSWER_CHUNK,
  BLOCKED_INTENT_ANSWER_CHUNK,
  EMAIL_RESPONSE_CHUNK,
  EMAIL_OVERVIEW_CHUNK,
  EMAIL_GENERATIVE_ANSWER_CHUNK,
  CASE_SUMMARIZATION_CHUNK,
  BLOCKED_CASE_SUMMARIZATION_CHUNK,
  NOTES,
  NOTES_CHUNK,
  BLOCKED_NOTES_CHUNK
};

namespace QueryResultTypeMapper {
AWS_QCONNECT_API QueryResultType GetQueryResultTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForQueryResultType(QueryResultType value);
}  // namespace QueryResultTypeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
