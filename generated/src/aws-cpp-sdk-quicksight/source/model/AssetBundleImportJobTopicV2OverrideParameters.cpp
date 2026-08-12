/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/AssetBundleImportJobTopicV2OverrideParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

AssetBundleImportJobTopicV2OverrideParameters::AssetBundleImportJobTopicV2OverrideParameters(JsonView jsonValue) { *this = jsonValue; }

AssetBundleImportJobTopicV2OverrideParameters& AssetBundleImportJobTopicV2OverrideParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TopicId")) {
    m_topicId = jsonValue.GetString("TopicId");
    m_topicIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetBundleImportJobTopicV2OverrideParameters::Jsonize() const {
  JsonValue payload;

  if (m_topicIdHasBeenSet) {
    payload.WithString("TopicId", m_topicId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
