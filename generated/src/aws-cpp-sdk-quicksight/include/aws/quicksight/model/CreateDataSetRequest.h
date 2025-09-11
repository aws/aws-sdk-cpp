/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/quicksight/model/DataSetImportMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/RowLevelPermissionDataSet.h>
#include <aws/quicksight/model/RowLevelPermissionTagConfiguration.h>
#include <aws/quicksight/model/DataSetUsageConfiguration.h>
#include <aws/quicksight/model/PerformanceConfiguration.h>
#include <aws/quicksight/model/DataSetUseAs.h>
#include <aws/quicksight/model/PhysicalTable.h>
#include <aws/quicksight/model/LogicalTable.h>
#include <aws/quicksight/model/ColumnGroup.h>
#include <aws/quicksight/model/FieldFolder.h>
#include <aws/quicksight/model/ResourcePermission.h>
#include <aws/quicksight/model/ColumnLevelPermissionRule.h>
#include <aws/quicksight/model/Tag.h>
#include <aws/quicksight/model/DatasetParameter.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class CreateDataSetRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API CreateDataSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataSet"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    CreateDataSetRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID for the dataset that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetDataSetId() const { return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    template<typename DataSetIdT = Aws::String>
    void SetDataSetId(DataSetIdT&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::forward<DataSetIdT>(value); }
    template<typename DataSetIdT = Aws::String>
    CreateDataSetRequest& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name for the dataset.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateDataSetRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    CreateDataSetRequest& WithPhysicalTableMap(PhysicalTableMapT&& value) { SetPhysicalTableMap(std::forward<PhysicalTableMapT>(value)); return *this;}
    template<typename PhysicalTableMapKeyT = Aws::String, typename PhysicalTableMapValueT = PhysicalTable>
    CreateDataSetRequest& AddPhysicalTableMap(PhysicalTableMapKeyT&& key, PhysicalTableMapValueT&& value) {
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
    CreateDataSetRequest& WithLogicalTableMap(LogicalTableMapT&& value) { SetLogicalTableMap(std::forward<LogicalTableMapT>(value)); return *this;}
    template<typename LogicalTableMapKeyT = Aws::String, typename LogicalTableMapValueT = LogicalTable>
    CreateDataSetRequest& AddLogicalTableMap(LogicalTableMapKeyT&& key, LogicalTableMapValueT&& value) {
      m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(std::forward<LogicalTableMapKeyT>(key), std::forward<LogicalTableMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Indicates whether you want to import the data into SPICE.</p>
     */
    inline DataSetImportMode GetImportMode() const { return m_importMode; }
    inline bool ImportModeHasBeenSet() const { return m_importModeHasBeenSet; }
    inline void SetImportMode(DataSetImportMode value) { m_importModeHasBeenSet = true; m_importMode = value; }
    inline CreateDataSetRequest& WithImportMode(DataSetImportMode value) { SetImportMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Groupings of columns that work together in certain QuickSight features.
     * Currently, only geospatial hierarchy is supported.</p>
     */
    inline const Aws::Vector<ColumnGroup>& GetColumnGroups() const { return m_columnGroups; }
    inline bool ColumnGroupsHasBeenSet() const { return m_columnGroupsHasBeenSet; }
    template<typename ColumnGroupsT = Aws::Vector<ColumnGroup>>
    void SetColumnGroups(ColumnGroupsT&& value) { m_columnGroupsHasBeenSet = true; m_columnGroups = std::forward<ColumnGroupsT>(value); }
    template<typename ColumnGroupsT = Aws::Vector<ColumnGroup>>
    CreateDataSetRequest& WithColumnGroups(ColumnGroupsT&& value) { SetColumnGroups(std::forward<ColumnGroupsT>(value)); return *this;}
    template<typename ColumnGroupsT = ColumnGroup>
    CreateDataSetRequest& AddColumnGroups(ColumnGroupsT&& value) { m_columnGroupsHasBeenSet = true; m_columnGroups.emplace_back(std::forward<ColumnGroupsT>(value)); return *this; }
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
    CreateDataSetRequest& WithFieldFolders(FieldFoldersT&& value) { SetFieldFolders(std::forward<FieldFoldersT>(value)); return *this;}
    template<typename FieldFoldersKeyT = Aws::String, typename FieldFoldersValueT = FieldFolder>
    CreateDataSetRequest& AddFieldFolders(FieldFoldersKeyT&& key, FieldFoldersValueT&& value) {
      m_fieldFoldersHasBeenSet = true; m_fieldFolders.emplace(std::forward<FieldFoldersKeyT>(key), std::forward<FieldFoldersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of resource permissions on the dataset.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = Aws::Vector<ResourcePermission>>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = Aws::Vector<ResourcePermission>>
    CreateDataSetRequest& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    template<typename PermissionsT = ResourcePermission>
    CreateDataSetRequest& AddPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions.emplace_back(std::forward<PermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The row-level security configuration for the data that you want to
     * create.</p>
     */
    inline const RowLevelPermissionDataSet& GetRowLevelPermissionDataSet() const { return m_rowLevelPermissionDataSet; }
    inline bool RowLevelPermissionDataSetHasBeenSet() const { return m_rowLevelPermissionDataSetHasBeenSet; }
    template<typename RowLevelPermissionDataSetT = RowLevelPermissionDataSet>
    void SetRowLevelPermissionDataSet(RowLevelPermissionDataSetT&& value) { m_rowLevelPermissionDataSetHasBeenSet = true; m_rowLevelPermissionDataSet = std::forward<RowLevelPermissionDataSetT>(value); }
    template<typename RowLevelPermissionDataSetT = RowLevelPermissionDataSet>
    CreateDataSetRequest& WithRowLevelPermissionDataSet(RowLevelPermissionDataSetT&& value) { SetRowLevelPermissionDataSet(std::forward<RowLevelPermissionDataSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of tags on a dataset to set row-level security. Row-level
     * security tags are currently supported for anonymous embedding only.</p>
     */
    inline const RowLevelPermissionTagConfiguration& GetRowLevelPermissionTagConfiguration() const { return m_rowLevelPermissionTagConfiguration; }
    inline bool RowLevelPermissionTagConfigurationHasBeenSet() const { return m_rowLevelPermissionTagConfigurationHasBeenSet; }
    template<typename RowLevelPermissionTagConfigurationT = RowLevelPermissionTagConfiguration>
    void SetRowLevelPermissionTagConfiguration(RowLevelPermissionTagConfigurationT&& value) { m_rowLevelPermissionTagConfigurationHasBeenSet = true; m_rowLevelPermissionTagConfiguration = std::forward<RowLevelPermissionTagConfigurationT>(value); }
    template<typename RowLevelPermissionTagConfigurationT = RowLevelPermissionTagConfiguration>
    CreateDataSetRequest& WithRowLevelPermissionTagConfiguration(RowLevelPermissionTagConfigurationT&& value) { SetRowLevelPermissionTagConfiguration(std::forward<RowLevelPermissionTagConfigurationT>(value)); return *this;}
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
    CreateDataSetRequest& WithColumnLevelPermissionRules(ColumnLevelPermissionRulesT&& value) { SetColumnLevelPermissionRules(std::forward<ColumnLevelPermissionRulesT>(value)); return *this;}
    template<typename ColumnLevelPermissionRulesT = ColumnLevelPermissionRule>
    CreateDataSetRequest& AddColumnLevelPermissionRules(ColumnLevelPermissionRulesT&& value) { m_columnLevelPermissionRulesHasBeenSet = true; m_columnLevelPermissionRules.emplace_back(std::forward<ColumnLevelPermissionRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the dataset.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDataSetRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDataSetRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const DataSetUsageConfiguration& GetDataSetUsageConfiguration() const { return m_dataSetUsageConfiguration; }
    inline bool DataSetUsageConfigurationHasBeenSet() const { return m_dataSetUsageConfigurationHasBeenSet; }
    template<typename DataSetUsageConfigurationT = DataSetUsageConfiguration>
    void SetDataSetUsageConfiguration(DataSetUsageConfigurationT&& value) { m_dataSetUsageConfigurationHasBeenSet = true; m_dataSetUsageConfiguration = std::forward<DataSetUsageConfigurationT>(value); }
    template<typename DataSetUsageConfigurationT = DataSetUsageConfiguration>
    CreateDataSetRequest& WithDataSetUsageConfiguration(DataSetUsageConfigurationT&& value) { SetDataSetUsageConfiguration(std::forward<DataSetUsageConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter declarations of the dataset.</p>
     */
    inline const Aws::Vector<DatasetParameter>& GetDatasetParameters() const { return m_datasetParameters; }
    inline bool DatasetParametersHasBeenSet() const { return m_datasetParametersHasBeenSet; }
    template<typename DatasetParametersT = Aws::Vector<DatasetParameter>>
    void SetDatasetParameters(DatasetParametersT&& value) { m_datasetParametersHasBeenSet = true; m_datasetParameters = std::forward<DatasetParametersT>(value); }
    template<typename DatasetParametersT = Aws::Vector<DatasetParameter>>
    CreateDataSetRequest& WithDatasetParameters(DatasetParametersT&& value) { SetDatasetParameters(std::forward<DatasetParametersT>(value)); return *this;}
    template<typename DatasetParametersT = DatasetParameter>
    CreateDataSetRequest& AddDatasetParameters(DatasetParametersT&& value) { m_datasetParametersHasBeenSet = true; m_datasetParameters.emplace_back(std::forward<DatasetParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When you create the dataset, QuickSight adds the dataset to these
     * folders.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFolderArns() const { return m_folderArns; }
    inline bool FolderArnsHasBeenSet() const { return m_folderArnsHasBeenSet; }
    template<typename FolderArnsT = Aws::Vector<Aws::String>>
    void SetFolderArns(FolderArnsT&& value) { m_folderArnsHasBeenSet = true; m_folderArns = std::forward<FolderArnsT>(value); }
    template<typename FolderArnsT = Aws::Vector<Aws::String>>
    CreateDataSetRequest& WithFolderArns(FolderArnsT&& value) { SetFolderArns(std::forward<FolderArnsT>(value)); return *this;}
    template<typename FolderArnsT = Aws::String>
    CreateDataSetRequest& AddFolderArns(FolderArnsT&& value) { m_folderArnsHasBeenSet = true; m_folderArns.emplace_back(std::forward<FolderArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for the performance optimization of the dataset that
     * contains a <code>UniqueKey</code> configuration.</p>
     */
    inline const PerformanceConfiguration& GetPerformanceConfiguration() const { return m_performanceConfiguration; }
    inline bool PerformanceConfigurationHasBeenSet() const { return m_performanceConfigurationHasBeenSet; }
    template<typename PerformanceConfigurationT = PerformanceConfiguration>
    void SetPerformanceConfiguration(PerformanceConfigurationT&& value) { m_performanceConfigurationHasBeenSet = true; m_performanceConfiguration = std::forward<PerformanceConfigurationT>(value); }
    template<typename PerformanceConfigurationT = PerformanceConfiguration>
    CreateDataSetRequest& WithPerformanceConfiguration(PerformanceConfigurationT&& value) { SetPerformanceConfiguration(std::forward<PerformanceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The usage of the dataset. <code>RLS_RULES</code> must be specified for RLS
     * permission datasets.</p>
     */
    inline DataSetUseAs GetUseAs() const { return m_useAs; }
    inline bool UseAsHasBeenSet() const { return m_useAsHasBeenSet; }
    inline void SetUseAs(DataSetUseAs value) { m_useAsHasBeenSet = true; m_useAs = value; }
    inline CreateDataSetRequest& WithUseAs(DataSetUseAs value) { SetUseAs(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, PhysicalTable> m_physicalTableMap;
    bool m_physicalTableMapHasBeenSet = false;

    Aws::Map<Aws::String, LogicalTable> m_logicalTableMap;
    bool m_logicalTableMapHasBeenSet = false;

    DataSetImportMode m_importMode{DataSetImportMode::NOT_SET};
    bool m_importModeHasBeenSet = false;

    Aws::Vector<ColumnGroup> m_columnGroups;
    bool m_columnGroupsHasBeenSet = false;

    Aws::Map<Aws::String, FieldFolder> m_fieldFolders;
    bool m_fieldFoldersHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_permissions;
    bool m_permissionsHasBeenSet = false;

    RowLevelPermissionDataSet m_rowLevelPermissionDataSet;
    bool m_rowLevelPermissionDataSetHasBeenSet = false;

    RowLevelPermissionTagConfiguration m_rowLevelPermissionTagConfiguration;
    bool m_rowLevelPermissionTagConfigurationHasBeenSet = false;

    Aws::Vector<ColumnLevelPermissionRule> m_columnLevelPermissionRules;
    bool m_columnLevelPermissionRulesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    DataSetUsageConfiguration m_dataSetUsageConfiguration;
    bool m_dataSetUsageConfigurationHasBeenSet = false;

    Aws::Vector<DatasetParameter> m_datasetParameters;
    bool m_datasetParametersHasBeenSet = false;

    Aws::Vector<Aws::String> m_folderArns;
    bool m_folderArnsHasBeenSet = false;

    PerformanceConfiguration m_performanceConfiguration;
    bool m_performanceConfigurationHasBeenSet = false;

    DataSetUseAs m_useAs{DataSetUseAs::NOT_SET};
    bool m_useAsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
