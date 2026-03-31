/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/CloudWatchLog.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

CloudWatchLog::CloudWatchLog(JsonView jsonValue) { *this = jsonValue; }

CloudWatchLog& CloudWatchLog::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("logGroup")) {
    m_logGroup = jsonValue.GetString("logGroup");
    m_logGroupHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logStream")) {
    m_logStream = jsonValue.GetString("logStream");
    m_logStreamHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudWatchLog::Jsonize() const {
  JsonValue payload;

  if (m_logGroupHasBeenSet) {
    payload.WithString("logGroup", m_logGroup);
  }

  if (m_logStreamHasBeenSet) {
    payload.WithString("logStream", m_logStream);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
