/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/RemediationGuidanceMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

RemediationGuidanceMetadata::RemediationGuidanceMetadata(JsonView jsonValue) { *this = jsonValue; }

RemediationGuidanceMetadata& RemediationGuidanceMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceType")) {
    m_resourceType = jsonValue.GetString("ResourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExposureType")) {
    m_exposureType = jsonValue.GetString("ExposureType");
    m_exposureTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TraitTitles")) {
    Aws::Utils::Array<JsonView> traitTitlesJsonList = jsonValue.GetArray("TraitTitles");
    for (unsigned traitTitlesIndex = 0; traitTitlesIndex < traitTitlesJsonList.GetLength(); ++traitTitlesIndex) {
      m_traitTitles.push_back(traitTitlesJsonList[traitTitlesIndex].AsString());
    }
    m_traitTitlesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Reversibility")) {
    m_reversibility = jsonValue.GetString("Reversibility");
    m_reversibilityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FixEffect")) {
    m_fixEffect = jsonValue.GetString("FixEffect");
    m_fixEffectHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RiskLevel")) {
    m_riskLevel = jsonValue.GetString("RiskLevel");
    m_riskLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AutomationLevel")) {
    m_automationLevel = jsonValue.GetString("AutomationLevel");
    m_automationLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HumanReviewRequired")) {
    m_humanReviewRequired = jsonValue.GetBool("HumanReviewRequired");
    m_humanReviewRequiredHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GeneratedAt")) {
    m_generatedAt = jsonValue.GetString("GeneratedAt");
    m_generatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VerificationStatus")) {
    m_verificationStatus = jsonValue.GetString("VerificationStatus");
    m_verificationStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue RemediationGuidanceMetadata::Jsonize() const {
  JsonValue payload;

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("ResourceType", m_resourceType);
  }

  if (m_exposureTypeHasBeenSet) {
    payload.WithString("ExposureType", m_exposureType);
  }

  if (m_traitTitlesHasBeenSet) {
    Aws::Utils::Array<JsonValue> traitTitlesJsonList(m_traitTitles.size());
    for (unsigned traitTitlesIndex = 0; traitTitlesIndex < traitTitlesJsonList.GetLength(); ++traitTitlesIndex) {
      traitTitlesJsonList[traitTitlesIndex].AsString(m_traitTitles[traitTitlesIndex]);
    }
    payload.WithArray("TraitTitles", std::move(traitTitlesJsonList));
  }

  if (m_reversibilityHasBeenSet) {
    payload.WithString("Reversibility", m_reversibility);
  }

  if (m_fixEffectHasBeenSet) {
    payload.WithString("FixEffect", m_fixEffect);
  }

  if (m_riskLevelHasBeenSet) {
    payload.WithString("RiskLevel", m_riskLevel);
  }

  if (m_automationLevelHasBeenSet) {
    payload.WithString("AutomationLevel", m_automationLevel);
  }

  if (m_humanReviewRequiredHasBeenSet) {
    payload.WithBool("HumanReviewRequired", m_humanReviewRequired);
  }

  if (m_generatedAtHasBeenSet) {
    payload.WithString("GeneratedAt", m_generatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_verificationStatusHasBeenSet) {
    payload.WithString("VerificationStatus", m_verificationStatus);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
