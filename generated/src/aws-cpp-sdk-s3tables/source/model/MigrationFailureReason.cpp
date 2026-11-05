/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/MigrationFailureReason.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

MigrationFailureReason::MigrationFailureReason(JsonView jsonValue) { *this = jsonValue; }

MigrationFailureReason& MigrationFailureReason::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("code")) {
    m_code = MigrationFailureCodeMapper::GetMigrationFailureCodeForName(jsonValue.GetString("code"));
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("detail")) {
    m_detail = jsonValue.GetString("detail");
    m_detailHasBeenSet = true;
  }
  return *this;
}

JsonValue MigrationFailureReason::Jsonize() const {
  JsonValue payload;

  if (m_codeHasBeenSet) {
    payload.WithString("code", MigrationFailureCodeMapper::GetNameForMigrationFailureCode(m_code));
  }

  if (m_detailHasBeenSet) {
    payload.WithString("detail", m_detail);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
