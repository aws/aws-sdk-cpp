/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/LogGroupNameConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

LogGroupNameConfiguration::LogGroupNameConfiguration(JsonView jsonValue) { *this = jsonValue; }

LogGroupNameConfiguration& LogGroupNameConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LogGroupNamePattern")) {
    m_logGroupNamePattern = jsonValue.GetString("LogGroupNamePattern");
    m_logGroupNamePatternHasBeenSet = true;
  }
  return *this;
}

JsonValue LogGroupNameConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_logGroupNamePatternHasBeenSet) {
    payload.WithString("LogGroupNamePattern", m_logGroupNamePattern);
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
