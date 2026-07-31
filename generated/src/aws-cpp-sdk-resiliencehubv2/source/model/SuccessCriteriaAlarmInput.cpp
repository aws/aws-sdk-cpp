/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/SuccessCriteriaAlarmInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

SuccessCriteriaAlarmInput::SuccessCriteriaAlarmInput(JsonView jsonValue) { *this = jsonValue; }

SuccessCriteriaAlarmInput& SuccessCriteriaAlarmInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("alarmArn")) {
    m_alarmArn = jsonValue.GetString("alarmArn");
    m_alarmArnHasBeenSet = true;
  }
  return *this;
}

JsonValue SuccessCriteriaAlarmInput::Jsonize() const {
  JsonValue payload;

  if (m_alarmArnHasBeenSet) {
    payload.WithString("alarmArn", m_alarmArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
