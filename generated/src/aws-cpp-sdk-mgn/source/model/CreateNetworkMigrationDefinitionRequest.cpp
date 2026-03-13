/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/CreateNetworkMigrationDefinitionRequest.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateNetworkMigrationDefinitionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_sourceConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourceConfigurationsJsonList(m_sourceConfigurations.size());
    for (unsigned sourceConfigurationsIndex = 0; sourceConfigurationsIndex < sourceConfigurationsJsonList.GetLength();
         ++sourceConfigurationsIndex) {
      sourceConfigurationsJsonList[sourceConfigurationsIndex].AsObject(m_sourceConfigurations[sourceConfigurationsIndex].Jsonize());
    }
    payload.WithArray("sourceConfigurations", std::move(sourceConfigurationsJsonList));
  }

  if (m_targetS3ConfigurationHasBeenSet) {
    payload.WithObject("targetS3Configuration", m_targetS3Configuration.Jsonize());
  }

  if (m_targetNetworkHasBeenSet) {
    payload.WithObject("targetNetwork", m_targetNetwork.Jsonize());
  }

  if (m_targetDeploymentHasBeenSet) {
    payload.WithString("targetDeployment", TargetDeploymentMapper::GetNameForTargetDeployment(m_targetDeployment));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_scopeTagsHasBeenSet) {
    JsonValue scopeTagsJsonMap;
    for (auto& scopeTagsItem : m_scopeTags) {
      scopeTagsJsonMap.WithString(scopeTagsItem.first, scopeTagsItem.second);
    }
    payload.WithObject("scopeTags", std::move(scopeTagsJsonMap));
  }

  return payload.View().WriteReadable();
}
