/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/InsightFeedbackRequest.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String InsightFeedbackRequest::SerializePayload() const {
  JsonValue payload;

  if (m_entityHasBeenSet) {
    payload.WithObject("Entity", m_entity.Jsonize());
  }

  if (m_insightIdHasBeenSet) {
    payload.WithString("InsightId", m_insightId);
  }

  if (m_thumbsHasBeenSet) {
    payload.WithString("Thumbs", InsightFeedbackThumbsMapper::GetNameForInsightFeedbackThumbs(m_thumbs));
  }

  if (m_feedbackTextHasBeenSet) {
    payload.WithString("FeedbackText", m_feedbackText);
  }

  return payload.View().WriteReadable();
}
