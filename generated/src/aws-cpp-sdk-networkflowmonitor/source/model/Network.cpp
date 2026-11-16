/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkflowmonitor/model/Network.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFlowMonitor {
namespace Model {

Network::Network(JsonView jsonValue) { *this = jsonValue; }

Network& Network::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("asName")) {
    m_asName = jsonValue.GetString("asName");
    m_asNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("asNumber")) {
    m_asNumber = jsonValue.GetInt64("asNumber");
    m_asNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue Network::Jsonize() const {
  JsonValue payload;

  if (m_asNameHasBeenSet) {
    payload.WithString("asName", m_asName);
  }

  if (m_asNumberHasBeenSet) {
    payload.WithInt64("asNumber", m_asNumber);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
