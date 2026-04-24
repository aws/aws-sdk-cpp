/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/security-ir/model/SendFeedbackRequest.h>

#include <utility>

using namespace Aws::SecurityIR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SendFeedbackRequest::SerializePayload() const {
  JsonValue payload;

  if (m_usefulnessHasBeenSet) {
    payload.WithString("usefulness", UsefulnessRatingMapper::GetNameForUsefulnessRating(m_usefulness));
  }

  if (m_commentHasBeenSet) {
    payload.WithString("comment", m_comment);
  }

  return payload.View().WriteReadable();
}
