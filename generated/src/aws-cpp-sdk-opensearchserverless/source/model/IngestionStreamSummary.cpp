/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchserverless/model/IngestionStreamSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchServerless {
namespace Model {

IngestionStreamSummary::IngestionStreamSummary(JsonView jsonValue) { *this = jsonValue; }

IngestionStreamSummary& IngestionStreamSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ingestionStreamId")) {
    m_ingestionStreamId = jsonValue.GetString("ingestionStreamId");
    m_ingestionStreamIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ingestionStreamName")) {
    m_ingestionStreamName = jsonValue.GetString("ingestionStreamName");
    m_ingestionStreamNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("indexName")) {
    m_indexName = jsonValue.GetString("indexName");
    m_indexNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = IngestionStreamStatusMapper::GetIngestionStreamStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue IngestionStreamSummary::Jsonize() const {
  JsonValue payload;

  if (m_ingestionStreamIdHasBeenSet) {
    payload.WithString("ingestionStreamId", m_ingestionStreamId);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_ingestionStreamNameHasBeenSet) {
    payload.WithString("ingestionStreamName", m_ingestionStreamName);
  }

  if (m_indexNameHasBeenSet) {
    payload.WithString("indexName", m_indexName);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", IngestionStreamStatusMapper::GetNameForIngestionStreamStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
