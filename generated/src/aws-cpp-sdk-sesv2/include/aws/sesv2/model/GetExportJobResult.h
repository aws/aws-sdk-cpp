/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/ExportSourceType.h>
#include <aws/sesv2/model/JobStatus.h>
#include <aws/sesv2/model/ExportDestination.h>
#include <aws/sesv2/model/ExportDataSource.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sesv2/model/FailureInfo.h>
#include <aws/sesv2/model/ExportStatistics.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SESV2
{
namespace Model
{
  /**
   * <p>An HTTP 200 response if the request succeeds, or an error message if the
   * request fails.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetExportJobResponse">AWS
   * API Reference</a></p>
   */
  class GetExportJobResult
  {
  public:
    AWS_SESV2_API GetExportJobResult() = default;
    AWS_SESV2_API GetExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The export job ID.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    GetExportJobResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of source of the export job.</p>
     */
    inline ExportSourceType GetExportSourceType() const { return m_exportSourceType; }
    inline void SetExportSourceType(ExportSourceType value) { m_exportSourceTypeHasBeenSet = true; m_exportSourceType = value; }
    inline GetExportJobResult& WithExportSourceType(ExportSourceType value) { SetExportSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the export job.</p>
     */
    inline JobStatus GetJobStatus() const { return m_jobStatus; }
    inline void SetJobStatus(JobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline GetExportJobResult& WithJobStatus(JobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination of the export job.</p>
     */
    inline const ExportDestination& GetExportDestination() const { return m_exportDestination; }
    template<typename ExportDestinationT = ExportDestination>
    void SetExportDestination(ExportDestinationT&& value) { m_exportDestinationHasBeenSet = true; m_exportDestination = std::forward<ExportDestinationT>(value); }
    template<typename ExportDestinationT = ExportDestination>
    GetExportJobResult& WithExportDestination(ExportDestinationT&& value) { SetExportDestination(std::forward<ExportDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source of the export job.</p>
     */
    inline const ExportDataSource& GetExportDataSource() const { return m_exportDataSource; }
    template<typename ExportDataSourceT = ExportDataSource>
    void SetExportDataSource(ExportDataSourceT&& value) { m_exportDataSourceHasBeenSet = true; m_exportDataSource = std::forward<ExportDataSourceT>(value); }
    template<typename ExportDataSourceT = ExportDataSource>
    GetExportJobResult& WithExportDataSource(ExportDataSourceT&& value) { SetExportDataSource(std::forward<ExportDataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the export job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    GetExportJobResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the export job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedTimestamp() const { return m_completedTimestamp; }
    template<typename CompletedTimestampT = Aws::Utils::DateTime>
    void SetCompletedTimestamp(CompletedTimestampT&& value) { m_completedTimestampHasBeenSet = true; m_completedTimestamp = std::forward<CompletedTimestampT>(value); }
    template<typename CompletedTimestampT = Aws::Utils::DateTime>
    GetExportJobResult& WithCompletedTimestamp(CompletedTimestampT&& value) { SetCompletedTimestamp(std::forward<CompletedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure details about an export job.</p>
     */
    inline const FailureInfo& GetFailureInfo() const { return m_failureInfo; }
    template<typename FailureInfoT = FailureInfo>
    void SetFailureInfo(FailureInfoT&& value) { m_failureInfoHasBeenSet = true; m_failureInfo = std::forward<FailureInfoT>(value); }
    template<typename FailureInfoT = FailureInfo>
    GetExportJobResult& WithFailureInfo(FailureInfoT&& value) { SetFailureInfo(std::forward<FailureInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistics about the export job.</p>
     */
    inline const ExportStatistics& GetStatistics() const { return m_statistics; }
    template<typename StatisticsT = ExportStatistics>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = ExportStatistics>
    GetExportJobResult& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetExportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    ExportSourceType m_exportSourceType{ExportSourceType::NOT_SET};
    bool m_exportSourceTypeHasBeenSet = false;

    JobStatus m_jobStatus{JobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    ExportDestination m_exportDestination;
    bool m_exportDestinationHasBeenSet = false;

    ExportDataSource m_exportDataSource;
    bool m_exportDataSourceHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_completedTimestamp{};
    bool m_completedTimestampHasBeenSet = false;

    FailureInfo m_failureInfo;
    bool m_failureInfoHasBeenSet = false;

    ExportStatistics m_statistics;
    bool m_statisticsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
