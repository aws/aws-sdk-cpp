/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchserverless/model/IngestionJobSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchServerless {
namespace Model {

IngestionJobSummary::IngestionJobSummary(JsonView jsonValue) { *this = jsonValue; }

IngestionJobSummary& IngestionJobSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ingestionJobId")) {
    m_ingestionJobId = jsonValue.GetString("ingestionJobId");
    m_ingestionJobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ingestionJobName")) {
    m_ingestionJobName = jsonValue.GetString("ingestionJobName");
    m_ingestionJobNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("indexName")) {
    m_indexName = jsonValue.GetString("indexName");
    m_indexNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = IngestionJobStatusMapper::GetIngestionJobStatusForName(jsonValue.GetString("status"));
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

JsonValue IngestionJobSummary::Jsonize() const {
  JsonValue payload;

  if (m_ingestionJobIdHasBeenSet) {
    payload.WithString("ingestionJobId", m_ingestionJobId);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_ingestionJobNameHasBeenSet) {
    payload.WithString("ingestionJobName", m_ingestionJobName);
  }

  if (m_indexNameHasBeenSet) {
    payload.WithString("indexName", m_indexName);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", IngestionJobStatusMapper::GetNameForIngestionJobStatus(m_status));
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
