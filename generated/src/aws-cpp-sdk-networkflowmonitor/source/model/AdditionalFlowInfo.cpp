/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkflowmonitor/model/AdditionalFlowInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFlowMonitor {
namespace Model {

AdditionalFlowInfo::AdditionalFlowInfo(JsonView jsonValue) { *this = jsonValue; }

AdditionalFlowInfo& AdditionalFlowInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("network")) {
    m_network = jsonValue.GetObject("network");
    m_networkHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientLocation")) {
    m_clientLocation = jsonValue.GetObject("clientLocation");
    m_clientLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue AdditionalFlowInfo::Jsonize() const {
  JsonValue payload;

  if (m_networkHasBeenSet) {
    payload.WithObject("network", m_network.Jsonize());
  }

  if (m_clientLocationHasBeenSet) {
    payload.WithObject("clientLocation", m_clientLocation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
