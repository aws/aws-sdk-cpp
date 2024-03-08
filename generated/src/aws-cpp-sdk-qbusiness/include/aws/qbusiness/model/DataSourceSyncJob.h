/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qbusiness/model/ErrorDetail.h>
#include <aws/qbusiness/model/DataSourceSyncJobMetrics.h>
#include <aws/qbusiness/model/DataSourceSyncJobStatus.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Provides information about an Amazon Q data source connector synchronization
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DataSourceSyncJob">AWS
   * API Reference</a></p>
   */
  class DataSourceSyncJob
  {
  public:
    AWS_QBUSINESS_API DataSourceSyncJob();
    AWS_QBUSINESS_API DataSourceSyncJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DataSourceSyncJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If the reason that the synchronization failed is due to an error with the
     * underlying data source, this field contains a code that identifies the
     * error.</p>
     */
    inline const Aws::String& GetDataSourceErrorCode() const{ return m_dataSourceErrorCode; }

    /**
     * <p>If the reason that the synchronization failed is due to an error with the
     * underlying data source, this field contains a code that identifies the
     * error.</p>
     */
    inline bool DataSourceErrorCodeHasBeenSet() const { return m_dataSourceErrorCodeHasBeenSet; }

    /**
     * <p>If the reason that the synchronization failed is due to an error with the
     * underlying data source, this field contains a code that identifies the
     * error.</p>
     */
    inline void SetDataSourceErrorCode(const Aws::String& value) { m_dataSourceErrorCodeHasBeenSet = true; m_dataSourceErrorCode = value; }

    /**
     * <p>If the reason that the synchronization failed is due to an error with the
     * underlying data source, this field contains a code that identifies the
     * error.</p>
     */
    inline void SetDataSourceErrorCode(Aws::String&& value) { m_dataSourceErrorCodeHasBeenSet = true; m_dataSourceErrorCode = std::move(value); }

    /**
     * <p>If the reason that the synchronization failed is due to an error with the
     * underlying data source, this field contains a code that identifies the
     * error.</p>
     */
    inline void SetDataSourceErrorCode(const char* value) { m_dataSourceErrorCodeHasBeenSet = true; m_dataSourceErrorCode.assign(value); }

    /**
     * <p>If the reason that the synchronization failed is due to an error with the
     * underlying data source, this field contains a code that identifies the
     * error.</p>
     */
    inline DataSourceSyncJob& WithDataSourceErrorCode(const Aws::String& value) { SetDataSourceErrorCode(value); return *this;}

    /**
     * <p>If the reason that the synchronization failed is due to an error with the
     * underlying data source, this field contains a code that identifies the
     * error.</p>
     */
    inline DataSourceSyncJob& WithDataSourceErrorCode(Aws::String&& value) { SetDataSourceErrorCode(std::move(value)); return *this;}

    /**
     * <p>If the reason that the synchronization failed is due to an error with the
     * underlying data source, this field contains a code that identifies the
     * error.</p>
     */
    inline DataSourceSyncJob& WithDataSourceErrorCode(const char* value) { SetDataSourceErrorCode(value); return *this;}


    /**
     * <p>The Unix timestamp when the synchronization job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The Unix timestamp when the synchronization job completed.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The Unix timestamp when the synchronization job completed.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The Unix timestamp when the synchronization job completed.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The Unix timestamp when the synchronization job completed.</p>
     */
    inline DataSourceSyncJob& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The Unix timestamp when the synchronization job completed.</p>
     */
    inline DataSourceSyncJob& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>If the <code>Status</code> field is set to <code>FAILED</code>, the
     * <code>ErrorCode</code> field indicates the reason the synchronization failed.
     * </p>
     */
    inline const ErrorDetail& GetError() const{ return m_error; }

    /**
     * <p>If the <code>Status</code> field is set to <code>FAILED</code>, the
     * <code>ErrorCode</code> field indicates the reason the synchronization failed.
     * </p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>If the <code>Status</code> field is set to <code>FAILED</code>, the
     * <code>ErrorCode</code> field indicates the reason the synchronization failed.
     * </p>
     */
    inline void SetError(const ErrorDetail& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>If the <code>Status</code> field is set to <code>FAILED</code>, the
     * <code>ErrorCode</code> field indicates the reason the synchronization failed.
     * </p>
     */
    inline void SetError(ErrorDetail&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>If the <code>Status</code> field is set to <code>FAILED</code>, the
     * <code>ErrorCode</code> field indicates the reason the synchronization failed.
     * </p>
     */
    inline DataSourceSyncJob& WithError(const ErrorDetail& value) { SetError(value); return *this;}

    /**
     * <p>If the <code>Status</code> field is set to <code>FAILED</code>, the
     * <code>ErrorCode</code> field indicates the reason the synchronization failed.
     * </p>
     */
    inline DataSourceSyncJob& WithError(ErrorDetail&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p>The identifier of a data source synchronization job.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }

    /**
     * <p>The identifier of a data source synchronization job.</p>
     */
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }

    /**
     * <p>The identifier of a data source synchronization job.</p>
     */
    inline void SetExecutionId(const Aws::String& value) { m_executionIdHasBeenSet = true; m_executionId = value; }

    /**
     * <p>The identifier of a data source synchronization job.</p>
     */
    inline void SetExecutionId(Aws::String&& value) { m_executionIdHasBeenSet = true; m_executionId = std::move(value); }

    /**
     * <p>The identifier of a data source synchronization job.</p>
     */
    inline void SetExecutionId(const char* value) { m_executionIdHasBeenSet = true; m_executionId.assign(value); }

    /**
     * <p>The identifier of a data source synchronization job.</p>
     */
    inline DataSourceSyncJob& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p>The identifier of a data source synchronization job.</p>
     */
    inline DataSourceSyncJob& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a data source synchronization job.</p>
     */
    inline DataSourceSyncJob& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}


    /**
     * <p>Maps a batch delete document request to a specific data source sync job. This
     * is optional and should only be supplied when documents are deleted by a data
     * source connector.</p>
     */
    inline const DataSourceSyncJobMetrics& GetMetrics() const{ return m_metrics; }

    /**
     * <p>Maps a batch delete document request to a specific data source sync job. This
     * is optional and should only be supplied when documents are deleted by a data
     * source connector.</p>
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * <p>Maps a batch delete document request to a specific data source sync job. This
     * is optional and should only be supplied when documents are deleted by a data
     * source connector.</p>
     */
    inline void SetMetrics(const DataSourceSyncJobMetrics& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p>Maps a batch delete document request to a specific data source sync job. This
     * is optional and should only be supplied when documents are deleted by a data
     * source connector.</p>
     */
    inline void SetMetrics(DataSourceSyncJobMetrics&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * <p>Maps a batch delete document request to a specific data source sync job. This
     * is optional and should only be supplied when documents are deleted by a data
     * source connector.</p>
     */
    inline DataSourceSyncJob& WithMetrics(const DataSourceSyncJobMetrics& value) { SetMetrics(value); return *this;}

    /**
     * <p>Maps a batch delete document request to a specific data source sync job. This
     * is optional and should only be supplied when documents are deleted by a data
     * source connector.</p>
     */
    inline DataSourceSyncJob& WithMetrics(DataSourceSyncJobMetrics&& value) { SetMetrics(std::move(value)); return *this;}


    /**
     * <p>The Unix time stamp when the data source synchronization job started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The Unix time stamp when the data source synchronization job started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The Unix time stamp when the data source synchronization job started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The Unix time stamp when the data source synchronization job started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The Unix time stamp when the data source synchronization job started.</p>
     */
    inline DataSourceSyncJob& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The Unix time stamp when the data source synchronization job started.</p>
     */
    inline DataSourceSyncJob& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The status of the synchronization job. When the <code>Status</code> field is
     * set to <code>SUCCEEDED</code>, the synchronization job is done. If the status
     * code is <code>FAILED</code>, the <code>ErrorCode</code> and
     * <code>ErrorMessage</code> fields give you the reason for the failure.</p>
     */
    inline const DataSourceSyncJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the synchronization job. When the <code>Status</code> field is
     * set to <code>SUCCEEDED</code>, the synchronization job is done. If the status
     * code is <code>FAILED</code>, the <code>ErrorCode</code> and
     * <code>ErrorMessage</code> fields give you the reason for the failure.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the synchronization job. When the <code>Status</code> field is
     * set to <code>SUCCEEDED</code>, the synchronization job is done. If the status
     * code is <code>FAILED</code>, the <code>ErrorCode</code> and
     * <code>ErrorMessage</code> fields give you the reason for the failure.</p>
     */
    inline void SetStatus(const DataSourceSyncJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the synchronization job. When the <code>Status</code> field is
     * set to <code>SUCCEEDED</code>, the synchronization job is done. If the status
     * code is <code>FAILED</code>, the <code>ErrorCode</code> and
     * <code>ErrorMessage</code> fields give you the reason for the failure.</p>
     */
    inline void SetStatus(DataSourceSyncJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the synchronization job. When the <code>Status</code> field is
     * set to <code>SUCCEEDED</code>, the synchronization job is done. If the status
     * code is <code>FAILED</code>, the <code>ErrorCode</code> and
     * <code>ErrorMessage</code> fields give you the reason for the failure.</p>
     */
    inline DataSourceSyncJob& WithStatus(const DataSourceSyncJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the synchronization job. When the <code>Status</code> field is
     * set to <code>SUCCEEDED</code>, the synchronization job is done. If the status
     * code is <code>FAILED</code>, the <code>ErrorCode</code> and
     * <code>ErrorMessage</code> fields give you the reason for the failure.</p>
     */
    inline DataSourceSyncJob& WithStatus(DataSourceSyncJobStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_dataSourceErrorCode;
    bool m_dataSourceErrorCodeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    ErrorDetail m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    DataSourceSyncJobMetrics m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    DataSourceSyncJobStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
