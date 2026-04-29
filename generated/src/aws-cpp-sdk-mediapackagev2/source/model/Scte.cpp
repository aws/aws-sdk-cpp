/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediapackagev2/model/Scte.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mediapackagev2 {
namespace Model {

Scte::Scte(JsonView jsonValue) { *this = jsonValue; }

Scte& Scte::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ScteFilter")) {
    Aws::Utils::Array<JsonView> scteFilterJsonList = jsonValue.GetArray("ScteFilter");
    for (unsigned scteFilterIndex = 0; scteFilterIndex < scteFilterJsonList.GetLength(); ++scteFilterIndex) {
      m_scteFilter.push_back(ScteFilterMapper::GetScteFilterForName(scteFilterJsonList[scteFilterIndex].AsString()));
    }
    m_scteFilterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScteInSegments")) {
    m_scteInSegments = ScteInSegmentsMapper::GetScteInSegmentsForName(jsonValue.GetString("ScteInSegments"));
    m_scteInSegmentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CustomAdTypes")) {
    Aws::Utils::Array<JsonView> customAdTypesJsonList = jsonValue.GetArray("CustomAdTypes");
    for (unsigned customAdTypesIndex = 0; customAdTypesIndex < customAdTypesJsonList.GetLength(); ++customAdTypesIndex) {
      m_customAdTypes.push_back(CustomAdTypeMapper::GetCustomAdTypeForName(customAdTypesJsonList[customAdTypesIndex].AsString()));
    }
    m_customAdTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue Scte::Jsonize() const {
  JsonValue payload;

  if (m_scteFilterHasBeenSet) {
    Aws::Utils::Array<JsonValue> scteFilterJsonList(m_scteFilter.size());
    for (unsigned scteFilterIndex = 0; scteFilterIndex < scteFilterJsonList.GetLength(); ++scteFilterIndex) {
      scteFilterJsonList[scteFilterIndex].AsString(ScteFilterMapper::GetNameForScteFilter(m_scteFilter[scteFilterIndex]));
    }
    payload.WithArray("ScteFilter", std::move(scteFilterJsonList));
  }

  if (m_scteInSegmentsHasBeenSet) {
    payload.WithString("ScteInSegments", ScteInSegmentsMapper::GetNameForScteInSegments(m_scteInSegments));
  }

  if (m_customAdTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> customAdTypesJsonList(m_customAdTypes.size());
    for (unsigned customAdTypesIndex = 0; customAdTypesIndex < customAdTypesJsonList.GetLength(); ++customAdTypesIndex) {
      customAdTypesJsonList[customAdTypesIndex].AsString(CustomAdTypeMapper::GetNameForCustomAdType(m_customAdTypes[customAdTypesIndex]));
    }
    payload.WithArray("CustomAdTypes", std::move(customAdTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
