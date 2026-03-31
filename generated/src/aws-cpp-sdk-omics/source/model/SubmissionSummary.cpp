/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/omics/model/SubmissionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Omics {
namespace Model {

SubmissionSummary::SubmissionSummary(JsonView jsonValue) { *this = jsonValue; }

SubmissionSummary& SubmissionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("successfulStartSubmissionCount")) {
    m_successfulStartSubmissionCount = jsonValue.GetInteger("successfulStartSubmissionCount");
    m_successfulStartSubmissionCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failedStartSubmissionCount")) {
    m_failedStartSubmissionCount = jsonValue.GetInteger("failedStartSubmissionCount");
    m_failedStartSubmissionCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pendingStartSubmissionCount")) {
    m_pendingStartSubmissionCount = jsonValue.GetInteger("pendingStartSubmissionCount");
    m_pendingStartSubmissionCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("successfulCancelSubmissionCount")) {
    m_successfulCancelSubmissionCount = jsonValue.GetInteger("successfulCancelSubmissionCount");
    m_successfulCancelSubmissionCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failedCancelSubmissionCount")) {
    m_failedCancelSubmissionCount = jsonValue.GetInteger("failedCancelSubmissionCount");
    m_failedCancelSubmissionCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("successfulDeleteSubmissionCount")) {
    m_successfulDeleteSubmissionCount = jsonValue.GetInteger("successfulDeleteSubmissionCount");
    m_successfulDeleteSubmissionCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failedDeleteSubmissionCount")) {
    m_failedDeleteSubmissionCount = jsonValue.GetInteger("failedDeleteSubmissionCount");
    m_failedDeleteSubmissionCountHasBeenSet = true;
  }
  return *this;
}

JsonValue SubmissionSummary::Jsonize() const {
  JsonValue payload;

  if (m_successfulStartSubmissionCountHasBeenSet) {
    payload.WithInteger("successfulStartSubmissionCount", m_successfulStartSubmissionCount);
  }

  if (m_failedStartSubmissionCountHasBeenSet) {
    payload.WithInteger("failedStartSubmissionCount", m_failedStartSubmissionCount);
  }

  if (m_pendingStartSubmissionCountHasBeenSet) {
    payload.WithInteger("pendingStartSubmissionCount", m_pendingStartSubmissionCount);
  }

  if (m_successfulCancelSubmissionCountHasBeenSet) {
    payload.WithInteger("successfulCancelSubmissionCount", m_successfulCancelSubmissionCount);
  }

  if (m_failedCancelSubmissionCountHasBeenSet) {
    payload.WithInteger("failedCancelSubmissionCount", m_failedCancelSubmissionCount);
  }

  if (m_successfulDeleteSubmissionCountHasBeenSet) {
    payload.WithInteger("successfulDeleteSubmissionCount", m_successfulDeleteSubmissionCount);
  }

  if (m_failedDeleteSubmissionCountHasBeenSet) {
    payload.WithInteger("failedDeleteSubmissionCount", m_failedDeleteSubmissionCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
