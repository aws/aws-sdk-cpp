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
    AWS_SESV2_API GetExportJobResult();
    AWS_SESV2_API GetExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The export job ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The export job ID.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The export job ID.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The export job ID.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The export job ID.</p>
     */
    inline GetExportJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The export job ID.</p>
     */
    inline GetExportJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The export job ID.</p>
     */
    inline GetExportJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The type of source of the export job.</p>
     */
    inline const ExportSourceType& GetExportSourceType() const{ return m_exportSourceType; }

    /**
     * <p>The type of source of the export job.</p>
     */
    inline void SetExportSourceType(const ExportSourceType& value) { m_exportSourceType = value; }

    /**
     * <p>The type of source of the export job.</p>
     */
    inline void SetExportSourceType(ExportSourceType&& value) { m_exportSourceType = std::move(value); }

    /**
     * <p>The type of source of the export job.</p>
     */
    inline GetExportJobResult& WithExportSourceType(const ExportSourceType& value) { SetExportSourceType(value); return *this;}

    /**
     * <p>The type of source of the export job.</p>
     */
    inline GetExportJobResult& WithExportSourceType(ExportSourceType&& value) { SetExportSourceType(std::move(value)); return *this;}


    /**
     * <p>The status of the export job.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The status of the export job.</p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatus = value; }

    /**
     * <p>The status of the export job.</p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>The status of the export job.</p>
     */
    inline GetExportJobResult& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The status of the export job.</p>
     */
    inline GetExportJobResult& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>The destination of the export job.</p>
     */
    inline const ExportDestination& GetExportDestination() const{ return m_exportDestination; }

    /**
     * <p>The destination of the export job.</p>
     */
    inline void SetExportDestination(const ExportDestination& value) { m_exportDestination = value; }

    /**
     * <p>The destination of the export job.</p>
     */
    inline void SetExportDestination(ExportDestination&& value) { m_exportDestination = std::move(value); }

    /**
     * <p>The destination of the export job.</p>
     */
    inline GetExportJobResult& WithExportDestination(const ExportDestination& value) { SetExportDestination(value); return *this;}

    /**
     * <p>The destination of the export job.</p>
     */
    inline GetExportJobResult& WithExportDestination(ExportDestination&& value) { SetExportDestination(std::move(value)); return *this;}


    /**
     * <p>The data source of the export job.</p>
     */
    inline const ExportDataSource& GetExportDataSource() const{ return m_exportDataSource; }

    /**
     * <p>The data source of the export job.</p>
     */
    inline void SetExportDataSource(const ExportDataSource& value) { m_exportDataSource = value; }

    /**
     * <p>The data source of the export job.</p>
     */
    inline void SetExportDataSource(ExportDataSource&& value) { m_exportDataSource = std::move(value); }

    /**
     * <p>The data source of the export job.</p>
     */
    inline GetExportJobResult& WithExportDataSource(const ExportDataSource& value) { SetExportDataSource(value); return *this;}

    /**
     * <p>The data source of the export job.</p>
     */
    inline GetExportJobResult& WithExportDataSource(ExportDataSource&& value) { SetExportDataSource(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the export job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The timestamp of when the export job was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p>The timestamp of when the export job was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p>The timestamp of when the export job was created.</p>
     */
    inline GetExportJobResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The timestamp of when the export job was created.</p>
     */
    inline GetExportJobResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the export job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedTimestamp() const{ return m_completedTimestamp; }

    /**
     * <p>The timestamp of when the export job was completed.</p>
     */
    inline void SetCompletedTimestamp(const Aws::Utils::DateTime& value) { m_completedTimestamp = value; }

    /**
     * <p>The timestamp of when the export job was completed.</p>
     */
    inline void SetCompletedTimestamp(Aws::Utils::DateTime&& value) { m_completedTimestamp = std::move(value); }

    /**
     * <p>The timestamp of when the export job was completed.</p>
     */
    inline GetExportJobResult& WithCompletedTimestamp(const Aws::Utils::DateTime& value) { SetCompletedTimestamp(value); return *this;}

    /**
     * <p>The timestamp of when the export job was completed.</p>
     */
    inline GetExportJobResult& WithCompletedTimestamp(Aws::Utils::DateTime&& value) { SetCompletedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The failure details about an export job.</p>
     */
    inline const FailureInfo& GetFailureInfo() const{ return m_failureInfo; }

    /**
     * <p>The failure details about an export job.</p>
     */
    inline void SetFailureInfo(const FailureInfo& value) { m_failureInfo = value; }

    /**
     * <p>The failure details about an export job.</p>
     */
    inline void SetFailureInfo(FailureInfo&& value) { m_failureInfo = std::move(value); }

    /**
     * <p>The failure details about an export job.</p>
     */
    inline GetExportJobResult& WithFailureInfo(const FailureInfo& value) { SetFailureInfo(value); return *this;}

    /**
     * <p>The failure details about an export job.</p>
     */
    inline GetExportJobResult& WithFailureInfo(FailureInfo&& value) { SetFailureInfo(std::move(value)); return *this;}


    /**
     * <p>The statistics about the export job.</p>
     */
    inline const ExportStatistics& GetStatistics() const{ return m_statistics; }

    /**
     * <p>The statistics about the export job.</p>
     */
    inline void SetStatistics(const ExportStatistics& value) { m_statistics = value; }

    /**
     * <p>The statistics about the export job.</p>
     */
    inline void SetStatistics(ExportStatistics&& value) { m_statistics = std::move(value); }

    /**
     * <p>The statistics about the export job.</p>
     */
    inline GetExportJobResult& WithStatistics(const ExportStatistics& value) { SetStatistics(value); return *this;}

    /**
     * <p>The statistics about the export job.</p>
     */
    inline GetExportJobResult& WithStatistics(ExportStatistics&& value) { SetStatistics(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetExportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetExportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetExportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_jobId;

    ExportSourceType m_exportSourceType;

    JobStatus m_jobStatus;

    ExportDestination m_exportDestination;

    ExportDataSource m_exportDataSource;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::Utils::DateTime m_completedTimestamp;

    FailureInfo m_failureInfo;

    ExportStatistics m_statistics;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
