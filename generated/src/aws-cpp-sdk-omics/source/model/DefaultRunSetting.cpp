/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/omics/model/DefaultRunSetting.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Omics {
namespace Model {

DefaultRunSetting::DefaultRunSetting(JsonView jsonValue) { *this = jsonValue; }

DefaultRunSetting& DefaultRunSetting::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("workflowId")) {
    m_workflowId = jsonValue.GetString("workflowId");
    m_workflowIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workflowType")) {
    m_workflowType = WorkflowTypeMapper::GetWorkflowTypeForName(jsonValue.GetString("workflowType"));
    m_workflowTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("roleArn")) {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cacheId")) {
    m_cacheId = jsonValue.GetString("cacheId");
    m_cacheIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cacheBehavior")) {
    m_cacheBehavior = CacheBehaviorMapper::GetCacheBehaviorForName(jsonValue.GetString("cacheBehavior"));
    m_cacheBehaviorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("runGroupId")) {
    m_runGroupId = jsonValue.GetString("runGroupId");
    m_runGroupIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priority")) {
    m_priority = jsonValue.GetInteger("priority");
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parameters")) {
    m_parameters = jsonValue.GetObject("parameters");
    m_parametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("storageCapacity")) {
    m_storageCapacity = jsonValue.GetInteger("storageCapacity");
    m_storageCapacityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputUri")) {
    m_outputUri = jsonValue.GetString("outputUri");
    m_outputUriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logLevel")) {
    m_logLevel = RunLogLevelMapper::GetRunLogLevelForName(jsonValue.GetString("logLevel"));
    m_logLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("runTags")) {
    Aws::Map<Aws::String, JsonView> runTagsJsonMap = jsonValue.GetObject("runTags").GetAllObjects();
    for (auto& runTagsItem : runTagsJsonMap) {
      m_runTags[runTagsItem.first] = runTagsItem.second.AsString();
    }
    m_runTagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("retentionMode")) {
    m_retentionMode = RunRetentionModeMapper::GetRunRetentionModeForName(jsonValue.GetString("retentionMode"));
    m_retentionModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("storageType")) {
    m_storageType = StorageTypeMapper::GetStorageTypeForName(jsonValue.GetString("storageType"));
    m_storageTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workflowOwnerId")) {
    m_workflowOwnerId = jsonValue.GetString("workflowOwnerId");
    m_workflowOwnerIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputBucketOwnerId")) {
    m_outputBucketOwnerId = jsonValue.GetString("outputBucketOwnerId");
    m_outputBucketOwnerIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workflowVersionName")) {
    m_workflowVersionName = jsonValue.GetString("workflowVersionName");
    m_workflowVersionNameHasBeenSet = true;
  }
  return *this;
}

JsonValue DefaultRunSetting::Jsonize() const {
  JsonValue payload;

  if (m_workflowIdHasBeenSet) {
    payload.WithString("workflowId", m_workflowId);
  }

  if (m_workflowTypeHasBeenSet) {
    payload.WithString("workflowType", WorkflowTypeMapper::GetNameForWorkflowType(m_workflowType));
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("roleArn", m_roleArn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_cacheIdHasBeenSet) {
    payload.WithString("cacheId", m_cacheId);
  }

  if (m_cacheBehaviorHasBeenSet) {
    payload.WithString("cacheBehavior", CacheBehaviorMapper::GetNameForCacheBehavior(m_cacheBehavior));
  }

  if (m_runGroupIdHasBeenSet) {
    payload.WithString("runGroupId", m_runGroupId);
  }

  if (m_priorityHasBeenSet) {
    payload.WithInteger("priority", m_priority);
  }

  if (m_parametersHasBeenSet) {
    if (!m_parameters.View().IsNull()) {
      payload.WithObject("parameters", JsonValue(m_parameters.View()));
    }
  }

  if (m_storageCapacityHasBeenSet) {
    payload.WithInteger("storageCapacity", m_storageCapacity);
  }

  if (m_outputUriHasBeenSet) {
    payload.WithString("outputUri", m_outputUri);
  }

  if (m_logLevelHasBeenSet) {
    payload.WithString("logLevel", RunLogLevelMapper::GetNameForRunLogLevel(m_logLevel));
  }

  if (m_runTagsHasBeenSet) {
    JsonValue runTagsJsonMap;
    for (auto& runTagsItem : m_runTags) {
      runTagsJsonMap.WithString(runTagsItem.first, runTagsItem.second);
    }
    payload.WithObject("runTags", std::move(runTagsJsonMap));
  }

  if (m_retentionModeHasBeenSet) {
    payload.WithString("retentionMode", RunRetentionModeMapper::GetNameForRunRetentionMode(m_retentionMode));
  }

  if (m_storageTypeHasBeenSet) {
    payload.WithString("storageType", StorageTypeMapper::GetNameForStorageType(m_storageType));
  }

  if (m_workflowOwnerIdHasBeenSet) {
    payload.WithString("workflowOwnerId", m_workflowOwnerId);
  }

  if (m_outputBucketOwnerIdHasBeenSet) {
    payload.WithString("outputBucketOwnerId", m_outputBucketOwnerId);
  }

  if (m_workflowVersionNameHasBeenSet) {
    payload.WithString("workflowVersionName", m_workflowVersionName);
  }

  return payload;
}

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
