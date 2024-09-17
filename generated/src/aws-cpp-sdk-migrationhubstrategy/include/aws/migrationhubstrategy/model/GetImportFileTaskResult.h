/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/ImportFileTaskStatus.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{
  class GetImportFileTaskResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetImportFileTaskResult();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetImportFileTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetImportFileTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The time that the import task completed. </p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTime = value; }
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTime = std::move(value); }
    inline GetImportFileTaskResult& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}
    inline GetImportFileTaskResult& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The import file task <code>id</code> returned in the response of
     * <a>StartImportFileTask</a>. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetImportFileTaskResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetImportFileTaskResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetImportFileTaskResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the import task given in <a>StartImportFileTask</a>. </p>
     */
    inline const Aws::String& GetImportName() const{ return m_importName; }
    inline void SetImportName(const Aws::String& value) { m_importName = value; }
    inline void SetImportName(Aws::String&& value) { m_importName = std::move(value); }
    inline void SetImportName(const char* value) { m_importName.assign(value); }
    inline GetImportFileTaskResult& WithImportName(const Aws::String& value) { SetImportName(value); return *this;}
    inline GetImportFileTaskResult& WithImportName(Aws::String&& value) { SetImportName(std::move(value)); return *this;}
    inline GetImportFileTaskResult& WithImportName(const char* value) { SetImportName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The S3 bucket where import file is located. </p>
     */
    inline const Aws::String& GetInputS3Bucket() const{ return m_inputS3Bucket; }
    inline void SetInputS3Bucket(const Aws::String& value) { m_inputS3Bucket = value; }
    inline void SetInputS3Bucket(Aws::String&& value) { m_inputS3Bucket = std::move(value); }
    inline void SetInputS3Bucket(const char* value) { m_inputS3Bucket.assign(value); }
    inline GetImportFileTaskResult& WithInputS3Bucket(const Aws::String& value) { SetInputS3Bucket(value); return *this;}
    inline GetImportFileTaskResult& WithInputS3Bucket(Aws::String&& value) { SetInputS3Bucket(std::move(value)); return *this;}
    inline GetImportFileTaskResult& WithInputS3Bucket(const char* value) { SetInputS3Bucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline const Aws::String& GetInputS3Key() const{ return m_inputS3Key; }
    inline void SetInputS3Key(const Aws::String& value) { m_inputS3Key = value; }
    inline void SetInputS3Key(Aws::String&& value) { m_inputS3Key = std::move(value); }
    inline void SetInputS3Key(const char* value) { m_inputS3Key.assign(value); }
    inline GetImportFileTaskResult& WithInputS3Key(const Aws::String& value) { SetInputS3Key(value); return *this;}
    inline GetImportFileTaskResult& WithInputS3Key(Aws::String&& value) { SetInputS3Key(std::move(value)); return *this;}
    inline GetImportFileTaskResult& WithInputS3Key(const char* value) { SetInputS3Key(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of records that failed to be imported. </p>
     */
    inline int GetNumberOfRecordsFailed() const{ return m_numberOfRecordsFailed; }
    inline void SetNumberOfRecordsFailed(int value) { m_numberOfRecordsFailed = value; }
    inline GetImportFileTaskResult& WithNumberOfRecordsFailed(int value) { SetNumberOfRecordsFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of records successfully imported. </p>
     */
    inline int GetNumberOfRecordsSuccess() const{ return m_numberOfRecordsSuccess; }
    inline void SetNumberOfRecordsSuccess(int value) { m_numberOfRecordsSuccess = value; }
    inline GetImportFileTaskResult& WithNumberOfRecordsSuccess(int value) { SetNumberOfRecordsSuccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Start time of the import task. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline GetImportFileTaskResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetImportFileTaskResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Status of import file task. </p>
     */
    inline const ImportFileTaskStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ImportFileTaskStatus& value) { m_status = value; }
    inline void SetStatus(ImportFileTaskStatus&& value) { m_status = std::move(value); }
    inline GetImportFileTaskResult& WithStatus(const ImportFileTaskStatus& value) { SetStatus(value); return *this;}
    inline GetImportFileTaskResult& WithStatus(ImportFileTaskStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The S3 bucket name for status report of import task. </p>
     */
    inline const Aws::String& GetStatusReportS3Bucket() const{ return m_statusReportS3Bucket; }
    inline void SetStatusReportS3Bucket(const Aws::String& value) { m_statusReportS3Bucket = value; }
    inline void SetStatusReportS3Bucket(Aws::String&& value) { m_statusReportS3Bucket = std::move(value); }
    inline void SetStatusReportS3Bucket(const char* value) { m_statusReportS3Bucket.assign(value); }
    inline GetImportFileTaskResult& WithStatusReportS3Bucket(const Aws::String& value) { SetStatusReportS3Bucket(value); return *this;}
    inline GetImportFileTaskResult& WithStatusReportS3Bucket(Aws::String&& value) { SetStatusReportS3Bucket(std::move(value)); return *this;}
    inline GetImportFileTaskResult& WithStatusReportS3Bucket(const char* value) { SetStatusReportS3Bucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon S3 key name for status report of import task. The report contains
     * details about whether each record imported successfully or why it did not.</p>
     */
    inline const Aws::String& GetStatusReportS3Key() const{ return m_statusReportS3Key; }
    inline void SetStatusReportS3Key(const Aws::String& value) { m_statusReportS3Key = value; }
    inline void SetStatusReportS3Key(Aws::String&& value) { m_statusReportS3Key = std::move(value); }
    inline void SetStatusReportS3Key(const char* value) { m_statusReportS3Key.assign(value); }
    inline GetImportFileTaskResult& WithStatusReportS3Key(const Aws::String& value) { SetStatusReportS3Key(value); return *this;}
    inline GetImportFileTaskResult& WithStatusReportS3Key(Aws::String&& value) { SetStatusReportS3Key(std::move(value)); return *this;}
    inline GetImportFileTaskResult& WithStatusReportS3Key(const char* value) { SetStatusReportS3Key(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetImportFileTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetImportFileTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetImportFileTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_completionTime;

    Aws::String m_id;

    Aws::String m_importName;

    Aws::String m_inputS3Bucket;

    Aws::String m_inputS3Key;

    int m_numberOfRecordsFailed;

    int m_numberOfRecordsSuccess;

    Aws::Utils::DateTime m_startTime;

    ImportFileTaskStatus m_status;

    Aws::String m_statusReportS3Bucket;

    Aws::String m_statusReportS3Key;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
