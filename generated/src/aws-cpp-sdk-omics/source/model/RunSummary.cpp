/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/omics/model/RunSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Omics {
namespace Model {

RunSummary::RunSummary(JsonView jsonValue) { *this = jsonValue; }

RunSummary& RunSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("pendingRunCount")) {
    m_pendingRunCount = jsonValue.GetInteger("pendingRunCount");
    m_pendingRunCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startingRunCount")) {
    m_startingRunCount = jsonValue.GetInteger("startingRunCount");
    m_startingRunCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("runningRunCount")) {
    m_runningRunCount = jsonValue.GetInteger("runningRunCount");
    m_runningRunCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stoppingRunCount")) {
    m_stoppingRunCount = jsonValue.GetInteger("stoppingRunCount");
    m_stoppingRunCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("completedRunCount")) {
    m_completedRunCount = jsonValue.GetInteger("completedRunCount");
    m_completedRunCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deletedRunCount")) {
    m_deletedRunCount = jsonValue.GetInteger("deletedRunCount");
    m_deletedRunCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failedRunCount")) {
    m_failedRunCount = jsonValue.GetInteger("failedRunCount");
    m_failedRunCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cancelledRunCount")) {
    m_cancelledRunCount = jsonValue.GetInteger("cancelledRunCount");
    m_cancelledRunCountHasBeenSet = true;
  }
  return *this;
}

JsonValue RunSummary::Jsonize() const {
  JsonValue payload;

  if (m_pendingRunCountHasBeenSet) {
    payload.WithInteger("pendingRunCount", m_pendingRunCount);
  }

  if (m_startingRunCountHasBeenSet) {
    payload.WithInteger("startingRunCount", m_startingRunCount);
  }

  if (m_runningRunCountHasBeenSet) {
    payload.WithInteger("runningRunCount", m_runningRunCount);
  }

  if (m_stoppingRunCountHasBeenSet) {
    payload.WithInteger("stoppingRunCount", m_stoppingRunCount);
  }

  if (m_completedRunCountHasBeenSet) {
    payload.WithInteger("completedRunCount", m_completedRunCount);
  }

  if (m_deletedRunCountHasBeenSet) {
    payload.WithInteger("deletedRunCount", m_deletedRunCount);
  }

  if (m_failedRunCountHasBeenSet) {
    payload.WithInteger("failedRunCount", m_failedRunCount);
  }

  if (m_cancelledRunCountHasBeenSet) {
    payload.WithInteger("cancelledRunCount", m_cancelledRunCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
