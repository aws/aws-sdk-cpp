/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/KnowledgeSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

KnowledgeSource::KnowledgeSource(JsonView jsonValue) { *this = jsonValue; }

KnowledgeSource& KnowledgeSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("assistantAssociationIds")) {
    Aws::Utils::Array<JsonView> assistantAssociationIdsJsonList = jsonValue.GetArray("assistantAssociationIds");
    for (unsigned assistantAssociationIdsIndex = 0; assistantAssociationIdsIndex < assistantAssociationIdsJsonList.GetLength();
         ++assistantAssociationIdsIndex) {
      m_assistantAssociationIds.push_back(assistantAssociationIdsJsonList[assistantAssociationIdsIndex].AsString());
    }
    m_assistantAssociationIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue KnowledgeSource::Jsonize() const {
  JsonValue payload;

  if (m_assistantAssociationIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> assistantAssociationIdsJsonList(m_assistantAssociationIds.size());
    for (unsigned assistantAssociationIdsIndex = 0; assistantAssociationIdsIndex < assistantAssociationIdsJsonList.GetLength();
         ++assistantAssociationIdsIndex) {
      assistantAssociationIdsJsonList[assistantAssociationIdsIndex].AsString(m_assistantAssociationIds[assistantAssociationIdsIndex]);
    }
    payload.WithArray("assistantAssociationIds", std::move(assistantAssociationIdsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
