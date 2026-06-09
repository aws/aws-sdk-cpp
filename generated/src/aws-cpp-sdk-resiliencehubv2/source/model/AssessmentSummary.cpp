/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/AssessmentSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

AssessmentSummary::AssessmentSummary(JsonView jsonValue) { *this = jsonValue; }

AssessmentSummary& AssessmentSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("assessmentId")) {
    m_assessmentId = jsonValue.GetString("assessmentId");
    m_assessmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceArn")) {
    m_serviceArn = jsonValue.GetString("serviceArn");
    m_serviceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assessmentStatus")) {
    m_assessmentStatus = AssessmentStatusMapper::GetAssessmentStatusForName(jsonValue.GetString("assessmentStatus"));
    m_assessmentStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assessmentStep")) {
    m_assessmentStep = AssessmentStepMapper::GetAssessmentStepForName(jsonValue.GetString("assessmentStep"));
    m_assessmentStepHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalFindings")) {
    m_totalFindings = jsonValue.GetInteger("totalFindings");
    m_totalFindingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetDouble("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endedAt")) {
    m_endedAt = jsonValue.GetDouble("endedAt");
    m_endedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorCode")) {
    m_errorCode = AssessmentErrorCodeMapper::GetAssessmentErrorCodeForName(jsonValue.GetString("errorCode"));
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assessmentCost")) {
    m_assessmentCost = jsonValue.GetObject("assessmentCost");
    m_assessmentCostHasBeenSet = true;
  }
  if (jsonValue.ValueExists("billableAssessmentUnitCount")) {
    m_billableAssessmentUnitCount = jsonValue.GetInteger("billableAssessmentUnitCount");
    m_billableAssessmentUnitCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("achievability")) {
    m_achievability = jsonValue.GetObject("achievability");
    m_achievabilityHasBeenSet = true;
  }
  return *this;
}

JsonValue AssessmentSummary::Jsonize() const {
  JsonValue payload;

  if (m_assessmentIdHasBeenSet) {
    payload.WithString("assessmentId", m_assessmentId);
  }

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_assessmentStatusHasBeenSet) {
    payload.WithString("assessmentStatus", AssessmentStatusMapper::GetNameForAssessmentStatus(m_assessmentStatus));
  }

  if (m_assessmentStepHasBeenSet) {
    payload.WithString("assessmentStep", AssessmentStepMapper::GetNameForAssessmentStep(m_assessmentStep));
  }

  if (m_totalFindingsHasBeenSet) {
    payload.WithInteger("totalFindings", m_totalFindings);
  }

  if (m_startedAtHasBeenSet) {
    payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if (m_endedAtHasBeenSet) {
    payload.WithDouble("endedAt", m_endedAt.SecondsWithMSPrecision());
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("errorCode", AssessmentErrorCodeMapper::GetNameForAssessmentErrorCode(m_errorCode));
  }

  if (m_assessmentCostHasBeenSet) {
    payload.WithObject("assessmentCost", m_assessmentCost.Jsonize());
  }

  if (m_billableAssessmentUnitCountHasBeenSet) {
    payload.WithInteger("billableAssessmentUnitCount", m_billableAssessmentUnitCount);
  }

  if (m_achievabilityHasBeenSet) {
    payload.WithObject("achievability", m_achievability.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
