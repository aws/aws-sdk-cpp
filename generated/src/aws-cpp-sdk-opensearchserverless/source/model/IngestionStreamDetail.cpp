/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchserverless/model/IngestionStreamDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchServerless {
namespace Model {

IngestionStreamDetail::IngestionStreamDetail(JsonView jsonValue) { *this = jsonValue; }

IngestionStreamDetail& IngestionStreamDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ingestionStreamId")) {
    m_ingestionStreamId = jsonValue.GetString("ingestionStreamId");
    m_ingestionStreamIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("collectionId")) {
    m_collectionId = jsonValue.GetString("collectionId");
    m_collectionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ingestionStreamName")) {
    m_ingestionStreamName = jsonValue.GetString("ingestionStreamName");
    m_ingestionStreamNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("indexName")) {
    m_indexName = jsonValue.GetString("indexName");
    m_indexNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureIndexName")) {
    m_failureIndexName = jsonValue.GetString("failureIndexName");
    m_failureIndexNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("source")) {
    m_source = jsonValue.GetObject("source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("roleArn")) {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = IngestionStreamStatusMapper::GetIngestionStreamStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = IngestionStateMapper::GetIngestionStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statistics")) {
    m_statistics = jsonValue.GetObject("statistics");
    m_statisticsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("revision")) {
    m_revision = jsonValue.GetInt64("revision");
    m_revisionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureReasons")) {
    Aws::Utils::Array<JsonView> failureReasonsJsonList = jsonValue.GetArray("failureReasons");
    for (unsigned failureReasonsIndex = 0; failureReasonsIndex < failureReasonsJsonList.GetLength(); ++failureReasonsIndex) {
      m_failureReasons.push_back(failureReasonsJsonList[failureReasonsIndex].AsObject());
    }
    m_failureReasonsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("activeAlerts")) {
    Aws::Utils::Array<JsonView> activeAlertsJsonList = jsonValue.GetArray("activeAlerts");
    for (unsigned activeAlertsIndex = 0; activeAlertsIndex < activeAlertsJsonList.GetLength(); ++activeAlertsIndex) {
      m_activeAlerts.push_back(activeAlertsJsonList[activeAlertsIndex].AsObject());
    }
    m_activeAlertsHasBeenSet = true;
  }
  return *this;
}

JsonValue IngestionStreamDetail::Jsonize() const {
  JsonValue payload;

  if (m_ingestionStreamIdHasBeenSet) {
    payload.WithString("ingestionStreamId", m_ingestionStreamId);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_collectionIdHasBeenSet) {
    payload.WithString("collectionId", m_collectionId);
  }

  if (m_ingestionStreamNameHasBeenSet) {
    payload.WithString("ingestionStreamName", m_ingestionStreamName);
  }

  if (m_indexNameHasBeenSet) {
    payload.WithString("indexName", m_indexName);
  }

  if (m_failureIndexNameHasBeenSet) {
    payload.WithString("failureIndexName", m_failureIndexName);
  }

  if (m_sourceHasBeenSet) {
    payload.WithObject("source", m_source.Jsonize());
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("roleArn", m_roleArn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", IngestionStreamStatusMapper::GetNameForIngestionStreamStatus(m_status));
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", IngestionStateMapper::GetNameForIngestionState(m_state));
  }

  if (m_statisticsHasBeenSet) {
    payload.WithObject("statistics", m_statistics.Jsonize());
  }

  if (m_revisionHasBeenSet) {
    payload.WithInt64("revision", m_revision);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_failureReasonsHasBeenSet) {
    Aws::Utils::Array<JsonValue> failureReasonsJsonList(m_failureReasons.size());
    for (unsigned failureReasonsIndex = 0; failureReasonsIndex < failureReasonsJsonList.GetLength(); ++failureReasonsIndex) {
      failureReasonsJsonList[failureReasonsIndex].AsObject(m_failureReasons[failureReasonsIndex].Jsonize());
    }
    payload.WithArray("failureReasons", std::move(failureReasonsJsonList));
  }

  if (m_activeAlertsHasBeenSet) {
    Aws::Utils::Array<JsonValue> activeAlertsJsonList(m_activeAlerts.size());
    for (unsigned activeAlertsIndex = 0; activeAlertsIndex < activeAlertsJsonList.GetLength(); ++activeAlertsIndex) {
      activeAlertsJsonList[activeAlertsIndex].AsObject(m_activeAlerts[activeAlertsIndex].Jsonize());
    }
    payload.WithArray("activeAlerts", std::move(activeAlertsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
