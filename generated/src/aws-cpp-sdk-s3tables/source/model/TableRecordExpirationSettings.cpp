/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/TableRecordExpirationSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

TableRecordExpirationSettings::TableRecordExpirationSettings(JsonView jsonValue) { *this = jsonValue; }

TableRecordExpirationSettings& TableRecordExpirationSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("days")) {
    m_days = jsonValue.GetInteger("days");
    m_daysHasBeenSet = true;
  }
  return *this;
}

JsonValue TableRecordExpirationSettings::Jsonize() const {
  JsonValue payload;

  if (m_daysHasBeenSet) {
    payload.WithInteger("days", m_days);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
