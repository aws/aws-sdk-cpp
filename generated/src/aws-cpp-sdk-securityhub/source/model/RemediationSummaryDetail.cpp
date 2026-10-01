/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/RemediationSummaryDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

RemediationSummaryDetail::RemediationSummaryDetail(JsonView jsonValue) { *this = jsonValue; }

RemediationSummaryDetail& RemediationSummaryDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Action")) {
    m_action = jsonValue.GetString("Action");
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IsImmediate")) {
    m_isImmediate = jsonValue.GetBool("IsImmediate");
    m_isImmediateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PostRemediationSteps")) {
    Aws::Utils::Array<JsonView> postRemediationStepsJsonList = jsonValue.GetArray("PostRemediationSteps");
    for (unsigned postRemediationStepsIndex = 0; postRemediationStepsIndex < postRemediationStepsJsonList.GetLength();
         ++postRemediationStepsIndex) {
      m_postRemediationSteps.push_back(postRemediationStepsJsonList[postRemediationStepsIndex].AsString());
    }
    m_postRemediationStepsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KbArticles")) {
    Aws::Utils::Array<JsonView> kbArticlesJsonList = jsonValue.GetArray("KbArticles");
    for (unsigned kbArticlesIndex = 0; kbArticlesIndex < kbArticlesJsonList.GetLength(); ++kbArticlesIndex) {
      m_kbArticles.push_back(kbArticlesJsonList[kbArticlesIndex].AsObject());
    }
    m_kbArticlesHasBeenSet = true;
  }
  return *this;
}

JsonValue RemediationSummaryDetail::Jsonize() const {
  JsonValue payload;

  if (m_actionHasBeenSet) {
    payload.WithString("Action", m_action);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_isImmediateHasBeenSet) {
    payload.WithBool("IsImmediate", m_isImmediate);
  }

  if (m_postRemediationStepsHasBeenSet) {
    Aws::Utils::Array<JsonValue> postRemediationStepsJsonList(m_postRemediationSteps.size());
    for (unsigned postRemediationStepsIndex = 0; postRemediationStepsIndex < postRemediationStepsJsonList.GetLength();
         ++postRemediationStepsIndex) {
      postRemediationStepsJsonList[postRemediationStepsIndex].AsString(m_postRemediationSteps[postRemediationStepsIndex]);
    }
    payload.WithArray("PostRemediationSteps", std::move(postRemediationStepsJsonList));
  }

  if (m_kbArticlesHasBeenSet) {
    Aws::Utils::Array<JsonValue> kbArticlesJsonList(m_kbArticles.size());
    for (unsigned kbArticlesIndex = 0; kbArticlesIndex < kbArticlesJsonList.GetLength(); ++kbArticlesIndex) {
      kbArticlesJsonList[kbArticlesIndex].AsObject(m_kbArticles[kbArticlesIndex].Jsonize());
    }
    payload.WithArray("KbArticles", std::move(kbArticlesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
