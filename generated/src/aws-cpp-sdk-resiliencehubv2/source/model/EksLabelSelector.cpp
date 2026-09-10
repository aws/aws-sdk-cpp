/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/EksLabelSelector.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

EksLabelSelector::EksLabelSelector(JsonView jsonValue) { *this = jsonValue; }

EksLabelSelector& EksLabelSelector::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("matchLabels")) {
    Aws::Map<Aws::String, JsonView> matchLabelsJsonMap = jsonValue.GetObject("matchLabels").GetAllObjects();
    for (auto& matchLabelsItem : matchLabelsJsonMap) {
      m_matchLabels[matchLabelsItem.first] = matchLabelsItem.second.AsString();
    }
    m_matchLabelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("matchExpressions")) {
    Aws::Utils::Array<JsonView> matchExpressionsJsonList = jsonValue.GetArray("matchExpressions");
    for (unsigned matchExpressionsIndex = 0; matchExpressionsIndex < matchExpressionsJsonList.GetLength(); ++matchExpressionsIndex) {
      m_matchExpressions.push_back(matchExpressionsJsonList[matchExpressionsIndex].AsObject());
    }
    m_matchExpressionsHasBeenSet = true;
  }
  return *this;
}

JsonValue EksLabelSelector::Jsonize() const {
  JsonValue payload;

  if (m_matchLabelsHasBeenSet) {
    JsonValue matchLabelsJsonMap;
    for (auto& matchLabelsItem : m_matchLabels) {
      matchLabelsJsonMap.WithString(matchLabelsItem.first, matchLabelsItem.second);
    }
    payload.WithObject("matchLabels", std::move(matchLabelsJsonMap));
  }

  if (m_matchExpressionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> matchExpressionsJsonList(m_matchExpressions.size());
    for (unsigned matchExpressionsIndex = 0; matchExpressionsIndex < matchExpressionsJsonList.GetLength(); ++matchExpressionsIndex) {
      matchExpressionsJsonList[matchExpressionsIndex].AsObject(m_matchExpressions[matchExpressionsIndex].Jsonize());
    }
    payload.WithArray("matchExpressions", std::move(matchExpressionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
