/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/RemoteSourceActionJob.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

RemoteSourceActionJob::RemoteSourceActionJob(JsonView jsonValue) { *this = jsonValue; }

RemoteSourceActionJob& RemoteSourceActionJob::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("remoteSourceActionJobID")) {
    m_remoteSourceActionJobID = jsonValue.GetString("remoteSourceActionJobID");
    m_remoteSourceActionJobIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = RemoteSourceActionJobStatusMapper::GetRemoteSourceActionJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceServerArns")) {
    Aws::Utils::Array<JsonView> sourceServerArnsJsonList = jsonValue.GetArray("sourceServerArns");
    for (unsigned sourceServerArnsIndex = 0; sourceServerArnsIndex < sourceServerArnsJsonList.GetLength(); ++sourceServerArnsIndex) {
      m_sourceServerArns.push_back(sourceServerArnsJsonList[sourceServerArnsIndex].AsString());
    }
    m_sourceServerArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remoteSourceActionArns")) {
    Aws::Utils::Array<JsonView> remoteSourceActionArnsJsonList = jsonValue.GetArray("remoteSourceActionArns");
    for (unsigned remoteSourceActionArnsIndex = 0; remoteSourceActionArnsIndex < remoteSourceActionArnsJsonList.GetLength();
         ++remoteSourceActionArnsIndex) {
      m_remoteSourceActionArns.push_back(remoteSourceActionArnsJsonList[remoteSourceActionArnsIndex].AsString());
    }
    m_remoteSourceActionArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectorArn")) {
    m_connectorArn = jsonValue.GetString("connectorArn");
    m_connectorArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetDouble("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endedAt")) {
    m_endedAt = jsonValue.GetDouble("endedAt");
    m_endedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue RemoteSourceActionJob::Jsonize() const {
  JsonValue payload;

  if (m_remoteSourceActionJobIDHasBeenSet) {
    payload.WithString("remoteSourceActionJobID", m_remoteSourceActionJobID);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", RemoteSourceActionJobStatusMapper::GetNameForRemoteSourceActionJobStatus(m_status));
  }

  if (m_sourceServerArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourceServerArnsJsonList(m_sourceServerArns.size());
    for (unsigned sourceServerArnsIndex = 0; sourceServerArnsIndex < sourceServerArnsJsonList.GetLength(); ++sourceServerArnsIndex) {
      sourceServerArnsJsonList[sourceServerArnsIndex].AsString(m_sourceServerArns[sourceServerArnsIndex]);
    }
    payload.WithArray("sourceServerArns", std::move(sourceServerArnsJsonList));
  }

  if (m_remoteSourceActionArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> remoteSourceActionArnsJsonList(m_remoteSourceActionArns.size());
    for (unsigned remoteSourceActionArnsIndex = 0; remoteSourceActionArnsIndex < remoteSourceActionArnsJsonList.GetLength();
         ++remoteSourceActionArnsIndex) {
      remoteSourceActionArnsJsonList[remoteSourceActionArnsIndex].AsString(m_remoteSourceActionArns[remoteSourceActionArnsIndex]);
    }
    payload.WithArray("remoteSourceActionArns", std::move(remoteSourceActionArnsJsonList));
  }

  if (m_connectorArnHasBeenSet) {
    payload.WithString("connectorArn", m_connectorArn);
  }

  if (m_startedAtHasBeenSet) {
    payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if (m_endedAtHasBeenSet) {
    payload.WithDouble("endedAt", m_endedAt.SecondsWithMSPrecision());
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
