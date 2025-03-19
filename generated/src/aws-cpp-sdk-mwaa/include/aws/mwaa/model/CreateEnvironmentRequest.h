/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/mwaa/MWAARequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa/model/NetworkConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mwaa/model/LoggingConfigurationInput.h>
#include <aws/mwaa/model/WebserverAccessMode.h>
#include <aws/mwaa/model/EndpointManagement.h>
#include <utility>

namespace Aws
{
namespace MWAA
{
namespace Model
{

  /**
   * <p>This section contains the Amazon Managed Workflows for Apache Airflow (Amazon
   * MWAA) API reference documentation to create an environment. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/mwaa/latest/userguide/get-started.html">Get
   * started with Amazon Managed Workflows for Apache Airflow</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/CreateEnvironmentInput">AWS
   * API Reference</a></p>
   */
  class CreateEnvironmentRequest : public MWAARequest
  {
  public:
    AWS_MWAA_API CreateEnvironmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEnvironment"; }

    AWS_MWAA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the Amazon MWAA environment. For example,
     * <code>MyMWAAEnvironment</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateEnvironmentRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the execution role for your environment. An
     * execution role is an Amazon Web Services Identity and Access Management (IAM)
     * role that grants MWAA permission to access Amazon Web Services services and
     * resources used by your environment. For example,
     * <code>arn:aws:iam::123456789:role/my-execution-role</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-create-role.html">Amazon
     * MWAA Execution role</a>.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    CreateEnvironmentRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket where your DAG code
     * and supporting files are stored. For example,
     * <code>arn:aws:s3:::my-airflow-bucket-unique-name</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-s3-bucket.html">Create
     * an Amazon S3 bucket for Amazon MWAA</a>.</p>
     */
    inline const Aws::String& GetSourceBucketArn() const { return m_sourceBucketArn; }
    inline bool SourceBucketArnHasBeenSet() const { return m_sourceBucketArnHasBeenSet; }
    template<typename SourceBucketArnT = Aws::String>
    void SetSourceBucketArn(SourceBucketArnT&& value) { m_sourceBucketArnHasBeenSet = true; m_sourceBucketArn = std::forward<SourceBucketArnT>(value); }
    template<typename SourceBucketArnT = Aws::String>
    CreateEnvironmentRequest& WithSourceBucketArn(SourceBucketArnT&& value) { SetSourceBucketArn(std::forward<SourceBucketArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative path to the DAGs folder on your Amazon S3 bucket. For example,
     * <code>dags</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-folder.html">Adding
     * or updating DAGs</a>.</p>
     */
    inline const Aws::String& GetDagS3Path() const { return m_dagS3Path; }
    inline bool DagS3PathHasBeenSet() const { return m_dagS3PathHasBeenSet; }
    template<typename DagS3PathT = Aws::String>
    void SetDagS3Path(DagS3PathT&& value) { m_dagS3PathHasBeenSet = true; m_dagS3Path = std::forward<DagS3PathT>(value); }
    template<typename DagS3PathT = Aws::String>
    CreateEnvironmentRequest& WithDagS3Path(DagS3PathT&& value) { SetDagS3Path(std::forward<DagS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC networking components used to secure and enable network traffic
     * between the Amazon Web Services resources for your environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/networking-about.html">About
     * networking on Amazon MWAA</a>.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    void SetNetworkConfiguration(NetworkConfigurationT&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::forward<NetworkConfigurationT>(value); }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    CreateEnvironmentRequest& WithNetworkConfiguration(NetworkConfigurationT&& value) { SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative path to the <code>plugins.zip</code> file on your Amazon S3
     * bucket. For example, <code>plugins.zip</code>. If specified, then the
     * <code>plugins.zip</code> version is required. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import-plugins.html">Installing
     * custom plugins</a>.</p>
     */
    inline const Aws::String& GetPluginsS3Path() const { return m_pluginsS3Path; }
    inline bool PluginsS3PathHasBeenSet() const { return m_pluginsS3PathHasBeenSet; }
    template<typename PluginsS3PathT = Aws::String>
    void SetPluginsS3Path(PluginsS3PathT&& value) { m_pluginsS3PathHasBeenSet = true; m_pluginsS3Path = std::forward<PluginsS3PathT>(value); }
    template<typename PluginsS3PathT = Aws::String>
    CreateEnvironmentRequest& WithPluginsS3Path(PluginsS3PathT&& value) { SetPluginsS3Path(std::forward<PluginsS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the plugins.zip file on your Amazon S3 bucket. You must
     * specify a version each time a plugins.zip file is updated. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/versioning-workflows.html">How
     * S3 Versioning works</a>.</p>
     */
    inline const Aws::String& GetPluginsS3ObjectVersion() const { return m_pluginsS3ObjectVersion; }
    inline bool PluginsS3ObjectVersionHasBeenSet() const { return m_pluginsS3ObjectVersionHasBeenSet; }
    template<typename PluginsS3ObjectVersionT = Aws::String>
    void SetPluginsS3ObjectVersion(PluginsS3ObjectVersionT&& value) { m_pluginsS3ObjectVersionHasBeenSet = true; m_pluginsS3ObjectVersion = std::forward<PluginsS3ObjectVersionT>(value); }
    template<typename PluginsS3ObjectVersionT = Aws::String>
    CreateEnvironmentRequest& WithPluginsS3ObjectVersion(PluginsS3ObjectVersionT&& value) { SetPluginsS3ObjectVersion(std::forward<PluginsS3ObjectVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative path to the <code>requirements.txt</code> file on your Amazon S3
     * bucket. For example, <code>requirements.txt</code>. If specified, then a version
     * is required. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/working-dags-dependencies.html">Installing
     * Python dependencies</a>.</p>
     */
    inline const Aws::String& GetRequirementsS3Path() const { return m_requirementsS3Path; }
    inline bool RequirementsS3PathHasBeenSet() const { return m_requirementsS3PathHasBeenSet; }
    template<typename RequirementsS3PathT = Aws::String>
    void SetRequirementsS3Path(RequirementsS3PathT&& value) { m_requirementsS3PathHasBeenSet = true; m_requirementsS3Path = std::forward<RequirementsS3PathT>(value); }
    template<typename RequirementsS3PathT = Aws::String>
    CreateEnvironmentRequest& WithRequirementsS3Path(RequirementsS3PathT&& value) { SetRequirementsS3Path(std::forward<RequirementsS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the <code>requirements.txt</code> file on your Amazon S3
     * bucket. You must specify a version each time a requirements.txt file is updated.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/versioning-workflows.html">How
     * S3 Versioning works</a>.</p>
     */
    inline const Aws::String& GetRequirementsS3ObjectVersion() const { return m_requirementsS3ObjectVersion; }
    inline bool RequirementsS3ObjectVersionHasBeenSet() const { return m_requirementsS3ObjectVersionHasBeenSet; }
    template<typename RequirementsS3ObjectVersionT = Aws::String>
    void SetRequirementsS3ObjectVersion(RequirementsS3ObjectVersionT&& value) { m_requirementsS3ObjectVersionHasBeenSet = true; m_requirementsS3ObjectVersion = std::forward<RequirementsS3ObjectVersionT>(value); }
    template<typename RequirementsS3ObjectVersionT = Aws::String>
    CreateEnvironmentRequest& WithRequirementsS3ObjectVersion(RequirementsS3ObjectVersionT&& value) { SetRequirementsS3ObjectVersion(std::forward<RequirementsS3ObjectVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative path to the startup shell script in your Amazon S3 bucket. For
     * example, <code>s3://mwaa-environment/startup.sh</code>.</p> <p> Amazon MWAA runs
     * the script as your environment starts, and before running the Apache Airflow
     * process. You can use this script to install dependencies, modify Apache Airflow
     * configuration options, and set environment variables. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/using-startup-script.html">Using
     * a startup script</a>. </p>
     */
    inline const Aws::String& GetStartupScriptS3Path() const { return m_startupScriptS3Path; }
    inline bool StartupScriptS3PathHasBeenSet() const { return m_startupScriptS3PathHasBeenSet; }
    template<typename StartupScriptS3PathT = Aws::String>
    void SetStartupScriptS3Path(StartupScriptS3PathT&& value) { m_startupScriptS3PathHasBeenSet = true; m_startupScriptS3Path = std::forward<StartupScriptS3PathT>(value); }
    template<typename StartupScriptS3PathT = Aws::String>
    CreateEnvironmentRequest& WithStartupScriptS3Path(StartupScriptS3PathT&& value) { SetStartupScriptS3Path(std::forward<StartupScriptS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the startup shell script in your Amazon S3 bucket. You must
     * specify the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/versioning-workflows.html">version
     * ID</a> that Amazon S3 assigns to the file every time you update the script. </p>
     * <p> Version IDs are Unicode, UTF-8 encoded, URL-ready, opaque strings that are
     * no more than 1,024 bytes long. The following is an example: </p> <p>
     * <code>3sL4kqtJlcpXroDTDmJ+rmSpXd3dIbrHY+MTRCxf3vjVBH40Nr8X8gdRQBpUMLUo</code>
     * </p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/using-startup-script.html">Using
     * a startup script</a>. </p>
     */
    inline const Aws::String& GetStartupScriptS3ObjectVersion() const { return m_startupScriptS3ObjectVersion; }
    inline bool StartupScriptS3ObjectVersionHasBeenSet() const { return m_startupScriptS3ObjectVersionHasBeenSet; }
    template<typename StartupScriptS3ObjectVersionT = Aws::String>
    void SetStartupScriptS3ObjectVersion(StartupScriptS3ObjectVersionT&& value) { m_startupScriptS3ObjectVersionHasBeenSet = true; m_startupScriptS3ObjectVersion = std::forward<StartupScriptS3ObjectVersionT>(value); }
    template<typename StartupScriptS3ObjectVersionT = Aws::String>
    CreateEnvironmentRequest& WithStartupScriptS3ObjectVersion(StartupScriptS3ObjectVersionT&& value) { SetStartupScriptS3ObjectVersion(std::forward<StartupScriptS3ObjectVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs containing the Apache Airflow configuration options
     * you want to attach to your environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Apache
     * Airflow configuration options</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAirflowConfigurationOptions() const { return m_airflowConfigurationOptions; }
    inline bool AirflowConfigurationOptionsHasBeenSet() const { return m_airflowConfigurationOptionsHasBeenSet; }
    template<typename AirflowConfigurationOptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetAirflowConfigurationOptions(AirflowConfigurationOptionsT&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions = std::forward<AirflowConfigurationOptionsT>(value); }
    template<typename AirflowConfigurationOptionsT = Aws::Map<Aws::String, Aws::String>>
    CreateEnvironmentRequest& WithAirflowConfigurationOptions(AirflowConfigurationOptionsT&& value) { SetAirflowConfigurationOptions(std::forward<AirflowConfigurationOptionsT>(value)); return *this;}
    template<typename AirflowConfigurationOptionsKeyT = Aws::String, typename AirflowConfigurationOptionsValueT = Aws::String>
    CreateEnvironmentRequest& AddAirflowConfigurationOptions(AirflowConfigurationOptionsKeyT&& key, AirflowConfigurationOptionsValueT&& value) {
      m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(std::forward<AirflowConfigurationOptionsKeyT>(key), std::forward<AirflowConfigurationOptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The environment class type. Valid values: <code>mw1.micro</code>,
     * <code>mw1.small</code>, <code>mw1.medium</code>, <code>mw1.large</code>,
     * <code>mw1.xlarge</code>, and <code>mw1.2xlarge</code>. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/environment-class.html">Amazon
     * MWAA environment class</a>.</p>
     */
    inline const Aws::String& GetEnvironmentClass() const { return m_environmentClass; }
    inline bool EnvironmentClassHasBeenSet() const { return m_environmentClassHasBeenSet; }
    template<typename EnvironmentClassT = Aws::String>
    void SetEnvironmentClass(EnvironmentClassT&& value) { m_environmentClassHasBeenSet = true; m_environmentClass = std::forward<EnvironmentClassT>(value); }
    template<typename EnvironmentClassT = Aws::String>
    CreateEnvironmentRequest& WithEnvironmentClass(EnvironmentClassT&& value) { SetEnvironmentClass(std::forward<EnvironmentClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of workers that you want to run in your environment. MWAA
     * scales the number of Apache Airflow workers up to the number you specify in the
     * <code>MaxWorkers</code> field. For example, <code>20</code>. When there are no
     * more tasks running, and no more in the queue, MWAA disposes of the extra workers
     * leaving the one worker that is included with your environment, or the number you
     * specify in <code>MinWorkers</code>.</p>
     */
    inline int GetMaxWorkers() const { return m_maxWorkers; }
    inline bool MaxWorkersHasBeenSet() const { return m_maxWorkersHasBeenSet; }
    inline void SetMaxWorkers(int value) { m_maxWorkersHasBeenSet = true; m_maxWorkers = value; }
    inline CreateEnvironmentRequest& WithMaxWorkers(int value) { SetMaxWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Key Management Service (KMS) key to encrypt the data
     * in your environment. You can use an Amazon Web Services owned CMK, or a Customer
     * managed CMK (advanced). For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/create-environment.html">Create
     * an Amazon MWAA environment</a>.</p>
     */
    inline const Aws::String& GetKmsKey() const { return m_kmsKey; }
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
    template<typename KmsKeyT = Aws::String>
    void SetKmsKey(KmsKeyT&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::forward<KmsKeyT>(value); }
    template<typename KmsKeyT = Aws::String>
    CreateEnvironmentRequest& WithKmsKey(KmsKeyT&& value) { SetKmsKey(std::forward<KmsKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Apache Airflow version for your environment. If no value is specified, it
     * defaults to the latest version. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/airflow-versions.html">Apache
     * Airflow versions on Amazon Managed Workflows for Apache Airflow (Amazon
     * MWAA)</a>.</p> <p>Valid values: <code>1.10.12</code>, <code>2.0.2</code>,
     * <code>2.2.2</code>, <code>2.4.3</code>, <code>2.5.1</code>, <code>2.6.3</code>,
     * <code>2.7.2</code>, <code>2.8.1</code>, <code>2.9.2</code>, <code>2.10.1</code>,
     * and <code>2.10.3</code>.</p>
     */
    inline const Aws::String& GetAirflowVersion() const { return m_airflowVersion; }
    inline bool AirflowVersionHasBeenSet() const { return m_airflowVersionHasBeenSet; }
    template<typename AirflowVersionT = Aws::String>
    void SetAirflowVersion(AirflowVersionT&& value) { m_airflowVersionHasBeenSet = true; m_airflowVersion = std::forward<AirflowVersionT>(value); }
    template<typename AirflowVersionT = Aws::String>
    CreateEnvironmentRequest& WithAirflowVersion(AirflowVersionT&& value) { SetAirflowVersion(std::forward<AirflowVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the Apache Airflow logs to send to CloudWatch Logs.</p>
     */
    inline const LoggingConfigurationInput& GetLoggingConfiguration() const { return m_loggingConfiguration; }
    inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }
    template<typename LoggingConfigurationT = LoggingConfigurationInput>
    void SetLoggingConfiguration(LoggingConfigurationT&& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = std::forward<LoggingConfigurationT>(value); }
    template<typename LoggingConfigurationT = LoggingConfigurationInput>
    CreateEnvironmentRequest& WithLoggingConfiguration(LoggingConfigurationT&& value) { SetLoggingConfiguration(std::forward<LoggingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day and time of the week in Coordinated Universal Time (UTC) 24-hour
     * standard time to start weekly maintenance updates of your environment in the
     * following format: <code>DAY:HH:MM</code>. For example: <code>TUE:03:30</code>.
     * You can specify a start time in 30 minute increments only.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceWindowStart() const { return m_weeklyMaintenanceWindowStart; }
    inline bool WeeklyMaintenanceWindowStartHasBeenSet() const { return m_weeklyMaintenanceWindowStartHasBeenSet; }
    template<typename WeeklyMaintenanceWindowStartT = Aws::String>
    void SetWeeklyMaintenanceWindowStart(WeeklyMaintenanceWindowStartT&& value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart = std::forward<WeeklyMaintenanceWindowStartT>(value); }
    template<typename WeeklyMaintenanceWindowStartT = Aws::String>
    CreateEnvironmentRequest& WithWeeklyMaintenanceWindowStart(WeeklyMaintenanceWindowStartT&& value) { SetWeeklyMaintenanceWindowStart(std::forward<WeeklyMaintenanceWindowStartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value tag pairs you want to associate to your environment. For
     * example, <code>"Environment": "Staging"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateEnvironmentRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateEnvironmentRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Defines the access mode for the Apache Airflow <i>web server</i>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-networking.html">Apache
     * Airflow access modes</a>.</p>
     */
    inline WebserverAccessMode GetWebserverAccessMode() const { return m_webserverAccessMode; }
    inline bool WebserverAccessModeHasBeenSet() const { return m_webserverAccessModeHasBeenSet; }
    inline void SetWebserverAccessMode(WebserverAccessMode value) { m_webserverAccessModeHasBeenSet = true; m_webserverAccessMode = value; }
    inline CreateEnvironmentRequest& WithWebserverAccessMode(WebserverAccessMode value) { SetWebserverAccessMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of workers that you want to run in your environment. MWAA
     * scales the number of Apache Airflow workers up to the number you specify in the
     * <code>MaxWorkers</code> field. When there are no more tasks running, and no more
     * in the queue, MWAA disposes of the extra workers leaving the worker count you
     * specify in the <code>MinWorkers</code> field. For example, <code>2</code>.</p>
     */
    inline int GetMinWorkers() const { return m_minWorkers; }
    inline bool MinWorkersHasBeenSet() const { return m_minWorkersHasBeenSet; }
    inline void SetMinWorkers(int value) { m_minWorkersHasBeenSet = true; m_minWorkers = value; }
    inline CreateEnvironmentRequest& WithMinWorkers(int value) { SetMinWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Apache Airflow schedulers to run in your environment. Valid
     * values:</p> <ul> <li> <p>v2 - For environments larger than mw1.micro, accepts
     * values from <code>2</code> to <code>5</code>. Defaults to <code>2</code> for all
     * environment sizes except mw1.micro, which defaults to <code>1</code>.</p> </li>
     * <li> <p>v1 - Accepts <code>1</code>.</p> </li> </ul>
     */
    inline int GetSchedulers() const { return m_schedulers; }
    inline bool SchedulersHasBeenSet() const { return m_schedulersHasBeenSet; }
    inline void SetSchedulers(int value) { m_schedulersHasBeenSet = true; m_schedulers = value; }
    inline CreateEnvironmentRequest& WithSchedulers(int value) { SetSchedulers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines whether the VPC endpoints configured for the environment are created,
     * and managed, by the customer or by Amazon MWAA. If set to <code>SERVICE</code>,
     * Amazon MWAA will create and manage the required VPC endpoints in your VPC. If
     * set to <code>CUSTOMER</code>, you must create, and manage, the VPC endpoints for
     * your VPC. If you choose to create an environment in a shared VPC, you must set
     * this value to <code>CUSTOMER</code>. In a shared VPC deployment, the environment
     * will remain in <code>PENDING</code> status until you create the VPC endpoints.
     * If you do not take action to create the endpoints within 72 hours, the status
     * will change to <code>CREATE_FAILED</code>. You can delete the failed environment
     * and create a new one.</p>
     */
    inline EndpointManagement GetEndpointManagement() const { return m_endpointManagement; }
    inline bool EndpointManagementHasBeenSet() const { return m_endpointManagementHasBeenSet; }
    inline void SetEndpointManagement(EndpointManagement value) { m_endpointManagementHasBeenSet = true; m_endpointManagement = value; }
    inline CreateEnvironmentRequest& WithEndpointManagement(EndpointManagement value) { SetEndpointManagement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The minimum number of web servers that you want to run in your environment.
     * Amazon MWAA scales the number of Apache Airflow web servers up to the number you
     * specify for <code>MaxWebservers</code> when you interact with your Apache
     * Airflow environment using Apache Airflow REST API, or the Apache Airflow CLI. As
     * the transaction-per-second rate, and the network load, decrease, Amazon MWAA
     * disposes of the additional web servers, and scales down to the number set in
     * <code>MinxWebserers</code>. </p> <p>Valid values: For environments larger than
     * mw1.micro, accepts values from <code>2</code> to <code>5</code>. Defaults to
     * <code>2</code> for all environment sizes except mw1.micro, which defaults to
     * <code>1</code>.</p>
     */
    inline int GetMinWebservers() const { return m_minWebservers; }
    inline bool MinWebserversHasBeenSet() const { return m_minWebserversHasBeenSet; }
    inline void SetMinWebservers(int value) { m_minWebserversHasBeenSet = true; m_minWebservers = value; }
    inline CreateEnvironmentRequest& WithMinWebservers(int value) { SetMinWebservers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of web servers that you want to run in your environment.
     * Amazon MWAA scales the number of Apache Airflow web servers up to the number you
     * specify for <code>MaxWebservers</code> when you interact with your Apache
     * Airflow environment using Apache Airflow REST API, or the Apache Airflow CLI.
     * For example, in scenarios where your workload requires network calls to the
     * Apache Airflow REST API with a high transaction-per-second (TPS) rate, Amazon
     * MWAA will increase the number of web servers up to the number set in
     * <code>MaxWebserers</code>. As TPS rates decrease Amazon MWAA disposes of the
     * additional web servers, and scales down to the number set in
     * <code>MinxWebserers</code>. </p> <p>Valid values: For environments larger than
     * mw1.micro, accepts values from <code>2</code> to <code>5</code>. Defaults to
     * <code>2</code> for all environment sizes except mw1.micro, which defaults to
     * <code>1</code>.</p>
     */
    inline int GetMaxWebservers() const { return m_maxWebservers; }
    inline bool MaxWebserversHasBeenSet() const { return m_maxWebserversHasBeenSet; }
    inline void SetMaxWebservers(int value) { m_maxWebserversHasBeenSet = true; m_maxWebservers = value; }
    inline CreateEnvironmentRequest& WithMaxWebservers(int value) { SetMaxWebservers(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::String m_sourceBucketArn;
    bool m_sourceBucketArnHasBeenSet = false;

    Aws::String m_dagS3Path;
    bool m_dagS3PathHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    Aws::String m_pluginsS3Path;
    bool m_pluginsS3PathHasBeenSet = false;

    Aws::String m_pluginsS3ObjectVersion;
    bool m_pluginsS3ObjectVersionHasBeenSet = false;

    Aws::String m_requirementsS3Path;
    bool m_requirementsS3PathHasBeenSet = false;

    Aws::String m_requirementsS3ObjectVersion;
    bool m_requirementsS3ObjectVersionHasBeenSet = false;

    Aws::String m_startupScriptS3Path;
    bool m_startupScriptS3PathHasBeenSet = false;

    Aws::String m_startupScriptS3ObjectVersion;
    bool m_startupScriptS3ObjectVersionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_airflowConfigurationOptions;
    bool m_airflowConfigurationOptionsHasBeenSet = false;

    Aws::String m_environmentClass;
    bool m_environmentClassHasBeenSet = false;

    int m_maxWorkers{0};
    bool m_maxWorkersHasBeenSet = false;

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;

    Aws::String m_airflowVersion;
    bool m_airflowVersionHasBeenSet = false;

    LoggingConfigurationInput m_loggingConfiguration;
    bool m_loggingConfigurationHasBeenSet = false;

    Aws::String m_weeklyMaintenanceWindowStart;
    bool m_weeklyMaintenanceWindowStartHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    WebserverAccessMode m_webserverAccessMode{WebserverAccessMode::NOT_SET};
    bool m_webserverAccessModeHasBeenSet = false;

    int m_minWorkers{0};
    bool m_minWorkersHasBeenSet = false;

    int m_schedulers{0};
    bool m_schedulersHasBeenSet = false;

    EndpointManagement m_endpointManagement{EndpointManagement::NOT_SET};
    bool m_endpointManagementHasBeenSet = false;

    int m_minWebservers{0};
    bool m_minWebserversHasBeenSet = false;

    int m_maxWebservers{0};
    bool m_maxWebserversHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
