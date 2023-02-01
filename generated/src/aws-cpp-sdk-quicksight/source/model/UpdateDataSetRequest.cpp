/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateDataSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDataSetRequest::UpdateDataSetRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_physicalTableMapHasBeenSet(false),
    m_logicalTableMapHasBeenSet(false),
    m_importMode(DataSetImportMode::NOT_SET),
    m_importModeHasBeenSet(false),
    m_columnGroupsHasBeenSet(false),
    m_fieldFoldersHasBeenSet(false),
    m_rowLevelPermissionDataSetHasBeenSet(false),
    m_rowLevelPermissionTagConfigurationHasBeenSet(false),
    m_columnLevelPermissionRulesHasBeenSet(false),
    m_dataSetUsageConfigurationHasBeenSet(false)
{
}

Aws::String UpdateDataSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_physicalTableMapHasBeenSet)
  {
   JsonValue physicalTableMapJsonMap;
   for(auto& physicalTableMapItem : m_physicalTableMap)
   {
     physicalTableMapJsonMap.WithObject(physicalTableMapItem.first, physicalTableMapItem.second.Jsonize());
   }
   payload.WithObject("PhysicalTableMap", std::move(physicalTableMapJsonMap));

  }

  if(m_logicalTableMapHasBeenSet)
  {
   JsonValue logicalTableMapJsonMap;
   for(auto& logicalTableMapItem : m_logicalTableMap)
   {
     logicalTableMapJsonMap.WithObject(logicalTableMapItem.first, logicalTableMapItem.second.Jsonize());
   }
   payload.WithObject("LogicalTableMap", std::move(logicalTableMapJsonMap));

  }

  if(m_importModeHasBeenSet)
  {
   payload.WithString("ImportMode", DataSetImportModeMapper::GetNameForDataSetImportMode(m_importMode));
  }

  if(m_columnGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnGroupsJsonList(m_columnGroups.size());
   for(unsigned columnGroupsIndex = 0; columnGroupsIndex < columnGroupsJsonList.GetLength(); ++columnGroupsIndex)
   {
     columnGroupsJsonList[columnGroupsIndex].AsObject(m_columnGroups[columnGroupsIndex].Jsonize());
   }
   payload.WithArray("ColumnGroups", std::move(columnGroupsJsonList));

  }

  if(m_fieldFoldersHasBeenSet)
  {
   JsonValue fieldFoldersJsonMap;
   for(auto& fieldFoldersItem : m_fieldFolders)
   {
     fieldFoldersJsonMap.WithObject(fieldFoldersItem.first, fieldFoldersItem.second.Jsonize());
   }
   payload.WithObject("FieldFolders", std::move(fieldFoldersJsonMap));

  }

  if(m_rowLevelPermissionDataSetHasBeenSet)
  {
   payload.WithObject("RowLevelPermissionDataSet", m_rowLevelPermissionDataSet.Jsonize());

  }

  if(m_rowLevelPermissionTagConfigurationHasBeenSet)
  {
   payload.WithObject("RowLevelPermissionTagConfiguration", m_rowLevelPermissionTagConfiguration.Jsonize());

  }

  if(m_columnLevelPermissionRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnLevelPermissionRulesJsonList(m_columnLevelPermissionRules.size());
   for(unsigned columnLevelPermissionRulesIndex = 0; columnLevelPermissionRulesIndex < columnLevelPermissionRulesJsonList.GetLength(); ++columnLevelPermissionRulesIndex)
   {
     columnLevelPermissionRulesJsonList[columnLevelPermissionRulesIndex].AsObject(m_columnLevelPermissionRules[columnLevelPermissionRulesIndex].Jsonize());
   }
   payload.WithArray("ColumnLevelPermissionRules", std::move(columnLevelPermissionRulesJsonList));

  }

  if(m_dataSetUsageConfigurationHasBeenSet)
  {
   payload.WithObject("DataSetUsageConfiguration", m_dataSetUsageConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




