/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/mwaa/MWAARequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mwaa/model/UpdateNetworkConfigurationInput.h>
#include <aws/mwaa/model/LoggingConfigurationInput.h>
#include <aws/mwaa/model/WebserverAccessMode.h>
#include <utility>

namespace Aws
{
namespace MWAA
{
namespace Model
{

  /**
   */
  class UpdateEnvironmentRequest : public MWAARequest
  {
  public:
    AWS_MWAA_API UpdateEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEnvironment"; }

    AWS_MWAA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of your Amazon MWAA environment. For example,
     * <code>MyMWAAEnvironment</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateEnvironmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateEnvironmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the execution role in IAM that allows MWAA
     * to access Amazon Web Services resources in your environment. For example,
     * <code>arn:aws:iam::123456789:role/my-execution-role</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-create-role.html">Amazon
     * MWAA Execution role</a>.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }
    inline UpdateEnvironmentRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline UpdateEnvironmentRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Apache Airflow version for your environment. To upgrade your environment,
     * specify a newer version of Apache Airflow supported by Amazon MWAA.</p>
     * <p>Before you upgrade an environment, make sure your requirements, DAGs,
     * plugins, and other resources used in your workflows are compatible with the new
     * Apache Airflow version. For more information about updating your resources, see
     * <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/upgrading-environment.html">Upgrading
     * an Amazon MWAA environment</a>.</p> <p>Valid values: <code>1.10.12</code>,
     * <code>2.0.2</code>, <code>2.2.2</code>, <code>2.4.3</code>, <code>2.5.1</code>,
     * <code>2.6.3</code>, <code>2.7.2</code>, <code>2.8.1</code>, <code>2.9.2</code>,
     * <code>2.10.1</code>, and <code>2.10.3</code>.</p>
     */
    inline const Aws::String& GetAirflowVersion() const{ return m_airflowVersion; }
    inline bool AirflowVersionHasBeenSet() const { return m_airflowVersionHasBeenSet; }
    inline void SetAirflowVersion(const Aws::String& value) { m_airflowVersionHasBeenSet = true; m_airflowVersion = value; }
    inline void SetAirflowVersion(Aws::String&& value) { m_airflowVersionHasBeenSet = true; m_airflowVersion = std::move(value); }
    inline void SetAirflowVersion(const char* value) { m_airflowVersionHasBeenSet = true; m_airflowVersion.assign(value); }
    inline UpdateEnvironmentRequest& WithAirflowVersion(const Aws::String& value) { SetAirflowVersion(value); return *this;}
    inline UpdateEnvironmentRequest& WithAirflowVersion(Aws::String&& value) { SetAirflowVersion(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithAirflowVersion(const char* value) { SetAirflowVersion(value); return *this;}
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
    inline const Aws::String& GetSourceBucketArn() const{ return m_sourceBucketArn; }
    inline bool SourceBucketArnHasBeenSet() const { return m_sourceBucketArnHasBeenSet; }
    inline void SetSourceBucketArn(const Aws::String& value) { m_sourceBucketArnHasBeenSet = true; m_sourceBucketArn = value; }
    inline void SetSourceBucketArn(Aws::String&& value) { m_sourceBucketArnHasBeenSet = true; m_sourceBucketArn = std::move(value); }
    inline void SetSourceBucketArn(const char* value) { m_sourceBucketArnHasBeenSet = true; m_sourceBucketArn.assign(value); }
    inline UpdateEnvironmentRequest& WithSourceBucketArn(const Aws::String& value) { SetSourceBucketArn(value); return *this;}
    inline UpdateEnvironmentRequest& WithSourceBucketArn(Aws::String&& value) { SetSourceBucketArn(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithSourceBucketArn(const char* value) { SetSourceBucketArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative path to the DAGs folder on your Amazon S3 bucket. For example,
     * <code>dags</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-folder.html">Adding
     * or updating DAGs</a>.</p>
     */
    inline const Aws::String& GetDagS3Path() const{ return m_dagS3Path; }
    inline bool DagS3PathHasBeenSet() const { return m_dagS3PathHasBeenSet; }
    inline void SetDagS3Path(const Aws::String& value) { m_dagS3PathHasBeenSet = true; m_dagS3Path = value; }
    inline void SetDagS3Path(Aws::String&& value) { m_dagS3PathHasBeenSet = true; m_dagS3Path = std::move(value); }
    inline void SetDagS3Path(const char* value) { m_dagS3PathHasBeenSet = true; m_dagS3Path.assign(value); }
    inline UpdateEnvironmentRequest& WithDagS3Path(const Aws::String& value) { SetDagS3Path(value); return *this;}
    inline UpdateEnvironmentRequest& WithDagS3Path(Aws::String&& value) { SetDagS3Path(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithDagS3Path(const char* value) { SetDagS3Path(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative path to the <code>plugins.zip</code> file on your Amazon S3
     * bucket. For example, <code>plugins.zip</code>. If specified, then the
     * plugins.zip version is required. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import-plugins.html">Installing
     * custom plugins</a>.</p>
     */
    inline const Aws::String& GetPluginsS3Path() const{ return m_pluginsS3Path; }
    inline bool PluginsS3PathHasBeenSet() const { return m_pluginsS3PathHasBeenSet; }
    inline void SetPluginsS3Path(const Aws::String& value) { m_pluginsS3PathHasBeenSet = true; m_pluginsS3Path = value; }
    inline void SetPluginsS3Path(Aws::String&& value) { m_pluginsS3PathHasBeenSet = true; m_pluginsS3Path = std::move(value); }
    inline void SetPluginsS3Path(const char* value) { m_pluginsS3PathHasBeenSet = true; m_pluginsS3Path.assign(value); }
    inline UpdateEnvironmentRequest& WithPluginsS3Path(const Aws::String& value) { SetPluginsS3Path(value); return *this;}
    inline UpdateEnvironmentRequest& WithPluginsS3Path(Aws::String&& value) { SetPluginsS3Path(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithPluginsS3Path(const char* value) { SetPluginsS3Path(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the plugins.zip file on your Amazon S3 bucket. You must
     * specify a version each time a <code>plugins.zip</code> file is updated. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/versioning-workflows.html">How
     * S3 Versioning works</a>.</p>
     */
    inline const Aws::String& GetPluginsS3ObjectVersion() const{ return m_pluginsS3ObjectVersion; }
    inline bool PluginsS3ObjectVersionHasBeenSet() const { return m_pluginsS3ObjectVersionHasBeenSet; }
    inline void SetPluginsS3ObjectVersion(const Aws::String& value) { m_pluginsS3ObjectVersionHasBeenSet = true; m_pluginsS3ObjectVersion = value; }
    inline void SetPluginsS3ObjectVersion(Aws::String&& value) { m_pluginsS3ObjectVersionHasBeenSet = true; m_pluginsS3ObjectVersion = std::move(value); }
    inline void SetPluginsS3ObjectVersion(const char* value) { m_pluginsS3ObjectVersionHasBeenSet = true; m_pluginsS3ObjectVersion.assign(value); }
    inline UpdateEnvironmentRequest& WithPluginsS3ObjectVersion(const Aws::String& value) { SetPluginsS3ObjectVersion(value); return *this;}
    inline UpdateEnvironmentRequest& WithPluginsS3ObjectVersion(Aws::String&& value) { SetPluginsS3ObjectVersion(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithPluginsS3ObjectVersion(const char* value) { SetPluginsS3ObjectVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative path to the <code>requirements.txt</code> file on your Amazon S3
     * bucket. For example, <code>requirements.txt</code>. If specified, then a file
     * version is required. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/working-dags-dependencies.html">Installing
     * Python dependencies</a>.</p>
     */
    inline const Aws::String& GetRequirementsS3Path() const{ return m_requirementsS3Path; }
    inline bool RequirementsS3PathHasBeenSet() const { return m_requirementsS3PathHasBeenSet; }
    inline void SetRequirementsS3Path(const Aws::String& value) { m_requirementsS3PathHasBeenSet = true; m_requirementsS3Path = value; }
    inline void SetRequirementsS3Path(Aws::String&& value) { m_requirementsS3PathHasBeenSet = true; m_requirementsS3Path = std::move(value); }
    inline void SetRequirementsS3Path(const char* value) { m_requirementsS3PathHasBeenSet = true; m_requirementsS3Path.assign(value); }
    inline UpdateEnvironmentRequest& WithRequirementsS3Path(const Aws::String& value) { SetRequirementsS3Path(value); return *this;}
    inline UpdateEnvironmentRequest& WithRequirementsS3Path(Aws::String&& value) { SetRequirementsS3Path(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithRequirementsS3Path(const char* value) { SetRequirementsS3Path(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the requirements.txt file on your Amazon S3 bucket. You must
     * specify a version each time a <code>requirements.txt</code> file is updated. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/versioning-workflows.html">How
     * S3 Versioning works</a>.</p>
     */
    inline const Aws::String& GetRequirementsS3ObjectVersion() const{ return m_requirementsS3ObjectVersion; }
    inline bool RequirementsS3ObjectVersionHasBeenSet() const { return m_requirementsS3ObjectVersionHasBeenSet; }
    inline void SetRequirementsS3ObjectVersion(const Aws::String& value) { m_requirementsS3ObjectVersionHasBeenSet = true; m_requirementsS3ObjectVersion = value; }
    inline void SetRequirementsS3ObjectVersion(Aws::String&& value) { m_requirementsS3ObjectVersionHasBeenSet = true; m_requirementsS3ObjectVersion = std::move(value); }
    inline void SetRequirementsS3ObjectVersion(const char* value) { m_requirementsS3ObjectVersionHasBeenSet = true; m_requirementsS3ObjectVersion.assign(value); }
    inline UpdateEnvironmentRequest& WithRequirementsS3ObjectVersion(const Aws::String& value) { SetRequirementsS3ObjectVersion(value); return *this;}
    inline UpdateEnvironmentRequest& WithRequirementsS3ObjectVersion(Aws::String&& value) { SetRequirementsS3ObjectVersion(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithRequirementsS3ObjectVersion(const char* value) { SetRequirementsS3ObjectVersion(value); return *this;}
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
    inline const Aws::String& GetStartupScriptS3Path() const{ return m_startupScriptS3Path; }
    inline bool StartupScriptS3PathHasBeenSet() const { return m_startupScriptS3PathHasBeenSet; }
    inline void SetStartupScriptS3Path(const Aws::String& value) { m_startupScriptS3PathHasBeenSet = true; m_startupScriptS3Path = value; }
    inline void SetStartupScriptS3Path(Aws::String&& value) { m_startupScriptS3PathHasBeenSet = true; m_startupScriptS3Path = std::move(value); }
    inline void SetStartupScriptS3Path(const char* value) { m_startupScriptS3PathHasBeenSet = true; m_startupScriptS3Path.assign(value); }
    inline UpdateEnvironmentRequest& WithStartupScriptS3Path(const Aws::String& value) { SetStartupScriptS3Path(value); return *this;}
    inline UpdateEnvironmentRequest& WithStartupScriptS3Path(Aws::String&& value) { SetStartupScriptS3Path(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithStartupScriptS3Path(const char* value) { SetStartupScriptS3Path(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version of the startup shell script in your Amazon S3 bucket. You must
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
    inline const Aws::String& GetStartupScriptS3ObjectVersion() const{ return m_startupScriptS3ObjectVersion; }
    inline bool StartupScriptS3ObjectVersionHasBeenSet() const { return m_startupScriptS3ObjectVersionHasBeenSet; }
    inline void SetStartupScriptS3ObjectVersion(const Aws::String& value) { m_startupScriptS3ObjectVersionHasBeenSet = true; m_startupScriptS3ObjectVersion = value; }
    inline void SetStartupScriptS3ObjectVersion(Aws::String&& value) { m_startupScriptS3ObjectVersionHasBeenSet = true; m_startupScriptS3ObjectVersion = std::move(value); }
    inline void SetStartupScriptS3ObjectVersion(const char* value) { m_startupScriptS3ObjectVersionHasBeenSet = true; m_startupScriptS3ObjectVersion.assign(value); }
    inline UpdateEnvironmentRequest& WithStartupScriptS3ObjectVersion(const Aws::String& value) { SetStartupScriptS3ObjectVersion(value); return *this;}
    inline UpdateEnvironmentRequest& WithStartupScriptS3ObjectVersion(Aws::String&& value) { SetStartupScriptS3ObjectVersion(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithStartupScriptS3ObjectVersion(const char* value) { SetStartupScriptS3ObjectVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs containing the Apache Airflow configuration options
     * you want to attach to your environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Apache
     * Airflow configuration options</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAirflowConfigurationOptions() const{ return m_airflowConfigurationOptions; }
    inline bool AirflowConfigurationOptionsHasBeenSet() const { return m_airflowConfigurationOptionsHasBeenSet; }
    inline void SetAirflowConfigurationOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions = value; }
    inline void SetAirflowConfigurationOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions = std::move(value); }
    inline UpdateEnvironmentRequest& WithAirflowConfigurationOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAirflowConfigurationOptions(value); return *this;}
    inline UpdateEnvironmentRequest& WithAirflowConfigurationOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAirflowConfigurationOptions(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& AddAirflowConfigurationOptions(const Aws::String& key, const Aws::String& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, value); return *this; }
    inline UpdateEnvironmentRequest& AddAirflowConfigurationOptions(Aws::String&& key, const Aws::String& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(std::move(key), value); return *this; }
    inline UpdateEnvironmentRequest& AddAirflowConfigurationOptions(const Aws::String& key, Aws::String&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, std::move(value)); return *this; }
    inline UpdateEnvironmentRequest& AddAirflowConfigurationOptions(Aws::String&& key, Aws::String&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateEnvironmentRequest& AddAirflowConfigurationOptions(const char* key, Aws::String&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, std::move(value)); return *this; }
    inline UpdateEnvironmentRequest& AddAirflowConfigurationOptions(Aws::String&& key, const char* value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(std::move(key), value); return *this; }
    inline UpdateEnvironmentRequest& AddAirflowConfigurationOptions(const char* key, const char* value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The environment class type. Valid values: <code>mw1.micro</code>,
     * <code>mw1.small</code>, <code>mw1.medium</code>, <code>mw1.large</code>,
     * <code>mw1.xlarge</code>, and <code>mw1.2xlarge</code>. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/environment-class.html">Amazon
     * MWAA environment class</a>. </p>
     */
    inline const Aws::String& GetEnvironmentClass() const{ return m_environmentClass; }
    inline bool EnvironmentClassHasBeenSet() const { return m_environmentClassHasBeenSet; }
    inline void SetEnvironmentClass(const Aws::String& value) { m_environmentClassHasBeenSet = true; m_environmentClass = value; }
    inline void SetEnvironmentClass(Aws::String&& value) { m_environmentClassHasBeenSet = true; m_environmentClass = std::move(value); }
    inline void SetEnvironmentClass(const char* value) { m_environmentClassHasBeenSet = true; m_environmentClass.assign(value); }
    inline UpdateEnvironmentRequest& WithEnvironmentClass(const Aws::String& value) { SetEnvironmentClass(value); return *this;}
    inline UpdateEnvironmentRequest& WithEnvironmentClass(Aws::String&& value) { SetEnvironmentClass(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithEnvironmentClass(const char* value) { SetEnvironmentClass(value); return *this;}
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
    inline int GetMaxWorkers() const{ return m_maxWorkers; }
    inline bool MaxWorkersHasBeenSet() const { return m_maxWorkersHasBeenSet; }
    inline void SetMaxWorkers(int value) { m_maxWorkersHasBeenSet = true; m_maxWorkers = value; }
    inline UpdateEnvironmentRequest& WithMaxWorkers(int value) { SetMaxWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC networking components used to secure and enable network traffic
     * between the Amazon Web Services resources for your environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/networking-about.html">About
     * networking on Amazon MWAA</a>.</p>
     */
    inline const UpdateNetworkConfigurationInput& GetNetworkConfiguration() const{ return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    inline void SetNetworkConfiguration(const UpdateNetworkConfigurationInput& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }
    inline void SetNetworkConfiguration(UpdateNetworkConfigurationInput&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }
    inline UpdateEnvironmentRequest& WithNetworkConfiguration(const UpdateNetworkConfigurationInput& value) { SetNetworkConfiguration(value); return *this;}
    inline UpdateEnvironmentRequest& WithNetworkConfiguration(UpdateNetworkConfigurationInput&& value) { SetNetworkConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Apache Airflow log types to send to CloudWatch Logs.</p>
     */
    inline const LoggingConfigurationInput& GetLoggingConfiguration() const{ return m_loggingConfiguration; }
    inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }
    inline void SetLoggingConfiguration(const LoggingConfigurationInput& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = value; }
    inline void SetLoggingConfiguration(LoggingConfigurationInput&& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = std::move(value); }
    inline UpdateEnvironmentRequest& WithLoggingConfiguration(const LoggingConfigurationInput& value) { SetLoggingConfiguration(value); return *this;}
    inline UpdateEnvironmentRequest& WithLoggingConfiguration(LoggingConfigurationInput&& value) { SetLoggingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day and time of the week in Coordinated Universal Time (UTC) 24-hour
     * standard time to start weekly maintenance updates of your environment in the
     * following format: <code>DAY:HH:MM</code>. For example: <code>TUE:03:30</code>.
     * You can specify a start time in 30 minute increments only.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceWindowStart() const{ return m_weeklyMaintenanceWindowStart; }
    inline bool WeeklyMaintenanceWindowStartHasBeenSet() const { return m_weeklyMaintenanceWindowStartHasBeenSet; }
    inline void SetWeeklyMaintenanceWindowStart(const Aws::String& value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart = value; }
    inline void SetWeeklyMaintenanceWindowStart(Aws::String&& value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart = std::move(value); }
    inline void SetWeeklyMaintenanceWindowStart(const char* value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart.assign(value); }
    inline UpdateEnvironmentRequest& WithWeeklyMaintenanceWindowStart(const Aws::String& value) { SetWeeklyMaintenanceWindowStart(value); return *this;}
    inline UpdateEnvironmentRequest& WithWeeklyMaintenanceWindowStart(Aws::String&& value) { SetWeeklyMaintenanceWindowStart(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithWeeklyMaintenanceWindowStart(const char* value) { SetWeeklyMaintenanceWindowStart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Apache Airflow <i>Web server</i> access mode. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-networking.html">Apache
     * Airflow access modes</a>.</p>
     */
    inline const WebserverAccessMode& GetWebserverAccessMode() const{ return m_webserverAccessMode; }
    inline bool WebserverAccessModeHasBeenSet() const { return m_webserverAccessModeHasBeenSet; }
    inline void SetWebserverAccessMode(const WebserverAccessMode& value) { m_webserverAccessModeHasBeenSet = true; m_webserverAccessMode = value; }
    inline void SetWebserverAccessMode(WebserverAccessMode&& value) { m_webserverAccessModeHasBeenSet = true; m_webserverAccessMode = std::move(value); }
    inline UpdateEnvironmentRequest& WithWebserverAccessMode(const WebserverAccessMode& value) { SetWebserverAccessMode(value); return *this;}
    inline UpdateEnvironmentRequest& WithWebserverAccessMode(WebserverAccessMode&& value) { SetWebserverAccessMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of workers that you want to run in your environment. MWAA
     * scales the number of Apache Airflow workers up to the number you specify in the
     * <code>MaxWorkers</code> field. When there are no more tasks running, and no more
     * in the queue, MWAA disposes of the extra workers leaving the worker count you
     * specify in the <code>MinWorkers</code> field. For example, <code>2</code>.</p>
     */
    inline int GetMinWorkers() const{ return m_minWorkers; }
    inline bool MinWorkersHasBeenSet() const { return m_minWorkersHasBeenSet; }
    inline void SetMinWorkers(int value) { m_minWorkersHasBeenSet = true; m_minWorkers = value; }
    inline UpdateEnvironmentRequest& WithMinWorkers(int value) { SetMinWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Apache Airflow schedulers to run in your Amazon MWAA
     * environment.</p>
     */
    inline int GetSchedulers() const{ return m_schedulers; }
    inline bool SchedulersHasBeenSet() const { return m_schedulersHasBeenSet; }
    inline void SetSchedulers(int value) { m_schedulersHasBeenSet = true; m_schedulers = value; }
    inline UpdateEnvironmentRequest& WithSchedulers(int value) { SetSchedulers(value); return *this;}
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
    inline int GetMinWebservers() const{ return m_minWebservers; }
    inline bool MinWebserversHasBeenSet() const { return m_minWebserversHasBeenSet; }
    inline void SetMinWebservers(int value) { m_minWebserversHasBeenSet = true; m_minWebservers = value; }
    inline UpdateEnvironmentRequest& WithMinWebservers(int value) { SetMinWebservers(value); return *this;}
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
    inline int GetMaxWebservers() const{ return m_maxWebservers; }
    inline bool MaxWebserversHasBeenSet() const { return m_maxWebserversHasBeenSet; }
    inline void SetMaxWebservers(int value) { m_maxWebserversHasBeenSet = true; m_maxWebservers = value; }
    inline UpdateEnvironmentRequest& WithMaxWebservers(int value) { SetMaxWebservers(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::String m_airflowVersion;
    bool m_airflowVersionHasBeenSet = false;

    Aws::String m_sourceBucketArn;
    bool m_sourceBucketArnHasBeenSet = false;

    Aws::String m_dagS3Path;
    bool m_dagS3PathHasBeenSet = false;

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

    int m_maxWorkers;
    bool m_maxWorkersHasBeenSet = false;

    UpdateNetworkConfigurationInput m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    LoggingConfigurationInput m_loggingConfiguration;
    bool m_loggingConfigurationHasBeenSet = false;

    Aws::String m_weeklyMaintenanceWindowStart;
    bool m_weeklyMaintenanceWindowStartHasBeenSet = false;

    WebserverAccessMode m_webserverAccessMode;
    bool m_webserverAccessModeHasBeenSet = false;

    int m_minWorkers;
    bool m_minWorkersHasBeenSet = false;

    int m_schedulers;
    bool m_schedulersHasBeenSet = false;

    int m_minWebservers;
    bool m_minWebserversHasBeenSet = false;

    int m_maxWebservers;
    bool m_maxWebserversHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
