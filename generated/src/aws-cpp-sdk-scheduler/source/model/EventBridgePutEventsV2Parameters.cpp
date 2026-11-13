/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/scheduler/model/EventBridgePutEventsV2Parameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Scheduler {
namespace Model {

EventBridgePutEventsV2Parameters::EventBridgePutEventsV2Parameters(JsonView jsonValue) { *this = jsonValue; }

EventBridgePutEventsV2Parameters& EventBridgePutEventsV2Parameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DetailType")) {
    m_detailType = jsonValue.GetString("DetailType");
    m_detailTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Source")) {
    m_source = jsonValue.GetString("Source");
    m_sourceHasBeenSet = true;
  }
  return *this;
}

JsonValue EventBridgePutEventsV2Parameters::Jsonize() const {
  JsonValue payload;

  if (m_detailTypeHasBeenSet) {
    payload.WithString("DetailType", m_detailType);
  }

  if (m_sourceHasBeenSet) {
    payload.WithString("Source", m_source);
  }

  return payload;
}

}  // namespace Model
}  // namespace Scheduler
}  // namespace Aws
