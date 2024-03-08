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
    AWS_QUICKSIGHT_API StartAssetBundleExportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAssetBundleExportJob"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account to export assets from.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account to export assets from.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account to export assets from.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account to export assets from.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account to export assets from.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account to export assets from.</p>
     */
    inline StartAssetBundleExportJobRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account to export assets from.</p>
     */
    inline StartAssetBundleExportJobRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account to export assets from.</p>
     */
    inline StartAssetBundleExportJobRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline const Aws::String& GetAssetBundleExportJobId() const{ return m_assetBundleExportJobId; }

    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline bool AssetBundleExportJobIdHasBeenSet() const { return m_assetBundleExportJobIdHasBeenSet; }

    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline void SetAssetBundleExportJobId(const Aws::String& value) { m_assetBundleExportJobIdHasBeenSet = true; m_assetBundleExportJobId = value; }

    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline void SetAssetBundleExportJobId(Aws::String&& value) { m_assetBundleExportJobIdHasBeenSet = true; m_assetBundleExportJobId = std::move(value); }

    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline void SetAssetBundleExportJobId(const char* value) { m_assetBundleExportJobIdHasBeenSet = true; m_assetBundleExportJobId.assign(value); }

    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline StartAssetBundleExportJobRequest& WithAssetBundleExportJobId(const Aws::String& value) { SetAssetBundleExportJobId(value); return *this;}

    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline StartAssetBundleExportJobRequest& WithAssetBundleExportJobId(Aws::String&& value) { SetAssetBundleExportJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline StartAssetBundleExportJobRequest& WithAssetBundleExportJobId(const char* value) { SetAssetBundleExportJobId(value); return *this;}


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
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }

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
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }

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
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }

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
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::move(value); }

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
    inline StartAssetBundleExportJobRequest& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}

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
    inline StartAssetBundleExportJobRequest& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}

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
    inline StartAssetBundleExportJobRequest& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

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
    inline StartAssetBundleExportJobRequest& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(std::move(value)); return *this; }

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
    inline StartAssetBundleExportJobRequest& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }


    /**
     * <p>A Boolean that determines whether all dependencies of each resource ARN are
     * recursively exported with the job. For example, say you provided a Dashboard ARN
     * to the <code>ResourceArns</code> parameter. If you set
     * <code>IncludeAllDependencies</code> to <code>TRUE</code>, any theme, dataset,
     * and data source resource that is a dependency of the dashboard is also
     * exported.</p>
     */
    inline bool GetIncludeAllDependencies() const{ return m_includeAllDependencies; }

    /**
     * <p>A Boolean that determines whether all dependencies of each resource ARN are
     * recursively exported with the job. For example, say you provided a Dashboard ARN
     * to the <code>ResourceArns</code> parameter. If you set
     * <code>IncludeAllDependencies</code> to <code>TRUE</code>, any theme, dataset,
     * and data source resource that is a dependency of the dashboard is also
     * exported.</p>
     */
    inline bool IncludeAllDependenciesHasBeenSet() const { return m_includeAllDependenciesHasBeenSet; }

    /**
     * <p>A Boolean that determines whether all dependencies of each resource ARN are
     * recursively exported with the job. For example, say you provided a Dashboard ARN
     * to the <code>ResourceArns</code> parameter. If you set
     * <code>IncludeAllDependencies</code> to <code>TRUE</code>, any theme, dataset,
     * and data source resource that is a dependency of the dashboard is also
     * exported.</p>
     */
    inline void SetIncludeAllDependencies(bool value) { m_includeAllDependenciesHasBeenSet = true; m_includeAllDependencies = value; }

    /**
     * <p>A Boolean that determines whether all dependencies of each resource ARN are
     * recursively exported with the job. For example, say you provided a Dashboard ARN
     * to the <code>ResourceArns</code> parameter. If you set
     * <code>IncludeAllDependencies</code> to <code>TRUE</code>, any theme, dataset,
     * and data source resource that is a dependency of the dashboard is also
     * exported.</p>
     */
    inline StartAssetBundleExportJobRequest& WithIncludeAllDependencies(bool value) { SetIncludeAllDependencies(value); return *this;}


    /**
     * <p>The export data format.</p>
     */
    inline const AssetBundleExportFormat& GetExportFormat() const{ return m_exportFormat; }

    /**
     * <p>The export data format.</p>
     */
    inline bool ExportFormatHasBeenSet() const { return m_exportFormatHasBeenSet; }

    /**
     * <p>The export data format.</p>
     */
    inline void SetExportFormat(const AssetBundleExportFormat& value) { m_exportFormatHasBeenSet = true; m_exportFormat = value; }

    /**
     * <p>The export data format.</p>
     */
    inline void SetExportFormat(AssetBundleExportFormat&& value) { m_exportFormatHasBeenSet = true; m_exportFormat = std::move(value); }

    /**
     * <p>The export data format.</p>
     */
    inline StartAssetBundleExportJobRequest& WithExportFormat(const AssetBundleExportFormat& value) { SetExportFormat(value); return *this;}

    /**
     * <p>The export data format.</p>
     */
    inline StartAssetBundleExportJobRequest& WithExportFormat(AssetBundleExportFormat&& value) { SetExportFormat(std::move(value)); return *this;}


    /**
     * <p>An optional collection of structures that generate CloudFormation parameters
     * to override the existing resource property values when the resource is exported
     * to a new CloudFormation template.</p> <p>Use this field if the
     * <code>ExportFormat</code> field of a
     * <code>StartAssetBundleExportJobRequest</code> API call is set to
     * <code>CLOUDFORMATION_JSON</code>.</p>
     */
    inline const AssetBundleCloudFormationOverridePropertyConfiguration& GetCloudFormationOverridePropertyConfiguration() const{ return m_cloudFormationOverridePropertyConfiguration; }

    /**
     * <p>An optional collection of structures that generate CloudFormation parameters
     * to override the existing resource property values when the resource is exported
     * to a new CloudFormation template.</p> <p>Use this field if the
     * <code>ExportFormat</code> field of a
     * <code>StartAssetBundleExportJobRequest</code> API call is set to
     * <code>CLOUDFORMATION_JSON</code>.</p>
     */
    inline bool CloudFormationOverridePropertyConfigurationHasBeenSet() const { return m_cloudFormationOverridePropertyConfigurationHasBeenSet; }

    /**
     * <p>An optional collection of structures that generate CloudFormation parameters
     * to override the existing resource property values when the resource is exported
     * to a new CloudFormation template.</p> <p>Use this field if the
     * <code>ExportFormat</code> field of a
     * <code>StartAssetBundleExportJobRequest</code> API call is set to
     * <code>CLOUDFORMATION_JSON</code>.</p>
     */
    inline void SetCloudFormationOverridePropertyConfiguration(const AssetBundleCloudFormationOverridePropertyConfiguration& value) { m_cloudFormationOverridePropertyConfigurationHasBeenSet = true; m_cloudFormationOverridePropertyConfiguration = value; }

    /**
     * <p>An optional collection of structures that generate CloudFormation parameters
     * to override the existing resource property values when the resource is exported
     * to a new CloudFormation template.</p> <p>Use this field if the
     * <code>ExportFormat</code> field of a
     * <code>StartAssetBundleExportJobRequest</code> API call is set to
     * <code>CLOUDFORMATION_JSON</code>.</p>
     */
    inline void SetCloudFormationOverridePropertyConfiguration(AssetBundleCloudFormationOverridePropertyConfiguration&& value) { m_cloudFormationOverridePropertyConfigurationHasBeenSet = true; m_cloudFormationOverridePropertyConfiguration = std::move(value); }

    /**
     * <p>An optional collection of structures that generate CloudFormation parameters
     * to override the existing resource property values when the resource is exported
     * to a new CloudFormation template.</p> <p>Use this field if the
     * <code>ExportFormat</code> field of a
     * <code>StartAssetBundleExportJobRequest</code> API call is set to
     * <code>CLOUDFORMATION_JSON</code>.</p>
     */
    inline StartAssetBundleExportJobRequest& WithCloudFormationOverridePropertyConfiguration(const AssetBundleCloudFormationOverridePropertyConfiguration& value) { SetCloudFormationOverridePropertyConfiguration(value); return *this;}

    /**
     * <p>An optional collection of structures that generate CloudFormation parameters
     * to override the existing resource property values when the resource is exported
     * to a new CloudFormation template.</p> <p>Use this field if the
     * <code>ExportFormat</code> field of a
     * <code>StartAssetBundleExportJobRequest</code> API call is set to
     * <code>CLOUDFORMATION_JSON</code>.</p>
     */
    inline StartAssetBundleExportJobRequest& WithCloudFormationOverridePropertyConfiguration(AssetBundleCloudFormationOverridePropertyConfiguration&& value) { SetCloudFormationOverridePropertyConfiguration(std::move(value)); return *this;}


    /**
     * <p>A Boolean that determines whether all permissions for each resource ARN are
     * exported with the job. If you set <code>IncludePermissions</code> to
     * <code>TRUE</code>, any permissions associated with each resource are exported.
     * </p>
     */
    inline bool GetIncludePermissions() const{ return m_includePermissions; }

    /**
     * <p>A Boolean that determines whether all permissions for each resource ARN are
     * exported with the job. If you set <code>IncludePermissions</code> to
     * <code>TRUE</code>, any permissions associated with each resource are exported.
     * </p>
     */
    inline bool IncludePermissionsHasBeenSet() const { return m_includePermissionsHasBeenSet; }

    /**
     * <p>A Boolean that determines whether all permissions for each resource ARN are
     * exported with the job. If you set <code>IncludePermissions</code> to
     * <code>TRUE</code>, any permissions associated with each resource are exported.
     * </p>
     */
    inline void SetIncludePermissions(bool value) { m_includePermissionsHasBeenSet = true; m_includePermissions = value; }

    /**
     * <p>A Boolean that determines whether all permissions for each resource ARN are
     * exported with the job. If you set <code>IncludePermissions</code> to
     * <code>TRUE</code>, any permissions associated with each resource are exported.
     * </p>
     */
    inline StartAssetBundleExportJobRequest& WithIncludePermissions(bool value) { SetIncludePermissions(value); return *this;}


    /**
     * <p> A Boolean that determines whether all tags for each resource ARN are
     * exported with the job. If you set <code>IncludeTags</code> to <code>TRUE</code>,
     * any tags associated with each resource are exported.</p>
     */
    inline bool GetIncludeTags() const{ return m_includeTags; }

    /**
     * <p> A Boolean that determines whether all tags for each resource ARN are
     * exported with the job. If you set <code>IncludeTags</code> to <code>TRUE</code>,
     * any tags associated with each resource are exported.</p>
     */
    inline bool IncludeTagsHasBeenSet() const { return m_includeTagsHasBeenSet; }

    /**
     * <p> A Boolean that determines whether all tags for each resource ARN are
     * exported with the job. If you set <code>IncludeTags</code> to <code>TRUE</code>,
     * any tags associated with each resource are exported.</p>
     */
    inline void SetIncludeTags(bool value) { m_includeTagsHasBeenSet = true; m_includeTags = value; }

    /**
     * <p> A Boolean that determines whether all tags for each resource ARN are
     * exported with the job. If you set <code>IncludeTags</code> to <code>TRUE</code>,
     * any tags associated with each resource are exported.</p>
     */
    inline StartAssetBundleExportJobRequest& WithIncludeTags(bool value) { SetIncludeTags(value); return *this;}


    /**
     * <p>An optional parameter that determines which validation strategy to use for
     * the export job. If <code>StrictModeForAllResources</code> is set to
     * <code>TRUE</code>, strict validation for every error is enforced. If it is set
     * to <code>FALSE</code>, validation is skipped for specific UI errors that are
     * shown as warnings. The default value for <code>StrictModeForAllResources</code>
     * is <code>FALSE</code>.</p>
     */
    inline const AssetBundleExportJobValidationStrategy& GetValidationStrategy() const{ return m_validationStrategy; }

    /**
     * <p>An optional parameter that determines which validation strategy to use for
     * the export job. If <code>StrictModeForAllResources</code> is set to
     * <code>TRUE</code>, strict validation for every error is enforced. If it is set
     * to <code>FALSE</code>, validation is skipped for specific UI errors that are
     * shown as warnings. The default value for <code>StrictModeForAllResources</code>
     * is <code>FALSE</code>.</p>
     */
    inline bool ValidationStrategyHasBeenSet() const { return m_validationStrategyHasBeenSet; }

    /**
     * <p>An optional parameter that determines which validation strategy to use for
     * the export job. If <code>StrictModeForAllResources</code> is set to
     * <code>TRUE</code>, strict validation for every error is enforced. If it is set
     * to <code>FALSE</code>, validation is skipped for specific UI errors that are
     * shown as warnings. The default value for <code>StrictModeForAllResources</code>
     * is <code>FALSE</code>.</p>
     */
    inline void SetValidationStrategy(const AssetBundleExportJobValidationStrategy& value) { m_validationStrategyHasBeenSet = true; m_validationStrategy = value; }

    /**
     * <p>An optional parameter that determines which validation strategy to use for
     * the export job. If <code>StrictModeForAllResources</code> is set to
     * <code>TRUE</code>, strict validation for every error is enforced. If it is set
     * to <code>FALSE</code>, validation is skipped for specific UI errors that are
     * shown as warnings. The default value for <code>StrictModeForAllResources</code>
     * is <code>FALSE</code>.</p>
     */
    inline void SetValidationStrategy(AssetBundleExportJobValidationStrategy&& value) { m_validationStrategyHasBeenSet = true; m_validationStrategy = std::move(value); }

    /**
     * <p>An optional parameter that determines which validation strategy to use for
     * the export job. If <code>StrictModeForAllResources</code> is set to
     * <code>TRUE</code>, strict validation for every error is enforced. If it is set
     * to <code>FALSE</code>, validation is skipped for specific UI errors that are
     * shown as warnings. The default value for <code>StrictModeForAllResources</code>
     * is <code>FALSE</code>.</p>
     */
    inline StartAssetBundleExportJobRequest& WithValidationStrategy(const AssetBundleExportJobValidationStrategy& value) { SetValidationStrategy(value); return *this;}

    /**
     * <p>An optional parameter that determines which validation strategy to use for
     * the export job. If <code>StrictModeForAllResources</code> is set to
     * <code>TRUE</code>, strict validation for every error is enforced. If it is set
     * to <code>FALSE</code>, validation is skipped for specific UI errors that are
     * shown as warnings. The default value for <code>StrictModeForAllResources</code>
     * is <code>FALSE</code>.</p>
     */
    inline StartAssetBundleExportJobRequest& WithValidationStrategy(AssetBundleExportJobValidationStrategy&& value) { SetValidationStrategy(std::move(value)); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_assetBundleExportJobId;
    bool m_assetBundleExportJobIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet = false;

    bool m_includeAllDependencies;
    bool m_includeAllDependenciesHasBeenSet = false;

    AssetBundleExportFormat m_exportFormat;
    bool m_exportFormatHasBeenSet = false;

    AssetBundleCloudFormationOverridePropertyConfiguration m_cloudFormationOverridePropertyConfiguration;
    bool m_cloudFormationOverridePropertyConfigurationHasBeenSet = false;

    bool m_includePermissions;
    bool m_includePermissionsHasBeenSet = false;

    bool m_includeTags;
    bool m_includeTagsHasBeenSet = false;

    AssetBundleExportJobValidationStrategy m_validationStrategy;
    bool m_validationStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
