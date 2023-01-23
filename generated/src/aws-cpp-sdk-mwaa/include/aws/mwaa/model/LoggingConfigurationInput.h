/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/mwaa/model/ModuleLoggingConfigurationInput.h>
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
   * <p>Defines the Apache Airflow log types to send to CloudWatch
   * Logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/LoggingConfigurationInput">AWS
   * API Reference</a></p>
   */
  class LoggingConfigurationInput
  {
  public:
    AWS_MWAA_API LoggingConfigurationInput();
    AWS_MWAA_API LoggingConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API LoggingConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Publishes Airflow DAG processing logs to CloudWatch Logs.</p>
     */
    inline const ModuleLoggingConfigurationInput& GetDagProcessingLogs() const{ return m_dagProcessingLogs; }

    /**
     * <p>Publishes Airflow DAG processing logs to CloudWatch Logs.</p>
     */
    inline bool DagProcessingLogsHasBeenSet() const { return m_dagProcessingLogsHasBeenSet; }

    /**
     * <p>Publishes Airflow DAG processing logs to CloudWatch Logs.</p>
     */
    inline void SetDagProcessingLogs(const ModuleLoggingConfigurationInput& value) { m_dagProcessingLogsHasBeenSet = true; m_dagProcessingLogs = value; }

    /**
     * <p>Publishes Airflow DAG processing logs to CloudWatch Logs.</p>
     */
    inline void SetDagProcessingLogs(ModuleLoggingConfigurationInput&& value) { m_dagProcessingLogsHasBeenSet = true; m_dagProcessingLogs = std::move(value); }

    /**
     * <p>Publishes Airflow DAG processing logs to CloudWatch Logs.</p>
     */
    inline LoggingConfigurationInput& WithDagProcessingLogs(const ModuleLoggingConfigurationInput& value) { SetDagProcessingLogs(value); return *this;}

    /**
     * <p>Publishes Airflow DAG processing logs to CloudWatch Logs.</p>
     */
    inline LoggingConfigurationInput& WithDagProcessingLogs(ModuleLoggingConfigurationInput&& value) { SetDagProcessingLogs(std::move(value)); return *this;}


    /**
     * <p>Publishes Airflow scheduler logs to CloudWatch Logs.</p>
     */
    inline const ModuleLoggingConfigurationInput& GetSchedulerLogs() const{ return m_schedulerLogs; }

    /**
     * <p>Publishes Airflow scheduler logs to CloudWatch Logs.</p>
     */
    inline bool SchedulerLogsHasBeenSet() const { return m_schedulerLogsHasBeenSet; }

    /**
     * <p>Publishes Airflow scheduler logs to CloudWatch Logs.</p>
     */
    inline void SetSchedulerLogs(const ModuleLoggingConfigurationInput& value) { m_schedulerLogsHasBeenSet = true; m_schedulerLogs = value; }

    /**
     * <p>Publishes Airflow scheduler logs to CloudWatch Logs.</p>
     */
    inline void SetSchedulerLogs(ModuleLoggingConfigurationInput&& value) { m_schedulerLogsHasBeenSet = true; m_schedulerLogs = std::move(value); }

    /**
     * <p>Publishes Airflow scheduler logs to CloudWatch Logs.</p>
     */
    inline LoggingConfigurationInput& WithSchedulerLogs(const ModuleLoggingConfigurationInput& value) { SetSchedulerLogs(value); return *this;}

    /**
     * <p>Publishes Airflow scheduler logs to CloudWatch Logs.</p>
     */
    inline LoggingConfigurationInput& WithSchedulerLogs(ModuleLoggingConfigurationInput&& value) { SetSchedulerLogs(std::move(value)); return *this;}


    /**
     * <p>Publishes Airflow task logs to CloudWatch Logs.</p>
     */
    inline const ModuleLoggingConfigurationInput& GetTaskLogs() const{ return m_taskLogs; }

    /**
     * <p>Publishes Airflow task logs to CloudWatch Logs.</p>
     */
    inline bool TaskLogsHasBeenSet() const { return m_taskLogsHasBeenSet; }

    /**
     * <p>Publishes Airflow task logs to CloudWatch Logs.</p>
     */
    inline void SetTaskLogs(const ModuleLoggingConfigurationInput& value) { m_taskLogsHasBeenSet = true; m_taskLogs = value; }

    /**
     * <p>Publishes Airflow task logs to CloudWatch Logs.</p>
     */
    inline void SetTaskLogs(ModuleLoggingConfigurationInput&& value) { m_taskLogsHasBeenSet = true; m_taskLogs = std::move(value); }

    /**
     * <p>Publishes Airflow task logs to CloudWatch Logs.</p>
     */
    inline LoggingConfigurationInput& WithTaskLogs(const ModuleLoggingConfigurationInput& value) { SetTaskLogs(value); return *this;}

    /**
     * <p>Publishes Airflow task logs to CloudWatch Logs.</p>
     */
    inline LoggingConfigurationInput& WithTaskLogs(ModuleLoggingConfigurationInput&& value) { SetTaskLogs(std::move(value)); return *this;}


    /**
     * <p>Publishes Airflow web server logs to CloudWatch Logs.</p>
     */
    inline const ModuleLoggingConfigurationInput& GetWebserverLogs() const{ return m_webserverLogs; }

    /**
     * <p>Publishes Airflow web server logs to CloudWatch Logs.</p>
     */
    inline bool WebserverLogsHasBeenSet() const { return m_webserverLogsHasBeenSet; }

    /**
     * <p>Publishes Airflow web server logs to CloudWatch Logs.</p>
     */
    inline void SetWebserverLogs(const ModuleLoggingConfigurationInput& value) { m_webserverLogsHasBeenSet = true; m_webserverLogs = value; }

    /**
     * <p>Publishes Airflow web server logs to CloudWatch Logs.</p>
     */
    inline void SetWebserverLogs(ModuleLoggingConfigurationInput&& value) { m_webserverLogsHasBeenSet = true; m_webserverLogs = std::move(value); }

    /**
     * <p>Publishes Airflow web server logs to CloudWatch Logs.</p>
     */
    inline LoggingConfigurationInput& WithWebserverLogs(const ModuleLoggingConfigurationInput& value) { SetWebserverLogs(value); return *this;}

    /**
     * <p>Publishes Airflow web server logs to CloudWatch Logs.</p>
     */
    inline LoggingConfigurationInput& WithWebserverLogs(ModuleLoggingConfigurationInput&& value) { SetWebserverLogs(std::move(value)); return *this;}


    /**
     * <p>Publishes Airflow worker logs to CloudWatch Logs.</p>
     */
    inline const ModuleLoggingConfigurationInput& GetWorkerLogs() const{ return m_workerLogs; }

    /**
     * <p>Publishes Airflow worker logs to CloudWatch Logs.</p>
     */
    inline bool WorkerLogsHasBeenSet() const { return m_workerLogsHasBeenSet; }

    /**
     * <p>Publishes Airflow worker logs to CloudWatch Logs.</p>
     */
    inline void SetWorkerLogs(const ModuleLoggingConfigurationInput& value) { m_workerLogsHasBeenSet = true; m_workerLogs = value; }

    /**
     * <p>Publishes Airflow worker logs to CloudWatch Logs.</p>
     */
    inline void SetWorkerLogs(ModuleLoggingConfigurationInput&& value) { m_workerLogsHasBeenSet = true; m_workerLogs = std::move(value); }

    /**
     * <p>Publishes Airflow worker logs to CloudWatch Logs.</p>
     */
    inline LoggingConfigurationInput& WithWorkerLogs(const ModuleLoggingConfigurationInput& value) { SetWorkerLogs(value); return *this;}

    /**
     * <p>Publishes Airflow worker logs to CloudWatch Logs.</p>
     */
    inline LoggingConfigurationInput& WithWorkerLogs(ModuleLoggingConfigurationInput&& value) { SetWorkerLogs(std::move(value)); return *this;}

  private:

    ModuleLoggingConfigurationInput m_dagProcessingLogs;
    bool m_dagProcessingLogsHasBeenSet = false;

    ModuleLoggingConfigurationInput m_schedulerLogs;
    bool m_schedulerLogsHasBeenSet = false;

    ModuleLoggingConfigurationInput m_taskLogs;
    bool m_taskLogsHasBeenSet = false;

    ModuleLoggingConfigurationInput m_webserverLogs;
    bool m_webserverLogsHasBeenSet = false;

    ModuleLoggingConfigurationInput m_workerLogs;
    bool m_workerLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
