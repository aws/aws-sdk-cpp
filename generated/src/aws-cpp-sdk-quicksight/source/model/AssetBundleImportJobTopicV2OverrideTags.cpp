/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/AssetBundleImportJobTopicV2OverrideTags.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

AssetBundleImportJobTopicV2OverrideTags::AssetBundleImportJobTopicV2OverrideTags(JsonView jsonValue) { *this = jsonValue; }

AssetBundleImportJobTopicV2OverrideTags& AssetBundleImportJobTopicV2OverrideTags::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TopicIds")) {
    Aws::Utils::Array<JsonView> topicIdsJsonList = jsonValue.GetArray("TopicIds");
    for (unsigned topicIdsIndex = 0; topicIdsIndex < topicIdsJsonList.GetLength(); ++topicIdsIndex) {
      m_topicIds.push_back(topicIdsJsonList[topicIdsIndex].AsString());
    }
    m_topicIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetBundleImportJobTopicV2OverrideTags::Jsonize() const {
  JsonValue payload;

  if (m_topicIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> topicIdsJsonList(m_topicIds.size());
    for (unsigned topicIdsIndex = 0; topicIdsIndex < topicIdsJsonList.GetLength(); ++topicIdsIndex) {
      topicIdsJsonList[topicIdsIndex].AsString(m_topicIds[topicIdsIndex]);
    }
    payload.WithArray("TopicIds", std::move(topicIdsJsonList));
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
