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
#include <aws/quicksight/model/DataSetUseAs.h>
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
    AWS_QUICKSIGHT_API DataSet() = default;
    AWS_QUICKSIGHT_API DataSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DataSet& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the dataset. Limited to 96 characters.</p>
     */
    inline const Aws::String& GetDataSetId() const { return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    template<typename DataSetIdT = Aws::String>
    void SetDataSetId(DataSetIdT&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::forward<DataSetIdT>(value); }
    template<typename DataSetIdT = Aws::String>
    DataSet& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A display name for the dataset.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataSet& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this dataset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    DataSet& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that this dataset was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    DataSet& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline const Aws::Map<Aws::String, PhysicalTable>& GetPhysicalTableMap() const { return m_physicalTableMap; }
    inline bool PhysicalTableMapHasBeenSet() const { return m_physicalTableMapHasBeenSet; }
    template<typename PhysicalTableMapT = Aws::Map<Aws::String, PhysicalTable>>
    void SetPhysicalTableMap(PhysicalTableMapT&& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap = std::forward<PhysicalTableMapT>(value); }
    template<typename PhysicalTableMapT = Aws::Map<Aws::String, PhysicalTable>>
    DataSet& WithPhysicalTableMap(PhysicalTableMapT&& value) { SetPhysicalTableMap(std::forward<PhysicalTableMapT>(value)); return *this;}
    template<typename PhysicalTableMapKeyT = Aws::String, typename PhysicalTableMapValueT = PhysicalTable>
    DataSet& AddPhysicalTableMap(PhysicalTableMapKeyT&& key, PhysicalTableMapValueT&& value) {
      m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(std::forward<PhysicalTableMapKeyT>(key), std::forward<PhysicalTableMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline const Aws::Map<Aws::String, LogicalTable>& GetLogicalTableMap() const { return m_logicalTableMap; }
    inline bool LogicalTableMapHasBeenSet() const { return m_logicalTableMapHasBeenSet; }
    template<typename LogicalTableMapT = Aws::Map<Aws::String, LogicalTable>>
    void SetLogicalTableMap(LogicalTableMapT&& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap = std::forward<LogicalTableMapT>(value); }
    template<typename LogicalTableMapT = Aws::Map<Aws::String, LogicalTable>>
    DataSet& WithLogicalTableMap(LogicalTableMapT&& value) { SetLogicalTableMap(std::forward<LogicalTableMapT>(value)); return *this;}
    template<typename LogicalTableMapKeyT = Aws::String, typename LogicalTableMapValueT = LogicalTable>
    DataSet& AddLogicalTableMap(LogicalTableMapKeyT&& key, LogicalTableMapValueT&& value) {
      m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(std::forward<LogicalTableMapKeyT>(key), std::forward<LogicalTableMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The list of columns after all transforms. These columns are available in
     * templates, analyses, and dashboards.</p>
     */
    inline const Aws::Vector<OutputColumn>& GetOutputColumns() const { return m_outputColumns; }
    inline bool OutputColumnsHasBeenSet() const { return m_outputColumnsHasBeenSet; }
    template<typename OutputColumnsT = Aws::Vector<OutputColumn>>
    void SetOutputColumns(OutputColumnsT&& value) { m_outputColumnsHasBeenSet = true; m_outputColumns = std::forward<OutputColumnsT>(value); }
    template<typename OutputColumnsT = Aws::Vector<OutputColumn>>
    DataSet& WithOutputColumns(OutputColumnsT&& value) { SetOutputColumns(std::forward<OutputColumnsT>(value)); return *this;}
    template<typename OutputColumnsT = OutputColumn>
    DataSet& AddOutputColumns(OutputColumnsT&& value) { m_outputColumnsHasBeenSet = true; m_outputColumns.emplace_back(std::forward<OutputColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether you want to import the data into SPICE.</p>
     */
    inline DataSetImportMode GetImportMode() const { return m_importMode; }
    inline bool ImportModeHasBeenSet() const { return m_importModeHasBeenSet; }
    inline void SetImportMode(DataSetImportMode value) { m_importModeHasBeenSet = true; m_importMode = value; }
    inline DataSet& WithImportMode(DataSetImportMode value) { SetImportMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of SPICE capacity used by this dataset. This is 0 if the dataset
     * isn't imported into SPICE.</p>
     */
    inline long long GetConsumedSpiceCapacityInBytes() const { return m_consumedSpiceCapacityInBytes; }
    inline bool ConsumedSpiceCapacityInBytesHasBeenSet() const { return m_consumedSpiceCapacityInBytesHasBeenSet; }
    inline void SetConsumedSpiceCapacityInBytes(long long value) { m_consumedSpiceCapacityInBytesHasBeenSet = true; m_consumedSpiceCapacityInBytes = value; }
    inline DataSet& WithConsumedSpiceCapacityInBytes(long long value) { SetConsumedSpiceCapacityInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Groupings of columns that work together in certain Amazon QuickSight
     * features. Currently, only geospatial hierarchy is supported.</p>
     */
    inline const Aws::Vector<ColumnGroup>& GetColumnGroups() const { return m_columnGroups; }
    inline bool ColumnGroupsHasBeenSet() const { return m_columnGroupsHasBeenSet; }
    template<typename ColumnGroupsT = Aws::Vector<ColumnGroup>>
    void SetColumnGroups(ColumnGroupsT&& value) { m_columnGroupsHasBeenSet = true; m_columnGroups = std::forward<ColumnGroupsT>(value); }
    template<typename ColumnGroupsT = Aws::Vector<ColumnGroup>>
    DataSet& WithColumnGroups(ColumnGroupsT&& value) { SetColumnGroups(std::forward<ColumnGroupsT>(value)); return *this;}
    template<typename ColumnGroupsT = ColumnGroup>
    DataSet& AddColumnGroups(ColumnGroupsT&& value) { m_columnGroupsHasBeenSet = true; m_columnGroups.emplace_back(std::forward<ColumnGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The folder that contains fields and nested subfolders for your dataset.</p>
     */
    inline const Aws::Map<Aws::String, FieldFolder>& GetFieldFolders() const { return m_fieldFolders; }
    inline bool FieldFoldersHasBeenSet() const { return m_fieldFoldersHasBeenSet; }
    template<typename FieldFoldersT = Aws::Map<Aws::String, FieldFolder>>
    void SetFieldFolders(FieldFoldersT&& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders = std::forward<FieldFoldersT>(value); }
    template<typename FieldFoldersT = Aws::Map<Aws::String, FieldFolder>>
    DataSet& WithFieldFolders(FieldFoldersT&& value) { SetFieldFolders(std::forward<FieldFoldersT>(value)); return *this;}
    template<typename FieldFoldersKeyT = Aws::String, typename FieldFoldersValueT = FieldFolder>
    DataSet& AddFieldFolders(FieldFoldersKeyT&& key, FieldFoldersValueT&& value) {
      m_fieldFoldersHasBeenSet = true; m_fieldFolders.emplace(std::forward<FieldFoldersKeyT>(key), std::forward<FieldFoldersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The row-level security configuration for the dataset.</p>
     */
    inline const RowLevelPermissionDataSet& GetRowLevelPermissionDataSet() const { return m_rowLevelPermissionDataSet; }
    inline bool RowLevelPermissionDataSetHasBeenSet() const { return m_rowLevelPermissionDataSetHasBeenSet; }
    template<typename RowLevelPermissionDataSetT = RowLevelPermissionDataSet>
    void SetRowLevelPermissionDataSet(RowLevelPermissionDataSetT&& value) { m_rowLevelPermissionDataSetHasBeenSet = true; m_rowLevelPermissionDataSet = std::forward<RowLevelPermissionDataSetT>(value); }
    template<typename RowLevelPermissionDataSetT = RowLevelPermissionDataSet>
    DataSet& WithRowLevelPermissionDataSet(RowLevelPermissionDataSetT&& value) { SetRowLevelPermissionDataSet(std::forward<RowLevelPermissionDataSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The element you can use to define tags for row-level security.</p>
     */
    inline const RowLevelPermissionTagConfiguration& GetRowLevelPermissionTagConfiguration() const { return m_rowLevelPermissionTagConfiguration; }
    inline bool RowLevelPermissionTagConfigurationHasBeenSet() const { return m_rowLevelPermissionTagConfigurationHasBeenSet; }
    template<typename RowLevelPermissionTagConfigurationT = RowLevelPermissionTagConfiguration>
    void SetRowLevelPermissionTagConfiguration(RowLevelPermissionTagConfigurationT&& value) { m_rowLevelPermissionTagConfigurationHasBeenSet = true; m_rowLevelPermissionTagConfiguration = std::forward<RowLevelPermissionTagConfigurationT>(value); }
    template<typename RowLevelPermissionTagConfigurationT = RowLevelPermissionTagConfiguration>
    DataSet& WithRowLevelPermissionTagConfiguration(RowLevelPermissionTagConfigurationT&& value) { SetRowLevelPermissionTagConfiguration(std::forward<RowLevelPermissionTagConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of one or more definitions of a <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_ColumnLevelPermissionRule.html">ColumnLevelPermissionRule</a>
     * </code>.</p>
     */
    inline const Aws::Vector<ColumnLevelPermissionRule>& GetColumnLevelPermissionRules() const { return m_columnLevelPermissionRules; }
    inline bool ColumnLevelPermissionRulesHasBeenSet() const { return m_columnLevelPermissionRulesHasBeenSet; }
    template<typename ColumnLevelPermissionRulesT = Aws::Vector<ColumnLevelPermissionRule>>
    void SetColumnLevelPermissionRules(ColumnLevelPermissionRulesT&& value) { m_columnLevelPermissionRulesHasBeenSet = true; m_columnLevelPermissionRules = std::forward<ColumnLevelPermissionRulesT>(value); }
    template<typename ColumnLevelPermissionRulesT = Aws::Vector<ColumnLevelPermissionRule>>
    DataSet& WithColumnLevelPermissionRules(ColumnLevelPermissionRulesT&& value) { SetColumnLevelPermissionRules(std::forward<ColumnLevelPermissionRulesT>(value)); return *this;}
    template<typename ColumnLevelPermissionRulesT = ColumnLevelPermissionRule>
    DataSet& AddColumnLevelPermissionRules(ColumnLevelPermissionRulesT&& value) { m_columnLevelPermissionRulesHasBeenSet = true; m_columnLevelPermissionRules.emplace_back(std::forward<ColumnLevelPermissionRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The usage configuration to apply to child datasets that reference this
     * dataset as a source.</p>
     */
    inline const DataSetUsageConfiguration& GetDataSetUsageConfiguration() const { return m_dataSetUsageConfiguration; }
    inline bool DataSetUsageConfigurationHasBeenSet() const { return m_dataSetUsageConfigurationHasBeenSet; }
    template<typename DataSetUsageConfigurationT = DataSetUsageConfiguration>
    void SetDataSetUsageConfiguration(DataSetUsageConfigurationT&& value) { m_dataSetUsageConfigurationHasBeenSet = true; m_dataSetUsageConfiguration = std::forward<DataSetUsageConfigurationT>(value); }
    template<typename DataSetUsageConfigurationT = DataSetUsageConfiguration>
    DataSet& WithDataSetUsageConfiguration(DataSetUsageConfigurationT&& value) { SetDataSetUsageConfiguration(std::forward<DataSetUsageConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters that are declared in a dataset.</p>
     */
    inline const Aws::Vector<DatasetParameter>& GetDatasetParameters() const { return m_datasetParameters; }
    inline bool DatasetParametersHasBeenSet() const { return m_datasetParametersHasBeenSet; }
    template<typename DatasetParametersT = Aws::Vector<DatasetParameter>>
    void SetDatasetParameters(DatasetParametersT&& value) { m_datasetParametersHasBeenSet = true; m_datasetParameters = std::forward<DatasetParametersT>(value); }
    template<typename DatasetParametersT = Aws::Vector<DatasetParameter>>
    DataSet& WithDatasetParameters(DatasetParametersT&& value) { SetDatasetParameters(std::forward<DatasetParametersT>(value)); return *this;}
    template<typename DatasetParametersT = DatasetParameter>
    DataSet& AddDatasetParameters(DatasetParametersT&& value) { m_datasetParametersHasBeenSet = true; m_datasetParameters.emplace_back(std::forward<DatasetParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The performance optimization configuration of a dataset.</p>
     */
    inline const PerformanceConfiguration& GetPerformanceConfiguration() const { return m_performanceConfiguration; }
    inline bool PerformanceConfigurationHasBeenSet() const { return m_performanceConfigurationHasBeenSet; }
    template<typename PerformanceConfigurationT = PerformanceConfiguration>
    void SetPerformanceConfiguration(PerformanceConfigurationT&& value) { m_performanceConfigurationHasBeenSet = true; m_performanceConfiguration = std::forward<PerformanceConfigurationT>(value); }
    template<typename PerformanceConfigurationT = PerformanceConfiguration>
    DataSet& WithPerformanceConfiguration(PerformanceConfigurationT&& value) { SetPerformanceConfiguration(std::forward<PerformanceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The usage of the dataset.</p>
     */
    inline DataSetUseAs GetUseAs() const { return m_useAs; }
    inline bool UseAsHasBeenSet() const { return m_useAsHasBeenSet; }
    inline void SetUseAs(DataSetUseAs value) { m_useAsHasBeenSet = true; m_useAs = value; }
    inline DataSet& WithUseAs(DataSetUseAs value) { SetUseAs(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Map<Aws::String, PhysicalTable> m_physicalTableMap;
    bool m_physicalTableMapHasBeenSet = false;

    Aws::Map<Aws::String, LogicalTable> m_logicalTableMap;
    bool m_logicalTableMapHasBeenSet = false;

    Aws::Vector<OutputColumn> m_outputColumns;
    bool m_outputColumnsHasBeenSet = false;

    DataSetImportMode m_importMode{DataSetImportMode::NOT_SET};
    bool m_importModeHasBeenSet = false;

    long long m_consumedSpiceCapacityInBytes{0};
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

    DataSetUseAs m_useAs{DataSetUseAs::NOT_SET};
    bool m_useAsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
