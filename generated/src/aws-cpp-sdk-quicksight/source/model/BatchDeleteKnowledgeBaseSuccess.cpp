/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/BatchDeleteKnowledgeBaseSuccess.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

BatchDeleteKnowledgeBaseSuccess::BatchDeleteKnowledgeBaseSuccess(JsonView jsonValue) { *this = jsonValue; }

BatchDeleteKnowledgeBaseSuccess& BatchDeleteKnowledgeBaseSuccess::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("KnowledgeBaseId")) {
    m_knowledgeBaseId = jsonValue.GetString("KnowledgeBaseId");
    m_knowledgeBaseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KnowledgeBaseArn")) {
    m_knowledgeBaseArn = jsonValue.GetString("KnowledgeBaseArn");
    m_knowledgeBaseArnHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchDeleteKnowledgeBaseSuccess::Jsonize() const {
  JsonValue payload;

  if (m_knowledgeBaseIdHasBeenSet) {
    payload.WithString("KnowledgeBaseId", m_knowledgeBaseId);
  }

  if (m_knowledgeBaseArnHasBeenSet) {
    payload.WithString("KnowledgeBaseArn", m_knowledgeBaseArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
