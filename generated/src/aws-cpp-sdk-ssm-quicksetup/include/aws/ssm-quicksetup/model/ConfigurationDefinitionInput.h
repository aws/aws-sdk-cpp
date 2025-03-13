/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SSMQuickSetup
{
namespace Model
{

  /**
   * <p>Defines the preferences and options for a configuration
   * definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-quicksetup-2018-05-10/ConfigurationDefinitionInput">AWS
   * API Reference</a></p>
   */
  class ConfigurationDefinitionInput
  {
  public:
    AWS_SSMQUICKSETUP_API ConfigurationDefinitionInput() = default;
    AWS_SSMQUICKSETUP_API ConfigurationDefinitionInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMQUICKSETUP_API ConfigurationDefinitionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMQUICKSETUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the IAM role used to administrate local configuration
     * deployments.</p>
     */
    inline const Aws::String& GetLocalDeploymentAdministrationRoleArn() const { return m_localDeploymentAdministrationRoleArn; }
    inline bool LocalDeploymentAdministrationRoleArnHasBeenSet() const { return m_localDeploymentAdministrationRoleArnHasBeenSet; }
    template<typename LocalDeploymentAdministrationRoleArnT = Aws::String>
    void SetLocalDeploymentAdministrationRoleArn(LocalDeploymentAdministrationRoleArnT&& value) { m_localDeploymentAdministrationRoleArnHasBeenSet = true; m_localDeploymentAdministrationRoleArn = std::forward<LocalDeploymentAdministrationRoleArnT>(value); }
    template<typename LocalDeploymentAdministrationRoleArnT = Aws::String>
    ConfigurationDefinitionInput& WithLocalDeploymentAdministrationRoleArn(LocalDeploymentAdministrationRoleArnT&& value) { SetLocalDeploymentAdministrationRoleArn(std::forward<LocalDeploymentAdministrationRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role used to deploy local configurations.</p>
     */
    inline const Aws::String& GetLocalDeploymentExecutionRoleName() const { return m_localDeploymentExecutionRoleName; }
    inline bool LocalDeploymentExecutionRoleNameHasBeenSet() const { return m_localDeploymentExecutionRoleNameHasBeenSet; }
    template<typename LocalDeploymentExecutionRoleNameT = Aws::String>
    void SetLocalDeploymentExecutionRoleName(LocalDeploymentExecutionRoleNameT&& value) { m_localDeploymentExecutionRoleNameHasBeenSet = true; m_localDeploymentExecutionRoleName = std::forward<LocalDeploymentExecutionRoleNameT>(value); }
    template<typename LocalDeploymentExecutionRoleNameT = Aws::String>
    ConfigurationDefinitionInput& WithLocalDeploymentExecutionRoleName(LocalDeploymentExecutionRoleNameT&& value) { SetLocalDeploymentExecutionRoleName(std::forward<LocalDeploymentExecutionRoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the configuration definition type. Parameters for
     * configuration definitions vary based the configuration type. The following
     * tables outline the parameters for each configuration type.</p> <dl>
     * <dt>OpsCenter (Type: Amazon Web ServicesQuickSetupType-SSMOpsCenter)</dt> <dd>
     * <ul> <li> <p> <code>DelegatedAccountId</code> </p> <ul> <li> <p>Description:
     * (Required) The ID of the delegated administrator account.</p> </li> </ul> </li>
     * <li> <p> <code>TargetOrganizationalUnits</code> </p> <ul> <li> <p>Description:
     * (Required) A comma separated list of organizational units (OUs) you want to
     * deploy the configuration to.</p> </li> </ul> </li> <li> <p>
     * <code>TargetRegions</code> </p> <ul> <li> <p>Description: (Required) A comma
     * separated list of Amazon Web Services Regions you want to deploy the
     * configuration to.</p> </li> </ul> </li> </ul> </dd> <dt>Resource Scheduler
     * (Type: Amazon Web ServicesQuickSetupType-Scheduler)</dt> <dd> <ul> <li> <p>
     * <code>TargetTagKey</code> </p> <ul> <li> <p>Description: (Required) The tag key
     * assigned to the instances you want to target.</p> </li> </ul> </li> <li> <p>
     * <code>TargetTagValue</code> </p> <ul> <li> <p>Description: (Required) The value
     * of the tag key assigned to the instances you want to target.</p> </li> </ul>
     * </li> <li> <p> <code>ICalendarString</code> </p> <ul> <li> <p>Description:
     * (Required) An iCalendar formatted string containing the schedule you want Change
     * Manager to use.</p> </li> </ul> </li> <li> <p> <code>TargetAccounts</code> </p>
     * <ul> <li> <p>Description: (Optional) The ID of the Amazon Web Services account
     * initiating the configuration deployment. You only need to provide a value for
     * this parameter if you want to deploy the configuration locally. A value must be
     * provided for either <code>TargetAccounts</code> or
     * <code>TargetOrganizationalUnits</code>.</p> </li> </ul> </li> <li> <p>
     * <code>TargetOrganizationalUnits</code> </p> <ul> <li> <p>Description: (Optional)
     * A comma separated list of organizational units (OUs) you want to deploy the
     * configuration to.</p> </li> </ul> </li> <li> <p> <code>TargetRegions</code> </p>
     * <ul> <li> <p>Description: (Required) A comma separated list of Amazon Web
     * Services Regions you want to deploy the configuration to.</p> </li> </ul> </li>
     * </ul> </dd> <dt>Default Host Management Configuration (Type: Amazon Web
     * ServicesQuickSetupType-DHMC)</dt> <dd> <ul> <li> <p> <code>UpdateSSMAgent</code>
     * </p> <ul> <li> <p>Description: (Optional) A boolean value that determines
     * whether the SSM Agent is updated on the target instances every 2 weeks. The
     * default value is "<code>true</code>".</p> </li> </ul> </li> <li> <p>
     * <code>TargetOrganizationalUnits</code> </p> <ul> <li> <p>Description: (Required)
     * A comma separated list of organizational units (OUs) you want to deploy the
     * configuration to.</p> </li> </ul> </li> <li> <p> <code>TargetRegions</code> </p>
     * <ul> <li> <p>Description: (Required) A comma separated list of Amazon Web
     * Services Regions you want to deploy the configuration to.</p> </li> </ul> </li>
     * </ul> </dd> <dt>Resource Explorer (Type: Amazon Web
     * ServicesQuickSetupType-ResourceExplorer)</dt> <dd> <ul> <li> <p>
     * <code>SelectedAggregatorRegion</code> </p> <ul> <li> <p>Description: (Required)
     * The Amazon Web Services Region where you want to create the aggregator
     * index.</p> </li> </ul> </li> <li> <p> <code>ReplaceExistingAggregator</code>
     * </p> <ul> <li> <p>Description: (Required) A boolean value that determines
     * whether to demote an existing aggregator if it is in a Region that differs from
     * the value you specify for the <code>SelectedAggregatorRegion</code>.</p> </li>
     * </ul> </li> <li> <p> <code>TargetOrganizationalUnits</code> </p> <ul> <li>
     * <p>Description: (Required) A comma separated list of organizational units (OUs)
     * you want to deploy the configuration to.</p> </li> </ul> </li> <li> <p>
     * <code>TargetRegions</code> </p> <ul> <li> <p>Description: (Required) A comma
     * separated list of Amazon Web Services Regions you want to deploy the
     * configuration to.</p> </li> </ul> </li> </ul> </dd> <dt>Change Manager (Type:
     * Amazon Web ServicesQuickSetupType-SSMChangeMgr)</dt> <dd> <ul> <li> <p>
     * <code>DelegatedAccountId</code> </p> <ul> <li> <p>Description: (Required) The ID
     * of the delegated administrator account.</p> </li> </ul> </li> <li> <p>
     * <code>JobFunction</code> </p> <ul> <li> <p>Description: (Required) The name for
     * the Change Manager job function.</p> </li> </ul> </li> <li> <p>
     * <code>PermissionType</code> </p> <ul> <li> <p>Description: (Optional) Specifies
     * whether you want to use default administrator permissions for the job function
     * role, or provide a custom IAM policy. The valid values are
     * <code>CustomPermissions</code> and <code>AdminPermissions</code>. The default
     * value for the parameter is <code>CustomerPermissions</code>.</p> </li> </ul>
     * </li> <li> <p> <code>CustomPermissions</code> </p> <ul> <li> <p>Description:
     * (Optional) A JSON string containing the IAM policy you want your job function to
     * use. You must provide a value for this parameter if you specify
     * <code>CustomPermissions</code> for the <code>PermissionType</code>
     * parameter.</p> </li> </ul> </li> <li> <p> <code>TargetOrganizationalUnits</code>
     * </p> <ul> <li> <p>Description: (Required) A comma separated list of
     * organizational units (OUs) you want to deploy the configuration to.</p> </li>
     * </ul> </li> <li> <p> <code>TargetRegions</code> </p> <ul> <li> <p>Description:
     * (Required) A comma separated list of Amazon Web Services Regions you want to
     * deploy the configuration to.</p> </li> </ul> </li> </ul> </dd> <dt>DevOps Guru
     * (Type: Amazon Web ServicesQuickSetupType-DevOpsGuru)</dt> <dd> <ul> <li> <p>
     * <code>AnalyseAllResources</code> </p> <ul> <li> <p>Description: (Optional) A
     * boolean value that determines whether DevOps Guru analyzes all CloudFormation
     * stacks in the account. The default value is "<code>false</code>".</p> </li>
     * </ul> </li> <li> <p> <code>EnableSnsNotifications</code> </p> <ul> <li>
     * <p>Description: (Optional) A boolean value that determines whether DevOps Guru
     * sends notifications when an insight is created. The default value is
     * "<code>true</code>".</p> </li> </ul> </li> <li> <p>
     * <code>EnableSsmOpsItems</code> </p> <ul> <li> <p>Description: (Optional) A
     * boolean value that determines whether DevOps Guru creates an OpsCenter OpsItem
     * when an insight is created. The default value is "<code>true</code>".</p> </li>
     * </ul> </li> <li> <p> <code>EnableDriftRemediation</code> </p> <ul> <li>
     * <p>Description: (Optional) A boolean value that determines whether a drift
     * remediation schedule is used. The default value is "<code>false</code>".</p>
     * </li> </ul> </li> <li> <p> <code>RemediationSchedule</code> </p> <ul> <li>
     * <p>Description: (Optional) A rate expression that defines the schedule for drift
     * remediation. The valid values are <code>rate(30 days)</code>, <code>rate(14
     * days)</code>, <code>rate(1 days)</code>, and <code>none</code>. The default
     * value is "<code>none</code>".</p> </li> </ul> </li> <li> <p>
     * <code>TargetAccounts</code> </p> <ul> <li> <p>Description: (Optional) The ID of
     * the Amazon Web Services account initiating the configuration deployment. You
     * only need to provide a value for this parameter if you want to deploy the
     * configuration locally. A value must be provided for either
     * <code>TargetAccounts</code> or <code>TargetOrganizationalUnits</code>.</p> </li>
     * </ul> </li> <li> <p> <code>TargetOrganizationalUnits</code> </p> <ul> <li>
     * <p>Description: (Optional) A comma separated list of organizational units (OUs)
     * you want to deploy the configuration to.</p> </li> </ul> </li> <li> <p>
     * <code>TargetRegions</code> </p> <ul> <li> <p>Description: (Required) A comma
     * separated list of Amazon Web Services Regions you want to deploy the
     * configuration to.</p> </li> </ul> </li> </ul> </dd> <dt>Conformance Packs (Type:
     * Amazon Web ServicesQuickSetupType-CFGCPacks)</dt> <dd> <ul> <li> <p>
     * <code>DelegatedAccountId</code> </p> <ul> <li> <p>Description: (Optional) The ID
     * of the delegated administrator account. This parameter is required for
     * Organization deployments.</p> </li> </ul> </li> <li> <p>
     * <code>RemediationSchedule</code> </p> <ul> <li> <p>Description: (Optional) A
     * rate expression that defines the schedule for drift remediation. The valid
     * values are <code>rate(30 days)</code>, <code>rate(14 days)</code>, <code>rate(2
     * days)</code>, and <code>none</code>. The default value is
     * "<code>none</code>".</p> </li> </ul> </li> <li> <p> <code>CPackNames</code> </p>
     * <ul> <li> <p>Description: (Required) A comma separated list of Config
     * conformance packs.</p> </li> </ul> </li> <li> <p> <code>TargetAccounts</code>
     * </p> <ul> <li> <p>Description: (Optional) The ID of the Amazon Web Services
     * account initiating the configuration deployment. You only need to provide a
     * value for this parameter if you want to deploy the configuration locally. A
     * value must be provided for either <code>TargetAccounts</code> or
     * <code>TargetOrganizationalUnits</code>.</p> </li> </ul> </li> <li> <p>
     * <code>TargetOrganizationalUnits</code> </p> <ul> <li> <p>Description: (Optional)
     * The ID of the root of your Organization. This configuration type doesn't
     * currently support choosing specific OUs. The configuration will be deployed to
     * all the OUs in the Organization.</p> </li> </ul> </li> <li> <p>
     * <code>TargetRegions</code> </p> <ul> <li> <p>Description: (Required) A comma
     * separated list of Amazon Web Services Regions you want to deploy the
     * configuration to.</p> </li> </ul> </li> </ul> </dd> <dt>Config Recording (Type:
     * Amazon Web ServicesQuickSetupType-CFGRecording)</dt> <dd> <ul> <li> <p>
     * <code>RecordAllResources</code> </p> <ul> <li> <p>Description: (Optional) A
     * boolean value that determines whether all supported resources are recorded. The
     * default value is "<code>true</code>".</p> </li> </ul> </li> <li> <p>
     * <code>ResourceTypesToRecord</code> </p> <ul> <li> <p>Description: (Optional) A
     * comma separated list of resource types you want to record.</p> </li> </ul> </li>
     * <li> <p> <code>RecordGlobalResourceTypes</code> </p> <ul> <li> <p>Description:
     * (Optional) A boolean value that determines whether global resources are recorded
     * with all resource configurations. The default value is "<code>false</code>".</p>
     * </li> </ul> </li> <li> <p> <code>GlobalResourceTypesRegion</code> </p> <ul> <li>
     * <p>Description: (Optional) Determines the Amazon Web Services Region where
     * global resources are recorded.</p> </li> </ul> </li> <li> <p>
     * <code>UseCustomBucket</code> </p> <ul> <li> <p>Description: (Optional) A boolean
     * value that determines whether a custom Amazon S3 bucket is used for delivery.
     * The default value is "<code>false</code>".</p> </li> </ul> </li> <li> <p>
     * <code>DeliveryBucketName</code> </p> <ul> <li> <p>Description: (Optional) The
     * name of the Amazon S3 bucket you want Config to deliver configuration snapshots
     * and configuration history files to.</p> </li> </ul> </li> <li> <p>
     * <code>DeliveryBucketPrefix</code> </p> <ul> <li> <p>Description: (Optional) The
     * key prefix you want to use in the custom Amazon S3 bucket.</p> </li> </ul> </li>
     * <li> <p> <code>NotificationOptions</code> </p> <ul> <li> <p>Description:
     * (Optional) Determines the notification configuration for the recorder. The valid
     * values are <code>NoStreaming</code>, <code>UseExistingTopic</code>, and
     * <code>CreateTopic</code>. The default value is <code>NoStreaming</code>.</p>
     * </li> </ul> </li> <li> <p> <code>CustomDeliveryTopicAccountId</code> </p> <ul>
     * <li> <p>Description: (Optional) The ID of the Amazon Web Services account where
     * the Amazon SNS topic you want to use for notifications resides. You must specify
     * a value for this parameter if you use the <code>UseExistingTopic</code>
     * notification option.</p> </li> </ul> </li> <li> <p>
     * <code>CustomDeliveryTopicName</code> </p> <ul> <li> <p>Description: (Optional)
     * The name of the Amazon SNS topic you want to use for notifications. You must
     * specify a value for this parameter if you use the <code>UseExistingTopic</code>
     * notification option.</p> </li> </ul> </li> <li> <p>
     * <code>RemediationSchedule</code> </p> <ul> <li> <p>Description: (Optional) A
     * rate expression that defines the schedule for drift remediation. The valid
     * values are <code>rate(30 days)</code>, <code>rate(7 days)</code>, <code>rate(1
     * days)</code>, and <code>none</code>. The default value is
     * "<code>none</code>".</p> </li> </ul> </li> <li> <p> <code>TargetAccounts</code>
     * </p> <ul> <li> <p>Description: (Optional) The ID of the Amazon Web Services
     * account initiating the configuration deployment. You only need to provide a
     * value for this parameter if you want to deploy the configuration locally. A
     * value must be provided for either <code>TargetAccounts</code> or
     * <code>TargetOrganizationalUnits</code>.</p> </li> </ul> </li> <li> <p>
     * <code>TargetOrganizationalUnits</code> </p> <ul> <li> <p>Description: (Optional)
     * The ID of the root of your Organization. This configuration type doesn't
     * currently support choosing specific OUs. The configuration will be deployed to
     * all the OUs in the Organization.</p> </li> </ul> </li> <li> <p>
     * <code>TargetRegions</code> </p> <ul> <li> <p>Description: (Required) A comma
     * separated list of Amazon Web Services Regions you want to deploy the
     * configuration to.</p> </li> </ul> </li> </ul> </dd> <dt>Host Management (Type:
     * Amazon Web ServicesQuickSetupType-SSMHostMgmt)</dt> <dd> <ul> <li> <p>
     * <code>UpdateSSMAgent</code> </p> <ul> <li> <p>Description: (Optional) A boolean
     * value that determines whether the SSM Agent is updated on the target instances
     * every 2 weeks. The default value is "<code>true</code>".</p> </li> </ul> </li>
     * <li> <p> <code>UpdateEc2LaunchAgent</code> </p> <ul> <li> <p>Description:
     * (Optional) A boolean value that determines whether the EC2 Launch agent is
     * updated on the target instances every month. The default value is
     * "<code>false</code>".</p> </li> </ul> </li> <li> <p>
     * <code>CollectInventory</code> </p> <ul> <li> <p>Description: (Optional) A
     * boolean value that determines whether the EC2 Launch agent is updated on the
     * target instances every month. The default value is "<code>true</code>".</p>
     * </li> </ul> </li> <li> <p> <code>ScanInstances</code> </p> <ul> <li>
     * <p>Description: (Optional) A boolean value that determines whether the target
     * instances are scanned daily for available patches. The default value is
     * "<code>true</code>".</p> </li> </ul> </li> <li> <p>
     * <code>InstallCloudWatchAgent</code> </p> <ul> <li> <p>Description: (Optional) A
     * boolean value that determines whether the Amazon CloudWatch agent is installed
     * on the target instances. The default value is "<code>false</code>".</p> </li>
     * </ul> </li> <li> <p> <code>UpdateCloudWatchAgent</code> </p> <ul> <li>
     * <p>Description: (Optional) A boolean value that determines whether the Amazon
     * CloudWatch agent is updated on the target instances every month. The default
     * value is "<code>false</code>".</p> </li> </ul> </li> <li> <p>
     * <code>IsPolicyAttachAllowed</code> </p> <ul> <li> <p>Description: (Optional) A
     * boolean value that determines whether Quick Setup attaches policies to instances
     * profiles already associated with the target instances. The default value is
     * "<code>false</code>".</p> </li> </ul> </li> <li> <p> <code>TargetType</code>
     * </p> <ul> <li> <p>Description: (Optional) Determines how instances are targeted
     * for local account deployments. Don't specify a value for this parameter if
     * you're deploying to OUs. The valid values are <code>*</code>,
     * <code>InstanceIds</code>, <code>ResourceGroups</code>, and <code>Tags</code>.
     * Use <code>*</code> to target all instances in the account.</p> </li> </ul> </li>
     * <li> <p> <code>TargetInstances</code> </p> <ul> <li> <p>Description: (Optional)
     * A comma separated list of instance IDs. You must provide a value for this
     * parameter if you specify <code>InstanceIds</code> for the
     * <code>TargetType</code> parameter.</p> </li> </ul> </li> <li> <p>
     * <code>TargetTagKey</code> </p> <ul> <li> <p>Description: (Optional) The tag key
     * assigned to the instances you want to target. You must provide a value for this
     * parameter if you specify <code>Tags</code> for the <code>TargetType</code>
     * parameter.</p> </li> </ul> </li> <li> <p> <code>TargetTagValue</code> </p> <ul>
     * <li> <p>Description: (Optional) The value of the tag key assigned to the
     * instances you want to target. You must provide a value for this parameter if you
     * specify <code>Tags</code> for the <code>TargetType</code> parameter.</p> </li>
     * </ul> </li> <li> <p> <code>ResourceGroupName</code> </p> <ul> <li>
     * <p>Description: (Optional) The name of the resource group associated with the
     * instances you want to target. You must provide a value for this parameter if you
     * specify <code>ResourceGroups</code> for the <code>TargetType</code>
     * parameter.</p> </li> </ul> </li> <li> <p> <code>TargetAccounts</code> </p> <ul>
     * <li> <p>Description: (Optional) The ID of the Amazon Web Services account
     * initiating the configuration deployment. You only need to provide a value for
     * this parameter if you want to deploy the configuration locally. A value must be
     * provided for either <code>TargetAccounts</code> or
     * <code>TargetOrganizationalUnits</code>.</p> </li> </ul> </li> <li> <p>
     * <code>TargetOrganizationalUnits</code> </p> <ul> <li> <p>Description: (Optional)
     * A comma separated list of organizational units (OUs) you want to deploy the
     * configuration to.</p> </li> </ul> </li> <li> <p> <code>TargetRegions</code> </p>
     * <ul> <li> <p>Description: (Required) A comma separated list of Amazon Web
     * Services Regions you want to deploy the configuration to.</p> </li> </ul> </li>
     * </ul> </dd> <dt>Distributor (Type: Amazon Web
     * ServicesQuickSetupType-Distributor)</dt> <dd> <ul> <li> <p>
     * <code>PackagesToInstall</code> </p> <ul> <li> <p>Description: (Required) A comma
     * separated list of packages you want to install on the target instances. The
     * valid values are <code>AWSEFSTools</code>, <code>AWSCWAgent</code>, and
     * <code>AWSEC2LaunchAgent</code>.</p> </li> </ul> </li> <li> <p>
     * <code>RemediationSchedule</code> </p> <ul> <li> <p>Description: (Optional) A
     * rate expression that defines the schedule for drift remediation. The valid
     * values are <code>rate(30 days)</code>, <code>rate(14 days)</code>, <code>rate(2
     * days)</code>, and <code>none</code>. The default value is "<code>rate(30
     * days)</code>".</p> </li> </ul> </li> <li> <p> <code>IsPolicyAttachAllowed</code>
     * </p> <ul> <li> <p>Description: (Optional) A boolean value that determines
     * whether Quick Setup attaches policies to instances profiles already associated
     * with the target instances. The default value is "<code>false</code>".</p> </li>
     * </ul> </li> <li> <p> <code>TargetType</code> </p> <ul> <li> <p>Description:
     * (Optional) Determines how instances are targeted for local account deployments.
     * Don't specify a value for this parameter if you're deploying to OUs. The valid
     * values are <code>*</code>, <code>InstanceIds</code>,
     * <code>ResourceGroups</code>, and <code>Tags</code>. Use <code>*</code> to target
     * all instances in the account.</p> </li> </ul> </li> <li> <p>
     * <code>TargetInstances</code> </p> <ul> <li> <p>Description: (Optional) A comma
     * separated list of instance IDs. You must provide a value for this parameter if
     * you specify <code>InstanceIds</code> for the <code>TargetType</code>
     * parameter.</p> </li> </ul> </li> <li> <p> <code>TargetTagKey</code> </p> <ul>
     * <li> <p>Description: (Required) The tag key assigned to the instances you want
     * to target. You must provide a value for this parameter if you specify
     * <code>Tags</code> for the <code>TargetType</code> parameter.</p> </li> </ul>
     * </li> <li> <p> <code>TargetTagValue</code> </p> <ul> <li> <p>Description:
     * (Required) The value of the tag key assigned to the instances you want to
     * target. You must provide a value for this parameter if you specify
     * <code>Tags</code> for the <code>TargetType</code> parameter.</p> </li> </ul>
     * </li> <li> <p> <code>ResourceGroupName</code> </p> <ul> <li> <p>Description:
     * (Required) The name of the resource group associated with the instances you want
     * to target. You must provide a value for this parameter if you specify
     * <code>ResourceGroups</code> for the <code>TargetType</code> parameter.</p> </li>
     * </ul> </li> <li> <p> <code>TargetAccounts</code> </p> <ul> <li> <p>Description:
     * (Optional) The ID of the Amazon Web Services account initiating the
     * configuration deployment. You only need to provide a value for this parameter if
     * you want to deploy the configuration locally. A value must be provided for
     * either <code>TargetAccounts</code> or
     * <code>TargetOrganizationalUnits</code>.</p> </li> </ul> </li> <li> <p>
     * <code>TargetOrganizationalUnits</code> </p> <ul> <li> <p>Description: (Optional)
     * A comma separated list of organizational units (OUs) you want to deploy the
     * configuration to.</p> </li> </ul> </li> <li> <p> <code>TargetRegions</code> </p>
     * <ul> <li> <p>Description: (Required) A comma separated list of Amazon Web
     * Services Regions you want to deploy the configuration to.</p> </li> </ul> </li>
     * </ul> </dd> <dt>Patch Policy (Type: Amazon Web
     * ServicesQuickSetupType-PatchPolicy)</dt> <dd> <ul> <li> <p>
     * <code>PatchPolicyName</code> </p> <ul> <li> <p>Description: (Required) A name
     * for the patch policy. The value you provide is applied to target Amazon EC2
     * instances as a tag.</p> </li> </ul> </li> <li> <p>
     * <code>SelectedPatchBaselines</code> </p> <ul> <li> <p>Description: (Required) An
     * array of JSON objects containing the information for the patch baselines to
     * include in your patch policy.</p> </li> </ul> </li> <li> <p>
     * <code>PatchBaselineUseDefault</code> </p> <ul> <li> <p>Description: (Optional) A
     * boolean value that determines whether the selected patch baselines are all
     * Amazon Web Services provided.</p> </li> </ul> </li> <li> <p>
     * <code>ConfigurationOptionsPatchOperation</code> </p> <ul> <li> <p>Description:
     * (Optional) Determines whether target instances scan for available patches, or
     * scan and install available patches. The valid values are <code>Scan</code> and
     * <code>ScanAndInstall</code>. The default value for the parameter is
     * <code>Scan</code>.</p> </li> </ul> </li> <li> <p>
     * <code>ConfigurationOptionsScanValue</code> </p> <ul> <li> <p>Description:
     * (Optional) A cron expression that is used as the schedule for when instances
     * scan for available patches.</p> </li> </ul> </li> <li> <p>
     * <code>ConfigurationOptionsInstallValue</code> </p> <ul> <li> <p>Description:
     * (Optional) A cron expression that is used as the schedule for when instances
     * install available patches.</p> </li> </ul> </li> <li> <p>
     * <code>ConfigurationOptionsScanNextInterval</code> </p> <ul> <li> <p>Description:
     * (Optional) A boolean value that determines whether instances should scan for
     * available patches at the next cron interval. The default value is
     * "<code>false</code>".</p> </li> </ul> </li> <li> <p>
     * <code>ConfigurationOptionsInstallNextInterval</code> </p> <ul> <li>
     * <p>Description: (Optional) A boolean value that determines whether instances
     * should scan for available patches at the next cron interval. The default value
     * is "<code>false</code>".</p> </li> </ul> </li> <li> <p>
     * <code>RebootOption</code> </p> <ul> <li> <p>Description: (Optional) Determines
     * whether instances are rebooted after patches are installed. Valid values are
     * <code>RebootIfNeeded</code> and <code>NoReboot</code>.</p> </li> </ul> </li>
     * <li> <p> <code>IsPolicyAttachAllowed</code> </p> <ul> <li> <p>Description:
     * (Optional) A boolean value that determines whether Quick Setup attaches policies
     * to instances profiles already associated with the target instances. The default
     * value is "<code>false</code>".</p> </li> </ul> </li> <li> <p>
     * <code>OutputLogEnableS3</code> </p> <ul> <li> <p>Description: (Optional) A
     * boolean value that determines whether command output logs are sent to Amazon
     * S3.</p> </li> </ul> </li> <li> <p> <code>OutputS3Location</code> </p> <ul> <li>
     * <p>Description: (Optional) A JSON string containing information about the Amazon
     * S3 bucket where you want to store the output details of the request.</p> <ul>
     * <li> <p> <code>OutputS3BucketRegion</code> </p> <ul> <li> <p>Description:
     * (Optional) The Amazon Web Services Region where the Amazon S3 bucket you want
     * Config to deliver command output to is located.</p> </li> </ul> </li> <li> <p>
     * <code>OutputS3BucketName</code> </p> <ul> <li> <p>Description: (Optional) The
     * name of the Amazon S3 bucket you want Config to deliver command output to.</p>
     * </li> </ul> </li> <li> <p> <code>OutputS3KeyPrefix</code> </p> <ul> <li>
     * <p>Description: (Optional) The key prefix you want to use in the custom Amazon
     * S3 bucket.</p> </li> </ul> </li> </ul> </li> </ul> </li> <li> <p>
     * <code>TargetType</code> </p> <ul> <li> <p>Description: (Optional) Determines how
     * instances are targeted for local account deployments. Don't specify a value for
     * this parameter if you're deploying to OUs. The valid values are <code>*</code>,
     * <code>InstanceIds</code>, <code>ResourceGroups</code>, and <code>Tags</code>.
     * Use <code>*</code> to target all instances in the account.</p> </li> </ul> </li>
     * <li> <p> <code>TargetInstances</code> </p> <ul> <li> <p>Description: (Optional)
     * A comma separated list of instance IDs. You must provide a value for this
     * parameter if you specify <code>InstanceIds</code> for the
     * <code>TargetType</code> parameter.</p> </li> </ul> </li> <li> <p>
     * <code>TargetTagKey</code> </p> <ul> <li> <p>Description: (Required) The tag key
     * assigned to the instances you want to target. You must provide a value for this
     * parameter if you specify <code>Tags</code> for the <code>TargetType</code>
     * parameter.</p> </li> </ul> </li> <li> <p> <code>TargetTagValue</code> </p> <ul>
     * <li> <p>Description: (Required) The value of the tag key assigned to the
     * instances you want to target. You must provide a value for this parameter if you
     * specify <code>Tags</code> for the <code>TargetType</code> parameter.</p> </li>
     * </ul> </li> <li> <p> <code>ResourceGroupName</code> </p> <ul> <li>
     * <p>Description: (Required) The name of the resource group associated with the
     * instances you want to target. You must provide a value for this parameter if you
     * specify <code>ResourceGroups</code> for the <code>TargetType</code>
     * parameter.</p> </li> </ul> </li> <li> <p> <code>TargetAccounts</code> </p> <ul>
     * <li> <p>Description: (Optional) The ID of the Amazon Web Services account
     * initiating the configuration deployment. You only need to provide a value for
     * this parameter if you want to deploy the configuration locally. A value must be
     * provided for either <code>TargetAccounts</code> or
     * <code>TargetOrganizationalUnits</code>.</p> </li> </ul> </li> <li> <p>
     * <code>TargetOrganizationalUnits</code> </p> <ul> <li> <p>Description: (Optional)
     * A comma separated list of organizational units (OUs) you want to deploy the
     * configuration to.</p> </li> </ul> </li> <li> <p> <code>TargetRegions</code> </p>
     * <ul> <li> <p>Description: (Required) A comma separated list of Amazon Web
     * Services Regions you want to deploy the configuration to.</p> </li> </ul> </li>
     * </ul> </dd> </dl>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    ConfigurationDefinitionInput& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    ConfigurationDefinitionInput& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The type of the Quick Setup configuration.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    ConfigurationDefinitionInput& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Quick Setup type to use.</p>
     */
    inline const Aws::String& GetTypeVersion() const { return m_typeVersion; }
    inline bool TypeVersionHasBeenSet() const { return m_typeVersionHasBeenSet; }
    template<typename TypeVersionT = Aws::String>
    void SetTypeVersion(TypeVersionT&& value) { m_typeVersionHasBeenSet = true; m_typeVersion = std::forward<TypeVersionT>(value); }
    template<typename TypeVersionT = Aws::String>
    ConfigurationDefinitionInput& WithTypeVersion(TypeVersionT&& value) { SetTypeVersion(std::forward<TypeVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_localDeploymentAdministrationRoleArn;
    bool m_localDeploymentAdministrationRoleArnHasBeenSet = false;

    Aws::String m_localDeploymentExecutionRoleName;
    bool m_localDeploymentExecutionRoleNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_typeVersion;
    bool m_typeVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
