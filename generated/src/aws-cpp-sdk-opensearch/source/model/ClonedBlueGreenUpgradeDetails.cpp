/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/ClonedBlueGreenUpgradeDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

ClonedBlueGreenUpgradeDetails::ClonedBlueGreenUpgradeDetails(JsonView jsonValue) { *this = jsonValue; }

ClonedBlueGreenUpgradeDetails& ClonedBlueGreenUpgradeDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TrafficSplit")) {
    m_trafficSplit = jsonValue.GetObject("TrafficSplit");
    m_trafficSplitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScheduledAction")) {
    m_scheduledAction = jsonValue.GetObject("ScheduledAction");
    m_scheduledActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RetentionInHours")) {
    m_retentionInHours = jsonValue.GetInteger("RetentionInHours");
    m_retentionInHoursHasBeenSet = true;
  }
  return *this;
}

JsonValue ClonedBlueGreenUpgradeDetails::Jsonize() const {
  JsonValue payload;

  if (m_trafficSplitHasBeenSet) {
    payload.WithObject("TrafficSplit", m_trafficSplit.Jsonize());
  }

  if (m_scheduledActionHasBeenSet) {
    payload.WithObject("ScheduledAction", m_scheduledAction.Jsonize());
  }

  if (m_retentionInHoursHasBeenSet) {
    payload.WithInteger("RetentionInHours", m_retentionInHours);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
