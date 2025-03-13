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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p> Information about the import file tasks you request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ImportFileTaskInformation">AWS
   * API Reference</a></p>
   */
  class ImportFileTaskInformation
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ImportFileTaskInformation() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ImportFileTaskInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ImportFileTaskInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The time that the import task completes. </p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    ImportFileTaskInformation& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the import file task. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ImportFileTaskInformation& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the import task given in <code>StartImportFileTask</code>. </p>
     */
    inline const Aws::String& GetImportName() const { return m_importName; }
    inline bool ImportNameHasBeenSet() const { return m_importNameHasBeenSet; }
    template<typename ImportNameT = Aws::String>
    void SetImportName(ImportNameT&& value) { m_importNameHasBeenSet = true; m_importName = std::forward<ImportNameT>(value); }
    template<typename ImportNameT = Aws::String>
    ImportFileTaskInformation& WithImportName(ImportNameT&& value) { SetImportName(std::forward<ImportNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The S3 bucket where the import file is located. </p>
     */
    inline const Aws::String& GetInputS3Bucket() const { return m_inputS3Bucket; }
    inline bool InputS3BucketHasBeenSet() const { return m_inputS3BucketHasBeenSet; }
    template<typename InputS3BucketT = Aws::String>
    void SetInputS3Bucket(InputS3BucketT&& value) { m_inputS3BucketHasBeenSet = true; m_inputS3Bucket = std::forward<InputS3BucketT>(value); }
    template<typename InputS3BucketT = Aws::String>
    ImportFileTaskInformation& WithInputS3Bucket(InputS3BucketT&& value) { SetInputS3Bucket(std::forward<InputS3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline const Aws::String& GetInputS3Key() const { return m_inputS3Key; }
    inline bool InputS3KeyHasBeenSet() const { return m_inputS3KeyHasBeenSet; }
    template<typename InputS3KeyT = Aws::String>
    void SetInputS3Key(InputS3KeyT&& value) { m_inputS3KeyHasBeenSet = true; m_inputS3Key = std::forward<InputS3KeyT>(value); }
    template<typename InputS3KeyT = Aws::String>
    ImportFileTaskInformation& WithInputS3Key(InputS3KeyT&& value) { SetInputS3Key(std::forward<InputS3KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of records that failed to be imported. </p>
     */
    inline int GetNumberOfRecordsFailed() const { return m_numberOfRecordsFailed; }
    inline bool NumberOfRecordsFailedHasBeenSet() const { return m_numberOfRecordsFailedHasBeenSet; }
    inline void SetNumberOfRecordsFailed(int value) { m_numberOfRecordsFailedHasBeenSet = true; m_numberOfRecordsFailed = value; }
    inline ImportFileTaskInformation& WithNumberOfRecordsFailed(int value) { SetNumberOfRecordsFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of records successfully imported. </p>
     */
    inline int GetNumberOfRecordsSuccess() const { return m_numberOfRecordsSuccess; }
    inline bool NumberOfRecordsSuccessHasBeenSet() const { return m_numberOfRecordsSuccessHasBeenSet; }
    inline void SetNumberOfRecordsSuccess(int value) { m_numberOfRecordsSuccessHasBeenSet = true; m_numberOfRecordsSuccess = value; }
    inline ImportFileTaskInformation& WithNumberOfRecordsSuccess(int value) { SetNumberOfRecordsSuccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Start time of the import task. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ImportFileTaskInformation& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Status of import file task. </p>
     */
    inline ImportFileTaskStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ImportFileTaskStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ImportFileTaskInformation& WithStatus(ImportFileTaskStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The S3 bucket name for status report of import task. </p>
     */
    inline const Aws::String& GetStatusReportS3Bucket() const { return m_statusReportS3Bucket; }
    inline bool StatusReportS3BucketHasBeenSet() const { return m_statusReportS3BucketHasBeenSet; }
    template<typename StatusReportS3BucketT = Aws::String>
    void SetStatusReportS3Bucket(StatusReportS3BucketT&& value) { m_statusReportS3BucketHasBeenSet = true; m_statusReportS3Bucket = std::forward<StatusReportS3BucketT>(value); }
    template<typename StatusReportS3BucketT = Aws::String>
    ImportFileTaskInformation& WithStatusReportS3Bucket(StatusReportS3BucketT&& value) { SetStatusReportS3Bucket(std::forward<StatusReportS3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon S3 key name for status report of import task. The report contains
     * details about whether each record imported successfully or why it did not. </p>
     */
    inline const Aws::String& GetStatusReportS3Key() const { return m_statusReportS3Key; }
    inline bool StatusReportS3KeyHasBeenSet() const { return m_statusReportS3KeyHasBeenSet; }
    template<typename StatusReportS3KeyT = Aws::String>
    void SetStatusReportS3Key(StatusReportS3KeyT&& value) { m_statusReportS3KeyHasBeenSet = true; m_statusReportS3Key = std::forward<StatusReportS3KeyT>(value); }
    template<typename StatusReportS3KeyT = Aws::String>
    ImportFileTaskInformation& WithStatusReportS3Key(StatusReportS3KeyT&& value) { SetStatusReportS3Key(std::forward<StatusReportS3KeyT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
