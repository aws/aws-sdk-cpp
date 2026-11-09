/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/DivergentItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

DivergentItem::DivergentItem(JsonView jsonValue) { *this = jsonValue; }

DivergentItem& DivergentItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Fields")) {
    Aws::Utils::Array<JsonView> fieldsJsonList = jsonValue.GetArray("Fields");
    for (unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex) {
      m_fields.push_back(fieldsJsonList[fieldsIndex].AsObject());
    }
    m_fieldsHasBeenSet = true;
  }
  return *this;
}

JsonValue DivergentItem::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_fieldsHasBeenSet) {
    Aws::Utils::Array<JsonValue> fieldsJsonList(m_fields.size());
    for (unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex) {
      fieldsJsonList[fieldsIndex].AsObject(m_fields[fieldsIndex].Jsonize());
    }
    payload.WithArray("Fields", std::move(fieldsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
