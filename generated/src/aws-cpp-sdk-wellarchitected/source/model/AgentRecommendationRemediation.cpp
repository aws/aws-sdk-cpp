/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/AgentRecommendationRemediation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

AgentRecommendationRemediation::AgentRecommendationRemediation(JsonView jsonValue) { *this = jsonValue; }

AgentRecommendationRemediation& AgentRecommendationRemediation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("recommendationArn")) {
    m_recommendationArn = jsonValue.GetString("recommendationArn");
    m_recommendationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = RemediationTypeMapper::GetRemediationTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("steps")) {
    Aws::Utils::Array<JsonView> stepsJsonList = jsonValue.GetArray("steps");
    for (unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex) {
      m_steps.push_back(stepsJsonList[stepsIndex].AsObject());
    }
    m_stepsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceLinks")) {
    Aws::Utils::Array<JsonView> resourceLinksJsonList = jsonValue.GetArray("resourceLinks");
    for (unsigned resourceLinksIndex = 0; resourceLinksIndex < resourceLinksJsonList.GetLength(); ++resourceLinksIndex) {
      m_resourceLinks.push_back(resourceLinksJsonList[resourceLinksIndex].AsObject());
    }
    m_resourceLinksHasBeenSet = true;
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

JsonValue AgentRecommendationRemediation::Jsonize() const {
  JsonValue payload;

  if (m_recommendationArnHasBeenSet) {
    payload.WithString("recommendationArn", m_recommendationArn);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", RemediationTypeMapper::GetNameForRemediationType(m_type));
  }

  if (m_stepsHasBeenSet) {
    Aws::Utils::Array<JsonValue> stepsJsonList(m_steps.size());
    for (unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex) {
      stepsJsonList[stepsIndex].AsObject(m_steps[stepsIndex].Jsonize());
    }
    payload.WithArray("steps", std::move(stepsJsonList));
  }

  if (m_resourceLinksHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceLinksJsonList(m_resourceLinks.size());
    for (unsigned resourceLinksIndex = 0; resourceLinksIndex < resourceLinksJsonList.GetLength(); ++resourceLinksIndex) {
      resourceLinksJsonList[resourceLinksIndex].AsObject(m_resourceLinks[resourceLinksIndex].Jsonize());
    }
    payload.WithArray("resourceLinks", std::move(resourceLinksJsonList));
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
