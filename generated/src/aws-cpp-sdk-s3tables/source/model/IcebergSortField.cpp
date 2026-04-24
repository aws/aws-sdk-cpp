/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/IcebergSortField.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

IcebergSortField::IcebergSortField(JsonView jsonValue) { *this = jsonValue; }

IcebergSortField& IcebergSortField::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("source-id")) {
    m_sourceId = jsonValue.GetInteger("source-id");
    m_sourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("transform")) {
    m_transform = jsonValue.GetString("transform");
    m_transformHasBeenSet = true;
  }
  if (jsonValue.ValueExists("direction")) {
    m_direction = IcebergSortDirectionMapper::GetIcebergSortDirectionForName(jsonValue.GetString("direction"));
    m_directionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("null-order")) {
    m_nullOrder = IcebergNullOrderMapper::GetIcebergNullOrderForName(jsonValue.GetString("null-order"));
    m_nullOrderHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergSortField::Jsonize() const {
  JsonValue payload;

  if (m_sourceIdHasBeenSet) {
    payload.WithInteger("source-id", m_sourceId);
  }

  if (m_transformHasBeenSet) {
    payload.WithString("transform", m_transform);
  }

  if (m_directionHasBeenSet) {
    payload.WithString("direction", IcebergSortDirectionMapper::GetNameForIcebergSortDirection(m_direction));
  }

  if (m_nullOrderHasBeenSet) {
    payload.WithString("null-order", IcebergNullOrderMapper::GetNameForIcebergNullOrder(m_nullOrder));
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
