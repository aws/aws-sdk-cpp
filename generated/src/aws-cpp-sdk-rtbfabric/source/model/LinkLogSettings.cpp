/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/LinkLogSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

LinkLogSettings::LinkLogSettings(JsonView jsonValue) { *this = jsonValue; }

LinkLogSettings& LinkLogSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("applicationLogs")) {
    m_applicationLogs = jsonValue.GetObject("applicationLogs");
    m_applicationLogsHasBeenSet = true;
  }
  return *this;
}

JsonValue LinkLogSettings::Jsonize() const {
  JsonValue payload;

  if (m_applicationLogsHasBeenSet) {
    payload.WithObject("applicationLogs", m_applicationLogs.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
