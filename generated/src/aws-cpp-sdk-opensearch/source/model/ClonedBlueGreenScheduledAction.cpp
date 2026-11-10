/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/ClonedBlueGreenScheduledAction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

ClonedBlueGreenScheduledAction::ClonedBlueGreenScheduledAction(JsonView jsonValue) { *this = jsonValue; }

ClonedBlueGreenScheduledAction& ClonedBlueGreenScheduledAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Action")) {
    m_action = ClonedBlueGreenScheduledActionTypeMapper::GetClonedBlueGreenScheduledActionTypeForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScheduledTime")) {
    m_scheduledTime = jsonValue.GetDouble("ScheduledTime");
    m_scheduledTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue ClonedBlueGreenScheduledAction::Jsonize() const {
  JsonValue payload;

  if (m_actionHasBeenSet) {
    payload.WithString("Action", ClonedBlueGreenScheduledActionTypeMapper::GetNameForClonedBlueGreenScheduledActionType(m_action));
  }

  if (m_scheduledTimeHasBeenSet) {
    payload.WithDouble("ScheduledTime", m_scheduledTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
