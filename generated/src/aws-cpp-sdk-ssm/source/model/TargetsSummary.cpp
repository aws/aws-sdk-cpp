/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm/model/TargetsSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SSM {
namespace Model {

TargetsSummary::TargetsSummary(JsonView jsonValue) { *this = jsonValue; }

TargetsSummary& TargetsSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TotalCount")) {
    m_totalCount = jsonValue.GetInteger("TotalCount");
    m_totalCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartedCount")) {
    m_startedCount = jsonValue.GetInteger("StartedCount");
    m_startedCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CompletedCount")) {
    m_completedCount = jsonValue.GetInteger("CompletedCount");
    m_completedCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SuccessfulCount")) {
    m_successfulCount = jsonValue.GetInteger("SuccessfulCount");
    m_successfulCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailedCount")) {
    m_failedCount = jsonValue.GetInteger("FailedCount");
    m_failedCountHasBeenSet = true;
  }
  return *this;
}

JsonValue TargetsSummary::Jsonize() const {
  JsonValue payload;

  if (m_totalCountHasBeenSet) {
    payload.WithInteger("TotalCount", m_totalCount);
  }

  if (m_startedCountHasBeenSet) {
    payload.WithInteger("StartedCount", m_startedCount);
  }

  if (m_completedCountHasBeenSet) {
    payload.WithInteger("CompletedCount", m_completedCount);
  }

  if (m_successfulCountHasBeenSet) {
    payload.WithInteger("SuccessfulCount", m_successfulCount);
  }

  if (m_failedCountHasBeenSet) {
    payload.WithInteger("FailedCount", m_failedCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
