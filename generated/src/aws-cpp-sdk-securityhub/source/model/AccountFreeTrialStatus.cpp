/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/AccountFreeTrialStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

AccountFreeTrialStatus::AccountFreeTrialStatus(JsonView jsonValue) { *this = jsonValue; }

AccountFreeTrialStatus& AccountFreeTrialStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AccountId")) {
    m_accountId = jsonValue.GetString("AccountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EvaluatedAt")) {
    m_evaluatedAt = jsonValue.GetString("EvaluatedAt");
    m_evaluatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FreeTrialStatuses")) {
    Aws::Utils::Array<JsonView> freeTrialStatusesJsonList = jsonValue.GetArray("FreeTrialStatuses");
    for (unsigned freeTrialStatusesIndex = 0; freeTrialStatusesIndex < freeTrialStatusesJsonList.GetLength(); ++freeTrialStatusesIndex) {
      m_freeTrialStatuses.push_back(freeTrialStatusesJsonList[freeTrialStatusesIndex].AsObject());
    }
    m_freeTrialStatusesHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountFreeTrialStatus::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("AccountId", m_accountId);
  }

  if (m_evaluatedAtHasBeenSet) {
    payload.WithString("EvaluatedAt", m_evaluatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_freeTrialStatusesHasBeenSet) {
    Aws::Utils::Array<JsonValue> freeTrialStatusesJsonList(m_freeTrialStatuses.size());
    for (unsigned freeTrialStatusesIndex = 0; freeTrialStatusesIndex < freeTrialStatusesJsonList.GetLength(); ++freeTrialStatusesIndex) {
      freeTrialStatusesJsonList[freeTrialStatusesIndex].AsObject(m_freeTrialStatuses[freeTrialStatusesIndex].Jsonize());
    }
    payload.WithArray("FreeTrialStatuses", std::move(freeTrialStatusesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
