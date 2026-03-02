/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint/model/DefaultMessage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Pinpoint {
namespace Model {

DefaultMessage::DefaultMessage(JsonView jsonValue) { *this = jsonValue; }

DefaultMessage& DefaultMessage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Body")) {
    m_body = jsonValue.GetString("Body");
    m_bodyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Substitutions")) {
    Aws::Map<Aws::String, JsonView> substitutionsJsonMap = jsonValue.GetObject("Substitutions").GetAllObjects();
    for (auto& substitutionsItem : substitutionsJsonMap) {
      Aws::Utils::Array<JsonView> listOf__string2JsonList = substitutionsItem.second.AsArray();
      Aws::Vector<Aws::String> listOf__string2List;
      listOf__string2List.reserve((size_t)listOf__string2JsonList.GetLength());
      for (unsigned listOf__string2Index = 0; listOf__string2Index < listOf__string2JsonList.GetLength(); ++listOf__string2Index) {
        listOf__string2List.push_back(listOf__string2JsonList[listOf__string2Index].AsString());
      }
      m_substitutions[substitutionsItem.first] = std::move(listOf__string2List);
    }
    m_substitutionsHasBeenSet = true;
  }
  return *this;
}

JsonValue DefaultMessage::Jsonize() const {
  JsonValue payload;

  if (m_bodyHasBeenSet) {
    payload.WithString("Body", m_body);
  }

  if (m_substitutionsHasBeenSet) {
    JsonValue substitutionsJsonMap;
    for (auto& substitutionsItem : m_substitutions) {
      Aws::Utils::Array<JsonValue> listOf__stringJsonList(substitutionsItem.second.size());
      for (unsigned listOf__stringIndex = 0; listOf__stringIndex < listOf__stringJsonList.GetLength(); ++listOf__stringIndex) {
        listOf__stringJsonList[listOf__stringIndex].AsString(substitutionsItem.second[listOf__stringIndex]);
      }
      substitutionsJsonMap.WithArray(substitutionsItem.first, std::move(listOf__stringJsonList));
    }
    payload.WithObject("Substitutions", std::move(substitutionsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Pinpoint
}  // namespace Aws
