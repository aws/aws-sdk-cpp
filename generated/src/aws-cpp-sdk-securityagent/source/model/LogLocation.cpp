/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/LogLocation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

LogLocation::LogLocation(JsonView jsonValue) { *this = jsonValue; }

LogLocation& LogLocation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("logType")) {
    m_logType = LogTypeMapper::GetLogTypeForName(jsonValue.GetString("logType"));
    m_logTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudWatchLog")) {
    m_cloudWatchLog = jsonValue.GetObject("cloudWatchLog");
    m_cloudWatchLogHasBeenSet = true;
  }
  return *this;
}

JsonValue LogLocation::Jsonize() const {
  JsonValue payload;

  if (m_logTypeHasBeenSet) {
    payload.WithString("logType", LogTypeMapper::GetNameForLogType(m_logType));
  }

  if (m_cloudWatchLogHasBeenSet) {
    payload.WithObject("cloudWatchLog", m_cloudWatchLog.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
