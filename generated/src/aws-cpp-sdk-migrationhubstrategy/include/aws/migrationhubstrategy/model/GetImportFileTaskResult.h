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


    /**
     * <p> The time that the import task completed. </p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p> The time that the import task completed. </p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTime = value; }

    /**
     * <p> The time that the import task completed. </p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTime = std::move(value); }

    /**
     * <p> The time that the import task completed. </p>
     */
    inline GetImportFileTaskResult& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p> The time that the import task completed. </p>
     */
    inline GetImportFileTaskResult& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p> The import file task <code>id</code> returned in the response of
     * <a>StartImportFileTask</a>. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The import file task <code>id</code> returned in the response of
     * <a>StartImportFileTask</a>. </p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p> The import file task <code>id</code> returned in the response of
     * <a>StartImportFileTask</a>. </p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p> The import file task <code>id</code> returned in the response of
     * <a>StartImportFileTask</a>. </p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p> The import file task <code>id</code> returned in the response of
     * <a>StartImportFileTask</a>. </p>
     */
    inline GetImportFileTaskResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The import file task <code>id</code> returned in the response of
     * <a>StartImportFileTask</a>. </p>
     */
    inline GetImportFileTaskResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The import file task <code>id</code> returned in the response of
     * <a>StartImportFileTask</a>. </p>
     */
    inline GetImportFileTaskResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The name of the import task given in <a>StartImportFileTask</a>. </p>
     */
    inline const Aws::String& GetImportName() const{ return m_importName; }

    /**
     * <p> The name of the import task given in <a>StartImportFileTask</a>. </p>
     */
    inline void SetImportName(const Aws::String& value) { m_importName = value; }

    /**
     * <p> The name of the import task given in <a>StartImportFileTask</a>. </p>
     */
    inline void SetImportName(Aws::String&& value) { m_importName = std::move(value); }

    /**
     * <p> The name of the import task given in <a>StartImportFileTask</a>. </p>
     */
    inline void SetImportName(const char* value) { m_importName.assign(value); }

    /**
     * <p> The name of the import task given in <a>StartImportFileTask</a>. </p>
     */
    inline GetImportFileTaskResult& WithImportName(const Aws::String& value) { SetImportName(value); return *this;}

    /**
     * <p> The name of the import task given in <a>StartImportFileTask</a>. </p>
     */
    inline GetImportFileTaskResult& WithImportName(Aws::String&& value) { SetImportName(std::move(value)); return *this;}

    /**
     * <p> The name of the import task given in <a>StartImportFileTask</a>. </p>
     */
    inline GetImportFileTaskResult& WithImportName(const char* value) { SetImportName(value); return *this;}


    /**
     * <p> The S3 bucket where import file is located. </p>
     */
    inline const Aws::String& GetInputS3Bucket() const{ return m_inputS3Bucket; }

    /**
     * <p> The S3 bucket where import file is located. </p>
     */
    inline void SetInputS3Bucket(const Aws::String& value) { m_inputS3Bucket = value; }

    /**
     * <p> The S3 bucket where import file is located. </p>
     */
    inline void SetInputS3Bucket(Aws::String&& value) { m_inputS3Bucket = std::move(value); }

    /**
     * <p> The S3 bucket where import file is located. </p>
     */
    inline void SetInputS3Bucket(const char* value) { m_inputS3Bucket.assign(value); }

    /**
     * <p> The S3 bucket where import file is located. </p>
     */
    inline GetImportFileTaskResult& WithInputS3Bucket(const Aws::String& value) { SetInputS3Bucket(value); return *this;}

    /**
     * <p> The S3 bucket where import file is located. </p>
     */
    inline GetImportFileTaskResult& WithInputS3Bucket(Aws::String&& value) { SetInputS3Bucket(std::move(value)); return *this;}

    /**
     * <p> The S3 bucket where import file is located. </p>
     */
    inline GetImportFileTaskResult& WithInputS3Bucket(const char* value) { SetInputS3Bucket(value); return *this;}


    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline const Aws::String& GetInputS3Key() const{ return m_inputS3Key; }

    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline void SetInputS3Key(const Aws::String& value) { m_inputS3Key = value; }

    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline void SetInputS3Key(Aws::String&& value) { m_inputS3Key = std::move(value); }

    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline void SetInputS3Key(const char* value) { m_inputS3Key.assign(value); }

    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline GetImportFileTaskResult& WithInputS3Key(const Aws::String& value) { SetInputS3Key(value); return *this;}

    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline GetImportFileTaskResult& WithInputS3Key(Aws::String&& value) { SetInputS3Key(std::move(value)); return *this;}

    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline GetImportFileTaskResult& WithInputS3Key(const char* value) { SetInputS3Key(value); return *this;}


    /**
     * <p> The number of records that failed to be imported. </p>
     */
    inline int GetNumberOfRecordsFailed() const{ return m_numberOfRecordsFailed; }

    /**
     * <p> The number of records that failed to be imported. </p>
     */
    inline void SetNumberOfRecordsFailed(int value) { m_numberOfRecordsFailed = value; }

    /**
     * <p> The number of records that failed to be imported. </p>
     */
    inline GetImportFileTaskResult& WithNumberOfRecordsFailed(int value) { SetNumberOfRecordsFailed(value); return *this;}


    /**
     * <p> The number of records successfully imported. </p>
     */
    inline int GetNumberOfRecordsSuccess() const{ return m_numberOfRecordsSuccess; }

    /**
     * <p> The number of records successfully imported. </p>
     */
    inline void SetNumberOfRecordsSuccess(int value) { m_numberOfRecordsSuccess = value; }

    /**
     * <p> The number of records successfully imported. </p>
     */
    inline GetImportFileTaskResult& WithNumberOfRecordsSuccess(int value) { SetNumberOfRecordsSuccess(value); return *this;}


    /**
     * <p> Start time of the import task. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> Start time of the import task. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p> Start time of the import task. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p> Start time of the import task. </p>
     */
    inline GetImportFileTaskResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> Start time of the import task. </p>
     */
    inline GetImportFileTaskResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p> Status of import file task. </p>
     */
    inline const ImportFileTaskStatus& GetStatus() const{ return m_status; }

    /**
     * <p> Status of import file task. </p>
     */
    inline void SetStatus(const ImportFileTaskStatus& value) { m_status = value; }

    /**
     * <p> Status of import file task. </p>
     */
    inline void SetStatus(ImportFileTaskStatus&& value) { m_status = std::move(value); }

    /**
     * <p> Status of import file task. </p>
     */
    inline GetImportFileTaskResult& WithStatus(const ImportFileTaskStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> Status of import file task. </p>
     */
    inline GetImportFileTaskResult& WithStatus(ImportFileTaskStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The S3 bucket name for status report of import task. </p>
     */
    inline const Aws::String& GetStatusReportS3Bucket() const{ return m_statusReportS3Bucket; }

    /**
     * <p> The S3 bucket name for status report of import task. </p>
     */
    inline void SetStatusReportS3Bucket(const Aws::String& value) { m_statusReportS3Bucket = value; }

    /**
     * <p> The S3 bucket name for status report of import task. </p>
     */
    inline void SetStatusReportS3Bucket(Aws::String&& value) { m_statusReportS3Bucket = std::move(value); }

    /**
     * <p> The S3 bucket name for status report of import task. </p>
     */
    inline void SetStatusReportS3Bucket(const char* value) { m_statusReportS3Bucket.assign(value); }

    /**
     * <p> The S3 bucket name for status report of import task. </p>
     */
    inline GetImportFileTaskResult& WithStatusReportS3Bucket(const Aws::String& value) { SetStatusReportS3Bucket(value); return *this;}

    /**
     * <p> The S3 bucket name for status report of import task. </p>
     */
    inline GetImportFileTaskResult& WithStatusReportS3Bucket(Aws::String&& value) { SetStatusReportS3Bucket(std::move(value)); return *this;}

    /**
     * <p> The S3 bucket name for status report of import task. </p>
     */
    inline GetImportFileTaskResult& WithStatusReportS3Bucket(const char* value) { SetStatusReportS3Bucket(value); return *this;}


    /**
     * <p> The Amazon S3 key name for status report of import task. The report contains
     * details about whether each record imported successfully or why it did not.</p>
     */
    inline const Aws::String& GetStatusReportS3Key() const{ return m_statusReportS3Key; }

    /**
     * <p> The Amazon S3 key name for status report of import task. The report contains
     * details about whether each record imported successfully or why it did not.</p>
     */
    inline void SetStatusReportS3Key(const Aws::String& value) { m_statusReportS3Key = value; }

    /**
     * <p> The Amazon S3 key name for status report of import task. The report contains
     * details about whether each record imported successfully or why it did not.</p>
     */
    inline void SetStatusReportS3Key(Aws::String&& value) { m_statusReportS3Key = std::move(value); }

    /**
     * <p> The Amazon S3 key name for status report of import task. The report contains
     * details about whether each record imported successfully or why it did not.</p>
     */
    inline void SetStatusReportS3Key(const char* value) { m_statusReportS3Key.assign(value); }

    /**
     * <p> The Amazon S3 key name for status report of import task. The report contains
     * details about whether each record imported successfully or why it did not.</p>
     */
    inline GetImportFileTaskResult& WithStatusReportS3Key(const Aws::String& value) { SetStatusReportS3Key(value); return *this;}

    /**
     * <p> The Amazon S3 key name for status report of import task. The report contains
     * details about whether each record imported successfully or why it did not.</p>
     */
    inline GetImportFileTaskResult& WithStatusReportS3Key(Aws::String&& value) { SetStatusReportS3Key(std::move(value)); return *this;}

    /**
     * <p> The Amazon S3 key name for status report of import task. The report contains
     * details about whether each record imported successfully or why it did not.</p>
     */
    inline GetImportFileTaskResult& WithStatusReportS3Key(const char* value) { SetStatusReportS3Key(value); return *this;}

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
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
