/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/ContentRecommendation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

ContentRecommendation::ContentRecommendation(JsonView jsonValue) { *this = jsonValue; }

ContentRecommendation& ContentRecommendation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Status")) {
    m_status = ContentRecommendationStatusMapper::GetContentRecommendationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Alternatives")) {
    m_alternatives = jsonValue.GetObject("Alternatives");
    m_alternativesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FollowUpQuestions")) {
    Aws::Utils::Array<JsonView> followUpQuestionsJsonList = jsonValue.GetArray("FollowUpQuestions");
    for (unsigned followUpQuestionsIndex = 0; followUpQuestionsIndex < followUpQuestionsJsonList.GetLength(); ++followUpQuestionsIndex) {
      m_followUpQuestions.push_back(followUpQuestionsJsonList[followUpQuestionsIndex].AsObject());
    }
    m_followUpQuestionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Findings")) {
    Aws::Utils::Array<JsonView> findingsJsonList = jsonValue.GetArray("Findings");
    for (unsigned findingsIndex = 0; findingsIndex < findingsJsonList.GetLength(); ++findingsIndex) {
      m_findings.push_back(findingsJsonList[findingsIndex].AsObject());
    }
    m_findingsHasBeenSet = true;
  }
  return *this;
}

JsonValue ContentRecommendation::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("Status", ContentRecommendationStatusMapper::GetNameForContentRecommendationStatus(m_status));
  }

  if (m_alternativesHasBeenSet) {
    payload.WithObject("Alternatives", m_alternatives.Jsonize());
  }

  if (m_followUpQuestionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> followUpQuestionsJsonList(m_followUpQuestions.size());
    for (unsigned followUpQuestionsIndex = 0; followUpQuestionsIndex < followUpQuestionsJsonList.GetLength(); ++followUpQuestionsIndex) {
      followUpQuestionsJsonList[followUpQuestionsIndex].AsObject(m_followUpQuestions[followUpQuestionsIndex].Jsonize());
    }
    payload.WithArray("FollowUpQuestions", std::move(followUpQuestionsJsonList));
  }

  if (m_findingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> findingsJsonList(m_findings.size());
    for (unsigned findingsIndex = 0; findingsIndex < findingsJsonList.GetLength(); ++findingsIndex) {
      findingsJsonList[findingsIndex].AsObject(m_findings[findingsIndex].Jsonize());
    }
    payload.WithArray("Findings", std::move(findingsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
