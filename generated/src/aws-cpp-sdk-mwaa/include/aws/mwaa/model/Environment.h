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
    AWS_MWAA_API Environment();
    AWS_MWAA_API Environment(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API Environment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon MWAA environment. For example,
     * <code>MyMWAAEnvironment</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Environment& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Environment& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Environment& WithName(const char* value) { SetName(value); return *this;}
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
    inline const EnvironmentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const EnvironmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(EnvironmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Environment& WithStatus(const EnvironmentStatus& value) { SetStatus(value); return *this;}
    inline Environment& WithStatus(EnvironmentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon MWAA environment.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Environment& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Environment& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Environment& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day and time the environment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Environment& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Environment& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Apache Airflow <i>web server</i> host name for the Amazon MWAA
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/access-airflow-ui.html">Accessing
     * the Apache Airflow UI</a>.</p>
     */
    inline const Aws::String& GetWebserverUrl() const{ return m_webserverUrl; }
    inline bool WebserverUrlHasBeenSet() const { return m_webserverUrlHasBeenSet; }
    inline void SetWebserverUrl(const Aws::String& value) { m_webserverUrlHasBeenSet = true; m_webserverUrl = value; }
    inline void SetWebserverUrl(Aws::String&& value) { m_webserverUrlHasBeenSet = true; m_webserverUrl = std::move(value); }
    inline void SetWebserverUrl(const char* value) { m_webserverUrlHasBeenSet = true; m_webserverUrl.assign(value); }
    inline Environment& WithWebserverUrl(const Aws::String& value) { SetWebserverUrl(value); return *this;}
    inline Environment& WithWebserverUrl(Aws::String&& value) { SetWebserverUrl(std::move(value)); return *this;}
    inline Environment& WithWebserverUrl(const char* value) { SetWebserverUrl(value); return *this;}
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
    inline Environment& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline Environment& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline Environment& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the service-linked role of the
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-slr.html">Amazon
     * MWAA Service-linked role</a>.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }
    inline Environment& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}
    inline Environment& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}
    inline Environment& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS encryption key used to encrypt the data in your environment.</p>
     */
    inline const Aws::String& GetKmsKey() const{ return m_kmsKey; }
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
    inline void SetKmsKey(const Aws::String& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = value; }
    inline void SetKmsKey(Aws::String&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::move(value); }
    inline void SetKmsKey(const char* value) { m_kmsKeyHasBeenSet = true; m_kmsKey.assign(value); }
    inline Environment& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}
    inline Environment& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}
    inline Environment& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Apache Airflow version on your environment.</p> <p>Valid values:
     * <code>1.10.12</code>, <code>2.0.2</code>, <code>2.2.2</code>,
     * <code>2.4.3</code>, <code>2.5.1</code>, <code>2.6.3</code>, <code>2.7.2</code>,
     * <code>2.8.1</code>, <code>2.9.2</code>, <code>2.10.1</code>, and
     * <code>2.10.3</code>.</p>
     */
    inline const Aws::String& GetAirflowVersion() const{ return m_airflowVersion; }
    inline bool AirflowVersionHasBeenSet() const { return m_airflowVersionHasBeenSet; }
    inline void SetAirflowVersion(const Aws::String& value) { m_airflowVersionHasBeenSet = true; m_airflowVersion = value; }
    inline void SetAirflowVersion(Aws::String&& value) { m_airflowVersionHasBeenSet = true; m_airflowVersion = std::move(value); }
    inline void SetAirflowVersion(const char* value) { m_airflowVersionHasBeenSet = true; m_airflowVersion.assign(value); }
    inline Environment& WithAirflowVersion(const Aws::String& value) { SetAirflowVersion(value); return *this;}
    inline Environment& WithAirflowVersion(Aws::String&& value) { SetAirflowVersion(std::move(value)); return *this;}
    inline Environment& WithAirflowVersion(const char* value) { SetAirflowVersion(value); return *this;}
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
    inline Environment& WithSourceBucketArn(const Aws::String& value) { SetSourceBucketArn(value); return *this;}
    inline Environment& WithSourceBucketArn(Aws::String&& value) { SetSourceBucketArn(std::move(value)); return *this;}
    inline Environment& WithSourceBucketArn(const char* value) { SetSourceBucketArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative path to the DAGs folder in your Amazon S3 bucket. For example,
     * <code>s3://mwaa-environment/dags</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-folder.html">Adding
     * or updating DAGs</a>.</p>
     */
    inline const Aws::String& GetDagS3Path() const{ return m_dagS3Path; }
    inline bool DagS3PathHasBeenSet() const { return m_dagS3PathHasBeenSet; }
    inline void SetDagS3Path(const Aws::String& value) { m_dagS3PathHasBeenSet = true; m_dagS3Path = value; }
    inline void SetDagS3Path(Aws::String&& value) { m_dagS3PathHasBeenSet = true; m_dagS3Path = std::move(value); }
    inline void SetDagS3Path(const char* value) { m_dagS3PathHasBeenSet = true; m_dagS3Path.assign(value); }
    inline Environment& WithDagS3Path(const Aws::String& value) { SetDagS3Path(value); return *this;}
    inline Environment& WithDagS3Path(Aws::String&& value) { SetDagS3Path(std::move(value)); return *this;}
    inline Environment& WithDagS3Path(const char* value) { SetDagS3Path(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative path to the file in your Amazon S3 bucket. For example,
     * <code>s3://mwaa-environment/plugins.zip</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import-plugins.html">Installing
     * custom plugins</a>.</p>
     */
    inline const Aws::String& GetPluginsS3Path() const{ return m_pluginsS3Path; }
    inline bool PluginsS3PathHasBeenSet() const { return m_pluginsS3PathHasBeenSet; }
    inline void SetPluginsS3Path(const Aws::String& value) { m_pluginsS3PathHasBeenSet = true; m_pluginsS3Path = value; }
    inline void SetPluginsS3Path(Aws::String&& value) { m_pluginsS3PathHasBeenSet = true; m_pluginsS3Path = std::move(value); }
    inline void SetPluginsS3Path(const char* value) { m_pluginsS3PathHasBeenSet = true; m_pluginsS3Path.assign(value); }
    inline Environment& WithPluginsS3Path(const Aws::String& value) { SetPluginsS3Path(value); return *this;}
    inline Environment& WithPluginsS3Path(Aws::String&& value) { SetPluginsS3Path(std::move(value)); return *this;}
    inline Environment& WithPluginsS3Path(const char* value) { SetPluginsS3Path(value); return *this;}
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
    inline const Aws::String& GetPluginsS3ObjectVersion() const{ return m_pluginsS3ObjectVersion; }
    inline bool PluginsS3ObjectVersionHasBeenSet() const { return m_pluginsS3ObjectVersionHasBeenSet; }
    inline void SetPluginsS3ObjectVersion(const Aws::String& value) { m_pluginsS3ObjectVersionHasBeenSet = true; m_pluginsS3ObjectVersion = value; }
    inline void SetPluginsS3ObjectVersion(Aws::String&& value) { m_pluginsS3ObjectVersionHasBeenSet = true; m_pluginsS3ObjectVersion = std::move(value); }
    inline void SetPluginsS3ObjectVersion(const char* value) { m_pluginsS3ObjectVersionHasBeenSet = true; m_pluginsS3ObjectVersion.assign(value); }
    inline Environment& WithPluginsS3ObjectVersion(const Aws::String& value) { SetPluginsS3ObjectVersion(value); return *this;}
    inline Environment& WithPluginsS3ObjectVersion(Aws::String&& value) { SetPluginsS3ObjectVersion(std::move(value)); return *this;}
    inline Environment& WithPluginsS3ObjectVersion(const char* value) { SetPluginsS3ObjectVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative path to the <code>requirements.txt</code> file in your Amazon S3
     * bucket. For example, <code>s3://mwaa-environment/requirements.txt</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/working-dags-dependencies.html">Installing
     * Python dependencies</a>.</p>
     */
    inline const Aws::String& GetRequirementsS3Path() const{ return m_requirementsS3Path; }
    inline bool RequirementsS3PathHasBeenSet() const { return m_requirementsS3PathHasBeenSet; }
    inline void SetRequirementsS3Path(const Aws::String& value) { m_requirementsS3PathHasBeenSet = true; m_requirementsS3Path = value; }
    inline void SetRequirementsS3Path(Aws::String&& value) { m_requirementsS3PathHasBeenSet = true; m_requirementsS3Path = std::move(value); }
    inline void SetRequirementsS3Path(const char* value) { m_requirementsS3PathHasBeenSet = true; m_requirementsS3Path.assign(value); }
    inline Environment& WithRequirementsS3Path(const Aws::String& value) { SetRequirementsS3Path(value); return *this;}
    inline Environment& WithRequirementsS3Path(Aws::String&& value) { SetRequirementsS3Path(std::move(value)); return *this;}
    inline Environment& WithRequirementsS3Path(const char* value) { SetRequirementsS3Path(value); return *this;}
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
    inline const Aws::String& GetRequirementsS3ObjectVersion() const{ return m_requirementsS3ObjectVersion; }
    inline bool RequirementsS3ObjectVersionHasBeenSet() const { return m_requirementsS3ObjectVersionHasBeenSet; }
    inline void SetRequirementsS3ObjectVersion(const Aws::String& value) { m_requirementsS3ObjectVersionHasBeenSet = true; m_requirementsS3ObjectVersion = value; }
    inline void SetRequirementsS3ObjectVersion(Aws::String&& value) { m_requirementsS3ObjectVersionHasBeenSet = true; m_requirementsS3ObjectVersion = std::move(value); }
    inline void SetRequirementsS3ObjectVersion(const char* value) { m_requirementsS3ObjectVersionHasBeenSet = true; m_requirementsS3ObjectVersion.assign(value); }
    inline Environment& WithRequirementsS3ObjectVersion(const Aws::String& value) { SetRequirementsS3ObjectVersion(value); return *this;}
    inline Environment& WithRequirementsS3ObjectVersion(Aws::String&& value) { SetRequirementsS3ObjectVersion(std::move(value)); return *this;}
    inline Environment& WithRequirementsS3ObjectVersion(const char* value) { SetRequirementsS3ObjectVersion(value); return *this;}
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
    inline Environment& WithStartupScriptS3Path(const Aws::String& value) { SetStartupScriptS3Path(value); return *this;}
    inline Environment& WithStartupScriptS3Path(Aws::String&& value) { SetStartupScriptS3Path(std::move(value)); return *this;}
    inline Environment& WithStartupScriptS3Path(const char* value) { SetStartupScriptS3Path(value); return *this;}
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
    inline const Aws::String& GetStartupScriptS3ObjectVersion() const{ return m_startupScriptS3ObjectVersion; }
    inline bool StartupScriptS3ObjectVersionHasBeenSet() const { return m_startupScriptS3ObjectVersionHasBeenSet; }
    inline void SetStartupScriptS3ObjectVersion(const Aws::String& value) { m_startupScriptS3ObjectVersionHasBeenSet = true; m_startupScriptS3ObjectVersion = value; }
    inline void SetStartupScriptS3ObjectVersion(Aws::String&& value) { m_startupScriptS3ObjectVersionHasBeenSet = true; m_startupScriptS3ObjectVersion = std::move(value); }
    inline void SetStartupScriptS3ObjectVersion(const char* value) { m_startupScriptS3ObjectVersionHasBeenSet = true; m_startupScriptS3ObjectVersion.assign(value); }
    inline Environment& WithStartupScriptS3ObjectVersion(const Aws::String& value) { SetStartupScriptS3ObjectVersion(value); return *this;}
    inline Environment& WithStartupScriptS3ObjectVersion(Aws::String&& value) { SetStartupScriptS3ObjectVersion(std::move(value)); return *this;}
    inline Environment& WithStartupScriptS3ObjectVersion(const char* value) { SetStartupScriptS3ObjectVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs containing the Apache Airflow configuration options
     * attached to your environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Apache
     * Airflow configuration options</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAirflowConfigurationOptions() const{ return m_airflowConfigurationOptions; }
    inline bool AirflowConfigurationOptionsHasBeenSet() const { return m_airflowConfigurationOptionsHasBeenSet; }
    inline void SetAirflowConfigurationOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions = value; }
    inline void SetAirflowConfigurationOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions = std::move(value); }
    inline Environment& WithAirflowConfigurationOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAirflowConfigurationOptions(value); return *this;}
    inline Environment& WithAirflowConfigurationOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAirflowConfigurationOptions(std::move(value)); return *this;}
    inline Environment& AddAirflowConfigurationOptions(const Aws::String& key, const Aws::String& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, value); return *this; }
    inline Environment& AddAirflowConfigurationOptions(Aws::String&& key, const Aws::String& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(std::move(key), value); return *this; }
    inline Environment& AddAirflowConfigurationOptions(const Aws::String& key, Aws::String&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, std::move(value)); return *this; }
    inline Environment& AddAirflowConfigurationOptions(Aws::String&& key, Aws::String&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(std::move(key), std::move(value)); return *this; }
    inline Environment& AddAirflowConfigurationOptions(const char* key, Aws::String&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, std::move(value)); return *this; }
    inline Environment& AddAirflowConfigurationOptions(Aws::String&& key, const char* value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(std::move(key), value); return *this; }
    inline Environment& AddAirflowConfigurationOptions(const char* key, const char* value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, value); return *this; }
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
    inline const Aws::String& GetEnvironmentClass() const{ return m_environmentClass; }
    inline bool EnvironmentClassHasBeenSet() const { return m_environmentClassHasBeenSet; }
    inline void SetEnvironmentClass(const Aws::String& value) { m_environmentClassHasBeenSet = true; m_environmentClass = value; }
    inline void SetEnvironmentClass(Aws::String&& value) { m_environmentClassHasBeenSet = true; m_environmentClass = std::move(value); }
    inline void SetEnvironmentClass(const char* value) { m_environmentClassHasBeenSet = true; m_environmentClass.assign(value); }
    inline Environment& WithEnvironmentClass(const Aws::String& value) { SetEnvironmentClass(value); return *this;}
    inline Environment& WithEnvironmentClass(Aws::String&& value) { SetEnvironmentClass(std::move(value)); return *this;}
    inline Environment& WithEnvironmentClass(const char* value) { SetEnvironmentClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of workers that run in your environment. For example,
     * <code>20</code>.</p>
     */
    inline int GetMaxWorkers() const{ return m_maxWorkers; }
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
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }
    inline Environment& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}
    inline Environment& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Apache Airflow logs published to CloudWatch Logs.</p>
     */
    inline const LoggingConfiguration& GetLoggingConfiguration() const{ return m_loggingConfiguration; }
    inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }
    inline void SetLoggingConfiguration(const LoggingConfiguration& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = value; }
    inline void SetLoggingConfiguration(LoggingConfiguration&& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = std::move(value); }
    inline Environment& WithLoggingConfiguration(const LoggingConfiguration& value) { SetLoggingConfiguration(value); return *this;}
    inline Environment& WithLoggingConfiguration(LoggingConfiguration&& value) { SetLoggingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the last update on the environment.</p>
     */
    inline const LastUpdate& GetLastUpdate() const{ return m_lastUpdate; }
    inline bool LastUpdateHasBeenSet() const { return m_lastUpdateHasBeenSet; }
    inline void SetLastUpdate(const LastUpdate& value) { m_lastUpdateHasBeenSet = true; m_lastUpdate = value; }
    inline void SetLastUpdate(LastUpdate&& value) { m_lastUpdateHasBeenSet = true; m_lastUpdate = std::move(value); }
    inline Environment& WithLastUpdate(const LastUpdate& value) { SetLastUpdate(value); return *this;}
    inline Environment& WithLastUpdate(LastUpdate&& value) { SetLastUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day and time of the week in Coordinated Universal Time (UTC) 24-hour
     * standard time that weekly maintenance updates are scheduled. For example:
     * <code>TUE:03:30</code>.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceWindowStart() const{ return m_weeklyMaintenanceWindowStart; }
    inline bool WeeklyMaintenanceWindowStartHasBeenSet() const { return m_weeklyMaintenanceWindowStartHasBeenSet; }
    inline void SetWeeklyMaintenanceWindowStart(const Aws::String& value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart = value; }
    inline void SetWeeklyMaintenanceWindowStart(Aws::String&& value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart = std::move(value); }
    inline void SetWeeklyMaintenanceWindowStart(const char* value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart.assign(value); }
    inline Environment& WithWeeklyMaintenanceWindowStart(const Aws::String& value) { SetWeeklyMaintenanceWindowStart(value); return *this;}
    inline Environment& WithWeeklyMaintenanceWindowStart(Aws::String&& value) { SetWeeklyMaintenanceWindowStart(std::move(value)); return *this;}
    inline Environment& WithWeeklyMaintenanceWindowStart(const char* value) { SetWeeklyMaintenanceWindowStart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value tag pairs associated to your environment. For example,
     * <code>"Environment": "Staging"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Environment& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Environment& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Environment& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Environment& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Environment& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Environment& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Environment& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Environment& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Environment& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Apache Airflow <i>web server</i> access mode. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-networking.html">Apache
     * Airflow access modes</a>.</p>
     */
    inline const WebserverAccessMode& GetWebserverAccessMode() const{ return m_webserverAccessMode; }
    inline bool WebserverAccessModeHasBeenSet() const { return m_webserverAccessModeHasBeenSet; }
    inline void SetWebserverAccessMode(const WebserverAccessMode& value) { m_webserverAccessModeHasBeenSet = true; m_webserverAccessMode = value; }
    inline void SetWebserverAccessMode(WebserverAccessMode&& value) { m_webserverAccessModeHasBeenSet = true; m_webserverAccessMode = std::move(value); }
    inline Environment& WithWebserverAccessMode(const WebserverAccessMode& value) { SetWebserverAccessMode(value); return *this;}
    inline Environment& WithWebserverAccessMode(WebserverAccessMode&& value) { SetWebserverAccessMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of workers that run in your environment. For example,
     * <code>2</code>.</p>
     */
    inline int GetMinWorkers() const{ return m_minWorkers; }
    inline bool MinWorkersHasBeenSet() const { return m_minWorkersHasBeenSet; }
    inline void SetMinWorkers(int value) { m_minWorkersHasBeenSet = true; m_minWorkers = value; }
    inline Environment& WithMinWorkers(int value) { SetMinWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Apache Airflow schedulers that run in your Amazon MWAA
     * environment.</p>
     */
    inline int GetSchedulers() const{ return m_schedulers; }
    inline bool SchedulersHasBeenSet() const { return m_schedulersHasBeenSet; }
    inline void SetSchedulers(int value) { m_schedulersHasBeenSet = true; m_schedulers = value; }
    inline Environment& WithSchedulers(int value) { SetSchedulers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC endpoint for the environment's web server.</p>
     */
    inline const Aws::String& GetWebserverVpcEndpointService() const{ return m_webserverVpcEndpointService; }
    inline bool WebserverVpcEndpointServiceHasBeenSet() const { return m_webserverVpcEndpointServiceHasBeenSet; }
    inline void SetWebserverVpcEndpointService(const Aws::String& value) { m_webserverVpcEndpointServiceHasBeenSet = true; m_webserverVpcEndpointService = value; }
    inline void SetWebserverVpcEndpointService(Aws::String&& value) { m_webserverVpcEndpointServiceHasBeenSet = true; m_webserverVpcEndpointService = std::move(value); }
    inline void SetWebserverVpcEndpointService(const char* value) { m_webserverVpcEndpointServiceHasBeenSet = true; m_webserverVpcEndpointService.assign(value); }
    inline Environment& WithWebserverVpcEndpointService(const Aws::String& value) { SetWebserverVpcEndpointService(value); return *this;}
    inline Environment& WithWebserverVpcEndpointService(Aws::String&& value) { SetWebserverVpcEndpointService(std::move(value)); return *this;}
    inline Environment& WithWebserverVpcEndpointService(const char* value) { SetWebserverVpcEndpointService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC endpoint for the environment's Amazon RDS database.</p>
     */
    inline const Aws::String& GetDatabaseVpcEndpointService() const{ return m_databaseVpcEndpointService; }
    inline bool DatabaseVpcEndpointServiceHasBeenSet() const { return m_databaseVpcEndpointServiceHasBeenSet; }
    inline void SetDatabaseVpcEndpointService(const Aws::String& value) { m_databaseVpcEndpointServiceHasBeenSet = true; m_databaseVpcEndpointService = value; }
    inline void SetDatabaseVpcEndpointService(Aws::String&& value) { m_databaseVpcEndpointServiceHasBeenSet = true; m_databaseVpcEndpointService = std::move(value); }
    inline void SetDatabaseVpcEndpointService(const char* value) { m_databaseVpcEndpointServiceHasBeenSet = true; m_databaseVpcEndpointService.assign(value); }
    inline Environment& WithDatabaseVpcEndpointService(const Aws::String& value) { SetDatabaseVpcEndpointService(value); return *this;}
    inline Environment& WithDatabaseVpcEndpointService(Aws::String&& value) { SetDatabaseVpcEndpointService(std::move(value)); return *this;}
    inline Environment& WithDatabaseVpcEndpointService(const char* value) { SetDatabaseVpcEndpointService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue ARN for the environment's <a
     * href="https://airflow.apache.org/docs/apache-airflow/stable/core-concepts/executor/celery.html">Celery
     * Executor</a>. Amazon MWAA uses a Celery Executor to distribute tasks across
     * multiple workers. When you create an environment in a shared VPC, you must
     * provide access to the Celery Executor queue from your VPC.</p>
     */
    inline const Aws::String& GetCeleryExecutorQueue() const{ return m_celeryExecutorQueue; }
    inline bool CeleryExecutorQueueHasBeenSet() const { return m_celeryExecutorQueueHasBeenSet; }
    inline void SetCeleryExecutorQueue(const Aws::String& value) { m_celeryExecutorQueueHasBeenSet = true; m_celeryExecutorQueue = value; }
    inline void SetCeleryExecutorQueue(Aws::String&& value) { m_celeryExecutorQueueHasBeenSet = true; m_celeryExecutorQueue = std::move(value); }
    inline void SetCeleryExecutorQueue(const char* value) { m_celeryExecutorQueueHasBeenSet = true; m_celeryExecutorQueue.assign(value); }
    inline Environment& WithCeleryExecutorQueue(const Aws::String& value) { SetCeleryExecutorQueue(value); return *this;}
    inline Environment& WithCeleryExecutorQueue(Aws::String&& value) { SetCeleryExecutorQueue(std::move(value)); return *this;}
    inline Environment& WithCeleryExecutorQueue(const char* value) { SetCeleryExecutorQueue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines whether the VPC endpoints configured for the environment are created,
     * and managed, by the customer or by Amazon MWAA. If set to <code>SERVICE</code>,
     * Amazon MWAA will create and manage the required VPC endpoints in your VPC. If
     * set to <code>CUSTOMER</code>, you must create, and manage, the VPC endpoints in
     * your VPC.</p>
     */
    inline const EndpointManagement& GetEndpointManagement() const{ return m_endpointManagement; }
    inline bool EndpointManagementHasBeenSet() const { return m_endpointManagementHasBeenSet; }
    inline void SetEndpointManagement(const EndpointManagement& value) { m_endpointManagementHasBeenSet = true; m_endpointManagement = value; }
    inline void SetEndpointManagement(EndpointManagement&& value) { m_endpointManagementHasBeenSet = true; m_endpointManagement = std::move(value); }
    inline Environment& WithEndpointManagement(const EndpointManagement& value) { SetEndpointManagement(value); return *this;}
    inline Environment& WithEndpointManagement(EndpointManagement&& value) { SetEndpointManagement(std::move(value)); return *this;}
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
    inline int GetMaxWebservers() const{ return m_maxWebservers; }
    inline bool MaxWebserversHasBeenSet() const { return m_maxWebserversHasBeenSet; }
    inline void SetMaxWebservers(int value) { m_maxWebserversHasBeenSet = true; m_maxWebservers = value; }
    inline Environment& WithMaxWebservers(int value) { SetMaxWebservers(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EnvironmentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
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

    int m_maxWorkers;
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

    WebserverAccessMode m_webserverAccessMode;
    bool m_webserverAccessModeHasBeenSet = false;

    int m_minWorkers;
    bool m_minWorkersHasBeenSet = false;

    int m_schedulers;
    bool m_schedulersHasBeenSet = false;

    Aws::String m_webserverVpcEndpointService;
    bool m_webserverVpcEndpointServiceHasBeenSet = false;

    Aws::String m_databaseVpcEndpointService;
    bool m_databaseVpcEndpointServiceHasBeenSet = false;

    Aws::String m_celeryExecutorQueue;
    bool m_celeryExecutorQueueHasBeenSet = false;

    EndpointManagement m_endpointManagement;
    bool m_endpointManagementHasBeenSet = false;

    int m_minWebservers;
    bool m_minWebserversHasBeenSet = false;

    int m_maxWebservers;
    bool m_maxWebserversHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
