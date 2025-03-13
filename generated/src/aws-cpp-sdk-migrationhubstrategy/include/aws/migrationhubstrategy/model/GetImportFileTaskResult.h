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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetImportFileTaskResult() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetImportFileTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetImportFileTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The time that the import task completed. </p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    GetImportFileTaskResult& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The import file task <code>id</code> returned in the response of
     * <a>StartImportFileTask</a>. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetImportFileTaskResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the import task given in <a>StartImportFileTask</a>. </p>
     */
    inline const Aws::String& GetImportName() const { return m_importName; }
    template<typename ImportNameT = Aws::String>
    void SetImportName(ImportNameT&& value) { m_importNameHasBeenSet = true; m_importName = std::forward<ImportNameT>(value); }
    template<typename ImportNameT = Aws::String>
    GetImportFileTaskResult& WithImportName(ImportNameT&& value) { SetImportName(std::forward<ImportNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The S3 bucket where import file is located. </p>
     */
    inline const Aws::String& GetInputS3Bucket() const { return m_inputS3Bucket; }
    template<typename InputS3BucketT = Aws::String>
    void SetInputS3Bucket(InputS3BucketT&& value) { m_inputS3BucketHasBeenSet = true; m_inputS3Bucket = std::forward<InputS3BucketT>(value); }
    template<typename InputS3BucketT = Aws::String>
    GetImportFileTaskResult& WithInputS3Bucket(InputS3BucketT&& value) { SetInputS3Bucket(std::forward<InputS3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline const Aws::String& GetInputS3Key() const { return m_inputS3Key; }
    template<typename InputS3KeyT = Aws::String>
    void SetInputS3Key(InputS3KeyT&& value) { m_inputS3KeyHasBeenSet = true; m_inputS3Key = std::forward<InputS3KeyT>(value); }
    template<typename InputS3KeyT = Aws::String>
    GetImportFileTaskResult& WithInputS3Key(InputS3KeyT&& value) { SetInputS3Key(std::forward<InputS3KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of records that failed to be imported. </p>
     */
    inline int GetNumberOfRecordsFailed() const { return m_numberOfRecordsFailed; }
    inline void SetNumberOfRecordsFailed(int value) { m_numberOfRecordsFailedHasBeenSet = true; m_numberOfRecordsFailed = value; }
    inline GetImportFileTaskResult& WithNumberOfRecordsFailed(int value) { SetNumberOfRecordsFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of records successfully imported. </p>
     */
    inline int GetNumberOfRecordsSuccess() const { return m_numberOfRecordsSuccess; }
    inline void SetNumberOfRecordsSuccess(int value) { m_numberOfRecordsSuccessHasBeenSet = true; m_numberOfRecordsSuccess = value; }
    inline GetImportFileTaskResult& WithNumberOfRecordsSuccess(int value) { SetNumberOfRecordsSuccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Start time of the import task. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetImportFileTaskResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Status of import file task. </p>
     */
    inline ImportFileTaskStatus GetStatus() const { return m_status; }
    inline void SetStatus(ImportFileTaskStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetImportFileTaskResult& WithStatus(ImportFileTaskStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The S3 bucket name for status report of import task. </p>
     */
    inline const Aws::String& GetStatusReportS3Bucket() const { return m_statusReportS3Bucket; }
    template<typename StatusReportS3BucketT = Aws::String>
    void SetStatusReportS3Bucket(StatusReportS3BucketT&& value) { m_statusReportS3BucketHasBeenSet = true; m_statusReportS3Bucket = std::forward<StatusReportS3BucketT>(value); }
    template<typename StatusReportS3BucketT = Aws::String>
    GetImportFileTaskResult& WithStatusReportS3Bucket(StatusReportS3BucketT&& value) { SetStatusReportS3Bucket(std::forward<StatusReportS3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon S3 key name for status report of import task. The report contains
     * details about whether each record imported successfully or why it did not.</p>
     */
    inline const Aws::String& GetStatusReportS3Key() const { return m_statusReportS3Key; }
    template<typename StatusReportS3KeyT = Aws::String>
    void SetStatusReportS3Key(StatusReportS3KeyT&& value) { m_statusReportS3KeyHasBeenSet = true; m_statusReportS3Key = std::forward<StatusReportS3KeyT>(value); }
    template<typename StatusReportS3KeyT = Aws::String>
    GetImportFileTaskResult& WithStatusReportS3Key(StatusReportS3KeyT&& value) { SetStatusReportS3Key(std::forward<StatusReportS3KeyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetImportFileTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_completionTime{};
    bool m_completionTimeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_importName;
    bool m_importNameHasBeenSet = false;

    Aws::String m_inputS3Bucket;
    bool m_inputS3BucketHasBeenSet = false;

    Aws::String m_inputS3Key;
    bool m_inputS3KeyHasBeenSet = false;

    int m_numberOfRecordsFailed{0};
    bool m_numberOfRecordsFailedHasBeenSet = false;

    int m_numberOfRecordsSuccess{0};
    bool m_numberOfRecordsSuccessHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    ImportFileTaskStatus m_status{ImportFileTaskStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReportS3Bucket;
    bool m_statusReportS3BucketHasBeenSet = false;

    Aws::String m_statusReportS3Key;
    bool m_statusReportS3KeyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
