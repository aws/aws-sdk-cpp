/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/IcebergSortOrder.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

IcebergSortOrder::IcebergSortOrder(JsonView jsonValue) { *this = jsonValue; }

IcebergSortOrder& IcebergSortOrder::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("order-id")) {
    m_orderId = jsonValue.GetInteger("order-id");
    m_orderIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fields")) {
    Aws::Utils::Array<JsonView> fieldsJsonList = jsonValue.GetArray("fields");
    for (unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex) {
      m_fields.push_back(fieldsJsonList[fieldsIndex].AsObject());
    }
    m_fieldsHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergSortOrder::Jsonize() const {
  JsonValue payload;

  if (m_orderIdHasBeenSet) {
    payload.WithInteger("order-id", m_orderId);
  }

  if (m_fieldsHasBeenSet) {
    Aws::Utils::Array<JsonValue> fieldsJsonList(m_fields.size());
    for (unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex) {
      fieldsJsonList[fieldsIndex].AsObject(m_fields[fieldsIndex].Jsonize());
    }
    payload.WithArray("fields", std::move(fieldsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
