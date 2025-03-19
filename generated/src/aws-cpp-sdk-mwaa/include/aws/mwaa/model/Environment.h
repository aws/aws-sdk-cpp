/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa/model/EnvironmentStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mwaa/model/NetworkConfiguration.h>
#include <aws/mwaa/model/LoggingConfiguration.h>
#include <aws/mwaa/model/LastUpdate.h>
#include <aws/mwaa/model/WebserverAccessMode.h>
#include <aws/mwaa/model/EndpointManagement.h>
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
namespace MWAA
{
namespace Model
{

  /**
   * <p>Describes an Amazon Managed Workflows for Apache Airflow (MWAA)
   * environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/Environment">AWS
   * API Reference</a></p>
   */
  class Environment
  {
  public:
    AWS_MWAA_API Environment() = default;
    AWS_MWAA_API Environment(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API Environment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    Environment& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Amazon MWAA environment.</p> <p>Valid values:</p> <ul> <li>
     * <p> <code>CREATING</code> - Indicates the request to create the environment is
     * in progress.</p> </li> <li> <p> <code>CREATING_SNAPSHOT</code> - Indicates the
     * request to update environment details, or upgrade the environment version, is in
     * progress and Amazon MWAA is creating a storage volume snapshot of the Amazon RDS
     * database cluster associated with the environment. A database snapshot is a
     * backup created at a specific point in time. Amazon MWAA uses snapshots to
     * recover environment metadata if the process to update or upgrade an environment
     * fails.</p> </li> <li> <p> <code>CREATE_FAILED</code> - Indicates the request to
     * create the environment failed, and the environment could not be created.</p>
     * </li> <li> <p> <code>AVAILABLE</code> - Indicates the request was successful and
     * the environment is ready to use.</p> </li> <li> <p> <code>PENDING</code> -
     * Indicates the request was successful, but the process to create the environment
     * is paused until you create the required VPC endpoints in your VPC. After you
     * create the VPC endpoints, the process resumes.</p> </li> <li> <p>
     * <code>UPDATING</code> - Indicates the request to update the environment is in
     * progress.</p> </li> <li> <p> <code>ROLLING_BACK</code> - Indicates the request
     * to update environment details, or upgrade the environment version, failed and
     * Amazon MWAA is restoring the environment using the latest storage volume
     * snapshot.</p> </li> <li> <p> <code>DELETING</code> - Indicates the request to
     * delete the environment is in progress.</p> </li> <li> <p> <code>DELETED</code> -
     * Indicates the request to delete the environment is complete, and the environment
     * has been deleted.</p> </li> <li> <p> <code>UNAVAILABLE</code> - Indicates the
     * request failed, but the environment did not return to its previous state and is
     * not stable.</p> </li> <li> <p> <code>UPDATE_FAILED</code> - Indicates the
     * request to update the environment failed, and the environment was restored to
     * its previous state successfully and is ready to use.</p> </li> <li> <p>
     * <code>MAINTENANCE</code> - Indicates that the environment is undergoing
     * maintenance. Depending on the type of work Amazon MWAA is performing, your
     * environment might become unavailable during this process. After all operations
     * are done, your environment will return to its status prior to mainteneace
     * operations. </p> </li> </ul> <p>We recommend reviewing our troubleshooting guide
     * for a list of common errors and their solutions. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/troubleshooting.html">Amazon
     * MWAA troubleshooting</a>.</p>
     */
    inline EnvironmentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EnvironmentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Environment& WithStatus(EnvironmentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon MWAA environment.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Environment& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day and time the environment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Environment& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Apache Airflow <i>web server</i> host name for the Amazon MWAA
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/access-airflow-ui.html">Accessing
     * the Apache Airflow UI</a>.</p>
     */
    inline const Aws::String& GetWebserverUrl() const { return m_webserverUrl; }
    inline bool WebserverUrlHasBeenSet() const { return m_webserverUrlHasBeenSet; }
    template<typename WebserverUrlT = Aws::String>
    void SetWebserverUrl(WebserverUrlT&& value) { m_webserverUrlHasBeenSet = true; m_webserverUrl = std::forward<WebserverUrlT>(value); }
    template<typename WebserverUrlT = Aws::String>
    Environment& WithWebserverUrl(WebserverUrlT&& value) { SetWebserverUrl(std::forward<WebserverUrlT>(value)); return *this;}
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
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    Environment& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the service-linked role of the
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-slr.html">Amazon
     * MWAA Service-linked role</a>.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const { return m_serviceRoleArn; }
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }
    template<typename ServiceRoleArnT = Aws::String>
    void SetServiceRoleArn(ServiceRoleArnT&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::forward<ServiceRoleArnT>(value); }
    template<typename ServiceRoleArnT = Aws::String>
    Environment& WithServiceRoleArn(ServiceRoleArnT&& value) { SetServiceRoleArn(std::forward<ServiceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS encryption key used to encrypt the data in your environment.</p>
     */
    inline const Aws::String& GetKmsKey() const { return m_kmsKey; }
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
    template<typename KmsKeyT = Aws::String>
    void SetKmsKey(KmsKeyT&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::forward<KmsKeyT>(value); }
    template<typename KmsKeyT = Aws::String>
    Environment& WithKmsKey(KmsKeyT&& value) { SetKmsKey(std::forward<KmsKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Apache Airflow version on your environment.</p> <p>Valid values:
     * <code>1.10.12</code>, <code>2.0.2</code>, <code>2.2.2</code>,
     * <code>2.4.3</code>, <code>2.5.1</code>, <code>2.6.3</code>, <code>2.7.2</code>,
     * <code>2.8.1</code>, <code>2.9.2</code>, <code>2.10.1</code>, and
     * <code>2.10.3</code>.</p>
     */
    inline const Aws::String& GetAirflowVersion() const { return m_airflowVersion; }
    inline bool AirflowVersionHasBeenSet() const { return m_airflowVersionHasBeenSet; }
    template<typename AirflowVersionT = Aws::String>
    void SetAirflowVersion(AirflowVersionT&& value) { m_airflowVersionHasBeenSet = true; m_airflowVersion = std::forward<AirflowVersionT>(value); }
    template<typename AirflowVersionT = Aws::String>
    Environment& WithAirflowVersion(AirflowVersionT&& value) { SetAirflowVersion(std::forward<AirflowVersionT>(value)); return *this;}
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
    Environment& WithSourceBucketArn(SourceBucketArnT&& value) { SetSourceBucketArn(std::forward<SourceBucketArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative path to the DAGs folder in your Amazon S3 bucket. For example,
     * <code>s3://mwaa-environment/dags</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-folder.html">Adding
     * or updating DAGs</a>.</p>
     */
    inline const Aws::String& GetDagS3Path() const { return m_dagS3Path; }
    inline bool DagS3PathHasBeenSet() const { return m_dagS3PathHasBeenSet; }
    template<typename DagS3PathT = Aws::String>
    void SetDagS3Path(DagS3PathT&& value) { m_dagS3PathHasBeenSet = true; m_dagS3Path = std::forward<DagS3PathT>(value); }
    template<typename DagS3PathT = Aws::String>
    Environment& WithDagS3Path(DagS3PathT&& value) { SetDagS3Path(std::forward<DagS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative path to the file in your Amazon S3 bucket. For example,
     * <code>s3://mwaa-environment/plugins.zip</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import-plugins.html">Installing
     * custom plugins</a>.</p>
     */
    inline const Aws::String& GetPluginsS3Path() const { return m_pluginsS3Path; }
    inline bool PluginsS3PathHasBeenSet() const { return m_pluginsS3PathHasBeenSet; }
    template<typename PluginsS3PathT = Aws::String>
    void SetPluginsS3Path(PluginsS3PathT&& value) { m_pluginsS3PathHasBeenSet = true; m_pluginsS3Path = std::forward<PluginsS3PathT>(value); }
    template<typename PluginsS3PathT = Aws::String>
    Environment& WithPluginsS3Path(PluginsS3PathT&& value) { SetPluginsS3Path(std::forward<PluginsS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the <code>plugins.zip</code> file in your Amazon S3 bucket.
     * You must specify the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/versioning-workflows.html">version
     * ID</a> that Amazon S3 assigns to the file.</p> <p> Version IDs are Unicode,
     * UTF-8 encoded, URL-ready, opaque strings that are no more than 1,024 bytes long.
     * The following is an example: </p> <p>
     * <code>3sL4kqtJlcpXroDTDmJ+rmSpXd3dIbrHY+MTRCxf3vjVBH40Nr8X8gdRQBpUMLUo</code>
     * </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import-plugins.html">Installing
     * custom plugins</a>.</p>
     */
    inline const Aws::String& GetPluginsS3ObjectVersion() const { return m_pluginsS3ObjectVersion; }
    inline bool PluginsS3ObjectVersionHasBeenSet() const { return m_pluginsS3ObjectVersionHasBeenSet; }
    template<typename PluginsS3ObjectVersionT = Aws::String>
    void SetPluginsS3ObjectVersion(PluginsS3ObjectVersionT&& value) { m_pluginsS3ObjectVersionHasBeenSet = true; m_pluginsS3ObjectVersion = std::forward<PluginsS3ObjectVersionT>(value); }
    template<typename PluginsS3ObjectVersionT = Aws::String>
    Environment& WithPluginsS3ObjectVersion(PluginsS3ObjectVersionT&& value) { SetPluginsS3ObjectVersion(std::forward<PluginsS3ObjectVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative path to the <code>requirements.txt</code> file in your Amazon S3
     * bucket. For example, <code>s3://mwaa-environment/requirements.txt</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/working-dags-dependencies.html">Installing
     * Python dependencies</a>.</p>
     */
    inline const Aws::String& GetRequirementsS3Path() const { return m_requirementsS3Path; }
    inline bool RequirementsS3PathHasBeenSet() const { return m_requirementsS3PathHasBeenSet; }
    template<typename RequirementsS3PathT = Aws::String>
    void SetRequirementsS3Path(RequirementsS3PathT&& value) { m_requirementsS3PathHasBeenSet = true; m_requirementsS3Path = std::forward<RequirementsS3PathT>(value); }
    template<typename RequirementsS3PathT = Aws::String>
    Environment& WithRequirementsS3Path(RequirementsS3PathT&& value) { SetRequirementsS3Path(std::forward<RequirementsS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the <code>requirements.txt </code> file on your Amazon S3
     * bucket. You must specify the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/versioning-workflows.html">version
     * ID</a> that Amazon S3 assigns to the file.</p> <p> Version IDs are Unicode,
     * UTF-8 encoded, URL-ready, opaque strings that are no more than 1,024 bytes long.
     * The following is an example: </p> <p>
     * <code>3sL4kqtJlcpXroDTDmJ+rmSpXd3dIbrHY+MTRCxf3vjVBH40Nr8X8gdRQBpUMLUo</code>
     * </p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/working-dags-dependencies.html">Installing
     * Python dependencies</a>. </p>
     */
    inline const Aws::String& GetRequirementsS3ObjectVersion() const { return m_requirementsS3ObjectVersion; }
    inline bool RequirementsS3ObjectVersionHasBeenSet() const { return m_requirementsS3ObjectVersionHasBeenSet; }
    template<typename RequirementsS3ObjectVersionT = Aws::String>
    void SetRequirementsS3ObjectVersion(RequirementsS3ObjectVersionT&& value) { m_requirementsS3ObjectVersionHasBeenSet = true; m_requirementsS3ObjectVersion = std::forward<RequirementsS3ObjectVersionT>(value); }
    template<typename RequirementsS3ObjectVersionT = Aws::String>
    Environment& WithRequirementsS3ObjectVersion(RequirementsS3ObjectVersionT&& value) { SetRequirementsS3ObjectVersion(std::forward<RequirementsS3ObjectVersionT>(value)); return *this;}
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
    Environment& WithStartupScriptS3Path(StartupScriptS3PathT&& value) { SetStartupScriptS3Path(std::forward<StartupScriptS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the startup shell script in your Amazon S3 bucket. You must
     * specify the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/versioning-workflows.html">version
     * ID</a> that Amazon S3 assigns to the file.</p> <p> Version IDs are Unicode,
     * UTF-8 encoded, URL-ready, opaque strings that are no more than 1,024 bytes long.
     * The following is an example: </p> <p>
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
    Environment& WithStartupScriptS3ObjectVersion(StartupScriptS3ObjectVersionT&& value) { SetStartupScriptS3ObjectVersion(std::forward<StartupScriptS3ObjectVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs containing the Apache Airflow configuration options
     * attached to your environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Apache
     * Airflow configuration options</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAirflowConfigurationOptions() const { return m_airflowConfigurationOptions; }
    inline bool AirflowConfigurationOptionsHasBeenSet() const { return m_airflowConfigurationOptionsHasBeenSet; }
    template<typename AirflowConfigurationOptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetAirflowConfigurationOptions(AirflowConfigurationOptionsT&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions = std::forward<AirflowConfigurationOptionsT>(value); }
    template<typename AirflowConfigurationOptionsT = Aws::Map<Aws::String, Aws::String>>
    Environment& WithAirflowConfigurationOptions(AirflowConfigurationOptionsT&& value) { SetAirflowConfigurationOptions(std::forward<AirflowConfigurationOptionsT>(value)); return *this;}
    template<typename AirflowConfigurationOptionsKeyT = Aws::String, typename AirflowConfigurationOptionsValueT = Aws::String>
    Environment& AddAirflowConfigurationOptions(AirflowConfigurationOptionsKeyT&& key, AirflowConfigurationOptionsValueT&& value) {
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
    Environment& WithEnvironmentClass(EnvironmentClassT&& value) { SetEnvironmentClass(std::forward<EnvironmentClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of workers that run in your environment. For example,
     * <code>20</code>.</p>
     */
    inline int GetMaxWorkers() const { return m_maxWorkers; }
    inline bool MaxWorkersHasBeenSet() const { return m_maxWorkersHasBeenSet; }
    inline void SetMaxWorkers(int value) { m_maxWorkersHasBeenSet = true; m_maxWorkers = value; }
    inline Environment& WithMaxWorkers(int value) { SetMaxWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the VPC networking components used to secure and enable network
     * traffic between the Amazon Web Services resources for your environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/networking-about.html">About
     * networking on Amazon MWAA</a>.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    void SetNetworkConfiguration(NetworkConfigurationT&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::forward<NetworkConfigurationT>(value); }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    Environment& WithNetworkConfiguration(NetworkConfigurationT&& value) { SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Apache Airflow logs published to CloudWatch Logs.</p>
     */
    inline const LoggingConfiguration& GetLoggingConfiguration() const { return m_loggingConfiguration; }
    inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }
    template<typename LoggingConfigurationT = LoggingConfiguration>
    void SetLoggingConfiguration(LoggingConfigurationT&& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = std::forward<LoggingConfigurationT>(value); }
    template<typename LoggingConfigurationT = LoggingConfiguration>
    Environment& WithLoggingConfiguration(LoggingConfigurationT&& value) { SetLoggingConfiguration(std::forward<LoggingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the last update on the environment.</p>
     */
    inline const LastUpdate& GetLastUpdate() const { return m_lastUpdate; }
    inline bool LastUpdateHasBeenSet() const { return m_lastUpdateHasBeenSet; }
    template<typename LastUpdateT = LastUpdate>
    void SetLastUpdate(LastUpdateT&& value) { m_lastUpdateHasBeenSet = true; m_lastUpdate = std::forward<LastUpdateT>(value); }
    template<typename LastUpdateT = LastUpdate>
    Environment& WithLastUpdate(LastUpdateT&& value) { SetLastUpdate(std::forward<LastUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day and time of the week in Coordinated Universal Time (UTC) 24-hour
     * standard time that weekly maintenance updates are scheduled. For example:
     * <code>TUE:03:30</code>.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceWindowStart() const { return m_weeklyMaintenanceWindowStart; }
    inline bool WeeklyMaintenanceWindowStartHasBeenSet() const { return m_weeklyMaintenanceWindowStartHasBeenSet; }
    template<typename WeeklyMaintenanceWindowStartT = Aws::String>
    void SetWeeklyMaintenanceWindowStart(WeeklyMaintenanceWindowStartT&& value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart = std::forward<WeeklyMaintenanceWindowStartT>(value); }
    template<typename WeeklyMaintenanceWindowStartT = Aws::String>
    Environment& WithWeeklyMaintenanceWindowStart(WeeklyMaintenanceWindowStartT&& value) { SetWeeklyMaintenanceWindowStart(std::forward<WeeklyMaintenanceWindowStartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value tag pairs associated to your environment. For example,
     * <code>"Environment": "Staging"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Environment& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Environment& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Apache Airflow <i>web server</i> access mode. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-networking.html">Apache
     * Airflow access modes</a>.</p>
     */
    inline WebserverAccessMode GetWebserverAccessMode() const { return m_webserverAccessMode; }
    inline bool WebserverAccessModeHasBeenSet() const { return m_webserverAccessModeHasBeenSet; }
    inline void SetWebserverAccessMode(WebserverAccessMode value) { m_webserverAccessModeHasBeenSet = true; m_webserverAccessMode = value; }
    inline Environment& WithWebserverAccessMode(WebserverAccessMode value) { SetWebserverAccessMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of workers that run in your environment. For example,
     * <code>2</code>.</p>
     */
    inline int GetMinWorkers() const { return m_minWorkers; }
    inline bool MinWorkersHasBeenSet() const { return m_minWorkersHasBeenSet; }
    inline void SetMinWorkers(int value) { m_minWorkersHasBeenSet = true; m_minWorkers = value; }
    inline Environment& WithMinWorkers(int value) { SetMinWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Apache Airflow schedulers that run in your Amazon MWAA
     * environment.</p>
     */
    inline int GetSchedulers() const { return m_schedulers; }
    inline bool SchedulersHasBeenSet() const { return m_schedulersHasBeenSet; }
    inline void SetSchedulers(int value) { m_schedulersHasBeenSet = true; m_schedulers = value; }
    inline Environment& WithSchedulers(int value) { SetSchedulers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC endpoint for the environment's web server.</p>
     */
    inline const Aws::String& GetWebserverVpcEndpointService() const { return m_webserverVpcEndpointService; }
    inline bool WebserverVpcEndpointServiceHasBeenSet() const { return m_webserverVpcEndpointServiceHasBeenSet; }
    template<typename WebserverVpcEndpointServiceT = Aws::String>
    void SetWebserverVpcEndpointService(WebserverVpcEndpointServiceT&& value) { m_webserverVpcEndpointServiceHasBeenSet = true; m_webserverVpcEndpointService = std::forward<WebserverVpcEndpointServiceT>(value); }
    template<typename WebserverVpcEndpointServiceT = Aws::String>
    Environment& WithWebserverVpcEndpointService(WebserverVpcEndpointServiceT&& value) { SetWebserverVpcEndpointService(std::forward<WebserverVpcEndpointServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC endpoint for the environment's Amazon RDS database.</p>
     */
    inline const Aws::String& GetDatabaseVpcEndpointService() const { return m_databaseVpcEndpointService; }
    inline bool DatabaseVpcEndpointServiceHasBeenSet() const { return m_databaseVpcEndpointServiceHasBeenSet; }
    template<typename DatabaseVpcEndpointServiceT = Aws::String>
    void SetDatabaseVpcEndpointService(DatabaseVpcEndpointServiceT&& value) { m_databaseVpcEndpointServiceHasBeenSet = true; m_databaseVpcEndpointService = std::forward<DatabaseVpcEndpointServiceT>(value); }
    template<typename DatabaseVpcEndpointServiceT = Aws::String>
    Environment& WithDatabaseVpcEndpointService(DatabaseVpcEndpointServiceT&& value) { SetDatabaseVpcEndpointService(std::forward<DatabaseVpcEndpointServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue ARN for the environment's <a
     * href="https://airflow.apache.org/docs/apache-airflow/stable/core-concepts/executor/celery.html">Celery
     * Executor</a>. Amazon MWAA uses a Celery Executor to distribute tasks across
     * multiple workers. When you create an environment in a shared VPC, you must
     * provide access to the Celery Executor queue from your VPC.</p>
     */
    inline const Aws::String& GetCeleryExecutorQueue() const { return m_celeryExecutorQueue; }
    inline bool CeleryExecutorQueueHasBeenSet() const { return m_celeryExecutorQueueHasBeenSet; }
    template<typename CeleryExecutorQueueT = Aws::String>
    void SetCeleryExecutorQueue(CeleryExecutorQueueT&& value) { m_celeryExecutorQueueHasBeenSet = true; m_celeryExecutorQueue = std::forward<CeleryExecutorQueueT>(value); }
    template<typename CeleryExecutorQueueT = Aws::String>
    Environment& WithCeleryExecutorQueue(CeleryExecutorQueueT&& value) { SetCeleryExecutorQueue(std::forward<CeleryExecutorQueueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines whether the VPC endpoints configured for the environment are created,
     * and managed, by the customer or by Amazon MWAA. If set to <code>SERVICE</code>,
     * Amazon MWAA will create and manage the required VPC endpoints in your VPC. If
     * set to <code>CUSTOMER</code>, you must create, and manage, the VPC endpoints in
     * your VPC.</p>
     */
    inline EndpointManagement GetEndpointManagement() const { return m_endpointManagement; }
    inline bool EndpointManagementHasBeenSet() const { return m_endpointManagementHasBeenSet; }
    inline void SetEndpointManagement(EndpointManagement value) { m_endpointManagementHasBeenSet = true; m_endpointManagement = value; }
    inline Environment& WithEndpointManagement(EndpointManagement value) { SetEndpointManagement(value); return *this;}
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
    inline Environment& WithMinWebservers(int value) { SetMinWebservers(value); return *this;}
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
    inline Environment& WithMaxWebservers(int value) { SetMaxWebservers(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EnvironmentStatus m_status{EnvironmentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_webserverUrl;
    bool m_webserverUrlHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet = false;

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;

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

    int m_maxWorkers{0};
    bool m_maxWorkersHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    LoggingConfiguration m_loggingConfiguration;
    bool m_loggingConfigurationHasBeenSet = false;

    LastUpdate m_lastUpdate;
    bool m_lastUpdateHasBeenSet = false;

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

    Aws::String m_webserverVpcEndpointService;
    bool m_webserverVpcEndpointServiceHasBeenSet = false;

    Aws::String m_databaseVpcEndpointService;
    bool m_databaseVpcEndpointServiceHasBeenSet = false;

    Aws::String m_celeryExecutorQueue;
    bool m_celeryExecutorQueueHasBeenSet = false;

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
