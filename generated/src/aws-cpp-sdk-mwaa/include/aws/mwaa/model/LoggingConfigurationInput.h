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
    AWS_MWAA_API LoggingConfigurationInput() = default;
    AWS_MWAA_API LoggingConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API LoggingConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Publishes Airflow DAG processing logs to CloudWatch Logs.</p>
     */
    inline const ModuleLoggingConfigurationInput& GetDagProcessingLogs() const { return m_dagProcessingLogs; }
    inline bool DagProcessingLogsHasBeenSet() const { return m_dagProcessingLogsHasBeenSet; }
    template<typename DagProcessingLogsT = ModuleLoggingConfigurationInput>
    void SetDagProcessingLogs(DagProcessingLogsT&& value) { m_dagProcessingLogsHasBeenSet = true; m_dagProcessingLogs = std::forward<DagProcessingLogsT>(value); }
    template<typename DagProcessingLogsT = ModuleLoggingConfigurationInput>
    LoggingConfigurationInput& WithDagProcessingLogs(DagProcessingLogsT&& value) { SetDagProcessingLogs(std::forward<DagProcessingLogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Publishes Airflow scheduler logs to CloudWatch Logs.</p>
     */
    inline const ModuleLoggingConfigurationInput& GetSchedulerLogs() const { return m_schedulerLogs; }
    inline bool SchedulerLogsHasBeenSet() const { return m_schedulerLogsHasBeenSet; }
    template<typename SchedulerLogsT = ModuleLoggingConfigurationInput>
    void SetSchedulerLogs(SchedulerLogsT&& value) { m_schedulerLogsHasBeenSet = true; m_schedulerLogs = std::forward<SchedulerLogsT>(value); }
    template<typename SchedulerLogsT = ModuleLoggingConfigurationInput>
    LoggingConfigurationInput& WithSchedulerLogs(SchedulerLogsT&& value) { SetSchedulerLogs(std::forward<SchedulerLogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Publishes Airflow web server logs to CloudWatch Logs.</p>
     */
    inline const ModuleLoggingConfigurationInput& GetWebserverLogs() const { return m_webserverLogs; }
    inline bool WebserverLogsHasBeenSet() const { return m_webserverLogsHasBeenSet; }
    template<typename WebserverLogsT = ModuleLoggingConfigurationInput>
    void SetWebserverLogs(WebserverLogsT&& value) { m_webserverLogsHasBeenSet = true; m_webserverLogs = std::forward<WebserverLogsT>(value); }
    template<typename WebserverLogsT = ModuleLoggingConfigurationInput>
    LoggingConfigurationInput& WithWebserverLogs(WebserverLogsT&& value) { SetWebserverLogs(std::forward<WebserverLogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Publishes Airflow worker logs to CloudWatch Logs.</p>
     */
    inline const ModuleLoggingConfigurationInput& GetWorkerLogs() const { return m_workerLogs; }
    inline bool WorkerLogsHasBeenSet() const { return m_workerLogsHasBeenSet; }
    template<typename WorkerLogsT = ModuleLoggingConfigurationInput>
    void SetWorkerLogs(WorkerLogsT&& value) { m_workerLogsHasBeenSet = true; m_workerLogs = std::forward<WorkerLogsT>(value); }
    template<typename WorkerLogsT = ModuleLoggingConfigurationInput>
    LoggingConfigurationInput& WithWorkerLogs(WorkerLogsT&& value) { SetWorkerLogs(std::forward<WorkerLogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Publishes Airflow task logs to CloudWatch Logs.</p>
     */
    inline const ModuleLoggingConfigurationInput& GetTaskLogs() const { return m_taskLogs; }
    inline bool TaskLogsHasBeenSet() const { return m_taskLogsHasBeenSet; }
    template<typename TaskLogsT = ModuleLoggingConfigurationInput>
    void SetTaskLogs(TaskLogsT&& value) { m_taskLogsHasBeenSet = true; m_taskLogs = std::forward<TaskLogsT>(value); }
    template<typename TaskLogsT = ModuleLoggingConfigurationInput>
    LoggingConfigurationInput& WithTaskLogs(TaskLogsT&& value) { SetTaskLogs(std::forward<TaskLogsT>(value)); return *this;}
    ///@}
  private:

    ModuleLoggingConfigurationInput m_dagProcessingLogs;
    bool m_dagProcessingLogsHasBeenSet = false;

    ModuleLoggingConfigurationInput m_schedulerLogs;
    bool m_schedulerLogsHasBeenSet = false;

    ModuleLoggingConfigurationInput m_webserverLogs;
    bool m_webserverLogsHasBeenSet = false;

    ModuleLoggingConfigurationInput m_workerLogs;
    bool m_workerLogsHasBeenSet = false;

    ModuleLoggingConfigurationInput m_taskLogs;
    bool m_taskLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
