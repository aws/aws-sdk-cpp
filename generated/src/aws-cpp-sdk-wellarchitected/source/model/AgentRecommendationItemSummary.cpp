/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/AgentRecommendationItemSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

AgentRecommendationItemSummary::AgentRecommendationItemSummary(JsonView jsonValue) { *this = jsonValue; }

AgentRecommendationItemSummary& AgentRecommendationItemSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendationArn")) {
    m_recommendationArn = jsonValue.GetString("recommendationArn");
    m_recommendationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = RecommendationItemTypeMapper::GetRecommendationItemTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metadata")) {
    m_metadata = jsonValue.GetObject("metadata");
    m_metadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdBy")) {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastModifiedBy")) {
    m_lastModifiedBy = jsonValue.GetString("lastModifiedBy");
    m_lastModifiedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastModifiedAt")) {
    m_lastModifiedAt = jsonValue.GetString("lastModifiedAt");
    m_lastModifiedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentRecommendationItemSummary::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_recommendationArnHasBeenSet) {
    payload.WithString("recommendationArn", m_recommendationArn);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", RecommendationItemTypeMapper::GetNameForRecommendationItemType(m_type));
  }

  if (m_metadataHasBeenSet) {
    if (!m_metadata.View().IsNull()) {
      payload.WithObject("metadata", JsonValue(m_metadata.View()));
    }
  }

  if (m_createdByHasBeenSet) {
    payload.WithString("createdBy", m_createdBy);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_lastModifiedByHasBeenSet) {
    payload.WithString("lastModifiedBy", m_lastModifiedBy);
  }

  if (m_lastModifiedAtHasBeenSet) {
    payload.WithString("lastModifiedAt", m_lastModifiedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
