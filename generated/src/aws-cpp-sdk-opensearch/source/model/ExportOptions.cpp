/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/ExportOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

ExportOptions::ExportOptions(JsonView jsonValue) { *this = jsonValue; }

ExportOptions& ExportOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("types")) {
    Aws::Utils::Array<JsonView> typesJsonList = jsonValue.GetArray("types");
    for (unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex) {
      m_types.push_back(typesJsonList[typesIndex].AsString());
    }
    m_typesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("objects")) {
    Aws::Utils::Array<JsonView> objectsJsonList = jsonValue.GetArray("objects");
    for (unsigned objectsIndex = 0; objectsIndex < objectsJsonList.GetLength(); ++objectsIndex) {
      m_objects.push_back(objectsJsonList[objectsIndex].AsObject());
    }
    m_objectsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("includeReferencesDeep")) {
    m_includeReferencesDeep = jsonValue.GetBool("includeReferencesDeep");
    m_includeReferencesDeepHasBeenSet = true;
  }
  return *this;
}

JsonValue ExportOptions::Jsonize() const {
  JsonValue payload;

  if (m_typesHasBeenSet) {
    Aws::Utils::Array<JsonValue> typesJsonList(m_types.size());
    for (unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex) {
      typesJsonList[typesIndex].AsString(m_types[typesIndex]);
    }
    payload.WithArray("types", std::move(typesJsonList));
  }

  if (m_objectsHasBeenSet) {
    Aws::Utils::Array<JsonValue> objectsJsonList(m_objects.size());
    for (unsigned objectsIndex = 0; objectsIndex < objectsJsonList.GetLength(); ++objectsIndex) {
      objectsJsonList[objectsIndex].AsObject(m_objects[objectsIndex].Jsonize());
    }
    payload.WithArray("objects", std::move(objectsJsonList));
  }

  if (m_includeReferencesDeepHasBeenSet) {
    payload.WithBool("includeReferencesDeep", m_includeReferencesDeep);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
