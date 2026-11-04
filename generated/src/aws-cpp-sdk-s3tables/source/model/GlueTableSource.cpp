/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/GlueTableSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

GlueTableSource::GlueTableSource(JsonView jsonValue) { *this = jsonValue; }

GlueTableSource& GlueTableSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("catalogId")) {
    m_catalogId = jsonValue.GetString("catalogId");
    m_catalogIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("databaseName")) {
    m_databaseName = jsonValue.GetString("databaseName");
    m_databaseNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tableName")) {
    m_tableName = jsonValue.GetString("tableName");
    m_tableNameHasBeenSet = true;
  }
  return *this;
}

JsonValue GlueTableSource::Jsonize() const {
  JsonValue payload;

  if (m_catalogIdHasBeenSet) {
    payload.WithString("catalogId", m_catalogId);
  }

  if (m_databaseNameHasBeenSet) {
    payload.WithString("databaseName", m_databaseName);
  }

  if (m_tableNameHasBeenSet) {
    payload.WithString("tableName", m_tableName);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
