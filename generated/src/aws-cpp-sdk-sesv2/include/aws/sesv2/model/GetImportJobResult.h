/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/ImportDestination.h>
#include <aws/sesv2/model/ImportDataSource.h>
#include <aws/sesv2/model/FailureInfo.h>
#include <aws/sesv2/model/JobStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetImportJobResponse">AWS
   * API Reference</a></p>
   */
  class GetImportJobResult
  {
  public:
    AWS_SESV2_API GetImportJobResult() = default;
    AWS_SESV2_API GetImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A string that represents the import job ID.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    GetImportJobResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination of the import job.</p>
     */
    inline const ImportDestination& GetImportDestination() const { return m_importDestination; }
    template<typename ImportDestinationT = ImportDestination>
    void SetImportDestination(ImportDestinationT&& value) { m_importDestinationHasBeenSet = true; m_importDestination = std::forward<ImportDestinationT>(value); }
    template<typename ImportDestinationT = ImportDestination>
    GetImportJobResult& WithImportDestination(ImportDestinationT&& value) { SetImportDestination(std::forward<ImportDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source of the import job.</p>
     */
    inline const ImportDataSource& GetImportDataSource() const { return m_importDataSource; }
    template<typename ImportDataSourceT = ImportDataSource>
    void SetImportDataSource(ImportDataSourceT&& value) { m_importDataSourceHasBeenSet = true; m_importDataSource = std::forward<ImportDataSourceT>(value); }
    template<typename ImportDataSourceT = ImportDataSource>
    GetImportJobResult& WithImportDataSource(ImportDataSourceT&& value) { SetImportDataSource(std::forward<ImportDataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure details about an import job.</p>
     */
    inline const FailureInfo& GetFailureInfo() const { return m_failureInfo; }
    template<typename FailureInfoT = FailureInfo>
    void SetFailureInfo(FailureInfoT&& value) { m_failureInfoHasBeenSet = true; m_failureInfo = std::forward<FailureInfoT>(value); }
    template<typename FailureInfoT = FailureInfo>
    GetImportJobResult& WithFailureInfo(FailureInfoT&& value) { SetFailureInfo(std::forward<FailureInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the import job.</p>
     */
    inline JobStatus GetJobStatus() const { return m_jobStatus; }
    inline void SetJobStatus(JobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline GetImportJobResult& WithJobStatus(JobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp of when the import job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    GetImportJobResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp of when the import job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedTimestamp() const { return m_completedTimestamp; }
    template<typename CompletedTimestampT = Aws::Utils::DateTime>
    void SetCompletedTimestamp(CompletedTimestampT&& value) { m_completedTimestampHasBeenSet = true; m_completedTimestamp = std::forward<CompletedTimestampT>(value); }
    template<typename CompletedTimestampT = Aws::Utils::DateTime>
    GetImportJobResult& WithCompletedTimestamp(CompletedTimestampT&& value) { SetCompletedTimestamp(std::forward<CompletedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current number of records processed.</p>
     */
    inline int GetProcessedRecordsCount() const { return m_processedRecordsCount; }
    inline void SetProcessedRecordsCount(int value) { m_processedRecordsCountHasBeenSet = true; m_processedRecordsCount = value; }
    inline GetImportJobResult& WithProcessedRecordsCount(int value) { SetProcessedRecordsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of records that failed processing because of invalid input or
     * other reasons.</p>
     */
    inline int GetFailedRecordsCount() const { return m_failedRecordsCount; }
    inline void SetFailedRecordsCount(int value) { m_failedRecordsCountHasBeenSet = true; m_failedRecordsCount = value; }
    inline GetImportJobResult& WithFailedRecordsCount(int value) { SetFailedRecordsCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetImportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    ImportDestination m_importDestination;
    bool m_importDestinationHasBeenSet = false;

    ImportDataSource m_importDataSource;
    bool m_importDataSourceHasBeenSet = false;

    FailureInfo m_failureInfo;
    bool m_failureInfoHasBeenSet = false;

    JobStatus m_jobStatus{JobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_completedTimestamp{};
    bool m_completedTimestampHasBeenSet = false;

    int m_processedRecordsCount{0};
    bool m_processedRecordsCountHasBeenSet = false;

    int m_failedRecordsCount{0};
    bool m_failedRecordsCountHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
