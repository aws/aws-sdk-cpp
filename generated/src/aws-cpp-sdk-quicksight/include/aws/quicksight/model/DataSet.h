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
#include <aws/quicksight/model/PerformanceConfiguration.h>
#include <aws/quicksight/model/PhysicalTable.h>
#include <aws/quicksight/model/LogicalTable.h>
#include <aws/quicksight/model/OutputColumn.h>
#include <aws/quicksight/model/ColumnGroup.h>
#include <aws/quicksight/model/FieldFolder.h>
#include <aws/quicksight/model/ColumnLevelPermissionRule.h>
#include <aws/quicksight/model/DatasetParameter.h>
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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DataSet& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DataSet& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DataSet& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the dataset.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }
    inline DataSet& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}
    inline DataSet& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}
    inline DataSet& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A display name for the dataset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DataSet& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DataSet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DataSet& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this dataset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline DataSet& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline DataSet& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that this dataset was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline DataSet& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline DataSet& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline const Aws::Map<Aws::String, PhysicalTable>& GetPhysicalTableMap() const{ return m_physicalTableMap; }
    inline bool PhysicalTableMapHasBeenSet() const { return m_physicalTableMapHasBeenSet; }
    inline void SetPhysicalTableMap(const Aws::Map<Aws::String, PhysicalTable>& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap = value; }
    inline void SetPhysicalTableMap(Aws::Map<Aws::String, PhysicalTable>&& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap = std::move(value); }
    inline DataSet& WithPhysicalTableMap(const Aws::Map<Aws::String, PhysicalTable>& value) { SetPhysicalTableMap(value); return *this;}
    inline DataSet& WithPhysicalTableMap(Aws::Map<Aws::String, PhysicalTable>&& value) { SetPhysicalTableMap(std::move(value)); return *this;}
    inline DataSet& AddPhysicalTableMap(const Aws::String& key, const PhysicalTable& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(key, value); return *this; }
    inline DataSet& AddPhysicalTableMap(Aws::String&& key, const PhysicalTable& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(std::move(key), value); return *this; }
    inline DataSet& AddPhysicalTableMap(const Aws::String& key, PhysicalTable&& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(key, std::move(value)); return *this; }
    inline DataSet& AddPhysicalTableMap(Aws::String&& key, PhysicalTable&& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(std::move(key), std::move(value)); return *this; }
    inline DataSet& AddPhysicalTableMap(const char* key, PhysicalTable&& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(key, std::move(value)); return *this; }
    inline DataSet& AddPhysicalTableMap(const char* key, const PhysicalTable& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline const Aws::Map<Aws::String, LogicalTable>& GetLogicalTableMap() const{ return m_logicalTableMap; }
    inline bool LogicalTableMapHasBeenSet() const { return m_logicalTableMapHasBeenSet; }
    inline void SetLogicalTableMap(const Aws::Map<Aws::String, LogicalTable>& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap = value; }
    inline void SetLogicalTableMap(Aws::Map<Aws::String, LogicalTable>&& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap = std::move(value); }
    inline DataSet& WithLogicalTableMap(const Aws::Map<Aws::String, LogicalTable>& value) { SetLogicalTableMap(value); return *this;}
    inline DataSet& WithLogicalTableMap(Aws::Map<Aws::String, LogicalTable>&& value) { SetLogicalTableMap(std::move(value)); return *this;}
    inline DataSet& AddLogicalTableMap(const Aws::String& key, const LogicalTable& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(key, value); return *this; }
    inline DataSet& AddLogicalTableMap(Aws::String&& key, const LogicalTable& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(std::move(key), value); return *this; }
    inline DataSet& AddLogicalTableMap(const Aws::String& key, LogicalTable&& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(key, std::move(value)); return *this; }
    inline DataSet& AddLogicalTableMap(Aws::String&& key, LogicalTable&& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(std::move(key), std::move(value)); return *this; }
    inline DataSet& AddLogicalTableMap(const char* key, LogicalTable&& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(key, std::move(value)); return *this; }
    inline DataSet& AddLogicalTableMap(const char* key, const LogicalTable& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of columns after all transforms. These columns are available in
     * templates, analyses, and dashboards.</p>
     */
    inline const Aws::Vector<OutputColumn>& GetOutputColumns() const{ return m_outputColumns; }
    inline bool OutputColumnsHasBeenSet() const { return m_outputColumnsHasBeenSet; }
    inline void SetOutputColumns(const Aws::Vector<OutputColumn>& value) { m_outputColumnsHasBeenSet = true; m_outputColumns = value; }
    inline void SetOutputColumns(Aws::Vector<OutputColumn>&& value) { m_outputColumnsHasBeenSet = true; m_outputColumns = std::move(value); }
    inline DataSet& WithOutputColumns(const Aws::Vector<OutputColumn>& value) { SetOutputColumns(value); return *this;}
    inline DataSet& WithOutputColumns(Aws::Vector<OutputColumn>&& value) { SetOutputColumns(std::move(value)); return *this;}
    inline DataSet& AddOutputColumns(const OutputColumn& value) { m_outputColumnsHasBeenSet = true; m_outputColumns.push_back(value); return *this; }
    inline DataSet& AddOutputColumns(OutputColumn&& value) { m_outputColumnsHasBeenSet = true; m_outputColumns.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether you want to import the data into SPICE.</p>
     */
    inline const DataSetImportMode& GetImportMode() const{ return m_importMode; }
    inline bool ImportModeHasBeenSet() const { return m_importModeHasBeenSet; }
    inline void SetImportMode(const DataSetImportMode& value) { m_importModeHasBeenSet = true; m_importMode = value; }
    inline void SetImportMode(DataSetImportMode&& value) { m_importModeHasBeenSet = true; m_importMode = std::move(value); }
    inline DataSet& WithImportMode(const DataSetImportMode& value) { SetImportMode(value); return *this;}
    inline DataSet& WithImportMode(DataSetImportMode&& value) { SetImportMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of SPICE capacity used by this dataset. This is 0 if the dataset
     * isn't imported into SPICE.</p>
     */
    inline long long GetConsumedSpiceCapacityInBytes() const{ return m_consumedSpiceCapacityInBytes; }
    inline bool ConsumedSpiceCapacityInBytesHasBeenSet() const { return m_consumedSpiceCapacityInBytesHasBeenSet; }
    inline void SetConsumedSpiceCapacityInBytes(long long value) { m_consumedSpiceCapacityInBytesHasBeenSet = true; m_consumedSpiceCapacityInBytes = value; }
    inline DataSet& WithConsumedSpiceCapacityInBytes(long long value) { SetConsumedSpiceCapacityInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Groupings of columns that work together in certain Amazon QuickSight
     * features. Currently, only geospatial hierarchy is supported.</p>
     */
    inline const Aws::Vector<ColumnGroup>& GetColumnGroups() const{ return m_columnGroups; }
    inline bool ColumnGroupsHasBeenSet() const { return m_columnGroupsHasBeenSet; }
    inline void SetColumnGroups(const Aws::Vector<ColumnGroup>& value) { m_columnGroupsHasBeenSet = true; m_columnGroups = value; }
    inline void SetColumnGroups(Aws::Vector<ColumnGroup>&& value) { m_columnGroupsHasBeenSet = true; m_columnGroups = std::move(value); }
    inline DataSet& WithColumnGroups(const Aws::Vector<ColumnGroup>& value) { SetColumnGroups(value); return *this;}
    inline DataSet& WithColumnGroups(Aws::Vector<ColumnGroup>&& value) { SetColumnGroups(std::move(value)); return *this;}
    inline DataSet& AddColumnGroups(const ColumnGroup& value) { m_columnGroupsHasBeenSet = true; m_columnGroups.push_back(value); return *this; }
    inline DataSet& AddColumnGroups(ColumnGroup&& value) { m_columnGroupsHasBeenSet = true; m_columnGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The folder that contains fields and nested subfolders for your dataset.</p>
     */
    inline const Aws::Map<Aws::String, FieldFolder>& GetFieldFolders() const{ return m_fieldFolders; }
    inline bool FieldFoldersHasBeenSet() const { return m_fieldFoldersHasBeenSet; }
    inline void SetFieldFolders(const Aws::Map<Aws::String, FieldFolder>& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders = value; }
    inline void SetFieldFolders(Aws::Map<Aws::String, FieldFolder>&& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders = std::move(value); }
    inline DataSet& WithFieldFolders(const Aws::Map<Aws::String, FieldFolder>& value) { SetFieldFolders(value); return *this;}
    inline DataSet& WithFieldFolders(Aws::Map<Aws::String, FieldFolder>&& value) { SetFieldFolders(std::move(value)); return *this;}
    inline DataSet& AddFieldFolders(const Aws::String& key, const FieldFolder& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders.emplace(key, value); return *this; }
    inline DataSet& AddFieldFolders(Aws::String&& key, const FieldFolder& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders.emplace(std::move(key), value); return *this; }
    inline DataSet& AddFieldFolders(const Aws::String& key, FieldFolder&& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders.emplace(key, std::move(value)); return *this; }
    inline DataSet& AddFieldFolders(Aws::String&& key, FieldFolder&& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders.emplace(std::move(key), std::move(value)); return *this; }
    inline DataSet& AddFieldFolders(const char* key, FieldFolder&& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders.emplace(key, std::move(value)); return *this; }
    inline DataSet& AddFieldFolders(const char* key, const FieldFolder& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The row-level security configuration for the dataset.</p>
     */
    inline const RowLevelPermissionDataSet& GetRowLevelPermissionDataSet() const{ return m_rowLevelPermissionDataSet; }
    inline bool RowLevelPermissionDataSetHasBeenSet() const { return m_rowLevelPermissionDataSetHasBeenSet; }
    inline void SetRowLevelPermissionDataSet(const RowLevelPermissionDataSet& value) { m_rowLevelPermissionDataSetHasBeenSet = true; m_rowLevelPermissionDataSet = value; }
    inline void SetRowLevelPermissionDataSet(RowLevelPermissionDataSet&& value) { m_rowLevelPermissionDataSetHasBeenSet = true; m_rowLevelPermissionDataSet = std::move(value); }
    inline DataSet& WithRowLevelPermissionDataSet(const RowLevelPermissionDataSet& value) { SetRowLevelPermissionDataSet(value); return *this;}
    inline DataSet& WithRowLevelPermissionDataSet(RowLevelPermissionDataSet&& value) { SetRowLevelPermissionDataSet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The element you can use to define tags for row-level security.</p>
     */
    inline const RowLevelPermissionTagConfiguration& GetRowLevelPermissionTagConfiguration() const{ return m_rowLevelPermissionTagConfiguration; }
    inline bool RowLevelPermissionTagConfigurationHasBeenSet() const { return m_rowLevelPermissionTagConfigurationHasBeenSet; }
    inline void SetRowLevelPermissionTagConfiguration(const RowLevelPermissionTagConfiguration& value) { m_rowLevelPermissionTagConfigurationHasBeenSet = true; m_rowLevelPermissionTagConfiguration = value; }
    inline void SetRowLevelPermissionTagConfiguration(RowLevelPermissionTagConfiguration&& value) { m_rowLevelPermissionTagConfigurationHasBeenSet = true; m_rowLevelPermissionTagConfiguration = std::move(value); }
    inline DataSet& WithRowLevelPermissionTagConfiguration(const RowLevelPermissionTagConfiguration& value) { SetRowLevelPermissionTagConfiguration(value); return *this;}
    inline DataSet& WithRowLevelPermissionTagConfiguration(RowLevelPermissionTagConfiguration&& value) { SetRowLevelPermissionTagConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of one or more definitions of a <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_ColumnLevelPermissionRule.html">ColumnLevelPermissionRule</a>
     * </code>.</p>
     */
    inline const Aws::Vector<ColumnLevelPermissionRule>& GetColumnLevelPermissionRules() const{ return m_columnLevelPermissionRules; }
    inline bool ColumnLevelPermissionRulesHasBeenSet() const { return m_columnLevelPermissionRulesHasBeenSet; }
    inline void SetColumnLevelPermissionRules(const Aws::Vector<ColumnLevelPermissionRule>& value) { m_columnLevelPermissionRulesHasBeenSet = true; m_columnLevelPermissionRules = value; }
    inline void SetColumnLevelPermissionRules(Aws::Vector<ColumnLevelPermissionRule>&& value) { m_columnLevelPermissionRulesHasBeenSet = true; m_columnLevelPermissionRules = std::move(value); }
    inline DataSet& WithColumnLevelPermissionRules(const Aws::Vector<ColumnLevelPermissionRule>& value) { SetColumnLevelPermissionRules(value); return *this;}
    inline DataSet& WithColumnLevelPermissionRules(Aws::Vector<ColumnLevelPermissionRule>&& value) { SetColumnLevelPermissionRules(std::move(value)); return *this;}
    inline DataSet& AddColumnLevelPermissionRules(const ColumnLevelPermissionRule& value) { m_columnLevelPermissionRulesHasBeenSet = true; m_columnLevelPermissionRules.push_back(value); return *this; }
    inline DataSet& AddColumnLevelPermissionRules(ColumnLevelPermissionRule&& value) { m_columnLevelPermissionRulesHasBeenSet = true; m_columnLevelPermissionRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The usage configuration to apply to child datasets that reference this
     * dataset as a source.</p>
     */
    inline const DataSetUsageConfiguration& GetDataSetUsageConfiguration() const{ return m_dataSetUsageConfiguration; }
    inline bool DataSetUsageConfigurationHasBeenSet() const { return m_dataSetUsageConfigurationHasBeenSet; }
    inline void SetDataSetUsageConfiguration(const DataSetUsageConfiguration& value) { m_dataSetUsageConfigurationHasBeenSet = true; m_dataSetUsageConfiguration = value; }
    inline void SetDataSetUsageConfiguration(DataSetUsageConfiguration&& value) { m_dataSetUsageConfigurationHasBeenSet = true; m_dataSetUsageConfiguration = std::move(value); }
    inline DataSet& WithDataSetUsageConfiguration(const DataSetUsageConfiguration& value) { SetDataSetUsageConfiguration(value); return *this;}
    inline DataSet& WithDataSetUsageConfiguration(DataSetUsageConfiguration&& value) { SetDataSetUsageConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters that are declared in a dataset.</p>
     */
    inline const Aws::Vector<DatasetParameter>& GetDatasetParameters() const{ return m_datasetParameters; }
    inline bool DatasetParametersHasBeenSet() const { return m_datasetParametersHasBeenSet; }
    inline void SetDatasetParameters(const Aws::Vector<DatasetParameter>& value) { m_datasetParametersHasBeenSet = true; m_datasetParameters = value; }
    inline void SetDatasetParameters(Aws::Vector<DatasetParameter>&& value) { m_datasetParametersHasBeenSet = true; m_datasetParameters = std::move(value); }
    inline DataSet& WithDatasetParameters(const Aws::Vector<DatasetParameter>& value) { SetDatasetParameters(value); return *this;}
    inline DataSet& WithDatasetParameters(Aws::Vector<DatasetParameter>&& value) { SetDatasetParameters(std::move(value)); return *this;}
    inline DataSet& AddDatasetParameters(const DatasetParameter& value) { m_datasetParametersHasBeenSet = true; m_datasetParameters.push_back(value); return *this; }
    inline DataSet& AddDatasetParameters(DatasetParameter&& value) { m_datasetParametersHasBeenSet = true; m_datasetParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The performance optimization configuration of a dataset.</p>
     */
    inline const PerformanceConfiguration& GetPerformanceConfiguration() const{ return m_performanceConfiguration; }
    inline bool PerformanceConfigurationHasBeenSet() const { return m_performanceConfigurationHasBeenSet; }
    inline void SetPerformanceConfiguration(const PerformanceConfiguration& value) { m_performanceConfigurationHasBeenSet = true; m_performanceConfiguration = value; }
    inline void SetPerformanceConfiguration(PerformanceConfiguration&& value) { m_performanceConfigurationHasBeenSet = true; m_performanceConfiguration = std::move(value); }
    inline DataSet& WithPerformanceConfiguration(const PerformanceConfiguration& value) { SetPerformanceConfiguration(value); return *this;}
    inline DataSet& WithPerformanceConfiguration(PerformanceConfiguration&& value) { SetPerformanceConfiguration(std::move(value)); return *this;}
    ///@}
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

    Aws::Vector<DatasetParameter> m_datasetParameters;
    bool m_datasetParametersHasBeenSet = false;

    PerformanceConfiguration m_performanceConfiguration;
    bool m_performanceConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
