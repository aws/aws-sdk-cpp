/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/TestRunSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

TestRunSummary::TestRunSummary(JsonView jsonValue) { *this = jsonValue; }

TestRunSummary& TestRunSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("testRunId")) {
    m_testRunId = jsonValue.GetString("testRunId");
    m_testRunIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = TestRunStatusMapper::GetTestRunStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetDouble("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endedAt")) {
    m_endedAt = jsonValue.GetDouble("endedAt");
    m_endedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("testTemplateArn")) {
    m_testTemplateArn = jsonValue.GetString("testTemplateArn");
    m_testTemplateArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceArn")) {
    m_serviceArn = jsonValue.GetString("serviceArn");
    m_serviceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountTargeting")) {
    m_accountTargeting = AccountTargetingMapper::GetAccountTargetingForName(jsonValue.GetString("accountTargeting"));
    m_accountTargetingHasBeenSet = true;
  }
  return *this;
}

JsonValue TestRunSummary::Jsonize() const {
  JsonValue payload;

  if (m_testRunIdHasBeenSet) {
    payload.WithString("testRunId", m_testRunId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", TestRunStatusMapper::GetNameForTestRunStatus(m_status));
  }

  if (m_startedAtHasBeenSet) {
    payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if (m_endedAtHasBeenSet) {
    payload.WithDouble("endedAt", m_endedAt.SecondsWithMSPrecision());
  }

  if (m_testTemplateArnHasBeenSet) {
    payload.WithString("testTemplateArn", m_testTemplateArn);
  }

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  if (m_accountTargetingHasBeenSet) {
    payload.WithString("accountTargeting", AccountTargetingMapper::GetNameForAccountTargeting(m_accountTargeting));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
