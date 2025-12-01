/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/SpanCitation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

SpanCitation::SpanCitation(JsonView jsonValue) { *this = jsonValue; }

SpanCitation& SpanCitation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("contentId")) {
    m_contentId = jsonValue.GetString("contentId");
    m_contentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("knowledgeBaseId")) {
    m_knowledgeBaseId = jsonValue.GetString("knowledgeBaseId");
    m_knowledgeBaseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("knowledgeBaseArn")) {
    m_knowledgeBaseArn = jsonValue.GetString("knowledgeBaseArn");
    m_knowledgeBaseArnHasBeenSet = true;
  }
  return *this;
}

JsonValue SpanCitation::Jsonize() const {
  JsonValue payload;

  if (m_contentIdHasBeenSet) {
    payload.WithString("contentId", m_contentId);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_knowledgeBaseIdHasBeenSet) {
    payload.WithString("knowledgeBaseId", m_knowledgeBaseId);
  }

  if (m_knowledgeBaseArnHasBeenSet) {
    payload.WithString("knowledgeBaseArn", m_knowledgeBaseArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
