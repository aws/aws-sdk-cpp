/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/AgentProfileSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

AgentProfileSummary::AgentProfileSummary(JsonView jsonValue) { *this = jsonValue; }

AgentProfileSummary& AgentProfileSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("businessOverview")) {
    m_businessOverview = jsonValue.GetString("businessOverview");
    m_businessOverviewHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pillars")) {
    Aws::Utils::Array<JsonView> pillarsJsonList = jsonValue.GetArray("pillars");
    for (unsigned pillarsIndex = 0; pillarsIndex < pillarsJsonList.GetLength(); ++pillarsIndex) {
      m_pillars.push_back(PillarMapper::GetPillarForName(pillarsJsonList[pillarsIndex].AsString()));
    }
    m_pillarsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deletionProtection")) {
    m_deletionProtection = jsonValue.GetBool("deletionProtection");
    m_deletionProtectionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionRoleArn")) {
    m_executionRoleArn = jsonValue.GetString("executionRoleArn");
    m_executionRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("aggregationConfiguration")) {
    Aws::Utils::Array<JsonView> aggregationConfigurationJsonList = jsonValue.GetArray("aggregationConfiguration");
    for (unsigned aggregationConfigurationIndex = 0; aggregationConfigurationIndex < aggregationConfigurationJsonList.GetLength();
         ++aggregationConfigurationIndex) {
      m_aggregationConfiguration.push_back(aggregationConfigurationJsonList[aggregationConfigurationIndex].AsObject());
    }
    m_aggregationConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eligibleForScheduledGeneration")) {
    m_eligibleForScheduledGeneration = jsonValue.GetBool("eligibleForScheduledGeneration");
    m_eligibleForScheduledGenerationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eligibleForArchitectureGeneration")) {
    m_eligibleForArchitectureGeneration = jsonValue.GetBool("eligibleForArchitectureGeneration");
    m_eligibleForArchitectureGenerationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fieldErrors")) {
    Aws::Map<Aws::String, JsonView> fieldErrorsJsonMap = jsonValue.GetObject("fieldErrors").GetAllObjects();
    for (auto& fieldErrorsItem : fieldErrorsJsonMap) {
      m_fieldErrors[fieldErrorsItem.first] = fieldErrorsItem.second.AsString();
    }
    m_fieldErrorsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
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

JsonValue AgentProfileSummary::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_businessOverviewHasBeenSet) {
    payload.WithString("businessOverview", m_businessOverview);
  }

  if (m_pillarsHasBeenSet) {
    Aws::Utils::Array<JsonValue> pillarsJsonList(m_pillars.size());
    for (unsigned pillarsIndex = 0; pillarsIndex < pillarsJsonList.GetLength(); ++pillarsIndex) {
      pillarsJsonList[pillarsIndex].AsString(PillarMapper::GetNameForPillar(m_pillars[pillarsIndex]));
    }
    payload.WithArray("pillars", std::move(pillarsJsonList));
  }

  if (m_deletionProtectionHasBeenSet) {
    payload.WithBool("deletionProtection", m_deletionProtection);
  }

  if (m_executionRoleArnHasBeenSet) {
    payload.WithString("executionRoleArn", m_executionRoleArn);
  }

  if (m_aggregationConfigurationHasBeenSet) {
    Aws::Utils::Array<JsonValue> aggregationConfigurationJsonList(m_aggregationConfiguration.size());
    for (unsigned aggregationConfigurationIndex = 0; aggregationConfigurationIndex < aggregationConfigurationJsonList.GetLength();
         ++aggregationConfigurationIndex) {
      aggregationConfigurationJsonList[aggregationConfigurationIndex].AsObject(
          m_aggregationConfiguration[aggregationConfigurationIndex].Jsonize());
    }
    payload.WithArray("aggregationConfiguration", std::move(aggregationConfigurationJsonList));
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_eligibleForScheduledGenerationHasBeenSet) {
    payload.WithBool("eligibleForScheduledGeneration", m_eligibleForScheduledGeneration);
  }

  if (m_eligibleForArchitectureGenerationHasBeenSet) {
    payload.WithBool("eligibleForArchitectureGeneration", m_eligibleForArchitectureGeneration);
  }

  if (m_fieldErrorsHasBeenSet) {
    JsonValue fieldErrorsJsonMap;
    for (auto& fieldErrorsItem : m_fieldErrors) {
      fieldErrorsJsonMap.WithString(fieldErrorsItem.first, fieldErrorsItem.second);
    }
    payload.WithObject("fieldErrors", std::move(fieldErrorsJsonMap));
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("tags", std::move(tagsJsonList));
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
