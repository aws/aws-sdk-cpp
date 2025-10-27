/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resource-explorer-2/model/ValidationException.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ResourceExplorer2 {
namespace Model {

ValidationException::ValidationException(JsonView jsonValue) { *this = jsonValue; }

ValidationException& ValidationException::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FieldList")) {
    Aws::Utils::Array<JsonView> fieldListJsonList = jsonValue.GetArray("FieldList");
    for (unsigned fieldListIndex = 0; fieldListIndex < fieldListJsonList.GetLength(); ++fieldListIndex) {
      m_fieldList.push_back(fieldListJsonList[fieldListIndex].AsObject());
    }
    m_fieldListHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationException::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  if (m_fieldListHasBeenSet) {
    Aws::Utils::Array<JsonValue> fieldListJsonList(m_fieldList.size());
    for (unsigned fieldListIndex = 0; fieldListIndex < fieldListJsonList.GetLength(); ++fieldListIndex) {
      fieldListJsonList[fieldListIndex].AsObject(m_fieldList[fieldListIndex].Jsonize());
    }
    payload.WithArray("FieldList", std::move(fieldListJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ResourceExplorer2
}  // namespace Aws
