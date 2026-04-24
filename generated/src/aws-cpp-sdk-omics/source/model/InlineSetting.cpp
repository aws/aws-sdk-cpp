/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/omics/model/InlineSetting.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Omics {
namespace Model {

InlineSetting::InlineSetting(JsonView jsonValue) { *this = jsonValue; }

InlineSetting& InlineSetting::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("runSettingId")) {
    m_runSettingId = jsonValue.GetString("runSettingId");
    m_runSettingIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputUri")) {
    m_outputUri = jsonValue.GetString("outputUri");
    m_outputUriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priority")) {
    m_priority = jsonValue.GetInteger("priority");
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parameters")) {
    m_parameters = jsonValue.GetObject("parameters");
    m_parametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputBucketOwnerId")) {
    m_outputBucketOwnerId = jsonValue.GetString("outputBucketOwnerId");
    m_outputBucketOwnerIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("runTags")) {
    Aws::Map<Aws::String, JsonView> runTagsJsonMap = jsonValue.GetObject("runTags").GetAllObjects();
    for (auto& runTagsItem : runTagsJsonMap) {
      m_runTags[runTagsItem.first] = runTagsItem.second.AsString();
    }
    m_runTagsHasBeenSet = true;
  }
  return *this;
}

JsonValue InlineSetting::Jsonize() const {
  JsonValue payload;

  if (m_runSettingIdHasBeenSet) {
    payload.WithString("runSettingId", m_runSettingId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_outputUriHasBeenSet) {
    payload.WithString("outputUri", m_outputUri);
  }

  if (m_priorityHasBeenSet) {
    payload.WithInteger("priority", m_priority);
  }

  if (m_parametersHasBeenSet) {
    if (!m_parameters.View().IsNull()) {
      payload.WithObject("parameters", JsonValue(m_parameters.View()));
    }
  }

  if (m_outputBucketOwnerIdHasBeenSet) {
    payload.WithString("outputBucketOwnerId", m_outputBucketOwnerId);
  }

  if (m_runTagsHasBeenSet) {
    JsonValue runTagsJsonMap;
    for (auto& runTagsItem : m_runTags) {
      runTagsJsonMap.WithString(runTagsItem.first, runTagsItem.second);
    }
    payload.WithObject("runTags", std::move(runTagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
