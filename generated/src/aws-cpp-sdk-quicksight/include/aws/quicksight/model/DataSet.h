/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/DataSetImportMode.h>
#include <aws/quicksight/model/RowLevelPermissionDataSet.h>
#include <aws/quicksight/model/RowLevelPermissionTagConfiguration.h>
#include <aws/quicksight/model/DataSetUsageConfiguration.h>
#include <aws/quicksight/model/PhysicalTable.h>
#include <aws/quicksight/model/LogicalTable.h>
#include <aws/quicksight/model/OutputColumn.h>
#include <aws/quicksight/model/ColumnGroup.h>
#include <aws/quicksight/model/FieldFolder.h>
#include <aws/quicksight/model/ColumnLevelPermissionRule.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSet">AWS
   * API Reference</a></p>
   */
  class DataSet
  {
  public:
    AWS_QUICKSIGHT_API DataSet();
    AWS_QUICKSIGHT_API DataSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline DataSet& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline DataSet& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline DataSet& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID of the dataset.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The ID of the dataset.</p>
     */
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }

    /**
     * <p>The ID of the dataset.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }

    /**
     * <p>The ID of the dataset.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }

    /**
     * <p>The ID of the dataset.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }

    /**
     * <p>The ID of the dataset.</p>
     */
    inline DataSet& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The ID of the dataset.</p>
     */
    inline DataSet& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the dataset.</p>
     */
    inline DataSet& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>A display name for the dataset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A display name for the dataset.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A display name for the dataset.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A display name for the dataset.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A display name for the dataset.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A display name for the dataset.</p>
     */
    inline DataSet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A display name for the dataset.</p>
     */
    inline DataSet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A display name for the dataset.</p>
     */
    inline DataSet& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The time that this dataset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time that this dataset was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The time that this dataset was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time that this dataset was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time that this dataset was created.</p>
     */
    inline DataSet& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time that this dataset was created.</p>
     */
    inline DataSet& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The last time that this dataset was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The last time that this dataset was updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The last time that this dataset was updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The last time that this dataset was updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The last time that this dataset was updated.</p>
     */
    inline DataSet& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The last time that this dataset was updated.</p>
     */
    inline DataSet& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline const Aws::Map<Aws::String, PhysicalTable>& GetPhysicalTableMap() const{ return m_physicalTableMap; }

    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline bool PhysicalTableMapHasBeenSet() const { return m_physicalTableMapHasBeenSet; }

    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline void SetPhysicalTableMap(const Aws::Map<Aws::String, PhysicalTable>& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap = value; }

    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline void SetPhysicalTableMap(Aws::Map<Aws::String, PhysicalTable>&& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap = std::move(value); }

    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline DataSet& WithPhysicalTableMap(const Aws::Map<Aws::String, PhysicalTable>& value) { SetPhysicalTableMap(value); return *this;}

    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline DataSet& WithPhysicalTableMap(Aws::Map<Aws::String, PhysicalTable>&& value) { SetPhysicalTableMap(std::move(value)); return *this;}

    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline DataSet& AddPhysicalTableMap(const Aws::String& key, const PhysicalTable& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(key, value); return *this; }

    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline DataSet& AddPhysicalTableMap(Aws::String&& key, const PhysicalTable& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline DataSet& AddPhysicalTableMap(const Aws::String& key, PhysicalTable&& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline DataSet& AddPhysicalTableMap(Aws::String&& key, PhysicalTable&& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline DataSet& AddPhysicalTableMap(const char* key, PhysicalTable&& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline DataSet& AddPhysicalTableMap(const char* key, const PhysicalTable& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(key, value); return *this; }


    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline const Aws::Map<Aws::String, LogicalTable>& GetLogicalTableMap() const{ return m_logicalTableMap; }

    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline bool LogicalTableMapHasBeenSet() const { return m_logicalTableMapHasBeenSet; }

    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline void SetLogicalTableMap(const Aws::Map<Aws::String, LogicalTable>& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap = value; }

    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline void SetLogicalTableMap(Aws::Map<Aws::String, LogicalTable>&& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap = std::move(value); }

    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline DataSet& WithLogicalTableMap(const Aws::Map<Aws::String, LogicalTable>& value) { SetLogicalTableMap(value); return *this;}

    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline DataSet& WithLogicalTableMap(Aws::Map<Aws::String, LogicalTable>&& value) { SetLogicalTableMap(std::move(value)); return *this;}

    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline DataSet& AddLogicalTableMap(const Aws::String& key, const LogicalTable& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(key, value); return *this; }

    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline DataSet& AddLogicalTableMap(Aws::String&& key, const LogicalTable& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline DataSet& AddLogicalTableMap(const Aws::String& key, LogicalTable&& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline DataSet& AddLogicalTableMap(Aws::String&& key, LogicalTable&& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline DataSet& AddLogicalTableMap(const char* key, LogicalTable&& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline DataSet& AddLogicalTableMap(const char* key, const LogicalTable& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(key, value); return *this; }


    /**
     * <p>The list of columns after all transforms. These columns are available in
     * templates, analyses, and dashboards.</p>
     */
    inline const Aws::Vector<OutputColumn>& GetOutputColumns() const{ return m_outputColumns; }

    /**
     * <p>The list of columns after all transforms. These columns are available in
     * templates, analyses, and dashboards.</p>
     */
    inline bool OutputColumnsHasBeenSet() const { return m_outputColumnsHasBeenSet; }

    /**
     * <p>The list of columns after all transforms. These columns are available in
     * templates, analyses, and dashboards.</p>
     */
    inline void SetOutputColumns(const Aws::Vector<OutputColumn>& value) { m_outputColumnsHasBeenSet = true; m_outputColumns = value; }

    /**
     * <p>The list of columns after all transforms. These columns are available in
     * templates, analyses, and dashboards.</p>
     */
    inline void SetOutputColumns(Aws::Vector<OutputColumn>&& value) { m_outputColumnsHasBeenSet = true; m_outputColumns = std::move(value); }

    /**
     * <p>The list of columns after all transforms. These columns are available in
     * templates, analyses, and dashboards.</p>
     */
    inline DataSet& WithOutputColumns(const Aws::Vector<OutputColumn>& value) { SetOutputColumns(value); return *this;}

    /**
     * <p>The list of columns after all transforms. These columns are available in
     * templates, analyses, and dashboards.</p>
     */
    inline DataSet& WithOutputColumns(Aws::Vector<OutputColumn>&& value) { SetOutputColumns(std::move(value)); return *this;}

    /**
     * <p>The list of columns after all transforms. These columns are available in
     * templates, analyses, and dashboards.</p>
     */
    inline DataSet& AddOutputColumns(const OutputColumn& value) { m_outputColumnsHasBeenSet = true; m_outputColumns.push_back(value); return *this; }

    /**
     * <p>The list of columns after all transforms. These columns are available in
     * templates, analyses, and dashboards.</p>
     */
    inline DataSet& AddOutputColumns(OutputColumn&& value) { m_outputColumnsHasBeenSet = true; m_outputColumns.push_back(std::move(value)); return *this; }


    /**
     * <p>A value that indicates whether you want to import the data into SPICE.</p>
     */
    inline const DataSetImportMode& GetImportMode() const{ return m_importMode; }

    /**
     * <p>A value that indicates whether you want to import the data into SPICE.</p>
     */
    inline bool ImportModeHasBeenSet() const { return m_importModeHasBeenSet; }

    /**
     * <p>A value that indicates whether you want to import the data into SPICE.</p>
     */
    inline void SetImportMode(const DataSetImportMode& value) { m_importModeHasBeenSet = true; m_importMode = value; }

    /**
     * <p>A value that indicates whether you want to import the data into SPICE.</p>
     */
    inline void SetImportMode(DataSetImportMode&& value) { m_importModeHasBeenSet = true; m_importMode = std::move(value); }

    /**
     * <p>A value that indicates whether you want to import the data into SPICE.</p>
     */
    inline DataSet& WithImportMode(const DataSetImportMode& value) { SetImportMode(value); return *this;}

    /**
     * <p>A value that indicates whether you want to import the data into SPICE.</p>
     */
    inline DataSet& WithImportMode(DataSetImportMode&& value) { SetImportMode(std::move(value)); return *this;}


    /**
     * <p>The amount of SPICE capacity used by this dataset. This is 0 if the dataset
     * isn't imported into SPICE.</p>
     */
    inline long long GetConsumedSpiceCapacityInBytes() const{ return m_consumedSpiceCapacityInBytes; }

    /**
     * <p>The amount of SPICE capacity used by this dataset. This is 0 if the dataset
     * isn't imported into SPICE.</p>
     */
    inline bool ConsumedSpiceCapacityInBytesHasBeenSet() const { return m_consumedSpiceCapacityInBytesHasBeenSet; }

    /**
     * <p>The amount of SPICE capacity used by this dataset. This is 0 if the dataset
     * isn't imported into SPICE.</p>
     */
    inline void SetConsumedSpiceCapacityInBytes(long long value) { m_consumedSpiceCapacityInBytesHasBeenSet = true; m_consumedSpiceCapacityInBytes = value; }

    /**
     * <p>The amount of SPICE capacity used by this dataset. This is 0 if the dataset
     * isn't imported into SPICE.</p>
     */
    inline DataSet& WithConsumedSpiceCapacityInBytes(long long value) { SetConsumedSpiceCapacityInBytes(value); return *this;}


    /**
     * <p>Groupings of columns that work together in certain Amazon QuickSight
     * features. Currently, only geospatial hierarchy is supported.</p>
     */
    inline const Aws::Vector<ColumnGroup>& GetColumnGroups() const{ return m_columnGroups; }

    /**
     * <p>Groupings of columns that work together in certain Amazon QuickSight
     * features. Currently, only geospatial hierarchy is supported.</p>
     */
    inline bool ColumnGroupsHasBeenSet() const { return m_columnGroupsHasBeenSet; }

    /**
     * <p>Groupings of columns that work together in certain Amazon QuickSight
     * features. Currently, only geospatial hierarchy is supported.</p>
     */
    inline void SetColumnGroups(const Aws::Vector<ColumnGroup>& value) { m_columnGroupsHasBeenSet = true; m_columnGroups = value; }

    /**
     * <p>Groupings of columns that work together in certain Amazon QuickSight
     * features. Currently, only geospatial hierarchy is supported.</p>
     */
    inline void SetColumnGroups(Aws::Vector<ColumnGroup>&& value) { m_columnGroupsHasBeenSet = true; m_columnGroups = std::move(value); }

    /**
     * <p>Groupings of columns that work together in certain Amazon QuickSight
     * features. Currently, only geospatial hierarchy is supported.</p>
     */
    inline DataSet& WithColumnGroups(const Aws::Vector<ColumnGroup>& value) { SetColumnGroups(value); return *this;}

    /**
     * <p>Groupings of columns that work together in certain Amazon QuickSight
     * features. Currently, only geospatial hierarchy is supported.</p>
     */
    inline DataSet& WithColumnGroups(Aws::Vector<ColumnGroup>&& value) { SetColumnGroups(std::move(value)); return *this;}

    /**
     * <p>Groupings of columns that work together in certain Amazon QuickSight
     * features. Currently, only geospatial hierarchy is supported.</p>
     */
    inline DataSet& AddColumnGroups(const ColumnGroup& value) { m_columnGroupsHasBeenSet = true; m_columnGroups.push_back(value); return *this; }

    /**
     * <p>Groupings of columns that work together in certain Amazon QuickSight
     * features. Currently, only geospatial hierarchy is supported.</p>
     */
    inline DataSet& AddColumnGroups(ColumnGroup&& value) { m_columnGroupsHasBeenSet = true; m_columnGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The folder that contains fields and nested subfolders for your dataset.</p>
     */
    inline const Aws::Map<Aws::String, FieldFolder>& GetFieldFolders() const{ return m_fieldFolders; }

    /**
     * <p>The folder that contains fields and nested subfolders for your dataset.</p>
     */
    inline bool FieldFoldersHasBeenSet() const { return m_fieldFoldersHasBeenSet; }

    /**
     * <p>The folder that contains fields and nested subfolders for your dataset.</p>
     */
    inline void SetFieldFolders(const Aws::Map<Aws::String, FieldFolder>& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders = value; }

    /**
     * <p>The folder that contains fields and nested subfolders for your dataset.</p>
     */
    inline void SetFieldFolders(Aws::Map<Aws::String, FieldFolder>&& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders = std::move(value); }

    /**
     * <p>The folder that contains fields and nested subfolders for your dataset.</p>
     */
    inline DataSet& WithFieldFolders(const Aws::Map<Aws::String, FieldFolder>& value) { SetFieldFolders(value); return *this;}

    /**
     * <p>The folder that contains fields and nested subfolders for your dataset.</p>
     */
    inline DataSet& WithFieldFolders(Aws::Map<Aws::String, FieldFolder>&& value) { SetFieldFolders(std::move(value)); return *this;}

    /**
     * <p>The folder that contains fields and nested subfolders for your dataset.</p>
     */
    inline DataSet& AddFieldFolders(const Aws::String& key, const FieldFolder& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders.emplace(key, value); return *this; }

    /**
     * <p>The folder that contains fields and nested subfolders for your dataset.</p>
     */
    inline DataSet& AddFieldFolders(Aws::String&& key, const FieldFolder& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders.emplace(std::move(key), value); return *this; }

    /**
     * <p>The folder that contains fields and nested subfolders for your dataset.</p>
     */
    inline DataSet& AddFieldFolders(const Aws::String& key, FieldFolder&& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The folder that contains fields and nested subfolders for your dataset.</p>
     */
    inline DataSet& AddFieldFolders(Aws::String&& key, FieldFolder&& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The folder that contains fields and nested subfolders for your dataset.</p>
     */
    inline DataSet& AddFieldFolders(const char* key, FieldFolder&& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The folder that contains fields and nested subfolders for your dataset.</p>
     */
    inline DataSet& AddFieldFolders(const char* key, const FieldFolder& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders.emplace(key, value); return *this; }


    /**
     * <p>The row-level security configuration for the dataset.</p>
     */
    inline const RowLevelPermissionDataSet& GetRowLevelPermissionDataSet() const{ return m_rowLevelPermissionDataSet; }

    /**
     * <p>The row-level security configuration for the dataset.</p>
     */
    inline bool RowLevelPermissionDataSetHasBeenSet() const { return m_rowLevelPermissionDataSetHasBeenSet; }

    /**
     * <p>The row-level security configuration for the dataset.</p>
     */
    inline void SetRowLevelPermissionDataSet(const RowLevelPermissionDataSet& value) { m_rowLevelPermissionDataSetHasBeenSet = true; m_rowLevelPermissionDataSet = value; }

    /**
     * <p>The row-level security configuration for the dataset.</p>
     */
    inline void SetRowLevelPermissionDataSet(RowLevelPermissionDataSet&& value) { m_rowLevelPermissionDataSetHasBeenSet = true; m_rowLevelPermissionDataSet = std::move(value); }

    /**
     * <p>The row-level security configuration for the dataset.</p>
     */
    inline DataSet& WithRowLevelPermissionDataSet(const RowLevelPermissionDataSet& value) { SetRowLevelPermissionDataSet(value); return *this;}

    /**
     * <p>The row-level security configuration for the dataset.</p>
     */
    inline DataSet& WithRowLevelPermissionDataSet(RowLevelPermissionDataSet&& value) { SetRowLevelPermissionDataSet(std::move(value)); return *this;}


    /**
     * <p>The element you can use to define tags for row-level security.</p>
     */
    inline const RowLevelPermissionTagConfiguration& GetRowLevelPermissionTagConfiguration() const{ return m_rowLevelPermissionTagConfiguration; }

    /**
     * <p>The element you can use to define tags for row-level security.</p>
     */
    inline bool RowLevelPermissionTagConfigurationHasBeenSet() const { return m_rowLevelPermissionTagConfigurationHasBeenSet; }

    /**
     * <p>The element you can use to define tags for row-level security.</p>
     */
    inline void SetRowLevelPermissionTagConfiguration(const RowLevelPermissionTagConfiguration& value) { m_rowLevelPermissionTagConfigurationHasBeenSet = true; m_rowLevelPermissionTagConfiguration = value; }

    /**
     * <p>The element you can use to define tags for row-level security.</p>
     */
    inline void SetRowLevelPermissionTagConfiguration(RowLevelPermissionTagConfiguration&& value) { m_rowLevelPermissionTagConfigurationHasBeenSet = true; m_rowLevelPermissionTagConfiguration = std::move(value); }

    /**
     * <p>The element you can use to define tags for row-level security.</p>
     */
    inline DataSet& WithRowLevelPermissionTagConfiguration(const RowLevelPermissionTagConfiguration& value) { SetRowLevelPermissionTagConfiguration(value); return *this;}

    /**
     * <p>The element you can use to define tags for row-level security.</p>
     */
    inline DataSet& WithRowLevelPermissionTagConfiguration(RowLevelPermissionTagConfiguration&& value) { SetRowLevelPermissionTagConfiguration(std::move(value)); return *this;}


    /**
     * <p>A set of one or more definitions of a <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_ColumnLevelPermissionRule.html">ColumnLevelPermissionRule</a>
     * </code>.</p>
     */
    inline const Aws::Vector<ColumnLevelPermissionRule>& GetColumnLevelPermissionRules() const{ return m_columnLevelPermissionRules; }

    /**
     * <p>A set of one or more definitions of a <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_ColumnLevelPermissionRule.html">ColumnLevelPermissionRule</a>
     * </code>.</p>
     */
    inline bool ColumnLevelPermissionRulesHasBeenSet() const { return m_columnLevelPermissionRulesHasBeenSet; }

    /**
     * <p>A set of one or more definitions of a <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_ColumnLevelPermissionRule.html">ColumnLevelPermissionRule</a>
     * </code>.</p>
     */
    inline void SetColumnLevelPermissionRules(const Aws::Vector<ColumnLevelPermissionRule>& value) { m_columnLevelPermissionRulesHasBeenSet = true; m_columnLevelPermissionRules = value; }

    /**
     * <p>A set of one or more definitions of a <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_ColumnLevelPermissionRule.html">ColumnLevelPermissionRule</a>
     * </code>.</p>
     */
    inline void SetColumnLevelPermissionRules(Aws::Vector<ColumnLevelPermissionRule>&& value) { m_columnLevelPermissionRulesHasBeenSet = true; m_columnLevelPermissionRules = std::move(value); }

    /**
     * <p>A set of one or more definitions of a <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_ColumnLevelPermissionRule.html">ColumnLevelPermissionRule</a>
     * </code>.</p>
     */
    inline DataSet& WithColumnLevelPermissionRules(const Aws::Vector<ColumnLevelPermissionRule>& value) { SetColumnLevelPermissionRules(value); return *this;}

    /**
     * <p>A set of one or more definitions of a <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_ColumnLevelPermissionRule.html">ColumnLevelPermissionRule</a>
     * </code>.</p>
     */
    inline DataSet& WithColumnLevelPermissionRules(Aws::Vector<ColumnLevelPermissionRule>&& value) { SetColumnLevelPermissionRules(std::move(value)); return *this;}

    /**
     * <p>A set of one or more definitions of a <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_ColumnLevelPermissionRule.html">ColumnLevelPermissionRule</a>
     * </code>.</p>
     */
    inline DataSet& AddColumnLevelPermissionRules(const ColumnLevelPermissionRule& value) { m_columnLevelPermissionRulesHasBeenSet = true; m_columnLevelPermissionRules.push_back(value); return *this; }

    /**
     * <p>A set of one or more definitions of a <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_ColumnLevelPermissionRule.html">ColumnLevelPermissionRule</a>
     * </code>.</p>
     */
    inline DataSet& AddColumnLevelPermissionRules(ColumnLevelPermissionRule&& value) { m_columnLevelPermissionRulesHasBeenSet = true; m_columnLevelPermissionRules.push_back(std::move(value)); return *this; }


    /**
     * <p>The usage configuration to apply to child datasets that reference this
     * dataset as a source.</p>
     */
    inline const DataSetUsageConfiguration& GetDataSetUsageConfiguration() const{ return m_dataSetUsageConfiguration; }

    /**
     * <p>The usage configuration to apply to child datasets that reference this
     * dataset as a source.</p>
     */
    inline bool DataSetUsageConfigurationHasBeenSet() const { return m_dataSetUsageConfigurationHasBeenSet; }

    /**
     * <p>The usage configuration to apply to child datasets that reference this
     * dataset as a source.</p>
     */
    inline void SetDataSetUsageConfiguration(const DataSetUsageConfiguration& value) { m_dataSetUsageConfigurationHasBeenSet = true; m_dataSetUsageConfiguration = value; }

    /**
     * <p>The usage configuration to apply to child datasets that reference this
     * dataset as a source.</p>
     */
    inline void SetDataSetUsageConfiguration(DataSetUsageConfiguration&& value) { m_dataSetUsageConfigurationHasBeenSet = true; m_dataSetUsageConfiguration = std::move(value); }

    /**
     * <p>The usage configuration to apply to child datasets that reference this
     * dataset as a source.</p>
     */
    inline DataSet& WithDataSetUsageConfiguration(const DataSetUsageConfiguration& value) { SetDataSetUsageConfiguration(value); return *this;}

    /**
     * <p>The usage configuration to apply to child datasets that reference this
     * dataset as a source.</p>
     */
    inline DataSet& WithDataSetUsageConfiguration(DataSetUsageConfiguration&& value) { SetDataSetUsageConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Map<Aws::String, PhysicalTable> m_physicalTableMap;
    bool m_physicalTableMapHasBeenSet = false;

    Aws::Map<Aws::String, LogicalTable> m_logicalTableMap;
    bool m_logicalTableMapHasBeenSet = false;

    Aws::Vector<OutputColumn> m_outputColumns;
    bool m_outputColumnsHasBeenSet = false;

    DataSetImportMode m_importMode;
    bool m_importModeHasBeenSet = false;

    long long m_consumedSpiceCapacityInBytes;
    bool m_consumedSpiceCapacityInBytesHasBeenSet = false;

    Aws::Vector<ColumnGroup> m_columnGroups;
    bool m_columnGroupsHasBeenSet = false;

    Aws::Map<Aws::String, FieldFolder> m_fieldFolders;
    bool m_fieldFoldersHasBeenSet = false;

    RowLevelPermissionDataSet m_rowLevelPermissionDataSet;
    bool m_rowLevelPermissionDataSetHasBeenSet = false;

    RowLevelPermissionTagConfiguration m_rowLevelPermissionTagConfiguration;
    bool m_rowLevelPermissionTagConfigurationHasBeenSet = false;

    Aws::Vector<ColumnLevelPermissionRule> m_columnLevelPermissionRules;
    bool m_columnLevelPermissionRulesHasBeenSet = false;

    DataSetUsageConfiguration m_dataSetUsageConfiguration;
    bool m_dataSetUsageConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
