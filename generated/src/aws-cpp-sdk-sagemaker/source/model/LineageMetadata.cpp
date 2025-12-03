/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/LineageMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

LineageMetadata::LineageMetadata(JsonView jsonValue) { *this = jsonValue; }

LineageMetadata& LineageMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ActionArns")) {
    Aws::Map<Aws::String, JsonView> actionArnsJsonMap = jsonValue.GetObject("ActionArns").GetAllObjects();
    for (auto& actionArnsItem : actionArnsJsonMap) {
      m_actionArns[actionArnsItem.first] = actionArnsItem.second.AsString();
    }
    m_actionArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ArtifactArns")) {
    Aws::Map<Aws::String, JsonView> artifactArnsJsonMap = jsonValue.GetObject("ArtifactArns").GetAllObjects();
    for (auto& artifactArnsItem : artifactArnsJsonMap) {
      m_artifactArns[artifactArnsItem.first] = artifactArnsItem.second.AsString();
    }
    m_artifactArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContextArns")) {
    Aws::Map<Aws::String, JsonView> contextArnsJsonMap = jsonValue.GetObject("ContextArns").GetAllObjects();
    for (auto& contextArnsItem : contextArnsJsonMap) {
      m_contextArns[contextArnsItem.first] = contextArnsItem.second.AsString();
    }
    m_contextArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Associations")) {
    Aws::Utils::Array<JsonView> associationsJsonList = jsonValue.GetArray("Associations");
    for (unsigned associationsIndex = 0; associationsIndex < associationsJsonList.GetLength(); ++associationsIndex) {
      m_associations.push_back(associationsJsonList[associationsIndex].AsObject());
    }
    m_associationsHasBeenSet = true;
  }
  return *this;
}

JsonValue LineageMetadata::Jsonize() const {
  JsonValue payload;

  if (m_actionArnsHasBeenSet) {
    JsonValue actionArnsJsonMap;
    for (auto& actionArnsItem : m_actionArns) {
      actionArnsJsonMap.WithString(actionArnsItem.first, actionArnsItem.second);
    }
    payload.WithObject("ActionArns", std::move(actionArnsJsonMap));
  }

  if (m_artifactArnsHasBeenSet) {
    JsonValue artifactArnsJsonMap;
    for (auto& artifactArnsItem : m_artifactArns) {
      artifactArnsJsonMap.WithString(artifactArnsItem.first, artifactArnsItem.second);
    }
    payload.WithObject("ArtifactArns", std::move(artifactArnsJsonMap));
  }

  if (m_contextArnsHasBeenSet) {
    JsonValue contextArnsJsonMap;
    for (auto& contextArnsItem : m_contextArns) {
      contextArnsJsonMap.WithString(contextArnsItem.first, contextArnsItem.second);
    }
    payload.WithObject("ContextArns", std::move(contextArnsJsonMap));
  }

  if (m_associationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> associationsJsonList(m_associations.size());
    for (unsigned associationsIndex = 0; associationsIndex < associationsJsonList.GetLength(); ++associationsIndex) {
      associationsJsonList[associationsIndex].AsObject(m_associations[associationsIndex].Jsonize());
    }
    payload.WithArray("Associations", std::move(associationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
