/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/KnowledgeBaseSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

KnowledgeBaseSummary::KnowledgeBaseSummary(JsonView jsonValue) { *this = jsonValue; }

KnowledgeBaseSummary& KnowledgeBaseSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("KnowledgeBaseArn")) {
    m_knowledgeBaseArn = jsonValue.GetString("KnowledgeBaseArn");
    m_knowledgeBaseArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KnowledgeBaseId")) {
    m_knowledgeBaseId = jsonValue.GetString("KnowledgeBaseId");
    m_knowledgeBaseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = DataSetStatusMapper::GetDataSetStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DataSourceArn")) {
    m_dataSourceArn = jsonValue.GetString("DataSourceArn");
    m_dataSourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = jsonValue.GetString("Type");
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KnowledgeBaseSizeBytes")) {
    m_knowledgeBaseSizeBytes = jsonValue.GetInt64("KnowledgeBaseSizeBytes");
    m_knowledgeBaseSizeBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DocumentCount")) {
    m_documentCount = jsonValue.GetInt64("DocumentCount");
    m_documentCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrimaryOwnerArn")) {
    m_primaryOwnerArn = jsonValue.GetString("PrimaryOwnerArn");
    m_primaryOwnerArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrimaryOwnerUsername")) {
    m_primaryOwnerUsername = jsonValue.GetString("PrimaryOwnerUsername");
    m_primaryOwnerUsernameHasBeenSet = true;
  }
  return *this;
}

JsonValue KnowledgeBaseSummary::Jsonize() const {
  JsonValue payload;

  if (m_knowledgeBaseArnHasBeenSet) {
    payload.WithString("KnowledgeBaseArn", m_knowledgeBaseArn);
  }

  if (m_knowledgeBaseIdHasBeenSet) {
    payload.WithString("KnowledgeBaseId", m_knowledgeBaseId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", DataSetStatusMapper::GetNameForDataSetStatus(m_status));
  }

  if (m_dataSourceArnHasBeenSet) {
    payload.WithString("DataSourceArn", m_dataSourceArn);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", m_type);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_knowledgeBaseSizeBytesHasBeenSet) {
    payload.WithInt64("KnowledgeBaseSizeBytes", m_knowledgeBaseSizeBytes);
  }

  if (m_documentCountHasBeenSet) {
    payload.WithInt64("DocumentCount", m_documentCount);
  }

  if (m_primaryOwnerArnHasBeenSet) {
    payload.WithString("PrimaryOwnerArn", m_primaryOwnerArn);
  }

  if (m_primaryOwnerUsernameHasBeenSet) {
    payload.WithString("PrimaryOwnerUsername", m_primaryOwnerUsername);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
