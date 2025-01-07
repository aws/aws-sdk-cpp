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
    AWS_QUICKSIGHT_API CreateDataSetRequest();

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
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline CreateDataSetRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline CreateDataSetRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline CreateDataSetRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID for the dataset that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }
    inline CreateDataSetRequest& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}
    inline CreateDataSetRequest& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}
    inline CreateDataSetRequest& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name for the dataset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateDataSetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateDataSetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateDataSetRequest& WithName(const char* value) { SetName(value); return *this;}
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
    inline CreateDataSetRequest& WithPhysicalTableMap(const Aws::Map<Aws::String, PhysicalTable>& value) { SetPhysicalTableMap(value); return *this;}
    inline CreateDataSetRequest& WithPhysicalTableMap(Aws::Map<Aws::String, PhysicalTable>&& value) { SetPhysicalTableMap(std::move(value)); return *this;}
    inline CreateDataSetRequest& AddPhysicalTableMap(const Aws::String& key, const PhysicalTable& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(key, value); return *this; }
    inline CreateDataSetRequest& AddPhysicalTableMap(Aws::String&& key, const PhysicalTable& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(std::move(key), value); return *this; }
    inline CreateDataSetRequest& AddPhysicalTableMap(const Aws::String& key, PhysicalTable&& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(key, std::move(value)); return *this; }
    inline CreateDataSetRequest& AddPhysicalTableMap(Aws::String&& key, PhysicalTable&& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateDataSetRequest& AddPhysicalTableMap(const char* key, PhysicalTable&& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(key, std::move(value)); return *this; }
    inline CreateDataSetRequest& AddPhysicalTableMap(const char* key, const PhysicalTable& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(key, value); return *this; }
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
    inline CreateDataSetRequest& WithLogicalTableMap(const Aws::Map<Aws::String, LogicalTable>& value) { SetLogicalTableMap(value); return *this;}
    inline CreateDataSetRequest& WithLogicalTableMap(Aws::Map<Aws::String, LogicalTable>&& value) { SetLogicalTableMap(std::move(value)); return *this;}
    inline CreateDataSetRequest& AddLogicalTableMap(const Aws::String& key, const LogicalTable& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(key, value); return *this; }
    inline CreateDataSetRequest& AddLogicalTableMap(Aws::String&& key, const LogicalTable& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(std::move(key), value); return *this; }
    inline CreateDataSetRequest& AddLogicalTableMap(const Aws::String& key, LogicalTable&& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(key, std::move(value)); return *this; }
    inline CreateDataSetRequest& AddLogicalTableMap(Aws::String&& key, LogicalTable&& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateDataSetRequest& AddLogicalTableMap(const char* key, LogicalTable&& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(key, std::move(value)); return *this; }
    inline CreateDataSetRequest& AddLogicalTableMap(const char* key, const LogicalTable& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether you want to import the data into SPICE.</p>
     */
    inline const DataSetImportMode& GetImportMode() const{ return m_importMode; }
    inline bool ImportModeHasBeenSet() const { return m_importModeHasBeenSet; }
    inline void SetImportMode(const DataSetImportMode& value) { m_importModeHasBeenSet = true; m_importMode = value; }
    inline void SetImportMode(DataSetImportMode&& value) { m_importModeHasBeenSet = true; m_importMode = std::move(value); }
    inline CreateDataSetRequest& WithImportMode(const DataSetImportMode& value) { SetImportMode(value); return *this;}
    inline CreateDataSetRequest& WithImportMode(DataSetImportMode&& value) { SetImportMode(std::move(value)); return *this;}
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
    inline CreateDataSetRequest& WithColumnGroups(const Aws::Vector<ColumnGroup>& value) { SetColumnGroups(value); return *this;}
    inline CreateDataSetRequest& WithColumnGroups(Aws::Vector<ColumnGroup>&& value) { SetColumnGroups(std::move(value)); return *this;}
    inline CreateDataSetRequest& AddColumnGroups(const ColumnGroup& value) { m_columnGroupsHasBeenSet = true; m_columnGroups.push_back(value); return *this; }
    inline CreateDataSetRequest& AddColumnGroups(ColumnGroup&& value) { m_columnGroupsHasBeenSet = true; m_columnGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The folder that contains fields and nested subfolders for your dataset.</p>
     */
    inline const Aws::Map<Aws::String, FieldFolder>& GetFieldFolders() const{ return m_fieldFolders; }
    inline bool FieldFoldersHasBeenSet() const { return m_fieldFoldersHasBeenSet; }
    inline void SetFieldFolders(const Aws::Map<Aws::String, FieldFolder>& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders = value; }
    inline void SetFieldFolders(Aws::Map<Aws::String, FieldFolder>&& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders = std::move(value); }
    inline CreateDataSetRequest& WithFieldFolders(const Aws::Map<Aws::String, FieldFolder>& value) { SetFieldFolders(value); return *this;}
    inline CreateDataSetRequest& WithFieldFolders(Aws::Map<Aws::String, FieldFolder>&& value) { SetFieldFolders(std::move(value)); return *this;}
    inline CreateDataSetRequest& AddFieldFolders(const Aws::String& key, const FieldFolder& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders.emplace(key, value); return *this; }
    inline CreateDataSetRequest& AddFieldFolders(Aws::String&& key, const FieldFolder& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders.emplace(std::move(key), value); return *this; }
    inline CreateDataSetRequest& AddFieldFolders(const Aws::String& key, FieldFolder&& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders.emplace(key, std::move(value)); return *this; }
    inline CreateDataSetRequest& AddFieldFolders(Aws::String&& key, FieldFolder&& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateDataSetRequest& AddFieldFolders(const char* key, FieldFolder&& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders.emplace(key, std::move(value)); return *this; }
    inline CreateDataSetRequest& AddFieldFolders(const char* key, const FieldFolder& value) { m_fieldFoldersHasBeenSet = true; m_fieldFolders.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of resource permissions on the dataset.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const{ return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    inline void SetPermissions(const Aws::Vector<ResourcePermission>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }
    inline void SetPermissions(Aws::Vector<ResourcePermission>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }
    inline CreateDataSetRequest& WithPermissions(const Aws::Vector<ResourcePermission>& value) { SetPermissions(value); return *this;}
    inline CreateDataSetRequest& WithPermissions(Aws::Vector<ResourcePermission>&& value) { SetPermissions(std::move(value)); return *this;}
    inline CreateDataSetRequest& AddPermissions(const ResourcePermission& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }
    inline CreateDataSetRequest& AddPermissions(ResourcePermission&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The row-level security configuration for the data that you want to
     * create.</p>
     */
    inline const RowLevelPermissionDataSet& GetRowLevelPermissionDataSet() const{ return m_rowLevelPermissionDataSet; }
    inline bool RowLevelPermissionDataSetHasBeenSet() const { return m_rowLevelPermissionDataSetHasBeenSet; }
    inline void SetRowLevelPermissionDataSet(const RowLevelPermissionDataSet& value) { m_rowLevelPermissionDataSetHasBeenSet = true; m_rowLevelPermissionDataSet = value; }
    inline void SetRowLevelPermissionDataSet(RowLevelPermissionDataSet&& value) { m_rowLevelPermissionDataSetHasBeenSet = true; m_rowLevelPermissionDataSet = std::move(value); }
    inline CreateDataSetRequest& WithRowLevelPermissionDataSet(const RowLevelPermissionDataSet& value) { SetRowLevelPermissionDataSet(value); return *this;}
    inline CreateDataSetRequest& WithRowLevelPermissionDataSet(RowLevelPermissionDataSet&& value) { SetRowLevelPermissionDataSet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of tags on a dataset to set row-level security. Row-level
     * security tags are currently supported for anonymous embedding only.</p>
     */
    inline const RowLevelPermissionTagConfiguration& GetRowLevelPermissionTagConfiguration() const{ return m_rowLevelPermissionTagConfiguration; }
    inline bool RowLevelPermissionTagConfigurationHasBeenSet() const { return m_rowLevelPermissionTagConfigurationHasBeenSet; }
    inline void SetRowLevelPermissionTagConfiguration(const RowLevelPermissionTagConfiguration& value) { m_rowLevelPermissionTagConfigurationHasBeenSet = true; m_rowLevelPermissionTagConfiguration = value; }
    inline void SetRowLevelPermissionTagConfiguration(RowLevelPermissionTagConfiguration&& value) { m_rowLevelPermissionTagConfigurationHasBeenSet = true; m_rowLevelPermissionTagConfiguration = std::move(value); }
    inline CreateDataSetRequest& WithRowLevelPermissionTagConfiguration(const RowLevelPermissionTagConfiguration& value) { SetRowLevelPermissionTagConfiguration(value); return *this;}
    inline CreateDataSetRequest& WithRowLevelPermissionTagConfiguration(RowLevelPermissionTagConfiguration&& value) { SetRowLevelPermissionTagConfiguration(std::move(value)); return *this;}
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
    inline CreateDataSetRequest& WithColumnLevelPermissionRules(const Aws::Vector<ColumnLevelPermissionRule>& value) { SetColumnLevelPermissionRules(value); return *this;}
    inline CreateDataSetRequest& WithColumnLevelPermissionRules(Aws::Vector<ColumnLevelPermissionRule>&& value) { SetColumnLevelPermissionRules(std::move(value)); return *this;}
    inline CreateDataSetRequest& AddColumnLevelPermissionRules(const ColumnLevelPermissionRule& value) { m_columnLevelPermissionRulesHasBeenSet = true; m_columnLevelPermissionRules.push_back(value); return *this; }
    inline CreateDataSetRequest& AddColumnLevelPermissionRules(ColumnLevelPermissionRule&& value) { m_columnLevelPermissionRulesHasBeenSet = true; m_columnLevelPermissionRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the dataset.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDataSetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateDataSetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDataSetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateDataSetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const DataSetUsageConfiguration& GetDataSetUsageConfiguration() const{ return m_dataSetUsageConfiguration; }
    inline bool DataSetUsageConfigurationHasBeenSet() const { return m_dataSetUsageConfigurationHasBeenSet; }
    inline void SetDataSetUsageConfiguration(const DataSetUsageConfiguration& value) { m_dataSetUsageConfigurationHasBeenSet = true; m_dataSetUsageConfiguration = value; }
    inline void SetDataSetUsageConfiguration(DataSetUsageConfiguration&& value) { m_dataSetUsageConfigurationHasBeenSet = true; m_dataSetUsageConfiguration = std::move(value); }
    inline CreateDataSetRequest& WithDataSetUsageConfiguration(const DataSetUsageConfiguration& value) { SetDataSetUsageConfiguration(value); return *this;}
    inline CreateDataSetRequest& WithDataSetUsageConfiguration(DataSetUsageConfiguration&& value) { SetDataSetUsageConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter declarations of the dataset.</p>
     */
    inline const Aws::Vector<DatasetParameter>& GetDatasetParameters() const{ return m_datasetParameters; }
    inline bool DatasetParametersHasBeenSet() const { return m_datasetParametersHasBeenSet; }
    inline void SetDatasetParameters(const Aws::Vector<DatasetParameter>& value) { m_datasetParametersHasBeenSet = true; m_datasetParameters = value; }
    inline void SetDatasetParameters(Aws::Vector<DatasetParameter>&& value) { m_datasetParametersHasBeenSet = true; m_datasetParameters = std::move(value); }
    inline CreateDataSetRequest& WithDatasetParameters(const Aws::Vector<DatasetParameter>& value) { SetDatasetParameters(value); return *this;}
    inline CreateDataSetRequest& WithDatasetParameters(Aws::Vector<DatasetParameter>&& value) { SetDatasetParameters(std::move(value)); return *this;}
    inline CreateDataSetRequest& AddDatasetParameters(const DatasetParameter& value) { m_datasetParametersHasBeenSet = true; m_datasetParameters.push_back(value); return *this; }
    inline CreateDataSetRequest& AddDatasetParameters(DatasetParameter&& value) { m_datasetParametersHasBeenSet = true; m_datasetParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When you create the dataset, Amazon QuickSight adds the dataset to these
     * folders.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFolderArns() const{ return m_folderArns; }
    inline bool FolderArnsHasBeenSet() const { return m_folderArnsHasBeenSet; }
    inline void SetFolderArns(const Aws::Vector<Aws::String>& value) { m_folderArnsHasBeenSet = true; m_folderArns = value; }
    inline void SetFolderArns(Aws::Vector<Aws::String>&& value) { m_folderArnsHasBeenSet = true; m_folderArns = std::move(value); }
    inline CreateDataSetRequest& WithFolderArns(const Aws::Vector<Aws::String>& value) { SetFolderArns(value); return *this;}
    inline CreateDataSetRequest& WithFolderArns(Aws::Vector<Aws::String>&& value) { SetFolderArns(std::move(value)); return *this;}
    inline CreateDataSetRequest& AddFolderArns(const Aws::String& value) { m_folderArnsHasBeenSet = true; m_folderArns.push_back(value); return *this; }
    inline CreateDataSetRequest& AddFolderArns(Aws::String&& value) { m_folderArnsHasBeenSet = true; m_folderArns.push_back(std::move(value)); return *this; }
    inline CreateDataSetRequest& AddFolderArns(const char* value) { m_folderArnsHasBeenSet = true; m_folderArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for the performance optimization of the dataset that
     * contains a <code>UniqueKey</code> configuration.</p>
     */
    inline const PerformanceConfiguration& GetPerformanceConfiguration() const{ return m_performanceConfiguration; }
    inline bool PerformanceConfigurationHasBeenSet() const { return m_performanceConfigurationHasBeenSet; }
    inline void SetPerformanceConfiguration(const PerformanceConfiguration& value) { m_performanceConfigurationHasBeenSet = true; m_performanceConfiguration = value; }
    inline void SetPerformanceConfiguration(PerformanceConfiguration&& value) { m_performanceConfigurationHasBeenSet = true; m_performanceConfiguration = std::move(value); }
    inline CreateDataSetRequest& WithPerformanceConfiguration(const PerformanceConfiguration& value) { SetPerformanceConfiguration(value); return *this;}
    inline CreateDataSetRequest& WithPerformanceConfiguration(PerformanceConfiguration&& value) { SetPerformanceConfiguration(std::move(value)); return *this;}
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

    DataSetImportMode m_importMode;
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
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
