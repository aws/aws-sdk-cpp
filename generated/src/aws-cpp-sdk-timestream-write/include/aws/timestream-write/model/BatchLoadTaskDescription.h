/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-write/model/DataSourceConfiguration.h>
#include <aws/timestream-write/model/BatchLoadProgressReport.h>
#include <aws/timestream-write/model/ReportConfiguration.h>
#include <aws/timestream-write/model/DataModelConfiguration.h>
#include <aws/timestream-write/model/BatchLoadStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p>Details about a batch load task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/BatchLoadTaskDescription">AWS
   * API Reference</a></p>
   */
  class BatchLoadTaskDescription
  {
  public:
    AWS_TIMESTREAMWRITE_API BatchLoadTaskDescription() = default;
    AWS_TIMESTREAMWRITE_API BatchLoadTaskDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API BatchLoadTaskDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the batch load task.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    BatchLoadTaskDescription& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    BatchLoadTaskDescription& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration details about the data source for a batch load task.</p>
     */
    inline const DataSourceConfiguration& GetDataSourceConfiguration() const { return m_dataSourceConfiguration; }
    inline bool DataSourceConfigurationHasBeenSet() const { return m_dataSourceConfigurationHasBeenSet; }
    template<typename DataSourceConfigurationT = DataSourceConfiguration>
    void SetDataSourceConfiguration(DataSourceConfigurationT&& value) { m_dataSourceConfigurationHasBeenSet = true; m_dataSourceConfiguration = std::forward<DataSourceConfigurationT>(value); }
    template<typename DataSourceConfigurationT = DataSourceConfiguration>
    BatchLoadTaskDescription& WithDataSourceConfiguration(DataSourceConfigurationT&& value) { SetDataSourceConfiguration(std::forward<DataSourceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const BatchLoadProgressReport& GetProgressReport() const { return m_progressReport; }
    inline bool ProgressReportHasBeenSet() const { return m_progressReportHasBeenSet; }
    template<typename ProgressReportT = BatchLoadProgressReport>
    void SetProgressReport(ProgressReportT&& value) { m_progressReportHasBeenSet = true; m_progressReport = std::forward<ProgressReportT>(value); }
    template<typename ProgressReportT = BatchLoadProgressReport>
    BatchLoadTaskDescription& WithProgressReport(ProgressReportT&& value) { SetProgressReport(std::forward<ProgressReportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Report configuration for a batch load task. This contains details about where
     * error reports are stored.</p>
     */
    inline const ReportConfiguration& GetReportConfiguration() const { return m_reportConfiguration; }
    inline bool ReportConfigurationHasBeenSet() const { return m_reportConfigurationHasBeenSet; }
    template<typename ReportConfigurationT = ReportConfiguration>
    void SetReportConfiguration(ReportConfigurationT&& value) { m_reportConfigurationHasBeenSet = true; m_reportConfiguration = std::forward<ReportConfigurationT>(value); }
    template<typename ReportConfigurationT = ReportConfiguration>
    BatchLoadTaskDescription& WithReportConfiguration(ReportConfigurationT&& value) { SetReportConfiguration(std::forward<ReportConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data model configuration for a batch load task. This contains details about
     * where a data model for a batch load task is stored.</p>
     */
    inline const DataModelConfiguration& GetDataModelConfiguration() const { return m_dataModelConfiguration; }
    inline bool DataModelConfigurationHasBeenSet() const { return m_dataModelConfigurationHasBeenSet; }
    template<typename DataModelConfigurationT = DataModelConfiguration>
    void SetDataModelConfiguration(DataModelConfigurationT&& value) { m_dataModelConfigurationHasBeenSet = true; m_dataModelConfiguration = std::forward<DataModelConfigurationT>(value); }
    template<typename DataModelConfigurationT = DataModelConfiguration>
    BatchLoadTaskDescription& WithDataModelConfiguration(DataModelConfigurationT&& value) { SetDataModelConfiguration(std::forward<DataModelConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetTargetDatabaseName() const { return m_targetDatabaseName; }
    inline bool TargetDatabaseNameHasBeenSet() const { return m_targetDatabaseNameHasBeenSet; }
    template<typename TargetDatabaseNameT = Aws::String>
    void SetTargetDatabaseName(TargetDatabaseNameT&& value) { m_targetDatabaseNameHasBeenSet = true; m_targetDatabaseName = std::forward<TargetDatabaseNameT>(value); }
    template<typename TargetDatabaseNameT = Aws::String>
    BatchLoadTaskDescription& WithTargetDatabaseName(TargetDatabaseNameT&& value) { SetTargetDatabaseName(std::forward<TargetDatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetTargetTableName() const { return m_targetTableName; }
    inline bool TargetTableNameHasBeenSet() const { return m_targetTableNameHasBeenSet; }
    template<typename TargetTableNameT = Aws::String>
    void SetTargetTableName(TargetTableNameT&& value) { m_targetTableNameHasBeenSet = true; m_targetTableName = std::forward<TargetTableNameT>(value); }
    template<typename TargetTableNameT = Aws::String>
    BatchLoadTaskDescription& WithTargetTableName(TargetTableNameT&& value) { SetTargetTableName(std::forward<TargetTableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the batch load task.</p>
     */
    inline BatchLoadStatus GetTaskStatus() const { return m_taskStatus; }
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }
    inline void SetTaskStatus(BatchLoadStatus value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }
    inline BatchLoadTaskDescription& WithTaskStatus(BatchLoadStatus value) { SetTaskStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline long long GetRecordVersion() const { return m_recordVersion; }
    inline bool RecordVersionHasBeenSet() const { return m_recordVersionHasBeenSet; }
    inline void SetRecordVersion(long long value) { m_recordVersionHasBeenSet = true; m_recordVersion = value; }
    inline BatchLoadTaskDescription& WithRecordVersion(long long value) { SetRecordVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the Timestream batch load task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    BatchLoadTaskDescription& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the Timestream batch load task was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    BatchLoadTaskDescription& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> </p>
     */
    inline const Aws::Utils::DateTime& GetResumableUntil() const { return m_resumableUntil; }
    inline bool ResumableUntilHasBeenSet() const { return m_resumableUntilHasBeenSet; }
    template<typename ResumableUntilT = Aws::Utils::DateTime>
    void SetResumableUntil(ResumableUntilT&& value) { m_resumableUntilHasBeenSet = true; m_resumableUntil = std::forward<ResumableUntilT>(value); }
    template<typename ResumableUntilT = Aws::Utils::DateTime>
    BatchLoadTaskDescription& WithResumableUntil(ResumableUntilT&& value) { SetResumableUntil(std::forward<ResumableUntilT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    DataSourceConfiguration m_dataSourceConfiguration;
    bool m_dataSourceConfigurationHasBeenSet = false;

    BatchLoadProgressReport m_progressReport;
    bool m_progressReportHasBeenSet = false;

    ReportConfiguration m_reportConfiguration;
    bool m_reportConfigurationHasBeenSet = false;

    DataModelConfiguration m_dataModelConfiguration;
    bool m_dataModelConfigurationHasBeenSet = false;

    Aws::String m_targetDatabaseName;
    bool m_targetDatabaseNameHasBeenSet = false;

    Aws::String m_targetTableName;
    bool m_targetTableNameHasBeenSet = false;

    BatchLoadStatus m_taskStatus{BatchLoadStatus::NOT_SET};
    bool m_taskStatusHasBeenSet = false;

    long long m_recordVersion{0};
    bool m_recordVersionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_resumableUntil{};
    bool m_resumableUntilHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
