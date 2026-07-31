/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/UpdateTopicV2Request.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateTopicV2Request::SerializePayload() const {
  JsonValue payload;

  if (m_topicHasBeenSet) {
    payload.WithObject("Topic", m_topic.Jsonize());
  }

  if (m_customInstructionsHasBeenSet) {
    payload.WithObject("CustomInstructions", m_customInstructions.Jsonize());
  }

  if (m_publishOptionHasBeenSet) {
    payload.WithString("PublishOption", TopicV2PublishOptionMapper::GetNameForTopicV2PublishOption(m_publishOption));
  }

  return payload.View().WriteReadable();
}
