/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/TrafficSplitOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

TrafficSplitOptions::TrafficSplitOptions(JsonView jsonValue) { *this = jsonValue; }

TrafficSplitOptions& TrafficSplitOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Current")) {
    m_current = jsonValue.GetObject("Current");
    m_currentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Target")) {
    m_target = jsonValue.GetObject("Target");
    m_targetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = TrafficSplitStatusMapper::GetTrafficSplitStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue TrafficSplitOptions::Jsonize() const {
  JsonValue payload;

  if (m_currentHasBeenSet) {
    payload.WithObject("Current", m_current.Jsonize());
  }

  if (m_targetHasBeenSet) {
    payload.WithObject("Target", m_target.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", TrafficSplitStatusMapper::GetNameForTrafficSplitStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
