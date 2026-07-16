/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/FMKBParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

FMKBParameters::FMKBParameters(JsonView jsonValue) { *this = jsonValue; }

FMKBParameters& FMKBParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("KnowledgeBaseArn")) {
    m_knowledgeBaseArn = jsonValue.GetString("KnowledgeBaseArn");
    m_knowledgeBaseArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LinkedDataSourceIds")) {
    Aws::Utils::Array<JsonView> linkedDataSourceIdsJsonList = jsonValue.GetArray("LinkedDataSourceIds");
    for (unsigned linkedDataSourceIdsIndex = 0; linkedDataSourceIdsIndex < linkedDataSourceIdsJsonList.GetLength();
         ++linkedDataSourceIdsIndex) {
      m_linkedDataSourceIds.push_back(linkedDataSourceIdsJsonList[linkedDataSourceIdsIndex].AsString());
    }
    m_linkedDataSourceIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue FMKBParameters::Jsonize() const {
  JsonValue payload;

  if (m_knowledgeBaseArnHasBeenSet) {
    payload.WithString("KnowledgeBaseArn", m_knowledgeBaseArn);
  }

  if (m_linkedDataSourceIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> linkedDataSourceIdsJsonList(m_linkedDataSourceIds.size());
    for (unsigned linkedDataSourceIdsIndex = 0; linkedDataSourceIdsIndex < linkedDataSourceIdsJsonList.GetLength();
         ++linkedDataSourceIdsIndex) {
      linkedDataSourceIdsJsonList[linkedDataSourceIdsIndex].AsString(m_linkedDataSourceIds[linkedDataSourceIdsIndex]);
    }
    payload.WithArray("LinkedDataSourceIds", std::move(linkedDataSourceIdsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
