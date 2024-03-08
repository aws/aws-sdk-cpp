/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mwaa/model/EndpointManagement.h>
#include <aws/mwaa/model/LastUpdate.h>
#include <aws/mwaa/model/LoggingConfiguration.h>
#include <aws/mwaa/model/NetworkConfiguration.h>
#include <aws/mwaa/model/EnvironmentStatus.h>
#include <aws/mwaa/model/WebserverAccessMode.h>
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


    /**
     * <p>A list of key-value pairs containing the Apache Airflow configuration options
     * attached to your environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Apache
     * Airflow configuration options</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAirflowConfigurationOptions() const{ return m_airflowConfigurationOptions; }

    /**
     * <p>A list of key-value pairs containing the Apache Airflow configuration options
     * attached to your environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Apache
     * Airflow configuration options</a>.</p>
     */
    inline bool AirflowConfigurationOptionsHasBeenSet() const { return m_airflowConfigurationOptionsHasBeenSet; }

    /**
     * <p>A list of key-value pairs containing the Apache Airflow configuration options
     * attached to your environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Apache
     * Airflow configuration options</a>.</p>
     */
    inline void SetAirflowConfigurationOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions = value; }

    /**
     * <p>A list of key-value pairs containing the Apache Airflow configuration options
     * attached to your environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Apache
     * Airflow configuration options</a>.</p>
     */
    inline void SetAirflowConfigurationOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions = std::move(value); }

    /**
     * <p>A list of key-value pairs containing the Apache Airflow configuration options
     * attached to your environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Apache
     * Airflow configuration options</a>.</p>
     */
    inline Environment& WithAirflowConfigurationOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAirflowConfigurationOptions(value); return *this;}

    /**
     * <p>A list of key-value pairs containing the Apache Airflow configuration options
     * attached to your environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Apache
     * Airflow configuration options</a>.</p>
     */
    inline Environment& WithAirflowConfigurationOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAirflowConfigurationOptions(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs containing the Apache Airflow configuration options
     * attached to your environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Apache
     * Airflow configuration options</a>.</p>
     */
    inline Environment& AddAirflowConfigurationOptions(const Aws::String& key, const Aws::String& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, value); return *this; }

    /**
     * <p>A list of key-value pairs containing the Apache Airflow configuration options
     * attached to your environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Apache
     * Airflow configuration options</a>.</p>
     */
    inline Environment& AddAirflowConfigurationOptions(Aws::String&& key, const Aws::String& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs containing the Apache Airflow configuration options
     * attached to your environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Apache
     * Airflow configuration options</a>.</p>
     */
    inline Environment& AddAirflowConfigurationOptions(const Aws::String& key, Aws::String&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs containing the Apache Airflow configuration options
     * attached to your environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Apache
     * Airflow configuration options</a>.</p>
     */
    inline Environment& AddAirflowConfigurationOptions(Aws::String&& key, Aws::String&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs containing the Apache Airflow configuration options
     * attached to your environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Apache
     * Airflow configuration options</a>.</p>
     */
    inline Environment& AddAirflowConfigurationOptions(const char* key, Aws::String&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs containing the Apache Airflow configuration options
     * attached to your environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Apache
     * Airflow configuration options</a>.</p>
     */
    inline Environment& AddAirflowConfigurationOptions(Aws::String&& key, const char* value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs containing the Apache Airflow configuration options
     * attached to your environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Apache
     * Airflow configuration options</a>.</p>
     */
    inline Environment& AddAirflowConfigurationOptions(const char* key, const char* value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, value); return *this; }


    /**
     * <p>The Apache Airflow version on your environment.</p> <p>Valid values:
     * <code>1.10.12</code>, <code>2.0.2</code>, <code>2.2.2</code>,
     * <code>2.4.3</code>, <code>2.5.1</code>, <code>2.6.3</code>,
     * <code>2.7.2</code>.</p>
     */
    inline const Aws::String& GetAirflowVersion() const{ return m_airflowVersion; }

    /**
     * <p>The Apache Airflow version on your environment.</p> <p>Valid values:
     * <code>1.10.12</code>, <code>2.0.2</code>, <code>2.2.2</code>,
     * <code>2.4.3</code>, <code>2.5.1</code>, <code>2.6.3</code>,
     * <code>2.7.2</code>.</p>
     */
    inline bool AirflowVersionHasBeenSet() const { return m_airflowVersionHasBeenSet; }

    /**
     * <p>The Apache Airflow version on your environment.</p> <p>Valid values:
     * <code>1.10.12</code>, <code>2.0.2</code>, <code>2.2.2</code>,
     * <code>2.4.3</code>, <code>2.5.1</code>, <code>2.6.3</code>,
     * <code>2.7.2</code>.</p>
     */
    inline void SetAirflowVersion(const Aws::String& value) { m_airflowVersionHasBeenSet = true; m_airflowVersion = value; }

    /**
     * <p>The Apache Airflow version on your environment.</p> <p>Valid values:
     * <code>1.10.12</code>, <code>2.0.2</code>, <code>2.2.2</code>,
     * <code>2.4.3</code>, <code>2.5.1</code>, <code>2.6.3</code>,
     * <code>2.7.2</code>.</p>
     */
    inline void SetAirflowVersion(Aws::String&& value) { m_airflowVersionHasBeenSet = true; m_airflowVersion = std::move(value); }

    /**
     * <p>The Apache Airflow version on your environment.</p> <p>Valid values:
     * <code>1.10.12</code>, <code>2.0.2</code>, <code>2.2.2</code>,
     * <code>2.4.3</code>, <code>2.5.1</code>, <code>2.6.3</code>,
     * <code>2.7.2</code>.</p>
     */
    inline void SetAirflowVersion(const char* value) { m_airflowVersionHasBeenSet = true; m_airflowVersion.assign(value); }

    /**
     * <p>The Apache Airflow version on your environment.</p> <p>Valid values:
     * <code>1.10.12</code>, <code>2.0.2</code>, <code>2.2.2</code>,
     * <code>2.4.3</code>, <code>2.5.1</code>, <code>2.6.3</code>,
     * <code>2.7.2</code>.</p>
     */
    inline Environment& WithAirflowVersion(const Aws::String& value) { SetAirflowVersion(value); return *this;}

    /**
     * <p>The Apache Airflow version on your environment.</p> <p>Valid values:
     * <code>1.10.12</code>, <code>2.0.2</code>, <code>2.2.2</code>,
     * <code>2.4.3</code>, <code>2.5.1</code>, <code>2.6.3</code>,
     * <code>2.7.2</code>.</p>
     */
    inline Environment& WithAirflowVersion(Aws::String&& value) { SetAirflowVersion(std::move(value)); return *this;}

    /**
     * <p>The Apache Airflow version on your environment.</p> <p>Valid values:
     * <code>1.10.12</code>, <code>2.0.2</code>, <code>2.2.2</code>,
     * <code>2.4.3</code>, <code>2.5.1</code>, <code>2.6.3</code>,
     * <code>2.7.2</code>.</p>
     */
    inline Environment& WithAirflowVersion(const char* value) { SetAirflowVersion(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon MWAA environment.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon MWAA environment.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon MWAA environment.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon MWAA environment.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon MWAA environment.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon MWAA environment.</p>
     */
    inline Environment& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon MWAA environment.</p>
     */
    inline Environment& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon MWAA environment.</p>
     */
    inline Environment& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The queue ARN for the environment's <a
     * href="https://airflow.apache.org/docs/apache-airflow/stable/core-concepts/executor/celery.html">Celery
     * Executor</a>. Amazon MWAA uses a Celery Executor to distribute tasks across
     * multiple workers. When you create an environment in a shared VPC, you must
     * provide access to the Celery Executor queue from your VPC.</p>
     */
    inline const Aws::String& GetCeleryExecutorQueue() const{ return m_celeryExecutorQueue; }

    /**
     * <p>The queue ARN for the environment's <a
     * href="https://airflow.apache.org/docs/apache-airflow/stable/core-concepts/executor/celery.html">Celery
     * Executor</a>. Amazon MWAA uses a Celery Executor to distribute tasks across
     * multiple workers. When you create an environment in a shared VPC, you must
     * provide access to the Celery Executor queue from your VPC.</p>
     */
    inline bool CeleryExecutorQueueHasBeenSet() const { return m_celeryExecutorQueueHasBeenSet; }

    /**
     * <p>The queue ARN for the environment's <a
     * href="https://airflow.apache.org/docs/apache-airflow/stable/core-concepts/executor/celery.html">Celery
     * Executor</a>. Amazon MWAA uses a Celery Executor to distribute tasks across
     * multiple workers. When you create an environment in a shared VPC, you must
     * provide access to the Celery Executor queue from your VPC.</p>
     */
    inline void SetCeleryExecutorQueue(const Aws::String& value) { m_celeryExecutorQueueHasBeenSet = true; m_celeryExecutorQueue = value; }

    /**
     * <p>The queue ARN for the environment's <a
     * href="https://airflow.apache.org/docs/apache-airflow/stable/core-concepts/executor/celery.html">Celery
     * Executor</a>. Amazon MWAA uses a Celery Executor to distribute tasks across
     * multiple workers. When you create an environment in a shared VPC, you must
     * provide access to the Celery Executor queue from your VPC.</p>
     */
    inline void SetCeleryExecutorQueue(Aws::String&& value) { m_celeryExecutorQueueHasBeenSet = true; m_celeryExecutorQueue = std::move(value); }

    /**
     * <p>The queue ARN for the environment's <a
     * href="https://airflow.apache.org/docs/apache-airflow/stable/core-concepts/executor/celery.html">Celery
     * Executor</a>. Amazon MWAA uses a Celery Executor to distribute tasks across
     * multiple workers. When you create an environment in a shared VPC, you must
     * provide access to the Celery Executor queue from your VPC.</p>
     */
    inline void SetCeleryExecutorQueue(const char* value) { m_celeryExecutorQueueHasBeenSet = true; m_celeryExecutorQueue.assign(value); }

    /**
     * <p>The queue ARN for the environment's <a
     * href="https://airflow.apache.org/docs/apache-airflow/stable/core-concepts/executor/celery.html">Celery
     * Executor</a>. Amazon MWAA uses a Celery Executor to distribute tasks across
     * multiple workers. When you create an environment in a shared VPC, you must
     * provide access to the Celery Executor queue from your VPC.</p>
     */
    inline Environment& WithCeleryExecutorQueue(const Aws::String& value) { SetCeleryExecutorQueue(value); return *this;}

    /**
     * <p>The queue ARN for the environment's <a
     * href="https://airflow.apache.org/docs/apache-airflow/stable/core-concepts/executor/celery.html">Celery
     * Executor</a>. Amazon MWAA uses a Celery Executor to distribute tasks across
     * multiple workers. When you create an environment in a shared VPC, you must
     * provide access to the Celery Executor queue from your VPC.</p>
     */
    inline Environment& WithCeleryExecutorQueue(Aws::String&& value) { SetCeleryExecutorQueue(std::move(value)); return *this;}

    /**
     * <p>The queue ARN for the environment's <a
     * href="https://airflow.apache.org/docs/apache-airflow/stable/core-concepts/executor/celery.html">Celery
     * Executor</a>. Amazon MWAA uses a Celery Executor to distribute tasks across
     * multiple workers. When you create an environment in a shared VPC, you must
     * provide access to the Celery Executor queue from your VPC.</p>
     */
    inline Environment& WithCeleryExecutorQueue(const char* value) { SetCeleryExecutorQueue(value); return *this;}


    /**
     * <p>The day and time the environment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The day and time the environment was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The day and time the environment was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The day and time the environment was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The day and time the environment was created.</p>
     */
    inline Environment& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The day and time the environment was created.</p>
     */
    inline Environment& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The relative path to the DAGs folder in your Amazon S3 bucket. For example,
     * <code>s3://mwaa-environment/dags</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-folder.html">Adding
     * or updating DAGs</a>.</p>
     */
    inline const Aws::String& GetDagS3Path() const{ return m_dagS3Path; }

    /**
     * <p>The relative path to the DAGs folder in your Amazon S3 bucket. For example,
     * <code>s3://mwaa-environment/dags</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-folder.html">Adding
     * or updating DAGs</a>.</p>
     */
    inline bool DagS3PathHasBeenSet() const { return m_dagS3PathHasBeenSet; }

    /**
     * <p>The relative path to the DAGs folder in your Amazon S3 bucket. For example,
     * <code>s3://mwaa-environment/dags</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-folder.html">Adding
     * or updating DAGs</a>.</p>
     */
    inline void SetDagS3Path(const Aws::String& value) { m_dagS3PathHasBeenSet = true; m_dagS3Path = value; }

    /**
     * <p>The relative path to the DAGs folder in your Amazon S3 bucket. For example,
     * <code>s3://mwaa-environment/dags</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-folder.html">Adding
     * or updating DAGs</a>.</p>
     */
    inline void SetDagS3Path(Aws::String&& value) { m_dagS3PathHasBeenSet = true; m_dagS3Path = std::move(value); }

    /**
     * <p>The relative path to the DAGs folder in your Amazon S3 bucket. For example,
     * <code>s3://mwaa-environment/dags</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-folder.html">Adding
     * or updating DAGs</a>.</p>
     */
    inline void SetDagS3Path(const char* value) { m_dagS3PathHasBeenSet = true; m_dagS3Path.assign(value); }

    /**
     * <p>The relative path to the DAGs folder in your Amazon S3 bucket. For example,
     * <code>s3://mwaa-environment/dags</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-folder.html">Adding
     * or updating DAGs</a>.</p>
     */
    inline Environment& WithDagS3Path(const Aws::String& value) { SetDagS3Path(value); return *this;}

    /**
     * <p>The relative path to the DAGs folder in your Amazon S3 bucket. For example,
     * <code>s3://mwaa-environment/dags</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-folder.html">Adding
     * or updating DAGs</a>.</p>
     */
    inline Environment& WithDagS3Path(Aws::String&& value) { SetDagS3Path(std::move(value)); return *this;}

    /**
     * <p>The relative path to the DAGs folder in your Amazon S3 bucket. For example,
     * <code>s3://mwaa-environment/dags</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-folder.html">Adding
     * or updating DAGs</a>.</p>
     */
    inline Environment& WithDagS3Path(const char* value) { SetDagS3Path(value); return *this;}


    /**
     * <p>The VPC endpoint for the environment's Amazon RDS database.</p>
     */
    inline const Aws::String& GetDatabaseVpcEndpointService() const{ return m_databaseVpcEndpointService; }

    /**
     * <p>The VPC endpoint for the environment's Amazon RDS database.</p>
     */
    inline bool DatabaseVpcEndpointServiceHasBeenSet() const { return m_databaseVpcEndpointServiceHasBeenSet; }

    /**
     * <p>The VPC endpoint for the environment's Amazon RDS database.</p>
     */
    inline void SetDatabaseVpcEndpointService(const Aws::String& value) { m_databaseVpcEndpointServiceHasBeenSet = true; m_databaseVpcEndpointService = value; }

    /**
     * <p>The VPC endpoint for the environment's Amazon RDS database.</p>
     */
    inline void SetDatabaseVpcEndpointService(Aws::String&& value) { m_databaseVpcEndpointServiceHasBeenSet = true; m_databaseVpcEndpointService = std::move(value); }

    /**
     * <p>The VPC endpoint for the environment's Amazon RDS database.</p>
     */
    inline void SetDatabaseVpcEndpointService(const char* value) { m_databaseVpcEndpointServiceHasBeenSet = true; m_databaseVpcEndpointService.assign(value); }

    /**
     * <p>The VPC endpoint for the environment's Amazon RDS database.</p>
     */
    inline Environment& WithDatabaseVpcEndpointService(const Aws::String& value) { SetDatabaseVpcEndpointService(value); return *this;}

    /**
     * <p>The VPC endpoint for the environment's Amazon RDS database.</p>
     */
    inline Environment& WithDatabaseVpcEndpointService(Aws::String&& value) { SetDatabaseVpcEndpointService(std::move(value)); return *this;}

    /**
     * <p>The VPC endpoint for the environment's Amazon RDS database.</p>
     */
    inline Environment& WithDatabaseVpcEndpointService(const char* value) { SetDatabaseVpcEndpointService(value); return *this;}


    /**
     * <p>Defines whether the VPC endpoints configured for the environment are created,
     * and managed, by the customer or by Amazon MWAA. If set to <code>SERVICE</code>,
     * Amazon MWAA will create and manage the required VPC endpoints in your VPC. If
     * set to <code>CUSTOMER</code>, you must create, and manage, the VPC endpoints in
     * your VPC.</p>
     */
    inline const EndpointManagement& GetEndpointManagement() const{ return m_endpointManagement; }

    /**
     * <p>Defines whether the VPC endpoints configured for the environment are created,
     * and managed, by the customer or by Amazon MWAA. If set to <code>SERVICE</code>,
     * Amazon MWAA will create and manage the required VPC endpoints in your VPC. If
     * set to <code>CUSTOMER</code>, you must create, and manage, the VPC endpoints in
     * your VPC.</p>
     */
    inline bool EndpointManagementHasBeenSet() const { return m_endpointManagementHasBeenSet; }

    /**
     * <p>Defines whether the VPC endpoints configured for the environment are created,
     * and managed, by the customer or by Amazon MWAA. If set to <code>SERVICE</code>,
     * Amazon MWAA will create and manage the required VPC endpoints in your VPC. If
     * set to <code>CUSTOMER</code>, you must create, and manage, the VPC endpoints in
     * your VPC.</p>
     */
    inline void SetEndpointManagement(const EndpointManagement& value) { m_endpointManagementHasBeenSet = true; m_endpointManagement = value; }

    /**
     * <p>Defines whether the VPC endpoints configured for the environment are created,
     * and managed, by the customer or by Amazon MWAA. If set to <code>SERVICE</code>,
     * Amazon MWAA will create and manage the required VPC endpoints in your VPC. If
     * set to <code>CUSTOMER</code>, you must create, and manage, the VPC endpoints in
     * your VPC.</p>
     */
    inline void SetEndpointManagement(EndpointManagement&& value) { m_endpointManagementHasBeenSet = true; m_endpointManagement = std::move(value); }

    /**
     * <p>Defines whether the VPC endpoints configured for the environment are created,
     * and managed, by the customer or by Amazon MWAA. If set to <code>SERVICE</code>,
     * Amazon MWAA will create and manage the required VPC endpoints in your VPC. If
     * set to <code>CUSTOMER</code>, you must create, and manage, the VPC endpoints in
     * your VPC.</p>
     */
    inline Environment& WithEndpointManagement(const EndpointManagement& value) { SetEndpointManagement(value); return *this;}

    /**
     * <p>Defines whether the VPC endpoints configured for the environment are created,
     * and managed, by the customer or by Amazon MWAA. If set to <code>SERVICE</code>,
     * Amazon MWAA will create and manage the required VPC endpoints in your VPC. If
     * set to <code>CUSTOMER</code>, you must create, and manage, the VPC endpoints in
     * your VPC.</p>
     */
    inline Environment& WithEndpointManagement(EndpointManagement&& value) { SetEndpointManagement(std::move(value)); return *this;}


    /**
     * <p>The environment class type. Valid values: <code>mw1.small</code>,
     * <code>mw1.medium</code>, <code>mw1.large</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/environment-class.html">Amazon
     * MWAA environment class</a>.</p>
     */
    inline const Aws::String& GetEnvironmentClass() const{ return m_environmentClass; }

    /**
     * <p>The environment class type. Valid values: <code>mw1.small</code>,
     * <code>mw1.medium</code>, <code>mw1.large</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/environment-class.html">Amazon
     * MWAA environment class</a>.</p>
     */
    inline bool EnvironmentClassHasBeenSet() const { return m_environmentClassHasBeenSet; }

    /**
     * <p>The environment class type. Valid values: <code>mw1.small</code>,
     * <code>mw1.medium</code>, <code>mw1.large</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/environment-class.html">Amazon
     * MWAA environment class</a>.</p>
     */
    inline void SetEnvironmentClass(const Aws::String& value) { m_environmentClassHasBeenSet = true; m_environmentClass = value; }

    /**
     * <p>The environment class type. Valid values: <code>mw1.small</code>,
     * <code>mw1.medium</code>, <code>mw1.large</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/environment-class.html">Amazon
     * MWAA environment class</a>.</p>
     */
    inline void SetEnvironmentClass(Aws::String&& value) { m_environmentClassHasBeenSet = true; m_environmentClass = std::move(value); }

    /**
     * <p>The environment class type. Valid values: <code>mw1.small</code>,
     * <code>mw1.medium</code>, <code>mw1.large</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/environment-class.html">Amazon
     * MWAA environment class</a>.</p>
     */
    inline void SetEnvironmentClass(const char* value) { m_environmentClassHasBeenSet = true; m_environmentClass.assign(value); }

    /**
     * <p>The environment class type. Valid values: <code>mw1.small</code>,
     * <code>mw1.medium</code>, <code>mw1.large</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/environment-class.html">Amazon
     * MWAA environment class</a>.</p>
     */
    inline Environment& WithEnvironmentClass(const Aws::String& value) { SetEnvironmentClass(value); return *this;}

    /**
     * <p>The environment class type. Valid values: <code>mw1.small</code>,
     * <code>mw1.medium</code>, <code>mw1.large</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/environment-class.html">Amazon
     * MWAA environment class</a>.</p>
     */
    inline Environment& WithEnvironmentClass(Aws::String&& value) { SetEnvironmentClass(std::move(value)); return *this;}

    /**
     * <p>The environment class type. Valid values: <code>mw1.small</code>,
     * <code>mw1.medium</code>, <code>mw1.large</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/environment-class.html">Amazon
     * MWAA environment class</a>.</p>
     */
    inline Environment& WithEnvironmentClass(const char* value) { SetEnvironmentClass(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the execution role in IAM that allows MWAA
     * to access Amazon Web Services resources in your environment. For example,
     * <code>arn:aws:iam::123456789:role/my-execution-role</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-create-role.html">Amazon
     * MWAA Execution role</a>.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role in IAM that allows MWAA
     * to access Amazon Web Services resources in your environment. For example,
     * <code>arn:aws:iam::123456789:role/my-execution-role</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-create-role.html">Amazon
     * MWAA Execution role</a>.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role in IAM that allows MWAA
     * to access Amazon Web Services resources in your environment. For example,
     * <code>arn:aws:iam::123456789:role/my-execution-role</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-create-role.html">Amazon
     * MWAA Execution role</a>.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role in IAM that allows MWAA
     * to access Amazon Web Services resources in your environment. For example,
     * <code>arn:aws:iam::123456789:role/my-execution-role</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-create-role.html">Amazon
     * MWAA Execution role</a>.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role in IAM that allows MWAA
     * to access Amazon Web Services resources in your environment. For example,
     * <code>arn:aws:iam::123456789:role/my-execution-role</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-create-role.html">Amazon
     * MWAA Execution role</a>.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role in IAM that allows MWAA
     * to access Amazon Web Services resources in your environment. For example,
     * <code>arn:aws:iam::123456789:role/my-execution-role</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-create-role.html">Amazon
     * MWAA Execution role</a>.</p>
     */
    inline Environment& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role in IAM that allows MWAA
     * to access Amazon Web Services resources in your environment. For example,
     * <code>arn:aws:iam::123456789:role/my-execution-role</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-create-role.html">Amazon
     * MWAA Execution role</a>.</p>
     */
    inline Environment& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role in IAM that allows MWAA
     * to access Amazon Web Services resources in your environment. For example,
     * <code>arn:aws:iam::123456789:role/my-execution-role</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-create-role.html">Amazon
     * MWAA Execution role</a>.</p>
     */
    inline Environment& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>The KMS encryption key used to encrypt the data in your environment.</p>
     */
    inline const Aws::String& GetKmsKey() const{ return m_kmsKey; }

    /**
     * <p>The KMS encryption key used to encrypt the data in your environment.</p>
     */
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }

    /**
     * <p>The KMS encryption key used to encrypt the data in your environment.</p>
     */
    inline void SetKmsKey(const Aws::String& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = value; }

    /**
     * <p>The KMS encryption key used to encrypt the data in your environment.</p>
     */
    inline void SetKmsKey(Aws::String&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::move(value); }

    /**
     * <p>The KMS encryption key used to encrypt the data in your environment.</p>
     */
    inline void SetKmsKey(const char* value) { m_kmsKeyHasBeenSet = true; m_kmsKey.assign(value); }

    /**
     * <p>The KMS encryption key used to encrypt the data in your environment.</p>
     */
    inline Environment& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}

    /**
     * <p>The KMS encryption key used to encrypt the data in your environment.</p>
     */
    inline Environment& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}

    /**
     * <p>The KMS encryption key used to encrypt the data in your environment.</p>
     */
    inline Environment& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}


    /**
     * <p>The status of the last update on the environment.</p>
     */
    inline const LastUpdate& GetLastUpdate() const{ return m_lastUpdate; }

    /**
     * <p>The status of the last update on the environment.</p>
     */
    inline bool LastUpdateHasBeenSet() const { return m_lastUpdateHasBeenSet; }

    /**
     * <p>The status of the last update on the environment.</p>
     */
    inline void SetLastUpdate(const LastUpdate& value) { m_lastUpdateHasBeenSet = true; m_lastUpdate = value; }

    /**
     * <p>The status of the last update on the environment.</p>
     */
    inline void SetLastUpdate(LastUpdate&& value) { m_lastUpdateHasBeenSet = true; m_lastUpdate = std::move(value); }

    /**
     * <p>The status of the last update on the environment.</p>
     */
    inline Environment& WithLastUpdate(const LastUpdate& value) { SetLastUpdate(value); return *this;}

    /**
     * <p>The status of the last update on the environment.</p>
     */
    inline Environment& WithLastUpdate(LastUpdate&& value) { SetLastUpdate(std::move(value)); return *this;}


    /**
     * <p>The Apache Airflow logs published to CloudWatch Logs.</p>
     */
    inline const LoggingConfiguration& GetLoggingConfiguration() const{ return m_loggingConfiguration; }

    /**
     * <p>The Apache Airflow logs published to CloudWatch Logs.</p>
     */
    inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }

    /**
     * <p>The Apache Airflow logs published to CloudWatch Logs.</p>
     */
    inline void SetLoggingConfiguration(const LoggingConfiguration& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = value; }

    /**
     * <p>The Apache Airflow logs published to CloudWatch Logs.</p>
     */
    inline void SetLoggingConfiguration(LoggingConfiguration&& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = std::move(value); }

    /**
     * <p>The Apache Airflow logs published to CloudWatch Logs.</p>
     */
    inline Environment& WithLoggingConfiguration(const LoggingConfiguration& value) { SetLoggingConfiguration(value); return *this;}

    /**
     * <p>The Apache Airflow logs published to CloudWatch Logs.</p>
     */
    inline Environment& WithLoggingConfiguration(LoggingConfiguration&& value) { SetLoggingConfiguration(std::move(value)); return *this;}


    /**
     * <p>The maximum number of workers that run in your environment. For example,
     * <code>20</code>.</p>
     */
    inline int GetMaxWorkers() const{ return m_maxWorkers; }

    /**
     * <p>The maximum number of workers that run in your environment. For example,
     * <code>20</code>.</p>
     */
    inline bool MaxWorkersHasBeenSet() const { return m_maxWorkersHasBeenSet; }

    /**
     * <p>The maximum number of workers that run in your environment. For example,
     * <code>20</code>.</p>
     */
    inline void SetMaxWorkers(int value) { m_maxWorkersHasBeenSet = true; m_maxWorkers = value; }

    /**
     * <p>The maximum number of workers that run in your environment. For example,
     * <code>20</code>.</p>
     */
    inline Environment& WithMaxWorkers(int value) { SetMaxWorkers(value); return *this;}


    /**
     * <p>The minimum number of workers that run in your environment. For example,
     * <code>2</code>.</p>
     */
    inline int GetMinWorkers() const{ return m_minWorkers; }

    /**
     * <p>The minimum number of workers that run in your environment. For example,
     * <code>2</code>.</p>
     */
    inline bool MinWorkersHasBeenSet() const { return m_minWorkersHasBeenSet; }

    /**
     * <p>The minimum number of workers that run in your environment. For example,
     * <code>2</code>.</p>
     */
    inline void SetMinWorkers(int value) { m_minWorkersHasBeenSet = true; m_minWorkers = value; }

    /**
     * <p>The minimum number of workers that run in your environment. For example,
     * <code>2</code>.</p>
     */
    inline Environment& WithMinWorkers(int value) { SetMinWorkers(value); return *this;}


    /**
     * <p>The name of the Amazon MWAA environment. For example,
     * <code>MyMWAAEnvironment</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Amazon MWAA environment. For example,
     * <code>MyMWAAEnvironment</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Amazon MWAA environment. For example,
     * <code>MyMWAAEnvironment</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Amazon MWAA environment. For example,
     * <code>MyMWAAEnvironment</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Amazon MWAA environment. For example,
     * <code>MyMWAAEnvironment</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Amazon MWAA environment. For example,
     * <code>MyMWAAEnvironment</code>.</p>
     */
    inline Environment& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Amazon MWAA environment. For example,
     * <code>MyMWAAEnvironment</code>.</p>
     */
    inline Environment& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon MWAA environment. For example,
     * <code>MyMWAAEnvironment</code>.</p>
     */
    inline Environment& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Describes the VPC networking components used to secure and enable network
     * traffic between the Amazon Web Services resources for your environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/networking-about.html">About
     * networking on Amazon MWAA</a>.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }

    /**
     * <p>Describes the VPC networking components used to secure and enable network
     * traffic between the Amazon Web Services resources for your environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/networking-about.html">About
     * networking on Amazon MWAA</a>.</p>
     */
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }

    /**
     * <p>Describes the VPC networking components used to secure and enable network
     * traffic between the Amazon Web Services resources for your environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/networking-about.html">About
     * networking on Amazon MWAA</a>.</p>
     */
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }

    /**
     * <p>Describes the VPC networking components used to secure and enable network
     * traffic between the Amazon Web Services resources for your environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/networking-about.html">About
     * networking on Amazon MWAA</a>.</p>
     */
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }

    /**
     * <p>Describes the VPC networking components used to secure and enable network
     * traffic between the Amazon Web Services resources for your environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/networking-about.html">About
     * networking on Amazon MWAA</a>.</p>
     */
    inline Environment& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}

    /**
     * <p>Describes the VPC networking components used to secure and enable network
     * traffic between the Amazon Web Services resources for your environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/networking-about.html">About
     * networking on Amazon MWAA</a>.</p>
     */
    inline Environment& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}


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
    inline bool PluginsS3ObjectVersionHasBeenSet() const { return m_pluginsS3ObjectVersionHasBeenSet; }

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
    inline void SetPluginsS3ObjectVersion(const Aws::String& value) { m_pluginsS3ObjectVersionHasBeenSet = true; m_pluginsS3ObjectVersion = value; }

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
    inline void SetPluginsS3ObjectVersion(Aws::String&& value) { m_pluginsS3ObjectVersionHasBeenSet = true; m_pluginsS3ObjectVersion = std::move(value); }

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
    inline void SetPluginsS3ObjectVersion(const char* value) { m_pluginsS3ObjectVersionHasBeenSet = true; m_pluginsS3ObjectVersion.assign(value); }

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
    inline Environment& WithPluginsS3ObjectVersion(const Aws::String& value) { SetPluginsS3ObjectVersion(value); return *this;}

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
    inline Environment& WithPluginsS3ObjectVersion(Aws::String&& value) { SetPluginsS3ObjectVersion(std::move(value)); return *this;}

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
    inline Environment& WithPluginsS3ObjectVersion(const char* value) { SetPluginsS3ObjectVersion(value); return *this;}


    /**
     * <p>The relative path to the file in your Amazon S3 bucket. For example,
     * <code>s3://mwaa-environment/plugins.zip</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import-plugins.html">Installing
     * custom plugins</a>.</p>
     */
    inline const Aws::String& GetPluginsS3Path() const{ return m_pluginsS3Path; }

    /**
     * <p>The relative path to the file in your Amazon S3 bucket. For example,
     * <code>s3://mwaa-environment/plugins.zip</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import-plugins.html">Installing
     * custom plugins</a>.</p>
     */
    inline bool PluginsS3PathHasBeenSet() const { return m_pluginsS3PathHasBeenSet; }

    /**
     * <p>The relative path to the file in your Amazon S3 bucket. For example,
     * <code>s3://mwaa-environment/plugins.zip</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import-plugins.html">Installing
     * custom plugins</a>.</p>
     */
    inline void SetPluginsS3Path(const Aws::String& value) { m_pluginsS3PathHasBeenSet = true; m_pluginsS3Path = value; }

    /**
     * <p>The relative path to the file in your Amazon S3 bucket. For example,
     * <code>s3://mwaa-environment/plugins.zip</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import-plugins.html">Installing
     * custom plugins</a>.</p>
     */
    inline void SetPluginsS3Path(Aws::String&& value) { m_pluginsS3PathHasBeenSet = true; m_pluginsS3Path = std::move(value); }

    /**
     * <p>The relative path to the file in your Amazon S3 bucket. For example,
     * <code>s3://mwaa-environment/plugins.zip</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import-plugins.html">Installing
     * custom plugins</a>.</p>
     */
    inline void SetPluginsS3Path(const char* value) { m_pluginsS3PathHasBeenSet = true; m_pluginsS3Path.assign(value); }

    /**
     * <p>The relative path to the file in your Amazon S3 bucket. For example,
     * <code>s3://mwaa-environment/plugins.zip</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import-plugins.html">Installing
     * custom plugins</a>.</p>
     */
    inline Environment& WithPluginsS3Path(const Aws::String& value) { SetPluginsS3Path(value); return *this;}

    /**
     * <p>The relative path to the file in your Amazon S3 bucket. For example,
     * <code>s3://mwaa-environment/plugins.zip</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import-plugins.html">Installing
     * custom plugins</a>.</p>
     */
    inline Environment& WithPluginsS3Path(Aws::String&& value) { SetPluginsS3Path(std::move(value)); return *this;}

    /**
     * <p>The relative path to the file in your Amazon S3 bucket. For example,
     * <code>s3://mwaa-environment/plugins.zip</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import-plugins.html">Installing
     * custom plugins</a>.</p>
     */
    inline Environment& WithPluginsS3Path(const char* value) { SetPluginsS3Path(value); return *this;}


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
    inline bool RequirementsS3ObjectVersionHasBeenSet() const { return m_requirementsS3ObjectVersionHasBeenSet; }

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
    inline void SetRequirementsS3ObjectVersion(const Aws::String& value) { m_requirementsS3ObjectVersionHasBeenSet = true; m_requirementsS3ObjectVersion = value; }

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
    inline void SetRequirementsS3ObjectVersion(Aws::String&& value) { m_requirementsS3ObjectVersionHasBeenSet = true; m_requirementsS3ObjectVersion = std::move(value); }

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
    inline void SetRequirementsS3ObjectVersion(const char* value) { m_requirementsS3ObjectVersionHasBeenSet = true; m_requirementsS3ObjectVersion.assign(value); }

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
    inline Environment& WithRequirementsS3ObjectVersion(const Aws::String& value) { SetRequirementsS3ObjectVersion(value); return *this;}

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
    inline Environment& WithRequirementsS3ObjectVersion(Aws::String&& value) { SetRequirementsS3ObjectVersion(std::move(value)); return *this;}

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
    inline Environment& WithRequirementsS3ObjectVersion(const char* value) { SetRequirementsS3ObjectVersion(value); return *this;}


    /**
     * <p>The relative path to the <code>requirements.txt</code> file in your Amazon S3
     * bucket. For example, <code>s3://mwaa-environment/requirements.txt</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/working-dags-dependencies.html">Installing
     * Python dependencies</a>.</p>
     */
    inline const Aws::String& GetRequirementsS3Path() const{ return m_requirementsS3Path; }

    /**
     * <p>The relative path to the <code>requirements.txt</code> file in your Amazon S3
     * bucket. For example, <code>s3://mwaa-environment/requirements.txt</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/working-dags-dependencies.html">Installing
     * Python dependencies</a>.</p>
     */
    inline bool RequirementsS3PathHasBeenSet() const { return m_requirementsS3PathHasBeenSet; }

    /**
     * <p>The relative path to the <code>requirements.txt</code> file in your Amazon S3
     * bucket. For example, <code>s3://mwaa-environment/requirements.txt</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/working-dags-dependencies.html">Installing
     * Python dependencies</a>.</p>
     */
    inline void SetRequirementsS3Path(const Aws::String& value) { m_requirementsS3PathHasBeenSet = true; m_requirementsS3Path = value; }

    /**
     * <p>The relative path to the <code>requirements.txt</code> file in your Amazon S3
     * bucket. For example, <code>s3://mwaa-environment/requirements.txt</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/working-dags-dependencies.html">Installing
     * Python dependencies</a>.</p>
     */
    inline void SetRequirementsS3Path(Aws::String&& value) { m_requirementsS3PathHasBeenSet = true; m_requirementsS3Path = std::move(value); }

    /**
     * <p>The relative path to the <code>requirements.txt</code> file in your Amazon S3
     * bucket. For example, <code>s3://mwaa-environment/requirements.txt</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/working-dags-dependencies.html">Installing
     * Python dependencies</a>.</p>
     */
    inline void SetRequirementsS3Path(const char* value) { m_requirementsS3PathHasBeenSet = true; m_requirementsS3Path.assign(value); }

    /**
     * <p>The relative path to the <code>requirements.txt</code> file in your Amazon S3
     * bucket. For example, <code>s3://mwaa-environment/requirements.txt</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/working-dags-dependencies.html">Installing
     * Python dependencies</a>.</p>
     */
    inline Environment& WithRequirementsS3Path(const Aws::String& value) { SetRequirementsS3Path(value); return *this;}

    /**
     * <p>The relative path to the <code>requirements.txt</code> file in your Amazon S3
     * bucket. For example, <code>s3://mwaa-environment/requirements.txt</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/working-dags-dependencies.html">Installing
     * Python dependencies</a>.</p>
     */
    inline Environment& WithRequirementsS3Path(Aws::String&& value) { SetRequirementsS3Path(std::move(value)); return *this;}

    /**
     * <p>The relative path to the <code>requirements.txt</code> file in your Amazon S3
     * bucket. For example, <code>s3://mwaa-environment/requirements.txt</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/working-dags-dependencies.html">Installing
     * Python dependencies</a>.</p>
     */
    inline Environment& WithRequirementsS3Path(const char* value) { SetRequirementsS3Path(value); return *this;}


    /**
     * <p>The number of Apache Airflow schedulers that run in your Amazon MWAA
     * environment.</p>
     */
    inline int GetSchedulers() const{ return m_schedulers; }

    /**
     * <p>The number of Apache Airflow schedulers that run in your Amazon MWAA
     * environment.</p>
     */
    inline bool SchedulersHasBeenSet() const { return m_schedulersHasBeenSet; }

    /**
     * <p>The number of Apache Airflow schedulers that run in your Amazon MWAA
     * environment.</p>
     */
    inline void SetSchedulers(int value) { m_schedulersHasBeenSet = true; m_schedulers = value; }

    /**
     * <p>The number of Apache Airflow schedulers that run in your Amazon MWAA
     * environment.</p>
     */
    inline Environment& WithSchedulers(int value) { SetSchedulers(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the service-linked role of the
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-slr.html">Amazon
     * MWAA Service-linked role</a>.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the service-linked role of the
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-slr.html">Amazon
     * MWAA Service-linked role</a>.</p>
     */
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the service-linked role of the
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-slr.html">Amazon
     * MWAA Service-linked role</a>.</p>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the service-linked role of the
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-slr.html">Amazon
     * MWAA Service-linked role</a>.</p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the service-linked role of the
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-slr.html">Amazon
     * MWAA Service-linked role</a>.</p>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the service-linked role of the
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-slr.html">Amazon
     * MWAA Service-linked role</a>.</p>
     */
    inline Environment& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the service-linked role of the
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-slr.html">Amazon
     * MWAA Service-linked role</a>.</p>
     */
    inline Environment& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the service-linked role of the
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-slr.html">Amazon
     * MWAA Service-linked role</a>.</p>
     */
    inline Environment& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket where your DAG code
     * and supporting files are stored. For example,
     * <code>arn:aws:s3:::my-airflow-bucket-unique-name</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-s3-bucket.html">Create
     * an Amazon S3 bucket for Amazon MWAA</a>.</p>
     */
    inline const Aws::String& GetSourceBucketArn() const{ return m_sourceBucketArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket where your DAG code
     * and supporting files are stored. For example,
     * <code>arn:aws:s3:::my-airflow-bucket-unique-name</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-s3-bucket.html">Create
     * an Amazon S3 bucket for Amazon MWAA</a>.</p>
     */
    inline bool SourceBucketArnHasBeenSet() const { return m_sourceBucketArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket where your DAG code
     * and supporting files are stored. For example,
     * <code>arn:aws:s3:::my-airflow-bucket-unique-name</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-s3-bucket.html">Create
     * an Amazon S3 bucket for Amazon MWAA</a>.</p>
     */
    inline void SetSourceBucketArn(const Aws::String& value) { m_sourceBucketArnHasBeenSet = true; m_sourceBucketArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket where your DAG code
     * and supporting files are stored. For example,
     * <code>arn:aws:s3:::my-airflow-bucket-unique-name</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-s3-bucket.html">Create
     * an Amazon S3 bucket for Amazon MWAA</a>.</p>
     */
    inline void SetSourceBucketArn(Aws::String&& value) { m_sourceBucketArnHasBeenSet = true; m_sourceBucketArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket where your DAG code
     * and supporting files are stored. For example,
     * <code>arn:aws:s3:::my-airflow-bucket-unique-name</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-s3-bucket.html">Create
     * an Amazon S3 bucket for Amazon MWAA</a>.</p>
     */
    inline void SetSourceBucketArn(const char* value) { m_sourceBucketArnHasBeenSet = true; m_sourceBucketArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket where your DAG code
     * and supporting files are stored. For example,
     * <code>arn:aws:s3:::my-airflow-bucket-unique-name</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-s3-bucket.html">Create
     * an Amazon S3 bucket for Amazon MWAA</a>.</p>
     */
    inline Environment& WithSourceBucketArn(const Aws::String& value) { SetSourceBucketArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket where your DAG code
     * and supporting files are stored. For example,
     * <code>arn:aws:s3:::my-airflow-bucket-unique-name</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-s3-bucket.html">Create
     * an Amazon S3 bucket for Amazon MWAA</a>.</p>
     */
    inline Environment& WithSourceBucketArn(Aws::String&& value) { SetSourceBucketArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket where your DAG code
     * and supporting files are stored. For example,
     * <code>arn:aws:s3:::my-airflow-bucket-unique-name</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-s3-bucket.html">Create
     * an Amazon S3 bucket for Amazon MWAA</a>.</p>
     */
    inline Environment& WithSourceBucketArn(const char* value) { SetSourceBucketArn(value); return *this;}


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
    inline bool StartupScriptS3ObjectVersionHasBeenSet() const { return m_startupScriptS3ObjectVersionHasBeenSet; }

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
    inline void SetStartupScriptS3ObjectVersion(const Aws::String& value) { m_startupScriptS3ObjectVersionHasBeenSet = true; m_startupScriptS3ObjectVersion = value; }

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
    inline void SetStartupScriptS3ObjectVersion(Aws::String&& value) { m_startupScriptS3ObjectVersionHasBeenSet = true; m_startupScriptS3ObjectVersion = std::move(value); }

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
    inline void SetStartupScriptS3ObjectVersion(const char* value) { m_startupScriptS3ObjectVersionHasBeenSet = true; m_startupScriptS3ObjectVersion.assign(value); }

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
    inline Environment& WithStartupScriptS3ObjectVersion(const Aws::String& value) { SetStartupScriptS3ObjectVersion(value); return *this;}

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
    inline Environment& WithStartupScriptS3ObjectVersion(Aws::String&& value) { SetStartupScriptS3ObjectVersion(std::move(value)); return *this;}

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
    inline Environment& WithStartupScriptS3ObjectVersion(const char* value) { SetStartupScriptS3ObjectVersion(value); return *this;}


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
    inline bool StartupScriptS3PathHasBeenSet() const { return m_startupScriptS3PathHasBeenSet; }

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
    inline void SetStartupScriptS3Path(const Aws::String& value) { m_startupScriptS3PathHasBeenSet = true; m_startupScriptS3Path = value; }

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
    inline void SetStartupScriptS3Path(Aws::String&& value) { m_startupScriptS3PathHasBeenSet = true; m_startupScriptS3Path = std::move(value); }

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
    inline void SetStartupScriptS3Path(const char* value) { m_startupScriptS3PathHasBeenSet = true; m_startupScriptS3Path.assign(value); }

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
    inline Environment& WithStartupScriptS3Path(const Aws::String& value) { SetStartupScriptS3Path(value); return *this;}

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
    inline Environment& WithStartupScriptS3Path(Aws::String&& value) { SetStartupScriptS3Path(std::move(value)); return *this;}

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
    inline Environment& WithStartupScriptS3Path(const char* value) { SetStartupScriptS3Path(value); return *this;}


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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
    inline void SetStatus(const EnvironmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

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
    inline void SetStatus(EnvironmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

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
    inline Environment& WithStatus(const EnvironmentStatus& value) { SetStatus(value); return *this;}

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
    inline Environment& WithStatus(EnvironmentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The key-value tag pairs associated to your environment. For example,
     * <code>"Environment": "Staging"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value tag pairs associated to your environment. For example,
     * <code>"Environment": "Staging"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value tag pairs associated to your environment. For example,
     * <code>"Environment": "Staging"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value tag pairs associated to your environment. For example,
     * <code>"Environment": "Staging"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value tag pairs associated to your environment. For example,
     * <code>"Environment": "Staging"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline Environment& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value tag pairs associated to your environment. For example,
     * <code>"Environment": "Staging"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline Environment& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value tag pairs associated to your environment. For example,
     * <code>"Environment": "Staging"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline Environment& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The key-value tag pairs associated to your environment. For example,
     * <code>"Environment": "Staging"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline Environment& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value tag pairs associated to your environment. For example,
     * <code>"Environment": "Staging"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline Environment& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value tag pairs associated to your environment. For example,
     * <code>"Environment": "Staging"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline Environment& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The key-value tag pairs associated to your environment. For example,
     * <code>"Environment": "Staging"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline Environment& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value tag pairs associated to your environment. For example,
     * <code>"Environment": "Staging"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline Environment& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value tag pairs associated to your environment. For example,
     * <code>"Environment": "Staging"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline Environment& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The Apache Airflow <i>web server</i> access mode. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-networking.html">Apache
     * Airflow access modes</a>.</p>
     */
    inline const WebserverAccessMode& GetWebserverAccessMode() const{ return m_webserverAccessMode; }

    /**
     * <p>The Apache Airflow <i>web server</i> access mode. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-networking.html">Apache
     * Airflow access modes</a>.</p>
     */
    inline bool WebserverAccessModeHasBeenSet() const { return m_webserverAccessModeHasBeenSet; }

    /**
     * <p>The Apache Airflow <i>web server</i> access mode. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-networking.html">Apache
     * Airflow access modes</a>.</p>
     */
    inline void SetWebserverAccessMode(const WebserverAccessMode& value) { m_webserverAccessModeHasBeenSet = true; m_webserverAccessMode = value; }

    /**
     * <p>The Apache Airflow <i>web server</i> access mode. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-networking.html">Apache
     * Airflow access modes</a>.</p>
     */
    inline void SetWebserverAccessMode(WebserverAccessMode&& value) { m_webserverAccessModeHasBeenSet = true; m_webserverAccessMode = std::move(value); }

    /**
     * <p>The Apache Airflow <i>web server</i> access mode. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-networking.html">Apache
     * Airflow access modes</a>.</p>
     */
    inline Environment& WithWebserverAccessMode(const WebserverAccessMode& value) { SetWebserverAccessMode(value); return *this;}

    /**
     * <p>The Apache Airflow <i>web server</i> access mode. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-networking.html">Apache
     * Airflow access modes</a>.</p>
     */
    inline Environment& WithWebserverAccessMode(WebserverAccessMode&& value) { SetWebserverAccessMode(std::move(value)); return *this;}


    /**
     * <p>The Apache Airflow <i>web server</i> host name for the Amazon MWAA
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/access-airflow-ui.html">Accessing
     * the Apache Airflow UI</a>.</p>
     */
    inline const Aws::String& GetWebserverUrl() const{ return m_webserverUrl; }

    /**
     * <p>The Apache Airflow <i>web server</i> host name for the Amazon MWAA
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/access-airflow-ui.html">Accessing
     * the Apache Airflow UI</a>.</p>
     */
    inline bool WebserverUrlHasBeenSet() const { return m_webserverUrlHasBeenSet; }

    /**
     * <p>The Apache Airflow <i>web server</i> host name for the Amazon MWAA
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/access-airflow-ui.html">Accessing
     * the Apache Airflow UI</a>.</p>
     */
    inline void SetWebserverUrl(const Aws::String& value) { m_webserverUrlHasBeenSet = true; m_webserverUrl = value; }

    /**
     * <p>The Apache Airflow <i>web server</i> host name for the Amazon MWAA
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/access-airflow-ui.html">Accessing
     * the Apache Airflow UI</a>.</p>
     */
    inline void SetWebserverUrl(Aws::String&& value) { m_webserverUrlHasBeenSet = true; m_webserverUrl = std::move(value); }

    /**
     * <p>The Apache Airflow <i>web server</i> host name for the Amazon MWAA
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/access-airflow-ui.html">Accessing
     * the Apache Airflow UI</a>.</p>
     */
    inline void SetWebserverUrl(const char* value) { m_webserverUrlHasBeenSet = true; m_webserverUrl.assign(value); }

    /**
     * <p>The Apache Airflow <i>web server</i> host name for the Amazon MWAA
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/access-airflow-ui.html">Accessing
     * the Apache Airflow UI</a>.</p>
     */
    inline Environment& WithWebserverUrl(const Aws::String& value) { SetWebserverUrl(value); return *this;}

    /**
     * <p>The Apache Airflow <i>web server</i> host name for the Amazon MWAA
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/access-airflow-ui.html">Accessing
     * the Apache Airflow UI</a>.</p>
     */
    inline Environment& WithWebserverUrl(Aws::String&& value) { SetWebserverUrl(std::move(value)); return *this;}

    /**
     * <p>The Apache Airflow <i>web server</i> host name for the Amazon MWAA
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/access-airflow-ui.html">Accessing
     * the Apache Airflow UI</a>.</p>
     */
    inline Environment& WithWebserverUrl(const char* value) { SetWebserverUrl(value); return *this;}


    /**
     * <p>The VPC endpoint for the environment's web server.</p>
     */
    inline const Aws::String& GetWebserverVpcEndpointService() const{ return m_webserverVpcEndpointService; }

    /**
     * <p>The VPC endpoint for the environment's web server.</p>
     */
    inline bool WebserverVpcEndpointServiceHasBeenSet() const { return m_webserverVpcEndpointServiceHasBeenSet; }

    /**
     * <p>The VPC endpoint for the environment's web server.</p>
     */
    inline void SetWebserverVpcEndpointService(const Aws::String& value) { m_webserverVpcEndpointServiceHasBeenSet = true; m_webserverVpcEndpointService = value; }

    /**
     * <p>The VPC endpoint for the environment's web server.</p>
     */
    inline void SetWebserverVpcEndpointService(Aws::String&& value) { m_webserverVpcEndpointServiceHasBeenSet = true; m_webserverVpcEndpointService = std::move(value); }

    /**
     * <p>The VPC endpoint for the environment's web server.</p>
     */
    inline void SetWebserverVpcEndpointService(const char* value) { m_webserverVpcEndpointServiceHasBeenSet = true; m_webserverVpcEndpointService.assign(value); }

    /**
     * <p>The VPC endpoint for the environment's web server.</p>
     */
    inline Environment& WithWebserverVpcEndpointService(const Aws::String& value) { SetWebserverVpcEndpointService(value); return *this;}

    /**
     * <p>The VPC endpoint for the environment's web server.</p>
     */
    inline Environment& WithWebserverVpcEndpointService(Aws::String&& value) { SetWebserverVpcEndpointService(std::move(value)); return *this;}

    /**
     * <p>The VPC endpoint for the environment's web server.</p>
     */
    inline Environment& WithWebserverVpcEndpointService(const char* value) { SetWebserverVpcEndpointService(value); return *this;}


    /**
     * <p>The day and time of the week in Coordinated Universal Time (UTC) 24-hour
     * standard time that weekly maintenance updates are scheduled. For example:
     * <code>TUE:03:30</code>.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceWindowStart() const{ return m_weeklyMaintenanceWindowStart; }

    /**
     * <p>The day and time of the week in Coordinated Universal Time (UTC) 24-hour
     * standard time that weekly maintenance updates are scheduled. For example:
     * <code>TUE:03:30</code>.</p>
     */
    inline bool WeeklyMaintenanceWindowStartHasBeenSet() const { return m_weeklyMaintenanceWindowStartHasBeenSet; }

    /**
     * <p>The day and time of the week in Coordinated Universal Time (UTC) 24-hour
     * standard time that weekly maintenance updates are scheduled. For example:
     * <code>TUE:03:30</code>.</p>
     */
    inline void SetWeeklyMaintenanceWindowStart(const Aws::String& value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart = value; }

    /**
     * <p>The day and time of the week in Coordinated Universal Time (UTC) 24-hour
     * standard time that weekly maintenance updates are scheduled. For example:
     * <code>TUE:03:30</code>.</p>
     */
    inline void SetWeeklyMaintenanceWindowStart(Aws::String&& value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart = std::move(value); }

    /**
     * <p>The day and time of the week in Coordinated Universal Time (UTC) 24-hour
     * standard time that weekly maintenance updates are scheduled. For example:
     * <code>TUE:03:30</code>.</p>
     */
    inline void SetWeeklyMaintenanceWindowStart(const char* value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart.assign(value); }

    /**
     * <p>The day and time of the week in Coordinated Universal Time (UTC) 24-hour
     * standard time that weekly maintenance updates are scheduled. For example:
     * <code>TUE:03:30</code>.</p>
     */
    inline Environment& WithWeeklyMaintenanceWindowStart(const Aws::String& value) { SetWeeklyMaintenanceWindowStart(value); return *this;}

    /**
     * <p>The day and time of the week in Coordinated Universal Time (UTC) 24-hour
     * standard time that weekly maintenance updates are scheduled. For example:
     * <code>TUE:03:30</code>.</p>
     */
    inline Environment& WithWeeklyMaintenanceWindowStart(Aws::String&& value) { SetWeeklyMaintenanceWindowStart(std::move(value)); return *this;}

    /**
     * <p>The day and time of the week in Coordinated Universal Time (UTC) 24-hour
     * standard time that weekly maintenance updates are scheduled. For example:
     * <code>TUE:03:30</code>.</p>
     */
    inline Environment& WithWeeklyMaintenanceWindowStart(const char* value) { SetWeeklyMaintenanceWindowStart(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_airflowConfigurationOptions;
    bool m_airflowConfigurationOptionsHasBeenSet = false;

    Aws::String m_airflowVersion;
    bool m_airflowVersionHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_celeryExecutorQueue;
    bool m_celeryExecutorQueueHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_dagS3Path;
    bool m_dagS3PathHasBeenSet = false;

    Aws::String m_databaseVpcEndpointService;
    bool m_databaseVpcEndpointServiceHasBeenSet = false;

    EndpointManagement m_endpointManagement;
    bool m_endpointManagementHasBeenSet = false;

    Aws::String m_environmentClass;
    bool m_environmentClassHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;

    LastUpdate m_lastUpdate;
    bool m_lastUpdateHasBeenSet = false;

    LoggingConfiguration m_loggingConfiguration;
    bool m_loggingConfigurationHasBeenSet = false;

    int m_maxWorkers;
    bool m_maxWorkersHasBeenSet = false;

    int m_minWorkers;
    bool m_minWorkersHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    Aws::String m_pluginsS3ObjectVersion;
    bool m_pluginsS3ObjectVersionHasBeenSet = false;

    Aws::String m_pluginsS3Path;
    bool m_pluginsS3PathHasBeenSet = false;

    Aws::String m_requirementsS3ObjectVersion;
    bool m_requirementsS3ObjectVersionHasBeenSet = false;

    Aws::String m_requirementsS3Path;
    bool m_requirementsS3PathHasBeenSet = false;

    int m_schedulers;
    bool m_schedulersHasBeenSet = false;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet = false;

    Aws::String m_sourceBucketArn;
    bool m_sourceBucketArnHasBeenSet = false;

    Aws::String m_startupScriptS3ObjectVersion;
    bool m_startupScriptS3ObjectVersionHasBeenSet = false;

    Aws::String m_startupScriptS3Path;
    bool m_startupScriptS3PathHasBeenSet = false;

    EnvironmentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    WebserverAccessMode m_webserverAccessMode;
    bool m_webserverAccessModeHasBeenSet = false;

    Aws::String m_webserverUrl;
    bool m_webserverUrlHasBeenSet = false;

    Aws::String m_webserverVpcEndpointService;
    bool m_webserverVpcEndpointServiceHasBeenSet = false;

    Aws::String m_weeklyMaintenanceWindowStart;
    bool m_weeklyMaintenanceWindowStartHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
