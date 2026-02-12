/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/IcebergPartitionField.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

IcebergPartitionField::IcebergPartitionField(JsonView jsonValue) { *this = jsonValue; }

IcebergPartitionField& IcebergPartitionField::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("source-id")) {
    m_sourceId = jsonValue.GetInteger("source-id");
    m_sourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("transform")) {
    m_transform = jsonValue.GetString("transform");
    m_transformHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("field-id")) {
    m_fieldId = jsonValue.GetInteger("field-id");
    m_fieldIdHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergPartitionField::Jsonize() const {
  JsonValue payload;

  if (m_sourceIdHasBeenSet) {
    payload.WithInteger("source-id", m_sourceId);
  }

  if (m_transformHasBeenSet) {
    payload.WithString("transform", m_transform);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_fieldIdHasBeenSet) {
    payload.WithInteger("field-id", m_fieldId);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
