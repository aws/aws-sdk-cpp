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
    AWS_SESV2_API GetImportJobResult();
    AWS_SESV2_API GetImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A string that represents the import job ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>A string that represents the import job ID.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>A string that represents the import job ID.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>A string that represents the import job ID.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>A string that represents the import job ID.</p>
     */
    inline GetImportJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>A string that represents the import job ID.</p>
     */
    inline GetImportJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>A string that represents the import job ID.</p>
     */
    inline GetImportJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The destination of the import job.</p>
     */
    inline const ImportDestination& GetImportDestination() const{ return m_importDestination; }

    /**
     * <p>The destination of the import job.</p>
     */
    inline void SetImportDestination(const ImportDestination& value) { m_importDestination = value; }

    /**
     * <p>The destination of the import job.</p>
     */
    inline void SetImportDestination(ImportDestination&& value) { m_importDestination = std::move(value); }

    /**
     * <p>The destination of the import job.</p>
     */
    inline GetImportJobResult& WithImportDestination(const ImportDestination& value) { SetImportDestination(value); return *this;}

    /**
     * <p>The destination of the import job.</p>
     */
    inline GetImportJobResult& WithImportDestination(ImportDestination&& value) { SetImportDestination(std::move(value)); return *this;}


    /**
     * <p>The data source of the import job.</p>
     */
    inline const ImportDataSource& GetImportDataSource() const{ return m_importDataSource; }

    /**
     * <p>The data source of the import job.</p>
     */
    inline void SetImportDataSource(const ImportDataSource& value) { m_importDataSource = value; }

    /**
     * <p>The data source of the import job.</p>
     */
    inline void SetImportDataSource(ImportDataSource&& value) { m_importDataSource = std::move(value); }

    /**
     * <p>The data source of the import job.</p>
     */
    inline GetImportJobResult& WithImportDataSource(const ImportDataSource& value) { SetImportDataSource(value); return *this;}

    /**
     * <p>The data source of the import job.</p>
     */
    inline GetImportJobResult& WithImportDataSource(ImportDataSource&& value) { SetImportDataSource(std::move(value)); return *this;}


    /**
     * <p>The failure details about an import job.</p>
     */
    inline const FailureInfo& GetFailureInfo() const{ return m_failureInfo; }

    /**
     * <p>The failure details about an import job.</p>
     */
    inline void SetFailureInfo(const FailureInfo& value) { m_failureInfo = value; }

    /**
     * <p>The failure details about an import job.</p>
     */
    inline void SetFailureInfo(FailureInfo&& value) { m_failureInfo = std::move(value); }

    /**
     * <p>The failure details about an import job.</p>
     */
    inline GetImportJobResult& WithFailureInfo(const FailureInfo& value) { SetFailureInfo(value); return *this;}

    /**
     * <p>The failure details about an import job.</p>
     */
    inline GetImportJobResult& WithFailureInfo(FailureInfo&& value) { SetFailureInfo(std::move(value)); return *this;}


    /**
     * <p>The status of the import job.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The status of the import job.</p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatus = value; }

    /**
     * <p>The status of the import job.</p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>The status of the import job.</p>
     */
    inline GetImportJobResult& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The status of the import job.</p>
     */
    inline GetImportJobResult& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>The time stamp of when the import job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time stamp of when the import job was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p>The time stamp of when the import job was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p>The time stamp of when the import job was created.</p>
     */
    inline GetImportJobResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time stamp of when the import job was created.</p>
     */
    inline GetImportJobResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time stamp of when the import job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedTimestamp() const{ return m_completedTimestamp; }

    /**
     * <p>The time stamp of when the import job was completed.</p>
     */
    inline void SetCompletedTimestamp(const Aws::Utils::DateTime& value) { m_completedTimestamp = value; }

    /**
     * <p>The time stamp of when the import job was completed.</p>
     */
    inline void SetCompletedTimestamp(Aws::Utils::DateTime&& value) { m_completedTimestamp = std::move(value); }

    /**
     * <p>The time stamp of when the import job was completed.</p>
     */
    inline GetImportJobResult& WithCompletedTimestamp(const Aws::Utils::DateTime& value) { SetCompletedTimestamp(value); return *this;}

    /**
     * <p>The time stamp of when the import job was completed.</p>
     */
    inline GetImportJobResult& WithCompletedTimestamp(Aws::Utils::DateTime&& value) { SetCompletedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The current number of records processed.</p>
     */
    inline int GetProcessedRecordsCount() const{ return m_processedRecordsCount; }

    /**
     * <p>The current number of records processed.</p>
     */
    inline void SetProcessedRecordsCount(int value) { m_processedRecordsCount = value; }

    /**
     * <p>The current number of records processed.</p>
     */
    inline GetImportJobResult& WithProcessedRecordsCount(int value) { SetProcessedRecordsCount(value); return *this;}


    /**
     * <p>The number of records that failed processing because of invalid input or
     * other reasons.</p>
     */
    inline int GetFailedRecordsCount() const{ return m_failedRecordsCount; }

    /**
     * <p>The number of records that failed processing because of invalid input or
     * other reasons.</p>
     */
    inline void SetFailedRecordsCount(int value) { m_failedRecordsCount = value; }

    /**
     * <p>The number of records that failed processing because of invalid input or
     * other reasons.</p>
     */
    inline GetImportJobResult& WithFailedRecordsCount(int value) { SetFailedRecordsCount(value); return *this;}

  private:

    Aws::String m_jobId;

    ImportDestination m_importDestination;

    ImportDataSource m_importDataSource;

    FailureInfo m_failureInfo;

    JobStatus m_jobStatus;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::Utils::DateTime m_completedTimestamp;

    int m_processedRecordsCount;

    int m_failedRecordsCount;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
