/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/AssetBundleImportJobTopicV2OverridePermissions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

AssetBundleImportJobTopicV2OverridePermissions::AssetBundleImportJobTopicV2OverridePermissions(JsonView jsonValue) { *this = jsonValue; }

AssetBundleImportJobTopicV2OverridePermissions& AssetBundleImportJobTopicV2OverridePermissions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TopicIds")) {
    Aws::Utils::Array<JsonView> topicIdsJsonList = jsonValue.GetArray("TopicIds");
    for (unsigned topicIdsIndex = 0; topicIdsIndex < topicIdsJsonList.GetLength(); ++topicIdsIndex) {
      m_topicIds.push_back(topicIdsJsonList[topicIdsIndex].AsString());
    }
    m_topicIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Permissions")) {
    m_permissions = jsonValue.GetObject("Permissions");
    m_permissionsHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetBundleImportJobTopicV2OverridePermissions::Jsonize() const {
  JsonValue payload;

  if (m_topicIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> topicIdsJsonList(m_topicIds.size());
    for (unsigned topicIdsIndex = 0; topicIdsIndex < topicIdsJsonList.GetLength(); ++topicIdsIndex) {
      topicIdsJsonList[topicIdsIndex].AsString(m_topicIds[topicIdsIndex]);
    }
    payload.WithArray("TopicIds", std::move(topicIdsJsonList));
  }

  if (m_permissionsHasBeenSet) {
    payload.WithObject("Permissions", m_permissions.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
