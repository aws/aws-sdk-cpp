/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/TestSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

TestSummary::TestSummary(JsonView jsonValue) { *this = jsonValue; }

TestSummary& TestSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("testId")) {
    m_testId = jsonValue.GetString("testId");
    m_testIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("testTemplateArn")) {
    m_testTemplateArn = jsonValue.GetString("testTemplateArn");
    m_testTemplateArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceArn")) {
    m_serviceArn = jsonValue.GetString("serviceArn");
    m_serviceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalTestRuns")) {
    m_totalTestRuns = jsonValue.GetInteger("totalTestRuns");
    m_totalTestRunsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("successfulTestRuns")) {
    m_successfulTestRuns = jsonValue.GetInteger("successfulTestRuns");
    m_successfulTestRunsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue TestSummary::Jsonize() const {
  JsonValue payload;

  if (m_testIdHasBeenSet) {
    payload.WithString("testId", m_testId);
  }

  if (m_testTemplateArnHasBeenSet) {
    payload.WithString("testTemplateArn", m_testTemplateArn);
  }

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_totalTestRunsHasBeenSet) {
    payload.WithInteger("totalTestRuns", m_totalTestRuns);
  }

  if (m_successfulTestRunsHasBeenSet) {
    payload.WithInteger("successfulTestRuns", m_successfulTestRuns);
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
