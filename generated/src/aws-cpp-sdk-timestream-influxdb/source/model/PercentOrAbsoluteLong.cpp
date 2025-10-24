/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/timestream-influxdb/model/PercentOrAbsoluteLong.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {

PercentOrAbsoluteLong::PercentOrAbsoluteLong(JsonView jsonValue) { *this = jsonValue; }

PercentOrAbsoluteLong& PercentOrAbsoluteLong::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("percent")) {
    m_percent = jsonValue.GetString("percent");
    m_percentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("absolute")) {
    m_absolute = jsonValue.GetInt64("absolute");
    m_absoluteHasBeenSet = true;
  }
  return *this;
}

JsonValue PercentOrAbsoluteLong::Jsonize() const {
  JsonValue payload;

  if (m_percentHasBeenSet) {
    payload.WithString("percent", m_percent);
  }

  if (m_absoluteHasBeenSet) {
    payload.WithInt64("absolute", m_absolute);
  }

  return payload;
}

}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
