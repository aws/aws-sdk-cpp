/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/TriggerFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

TriggerFilter::TriggerFilter(JsonView jsonValue) { *this = jsonValue; }

TriggerFilter& TriggerFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = TriggerFilterTypeMapper::GetTriggerFilterTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("patterns")) {
    Aws::Utils::Array<JsonView> patternsJsonList = jsonValue.GetArray("patterns");
    for (unsigned patternsIndex = 0; patternsIndex < patternsJsonList.GetLength(); ++patternsIndex) {
      m_patterns.push_back(patternsJsonList[patternsIndex].AsString());
    }
    m_patternsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("matchMode")) {
    m_matchMode = TriggerFilterMatchModeMapper::GetTriggerFilterMatchModeForName(jsonValue.GetString("matchMode"));
    m_matchModeHasBeenSet = true;
  }
  return *this;
}

JsonValue TriggerFilter::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", TriggerFilterTypeMapper::GetNameForTriggerFilterType(m_type));
  }

  if (m_patternsHasBeenSet) {
    Aws::Utils::Array<JsonValue> patternsJsonList(m_patterns.size());
    for (unsigned patternsIndex = 0; patternsIndex < patternsJsonList.GetLength(); ++patternsIndex) {
      patternsJsonList[patternsIndex].AsString(m_patterns[patternsIndex]);
    }
    payload.WithArray("patterns", std::move(patternsJsonList));
  }

  if (m_matchModeHasBeenSet) {
    payload.WithString("matchMode", TriggerFilterMatchModeMapper::GetNameForTriggerFilterMatchMode(m_matchMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
