/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/SchemaV2Field.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

SchemaV2Field::SchemaV2Field(JsonView jsonValue) { *this = jsonValue; }

SchemaV2Field& SchemaV2Field::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetInteger("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = jsonValue.GetObject("type");
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("required")) {
    m_required = jsonValue.GetBool("required");
    m_requiredHasBeenSet = true;
  }
  if (jsonValue.ValueExists("doc")) {
    m_doc = jsonValue.GetString("doc");
    m_docHasBeenSet = true;
  }
  return *this;
}

JsonValue SchemaV2Field::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithInteger("id", m_id);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_typeHasBeenSet) {
    if (!m_type.View().IsNull()) {
      payload.WithObject("type", JsonValue(m_type.View()));
    }
  }

  if (m_requiredHasBeenSet) {
    payload.WithBool("required", m_required);
  }

  if (m_docHasBeenSet) {
    payload.WithString("doc", m_doc);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
