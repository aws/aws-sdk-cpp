/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/AssetBundleExportFormat.h>
#include <aws/quicksight/model/AssetBundleCloudFormationOverridePropertyConfiguration.h>
#include <aws/quicksight/model/AssetBundleExportJobValidationStrategy.h>
#include <aws/quicksight/model/IncludeFolderMembers.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class StartAssetBundleExportJobRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API StartAssetBundleExportJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAssetBundleExportJob"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account to export assets from.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    StartAssetBundleExportJobRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline const Aws::String& GetAssetBundleExportJobId() const { return m_assetBundleExportJobId; }
    inline bool AssetBundleExportJobIdHasBeenSet() const { return m_assetBundleExportJobIdHasBeenSet; }
    template<typename AssetBundleExportJobIdT = Aws::String>
    void SetAssetBundleExportJobId(AssetBundleExportJobIdT&& value) { m_assetBundleExportJobIdHasBeenSet = true; m_assetBundleExportJobId = std::forward<AssetBundleExportJobIdT>(value); }
    template<typename AssetBundleExportJobIdT = Aws::String>
    StartAssetBundleExportJobRequest& WithAssetBundleExportJobId(AssetBundleExportJobIdT&& value) { SetAssetBundleExportJobId(std::forward<AssetBundleExportJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of resource ARNs to export. The following resources are
     * supported.</p> <ul> <li> <p> <code>Analysis</code> </p> </li> <li> <p>
     * <code>Dashboard</code> </p> </li> <li> <p> <code>DataSet</code> </p> </li> <li>
     * <p> <code>DataSource</code> </p> </li> <li> <p> <code>RefreshSchedule</code>
     * </p> </li> <li> <p> <code>Theme</code> </p> </li> <li> <p>
     * <code>VPCConnection</code> </p> </li> </ul> <p>The API caller must have the
     * necessary permissions in their IAM role to access each resource before the
     * resources can be exported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const { return m_resourceArns; }
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }
    template<typename ResourceArnsT = Aws::Vector<Aws::String>>
    void SetResourceArns(ResourceArnsT&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::forward<ResourceArnsT>(value); }
    template<typename ResourceArnsT = Aws::Vector<Aws::String>>
    StartAssetBundleExportJobRequest& WithResourceArns(ResourceArnsT&& value) { SetResourceArns(std::forward<ResourceArnsT>(value)); return *this;}
    template<typename ResourceArnsT = Aws::String>
    StartAssetBundleExportJobRequest& AddResourceArns(ResourceArnsT&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.emplace_back(std::forward<ResourceArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A Boolean that determines whether all dependencies of each resource ARN are
     * recursively exported with the job. For example, say you provided a Dashboard ARN
     * to the <code>ResourceArns</code> parameter. If you set
     * <code>IncludeAllDependencies</code> to <code>TRUE</code>, any theme, dataset,
     * and data source resource that is a dependency of the dashboard is also
     * exported.</p>
     */
    inline bool GetIncludeAllDependencies() const { return m_includeAllDependencies; }
    inline bool IncludeAllDependenciesHasBeenSet() const { return m_includeAllDependenciesHasBeenSet; }
    inline void SetIncludeAllDependencies(bool value) { m_includeAllDependenciesHasBeenSet = true; m_includeAllDependencies = value; }
    inline StartAssetBundleExportJobRequest& WithIncludeAllDependencies(bool value) { SetIncludeAllDependencies(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The export data format.</p>
     */
    inline AssetBundleExportFormat GetExportFormat() const { return m_exportFormat; }
    inline bool ExportFormatHasBeenSet() const { return m_exportFormatHasBeenSet; }
    inline void SetExportFormat(AssetBundleExportFormat value) { m_exportFormatHasBeenSet = true; m_exportFormat = value; }
    inline StartAssetBundleExportJobRequest& WithExportFormat(AssetBundleExportFormat value) { SetExportFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional collection of structures that generate CloudFormation parameters
     * to override the existing resource property values when the resource is exported
     * to a new CloudFormation template.</p> <p>Use this field if the
     * <code>ExportFormat</code> field of a
     * <code>StartAssetBundleExportJobRequest</code> API call is set to
     * <code>CLOUDFORMATION_JSON</code>.</p>
     */
    inline const AssetBundleCloudFormationOverridePropertyConfiguration& GetCloudFormationOverridePropertyConfiguration() const { return m_cloudFormationOverridePropertyConfiguration; }
    inline bool CloudFormationOverridePropertyConfigurationHasBeenSet() const { return m_cloudFormationOverridePropertyConfigurationHasBeenSet; }
    template<typename CloudFormationOverridePropertyConfigurationT = AssetBundleCloudFormationOverridePropertyConfiguration>
    void SetCloudFormationOverridePropertyConfiguration(CloudFormationOverridePropertyConfigurationT&& value) { m_cloudFormationOverridePropertyConfigurationHasBeenSet = true; m_cloudFormationOverridePropertyConfiguration = std::forward<CloudFormationOverridePropertyConfigurationT>(value); }
    template<typename CloudFormationOverridePropertyConfigurationT = AssetBundleCloudFormationOverridePropertyConfiguration>
    StartAssetBundleExportJobRequest& WithCloudFormationOverridePropertyConfiguration(CloudFormationOverridePropertyConfigurationT&& value) { SetCloudFormationOverridePropertyConfiguration(std::forward<CloudFormationOverridePropertyConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean that determines whether all permissions for each resource ARN are
     * exported with the job. If you set <code>IncludePermissions</code> to
     * <code>TRUE</code>, any permissions associated with each resource are exported.
     * </p>
     */
    inline bool GetIncludePermissions() const { return m_includePermissions; }
    inline bool IncludePermissionsHasBeenSet() const { return m_includePermissionsHasBeenSet; }
    inline void SetIncludePermissions(bool value) { m_includePermissionsHasBeenSet = true; m_includePermissions = value; }
    inline StartAssetBundleExportJobRequest& WithIncludePermissions(bool value) { SetIncludePermissions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A Boolean that determines whether all tags for each resource ARN are
     * exported with the job. If you set <code>IncludeTags</code> to <code>TRUE</code>,
     * any tags associated with each resource are exported.</p>
     */
    inline bool GetIncludeTags() const { return m_includeTags; }
    inline bool IncludeTagsHasBeenSet() const { return m_includeTagsHasBeenSet; }
    inline void SetIncludeTags(bool value) { m_includeTagsHasBeenSet = true; m_includeTags = value; }
    inline StartAssetBundleExportJobRequest& WithIncludeTags(bool value) { SetIncludeTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional parameter that determines which validation strategy to use for
     * the export job. If <code>StrictModeForAllResources</code> is set to
     * <code>TRUE</code>, strict validation for every error is enforced. If it is set
     * to <code>FALSE</code>, validation is skipped for specific UI errors that are
     * shown as warnings. The default value for <code>StrictModeForAllResources</code>
     * is <code>FALSE</code>.</p>
     */
    inline const AssetBundleExportJobValidationStrategy& GetValidationStrategy() const { return m_validationStrategy; }
    inline bool ValidationStrategyHasBeenSet() const { return m_validationStrategyHasBeenSet; }
    template<typename ValidationStrategyT = AssetBundleExportJobValidationStrategy>
    void SetValidationStrategy(ValidationStrategyT&& value) { m_validationStrategyHasBeenSet = true; m_validationStrategy = std::forward<ValidationStrategyT>(value); }
    template<typename ValidationStrategyT = AssetBundleExportJobValidationStrategy>
    StartAssetBundleExportJobRequest& WithValidationStrategy(ValidationStrategyT&& value) { SetValidationStrategy(std::forward<ValidationStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean that determines if the exported asset carries over information
     * about the folders that the asset is a member of. </p>
     */
    inline bool GetIncludeFolderMemberships() const { return m_includeFolderMemberships; }
    inline bool IncludeFolderMembershipsHasBeenSet() const { return m_includeFolderMembershipsHasBeenSet; }
    inline void SetIncludeFolderMemberships(bool value) { m_includeFolderMembershipsHasBeenSet = true; m_includeFolderMemberships = value; }
    inline StartAssetBundleExportJobRequest& WithIncludeFolderMemberships(bool value) { SetIncludeFolderMemberships(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A setting that indicates whether you want to include folder assets. You can
     * also use this setting to recusrsively include all subfolders of an exported
     * folder.</p>
     */
    inline IncludeFolderMembers GetIncludeFolderMembers() const { return m_includeFolderMembers; }
    inline bool IncludeFolderMembersHasBeenSet() const { return m_includeFolderMembersHasBeenSet; }
    inline void SetIncludeFolderMembers(IncludeFolderMembers value) { m_includeFolderMembersHasBeenSet = true; m_includeFolderMembers = value; }
    inline StartAssetBundleExportJobRequest& WithIncludeFolderMembers(IncludeFolderMembers value) { SetIncludeFolderMembers(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_assetBundleExportJobId;
    bool m_assetBundleExportJobIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet = false;

    bool m_includeAllDependencies{false};
    bool m_includeAllDependenciesHasBeenSet = false;

    AssetBundleExportFormat m_exportFormat{AssetBundleExportFormat::NOT_SET};
    bool m_exportFormatHasBeenSet = false;

    AssetBundleCloudFormationOverridePropertyConfiguration m_cloudFormationOverridePropertyConfiguration;
    bool m_cloudFormationOverridePropertyConfigurationHasBeenSet = false;

    bool m_includePermissions{false};
    bool m_includePermissionsHasBeenSet = false;

    bool m_includeTags{false};
    bool m_includeTagsHasBeenSet = false;

    AssetBundleExportJobValidationStrategy m_validationStrategy;
    bool m_validationStrategyHasBeenSet = false;

    bool m_includeFolderMemberships{false};
    bool m_includeFolderMembershipsHasBeenSet = false;

    IncludeFolderMembers m_includeFolderMembers{IncludeFolderMembers::NOT_SET};
    bool m_includeFolderMembersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
