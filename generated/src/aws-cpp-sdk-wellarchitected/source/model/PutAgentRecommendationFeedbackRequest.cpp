/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/PutAgentRecommendationFeedbackRequest.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutAgentRecommendationFeedbackRequest::SerializePayload() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", RecommendationFeedbackTypeMapper::GetNameForRecommendationFeedbackType(m_type));
  }

  if (m_feedbackCategoryHasBeenSet) {
    payload.WithString("feedbackCategory", FeedbackCategoryMapper::GetNameForFeedbackCategory(m_feedbackCategory));
  }

  if (m_commentsHasBeenSet) {
    payload.WithString("comments", m_comments);
  }

  return payload.View().WriteReadable();
}
