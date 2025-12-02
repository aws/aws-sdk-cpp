/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/ValidationError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

ValidationError::ValidationError(JsonView jsonValue) { *this = jsonValue; }

ValidationError& ValidationError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Reason")) {
    m_reason = jsonValue.GetString("Reason");
    m_reasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FieldMap")) {
    Aws::Map<Aws::String, JsonView> fieldMapJsonMap = jsonValue.GetObject("FieldMap").GetAllObjects();
    for (auto& fieldMapItem : fieldMapJsonMap) {
      m_fieldMap[fieldMapItem.first] = fieldMapItem.second.AsString();
    }
    m_fieldMapHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationError::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("Reason", m_reason);
  }

  if (m_fieldMapHasBeenSet) {
    JsonValue fieldMapJsonMap;
    for (auto& fieldMapItem : m_fieldMap) {
      fieldMapJsonMap.WithString(fieldMapItem.first, fieldMapItem.second);
    }
    payload.WithObject("FieldMap", std::move(fieldMapJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
