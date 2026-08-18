/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/AssessmentSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

AssessmentSummary::AssessmentSummary(JsonView jsonValue) { *this = jsonValue; }

AssessmentSummary& AssessmentSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AssessmentArn")) {
    m_assessmentArn = jsonValue.GetString("AssessmentArn");
    m_assessmentArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssessmentId")) {
    m_assessmentId = jsonValue.GetString("AssessmentId");
    m_assessmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FrameworkId")) {
    m_frameworkId = jsonValue.GetString("FrameworkId");
    m_frameworkIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssessmentTargetSummary")) {
    m_assessmentTargetSummary = jsonValue.GetObject("AssessmentTargetSummary");
    m_assessmentTargetSummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FrameworkSummary")) {
    m_frameworkSummary = jsonValue.GetObject("FrameworkSummary");
    m_frameworkSummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssessmentResult")) {
    m_assessmentResult = AssessmentResultMapper::GetAssessmentResultForName(jsonValue.GetString("AssessmentResult"));
    m_assessmentResultHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpiresAt")) {
    m_expiresAt = jsonValue.GetString("ExpiresAt");
    m_expiresAtHasBeenSet = true;
  }
  return *this;
}

JsonValue AssessmentSummary::Jsonize() const {
  JsonValue payload;

  if (m_assessmentArnHasBeenSet) {
    payload.WithString("AssessmentArn", m_assessmentArn);
  }

  if (m_assessmentIdHasBeenSet) {
    payload.WithString("AssessmentId", m_assessmentId);
  }

  if (m_frameworkIdHasBeenSet) {
    payload.WithString("FrameworkId", m_frameworkId);
  }

  if (m_assessmentTargetSummaryHasBeenSet) {
    payload.WithObject("AssessmentTargetSummary", m_assessmentTargetSummary.Jsonize());
  }

  if (m_frameworkSummaryHasBeenSet) {
    payload.WithObject("FrameworkSummary", m_frameworkSummary.Jsonize());
  }

  if (m_assessmentResultHasBeenSet) {
    payload.WithString("AssessmentResult", AssessmentResultMapper::GetNameForAssessmentResult(m_assessmentResult));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("CreatedAt", m_createdAt);
  }

  if (m_expiresAtHasBeenSet) {
    payload.WithString("ExpiresAt", m_expiresAt);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
