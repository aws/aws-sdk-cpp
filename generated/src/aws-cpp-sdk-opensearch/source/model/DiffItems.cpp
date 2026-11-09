/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/DiffItems.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

DiffItems::DiffItems(JsonView jsonValue) { *this = jsonValue; }

DiffItems& DiffItems::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SourceOnly")) {
    Aws::Utils::Array<JsonView> sourceOnlyJsonList = jsonValue.GetArray("SourceOnly");
    for (unsigned sourceOnlyIndex = 0; sourceOnlyIndex < sourceOnlyJsonList.GetLength(); ++sourceOnlyIndex) {
      m_sourceOnly.push_back(sourceOnlyJsonList[sourceOnlyIndex].AsString());
    }
    m_sourceOnlyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TargetOnly")) {
    Aws::Utils::Array<JsonView> targetOnlyJsonList = jsonValue.GetArray("TargetOnly");
    for (unsigned targetOnlyIndex = 0; targetOnlyIndex < targetOnlyJsonList.GetLength(); ++targetOnlyIndex) {
      m_targetOnly.push_back(targetOnlyJsonList[targetOnlyIndex].AsString());
    }
    m_targetOnlyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Diverged")) {
    Aws::Utils::Array<JsonView> divergedJsonList = jsonValue.GetArray("Diverged");
    for (unsigned divergedIndex = 0; divergedIndex < divergedJsonList.GetLength(); ++divergedIndex) {
      m_diverged.push_back(divergedJsonList[divergedIndex].AsObject());
    }
    m_divergedHasBeenSet = true;
  }
  return *this;
}

JsonValue DiffItems::Jsonize() const {
  JsonValue payload;

  if (m_sourceOnlyHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourceOnlyJsonList(m_sourceOnly.size());
    for (unsigned sourceOnlyIndex = 0; sourceOnlyIndex < sourceOnlyJsonList.GetLength(); ++sourceOnlyIndex) {
      sourceOnlyJsonList[sourceOnlyIndex].AsString(m_sourceOnly[sourceOnlyIndex]);
    }
    payload.WithArray("SourceOnly", std::move(sourceOnlyJsonList));
  }

  if (m_targetOnlyHasBeenSet) {
    Aws::Utils::Array<JsonValue> targetOnlyJsonList(m_targetOnly.size());
    for (unsigned targetOnlyIndex = 0; targetOnlyIndex < targetOnlyJsonList.GetLength(); ++targetOnlyIndex) {
      targetOnlyJsonList[targetOnlyIndex].AsString(m_targetOnly[targetOnlyIndex]);
    }
    payload.WithArray("TargetOnly", std::move(targetOnlyJsonList));
  }

  if (m_divergedHasBeenSet) {
    Aws::Utils::Array<JsonValue> divergedJsonList(m_diverged.size());
    for (unsigned divergedIndex = 0; divergedIndex < divergedJsonList.GetLength(); ++divergedIndex) {
      divergedJsonList[divergedIndex].AsObject(m_diverged[divergedIndex].Jsonize());
    }
    payload.WithArray("Diverged", std::move(divergedJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
