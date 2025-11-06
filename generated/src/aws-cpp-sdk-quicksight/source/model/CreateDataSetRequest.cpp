/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/CreateDataSetRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDataSetRequest::SerializePayload() const {
  JsonValue payload;

  if (m_dataSetIdHasBeenSet) {
    payload.WithString("DataSetId", m_dataSetId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_physicalTableMapHasBeenSet) {
    JsonValue physicalTableMapJsonMap;
    for (auto& physicalTableMapItem : m_physicalTableMap) {
      physicalTableMapJsonMap.WithObject(physicalTableMapItem.first, physicalTableMapItem.second.Jsonize());
    }
    payload.WithObject("PhysicalTableMap", std::move(physicalTableMapJsonMap));
  }

  if (m_importModeHasBeenSet) {
    payload.WithString("ImportMode", DataSetImportModeMapper::GetNameForDataSetImportMode(m_importMode));
  }

  if (m_columnGroupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> columnGroupsJsonList(m_columnGroups.size());
    for (unsigned columnGroupsIndex = 0; columnGroupsIndex < columnGroupsJsonList.GetLength(); ++columnGroupsIndex) {
      columnGroupsJsonList[columnGroupsIndex].AsObject(m_columnGroups[columnGroupsIndex].Jsonize());
    }
    payload.WithArray("ColumnGroups", std::move(columnGroupsJsonList));
  }

  if (m_fieldFoldersHasBeenSet) {
    JsonValue fieldFoldersJsonMap;
    for (auto& fieldFoldersItem : m_fieldFolders) {
      fieldFoldersJsonMap.WithObject(fieldFoldersItem.first, fieldFoldersItem.second.Jsonize());
    }
    payload.WithObject("FieldFolders", std::move(fieldFoldersJsonMap));
  }

  if (m_permissionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> permissionsJsonList(m_permissions.size());
    for (unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex) {
      permissionsJsonList[permissionsIndex].AsObject(m_permissions[permissionsIndex].Jsonize());
    }
    payload.WithArray("Permissions", std::move(permissionsJsonList));
  }

  if (m_columnLevelPermissionRulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> columnLevelPermissionRulesJsonList(m_columnLevelPermissionRules.size());
    for (unsigned columnLevelPermissionRulesIndex = 0; columnLevelPermissionRulesIndex < columnLevelPermissionRulesJsonList.GetLength();
         ++columnLevelPermissionRulesIndex) {
      columnLevelPermissionRulesJsonList[columnLevelPermissionRulesIndex].AsObject(
          m_columnLevelPermissionRules[columnLevelPermissionRulesIndex].Jsonize());
    }
    payload.WithArray("ColumnLevelPermissionRules", std::move(columnLevelPermissionRulesJsonList));
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  if (m_dataSetUsageConfigurationHasBeenSet) {
    payload.WithObject("DataSetUsageConfiguration", m_dataSetUsageConfiguration.Jsonize());
  }

  if (m_datasetParametersHasBeenSet) {
    Aws::Utils::Array<JsonValue> datasetParametersJsonList(m_datasetParameters.size());
    for (unsigned datasetParametersIndex = 0; datasetParametersIndex < datasetParametersJsonList.GetLength(); ++datasetParametersIndex) {
      datasetParametersJsonList[datasetParametersIndex].AsObject(m_datasetParameters[datasetParametersIndex].Jsonize());
    }
    payload.WithArray("DatasetParameters", std::move(datasetParametersJsonList));
  }

  if (m_folderArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> folderArnsJsonList(m_folderArns.size());
    for (unsigned folderArnsIndex = 0; folderArnsIndex < folderArnsJsonList.GetLength(); ++folderArnsIndex) {
      folderArnsJsonList[folderArnsIndex].AsString(m_folderArns[folderArnsIndex]);
    }
    payload.WithArray("FolderArns", std::move(folderArnsJsonList));
  }

  if (m_performanceConfigurationHasBeenSet) {
    payload.WithObject("PerformanceConfiguration", m_performanceConfiguration.Jsonize());
  }

  if (m_useAsHasBeenSet) {
    payload.WithString("UseAs", DataSetUseAsMapper::GetNameForDataSetUseAs(m_useAs));
  }

  if (m_dataPrepConfigurationHasBeenSet) {
    payload.WithObject("DataPrepConfiguration", m_dataPrepConfiguration.Jsonize());
  }

  if (m_semanticModelConfigurationHasBeenSet) {
    payload.WithObject("SemanticModelConfiguration", m_semanticModelConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}
