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
    AWS_TIMESTREAMWRITE_API BatchLoadTaskDescription();
    AWS_TIMESTREAMWRITE_API BatchLoadTaskDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API BatchLoadTaskDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the batch load task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The ID of the batch load task.</p>
     */
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }

    /**
     * <p>The ID of the batch load task.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>The ID of the batch load task.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p>The ID of the batch load task.</p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p>The ID of the batch load task.</p>
     */
    inline BatchLoadTaskDescription& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The ID of the batch load task.</p>
     */
    inline BatchLoadTaskDescription& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the batch load task.</p>
     */
    inline BatchLoadTaskDescription& WithTaskId(const char* value) { SetTaskId(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p/>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p/>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p/>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p/>
     */
    inline BatchLoadTaskDescription& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p/>
     */
    inline BatchLoadTaskDescription& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline BatchLoadTaskDescription& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>Configuration details about the data source for a batch load task.</p>
     */
    inline const DataSourceConfiguration& GetDataSourceConfiguration() const{ return m_dataSourceConfiguration; }

    /**
     * <p>Configuration details about the data source for a batch load task.</p>
     */
    inline bool DataSourceConfigurationHasBeenSet() const { return m_dataSourceConfigurationHasBeenSet; }

    /**
     * <p>Configuration details about the data source for a batch load task.</p>
     */
    inline void SetDataSourceConfiguration(const DataSourceConfiguration& value) { m_dataSourceConfigurationHasBeenSet = true; m_dataSourceConfiguration = value; }

    /**
     * <p>Configuration details about the data source for a batch load task.</p>
     */
    inline void SetDataSourceConfiguration(DataSourceConfiguration&& value) { m_dataSourceConfigurationHasBeenSet = true; m_dataSourceConfiguration = std::move(value); }

    /**
     * <p>Configuration details about the data source for a batch load task.</p>
     */
    inline BatchLoadTaskDescription& WithDataSourceConfiguration(const DataSourceConfiguration& value) { SetDataSourceConfiguration(value); return *this;}

    /**
     * <p>Configuration details about the data source for a batch load task.</p>
     */
    inline BatchLoadTaskDescription& WithDataSourceConfiguration(DataSourceConfiguration&& value) { SetDataSourceConfiguration(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const BatchLoadProgressReport& GetProgressReport() const{ return m_progressReport; }

    /**
     * <p/>
     */
    inline bool ProgressReportHasBeenSet() const { return m_progressReportHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetProgressReport(const BatchLoadProgressReport& value) { m_progressReportHasBeenSet = true; m_progressReport = value; }

    /**
     * <p/>
     */
    inline void SetProgressReport(BatchLoadProgressReport&& value) { m_progressReportHasBeenSet = true; m_progressReport = std::move(value); }

    /**
     * <p/>
     */
    inline BatchLoadTaskDescription& WithProgressReport(const BatchLoadProgressReport& value) { SetProgressReport(value); return *this;}

    /**
     * <p/>
     */
    inline BatchLoadTaskDescription& WithProgressReport(BatchLoadProgressReport&& value) { SetProgressReport(std::move(value)); return *this;}


    /**
     * <p>Report configuration for a batch load task. This contains details about where
     * error reports are stored.</p>
     */
    inline const ReportConfiguration& GetReportConfiguration() const{ return m_reportConfiguration; }

    /**
     * <p>Report configuration for a batch load task. This contains details about where
     * error reports are stored.</p>
     */
    inline bool ReportConfigurationHasBeenSet() const { return m_reportConfigurationHasBeenSet; }

    /**
     * <p>Report configuration for a batch load task. This contains details about where
     * error reports are stored.</p>
     */
    inline void SetReportConfiguration(const ReportConfiguration& value) { m_reportConfigurationHasBeenSet = true; m_reportConfiguration = value; }

    /**
     * <p>Report configuration for a batch load task. This contains details about where
     * error reports are stored.</p>
     */
    inline void SetReportConfiguration(ReportConfiguration&& value) { m_reportConfigurationHasBeenSet = true; m_reportConfiguration = std::move(value); }

    /**
     * <p>Report configuration for a batch load task. This contains details about where
     * error reports are stored.</p>
     */
    inline BatchLoadTaskDescription& WithReportConfiguration(const ReportConfiguration& value) { SetReportConfiguration(value); return *this;}

    /**
     * <p>Report configuration for a batch load task. This contains details about where
     * error reports are stored.</p>
     */
    inline BatchLoadTaskDescription& WithReportConfiguration(ReportConfiguration&& value) { SetReportConfiguration(std::move(value)); return *this;}


    /**
     * <p>Data model configuration for a batch load task. This contains details about
     * where a data model for a batch load task is stored.</p>
     */
    inline const DataModelConfiguration& GetDataModelConfiguration() const{ return m_dataModelConfiguration; }

    /**
     * <p>Data model configuration for a batch load task. This contains details about
     * where a data model for a batch load task is stored.</p>
     */
    inline bool DataModelConfigurationHasBeenSet() const { return m_dataModelConfigurationHasBeenSet; }

    /**
     * <p>Data model configuration for a batch load task. This contains details about
     * where a data model for a batch load task is stored.</p>
     */
    inline void SetDataModelConfiguration(const DataModelConfiguration& value) { m_dataModelConfigurationHasBeenSet = true; m_dataModelConfiguration = value; }

    /**
     * <p>Data model configuration for a batch load task. This contains details about
     * where a data model for a batch load task is stored.</p>
     */
    inline void SetDataModelConfiguration(DataModelConfiguration&& value) { m_dataModelConfigurationHasBeenSet = true; m_dataModelConfiguration = std::move(value); }

    /**
     * <p>Data model configuration for a batch load task. This contains details about
     * where a data model for a batch load task is stored.</p>
     */
    inline BatchLoadTaskDescription& WithDataModelConfiguration(const DataModelConfiguration& value) { SetDataModelConfiguration(value); return *this;}

    /**
     * <p>Data model configuration for a batch load task. This contains details about
     * where a data model for a batch load task is stored.</p>
     */
    inline BatchLoadTaskDescription& WithDataModelConfiguration(DataModelConfiguration&& value) { SetDataModelConfiguration(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetTargetDatabaseName() const{ return m_targetDatabaseName; }

    /**
     * <p/>
     */
    inline bool TargetDatabaseNameHasBeenSet() const { return m_targetDatabaseNameHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTargetDatabaseName(const Aws::String& value) { m_targetDatabaseNameHasBeenSet = true; m_targetDatabaseName = value; }

    /**
     * <p/>
     */
    inline void SetTargetDatabaseName(Aws::String&& value) { m_targetDatabaseNameHasBeenSet = true; m_targetDatabaseName = std::move(value); }

    /**
     * <p/>
     */
    inline void SetTargetDatabaseName(const char* value) { m_targetDatabaseNameHasBeenSet = true; m_targetDatabaseName.assign(value); }

    /**
     * <p/>
     */
    inline BatchLoadTaskDescription& WithTargetDatabaseName(const Aws::String& value) { SetTargetDatabaseName(value); return *this;}

    /**
     * <p/>
     */
    inline BatchLoadTaskDescription& WithTargetDatabaseName(Aws::String&& value) { SetTargetDatabaseName(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline BatchLoadTaskDescription& WithTargetDatabaseName(const char* value) { SetTargetDatabaseName(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetTargetTableName() const{ return m_targetTableName; }

    /**
     * <p/>
     */
    inline bool TargetTableNameHasBeenSet() const { return m_targetTableNameHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTargetTableName(const Aws::String& value) { m_targetTableNameHasBeenSet = true; m_targetTableName = value; }

    /**
     * <p/>
     */
    inline void SetTargetTableName(Aws::String&& value) { m_targetTableNameHasBeenSet = true; m_targetTableName = std::move(value); }

    /**
     * <p/>
     */
    inline void SetTargetTableName(const char* value) { m_targetTableNameHasBeenSet = true; m_targetTableName.assign(value); }

    /**
     * <p/>
     */
    inline BatchLoadTaskDescription& WithTargetTableName(const Aws::String& value) { SetTargetTableName(value); return *this;}

    /**
     * <p/>
     */
    inline BatchLoadTaskDescription& WithTargetTableName(Aws::String&& value) { SetTargetTableName(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline BatchLoadTaskDescription& WithTargetTableName(const char* value) { SetTargetTableName(value); return *this;}


    /**
     * <p>Status of the batch load task.</p>
     */
    inline const BatchLoadStatus& GetTaskStatus() const{ return m_taskStatus; }

    /**
     * <p>Status of the batch load task.</p>
     */
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }

    /**
     * <p>Status of the batch load task.</p>
     */
    inline void SetTaskStatus(const BatchLoadStatus& value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }

    /**
     * <p>Status of the batch load task.</p>
     */
    inline void SetTaskStatus(BatchLoadStatus&& value) { m_taskStatusHasBeenSet = true; m_taskStatus = std::move(value); }

    /**
     * <p>Status of the batch load task.</p>
     */
    inline BatchLoadTaskDescription& WithTaskStatus(const BatchLoadStatus& value) { SetTaskStatus(value); return *this;}

    /**
     * <p>Status of the batch load task.</p>
     */
    inline BatchLoadTaskDescription& WithTaskStatus(BatchLoadStatus&& value) { SetTaskStatus(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline long long GetRecordVersion() const{ return m_recordVersion; }

    /**
     * <p/>
     */
    inline bool RecordVersionHasBeenSet() const { return m_recordVersionHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetRecordVersion(long long value) { m_recordVersionHasBeenSet = true; m_recordVersion = value; }

    /**
     * <p/>
     */
    inline BatchLoadTaskDescription& WithRecordVersion(long long value) { SetRecordVersion(value); return *this;}


    /**
     * <p>The time when the Timestream batch load task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time when the Timestream batch load task was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time when the Timestream batch load task was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time when the Timestream batch load task was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time when the Timestream batch load task was created.</p>
     */
    inline BatchLoadTaskDescription& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when the Timestream batch load task was created.</p>
     */
    inline BatchLoadTaskDescription& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time when the Timestream batch load task was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time when the Timestream batch load task was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The time when the Timestream batch load task was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time when the Timestream batch load task was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time when the Timestream batch load task was last updated.</p>
     */
    inline BatchLoadTaskDescription& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time when the Timestream batch load task was last updated.</p>
     */
    inline BatchLoadTaskDescription& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p> </p>
     */
    inline const Aws::Utils::DateTime& GetResumableUntil() const{ return m_resumableUntil; }

    /**
     * <p> </p>
     */
    inline bool ResumableUntilHasBeenSet() const { return m_resumableUntilHasBeenSet; }

    /**
     * <p> </p>
     */
    inline void SetResumableUntil(const Aws::Utils::DateTime& value) { m_resumableUntilHasBeenSet = true; m_resumableUntil = value; }

    /**
     * <p> </p>
     */
    inline void SetResumableUntil(Aws::Utils::DateTime&& value) { m_resumableUntilHasBeenSet = true; m_resumableUntil = std::move(value); }

    /**
     * <p> </p>
     */
    inline BatchLoadTaskDescription& WithResumableUntil(const Aws::Utils::DateTime& value) { SetResumableUntil(value); return *this;}

    /**
     * <p> </p>
     */
    inline BatchLoadTaskDescription& WithResumableUntil(Aws::Utils::DateTime&& value) { SetResumableUntil(std::move(value)); return *this;}

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

    BatchLoadStatus m_taskStatus;
    bool m_taskStatusHasBeenSet = false;

    long long m_recordVersion;
    bool m_recordVersionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_resumableUntil;
    bool m_resumableUntilHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
