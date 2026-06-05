/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/BatchDeleteKnowledgeBaseFailure.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

BatchDeleteKnowledgeBaseFailure::BatchDeleteKnowledgeBaseFailure(JsonView jsonValue) { *this = jsonValue; }

BatchDeleteKnowledgeBaseFailure& BatchDeleteKnowledgeBaseFailure::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("KnowledgeBaseId")) {
    m_knowledgeBaseId = jsonValue.GetString("KnowledgeBaseId");
    m_knowledgeBaseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorCode")) {
    m_errorCode = jsonValue.GetString("ErrorCode");
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorMessage")) {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchDeleteKnowledgeBaseFailure::Jsonize() const {
  JsonValue payload;

  if (m_knowledgeBaseIdHasBeenSet) {
    payload.WithString("KnowledgeBaseId", m_knowledgeBaseId);
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("ErrorCode", m_errorCode);
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("ErrorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
