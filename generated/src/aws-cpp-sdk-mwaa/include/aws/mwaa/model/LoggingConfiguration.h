/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/mwaa/model/ModuleLoggingConfiguration.h>
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
   * <p>Describes the Apache Airflow log types that are published to CloudWatch
   * Logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/LoggingConfiguration">AWS
   * API Reference</a></p>
   */
  class LoggingConfiguration
  {
  public:
    AWS_MWAA_API LoggingConfiguration() = default;
    AWS_MWAA_API LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Airflow DAG processing logs published to CloudWatch Logs and the log
     * level.</p>
     */
    inline const ModuleLoggingConfiguration& GetDagProcessingLogs() const { return m_dagProcessingLogs; }
    inline bool DagProcessingLogsHasBeenSet() const { return m_dagProcessingLogsHasBeenSet; }
    template<typename DagProcessingLogsT = ModuleLoggingConfiguration>
    void SetDagProcessingLogs(DagProcessingLogsT&& value) { m_dagProcessingLogsHasBeenSet = true; m_dagProcessingLogs = std::forward<DagProcessingLogsT>(value); }
    template<typename DagProcessingLogsT = ModuleLoggingConfiguration>
    LoggingConfiguration& WithDagProcessingLogs(DagProcessingLogsT&& value) { SetDagProcessingLogs(std::forward<DagProcessingLogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Airflow scheduler logs published to CloudWatch Logs and the log
     * level.</p>
     */
    inline const ModuleLoggingConfiguration& GetSchedulerLogs() const { return m_schedulerLogs; }
    inline bool SchedulerLogsHasBeenSet() const { return m_schedulerLogsHasBeenSet; }
    template<typename SchedulerLogsT = ModuleLoggingConfiguration>
    void SetSchedulerLogs(SchedulerLogsT&& value) { m_schedulerLogsHasBeenSet = true; m_schedulerLogs = std::forward<SchedulerLogsT>(value); }
    template<typename SchedulerLogsT = ModuleLoggingConfiguration>
    LoggingConfiguration& WithSchedulerLogs(SchedulerLogsT&& value) { SetSchedulerLogs(std::forward<SchedulerLogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Airflow web server logs published to CloudWatch Logs and the log
     * level.</p>
     */
    inline const ModuleLoggingConfiguration& GetWebserverLogs() const { return m_webserverLogs; }
    inline bool WebserverLogsHasBeenSet() const { return m_webserverLogsHasBeenSet; }
    template<typename WebserverLogsT = ModuleLoggingConfiguration>
    void SetWebserverLogs(WebserverLogsT&& value) { m_webserverLogsHasBeenSet = true; m_webserverLogs = std::forward<WebserverLogsT>(value); }
    template<typename WebserverLogsT = ModuleLoggingConfiguration>
    LoggingConfiguration& WithWebserverLogs(WebserverLogsT&& value) { SetWebserverLogs(std::forward<WebserverLogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Airflow worker logs published to CloudWatch Logs and the log level.</p>
     */
    inline const ModuleLoggingConfiguration& GetWorkerLogs() const { return m_workerLogs; }
    inline bool WorkerLogsHasBeenSet() const { return m_workerLogsHasBeenSet; }
    template<typename WorkerLogsT = ModuleLoggingConfiguration>
    void SetWorkerLogs(WorkerLogsT&& value) { m_workerLogsHasBeenSet = true; m_workerLogs = std::forward<WorkerLogsT>(value); }
    template<typename WorkerLogsT = ModuleLoggingConfiguration>
    LoggingConfiguration& WithWorkerLogs(WorkerLogsT&& value) { SetWorkerLogs(std::forward<WorkerLogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Airflow task logs published to CloudWatch Logs and the log level.</p>
     */
    inline const ModuleLoggingConfiguration& GetTaskLogs() const { return m_taskLogs; }
    inline bool TaskLogsHasBeenSet() const { return m_taskLogsHasBeenSet; }
    template<typename TaskLogsT = ModuleLoggingConfiguration>
    void SetTaskLogs(TaskLogsT&& value) { m_taskLogsHasBeenSet = true; m_taskLogs = std::forward<TaskLogsT>(value); }
    template<typename TaskLogsT = ModuleLoggingConfiguration>
    LoggingConfiguration& WithTaskLogs(TaskLogsT&& value) { SetTaskLogs(std::forward<TaskLogsT>(value)); return *this;}
    ///@}
  private:

    ModuleLoggingConfiguration m_dagProcessingLogs;
    bool m_dagProcessingLogsHasBeenSet = false;

    ModuleLoggingConfiguration m_schedulerLogs;
    bool m_schedulerLogsHasBeenSet = false;

    ModuleLoggingConfiguration m_webserverLogs;
    bool m_webserverLogsHasBeenSet = false;

    ModuleLoggingConfiguration m_workerLogs;
    bool m_workerLogsHasBeenSet = false;

    ModuleLoggingConfiguration m_taskLogs;
    bool m_taskLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
