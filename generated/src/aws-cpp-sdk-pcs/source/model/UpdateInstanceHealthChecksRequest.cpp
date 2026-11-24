/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pcs/model/UpdateInstanceHealthChecksRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {

UpdateInstanceHealthChecksRequest::UpdateInstanceHealthChecksRequest(JsonView jsonValue) { *this = jsonValue; }

UpdateInstanceHealthChecksRequest& UpdateInstanceHealthChecksRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("healthMonitoring")) {
    m_healthMonitoring = jsonValue.GetObject("healthMonitoring");
    m_healthMonitoringHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deepHealthChecks")) {
    m_deepHealthChecks = jsonValue.GetObject("deepHealthChecks");
    m_deepHealthChecksHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateInstanceHealthChecksRequest::Jsonize() const {
  JsonValue payload;

  if (m_healthMonitoringHasBeenSet) {
    payload.WithObject("healthMonitoring", m_healthMonitoring.Jsonize());
  }

  if (m_deepHealthChecksHasBeenSet) {
    payload.WithObject("deepHealthChecks", m_deepHealthChecks.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
