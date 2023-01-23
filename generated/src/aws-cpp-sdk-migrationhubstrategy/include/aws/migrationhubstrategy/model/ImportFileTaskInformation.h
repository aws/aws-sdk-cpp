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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ImportFileTaskInformation();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ImportFileTaskInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ImportFileTaskInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The time that the import task completes. </p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p> The time that the import task completes. </p>
     */
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }

    /**
     * <p> The time that the import task completes. </p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p> The time that the import task completes. </p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }

    /**
     * <p> The time that the import task completes. </p>
     */
    inline ImportFileTaskInformation& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p> The time that the import task completes. </p>
     */
    inline ImportFileTaskInformation& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p> The ID of the import file task. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The ID of the import file task. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The ID of the import file task. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The ID of the import file task. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The ID of the import file task. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The ID of the import file task. </p>
     */
    inline ImportFileTaskInformation& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The ID of the import file task. </p>
     */
    inline ImportFileTaskInformation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The ID of the import file task. </p>
     */
    inline ImportFileTaskInformation& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The name of the import task given in <code>StartImportFileTask</code>. </p>
     */
    inline const Aws::String& GetImportName() const{ return m_importName; }

    /**
     * <p> The name of the import task given in <code>StartImportFileTask</code>. </p>
     */
    inline bool ImportNameHasBeenSet() const { return m_importNameHasBeenSet; }

    /**
     * <p> The name of the import task given in <code>StartImportFileTask</code>. </p>
     */
    inline void SetImportName(const Aws::String& value) { m_importNameHasBeenSet = true; m_importName = value; }

    /**
     * <p> The name of the import task given in <code>StartImportFileTask</code>. </p>
     */
    inline void SetImportName(Aws::String&& value) { m_importNameHasBeenSet = true; m_importName = std::move(value); }

    /**
     * <p> The name of the import task given in <code>StartImportFileTask</code>. </p>
     */
    inline void SetImportName(const char* value) { m_importNameHasBeenSet = true; m_importName.assign(value); }

    /**
     * <p> The name of the import task given in <code>StartImportFileTask</code>. </p>
     */
    inline ImportFileTaskInformation& WithImportName(const Aws::String& value) { SetImportName(value); return *this;}

    /**
     * <p> The name of the import task given in <code>StartImportFileTask</code>. </p>
     */
    inline ImportFileTaskInformation& WithImportName(Aws::String&& value) { SetImportName(std::move(value)); return *this;}

    /**
     * <p> The name of the import task given in <code>StartImportFileTask</code>. </p>
     */
    inline ImportFileTaskInformation& WithImportName(const char* value) { SetImportName(value); return *this;}


    /**
     * <p> The S3 bucket where the import file is located. </p>
     */
    inline const Aws::String& GetInputS3Bucket() const{ return m_inputS3Bucket; }

    /**
     * <p> The S3 bucket where the import file is located. </p>
     */
    inline bool InputS3BucketHasBeenSet() const { return m_inputS3BucketHasBeenSet; }

    /**
     * <p> The S3 bucket where the import file is located. </p>
     */
    inline void SetInputS3Bucket(const Aws::String& value) { m_inputS3BucketHasBeenSet = true; m_inputS3Bucket = value; }

    /**
     * <p> The S3 bucket where the import file is located. </p>
     */
    inline void SetInputS3Bucket(Aws::String&& value) { m_inputS3BucketHasBeenSet = true; m_inputS3Bucket = std::move(value); }

    /**
     * <p> The S3 bucket where the import file is located. </p>
     */
    inline void SetInputS3Bucket(const char* value) { m_inputS3BucketHasBeenSet = true; m_inputS3Bucket.assign(value); }

    /**
     * <p> The S3 bucket where the import file is located. </p>
     */
    inline ImportFileTaskInformation& WithInputS3Bucket(const Aws::String& value) { SetInputS3Bucket(value); return *this;}

    /**
     * <p> The S3 bucket where the import file is located. </p>
     */
    inline ImportFileTaskInformation& WithInputS3Bucket(Aws::String&& value) { SetInputS3Bucket(std::move(value)); return *this;}

    /**
     * <p> The S3 bucket where the import file is located. </p>
     */
    inline ImportFileTaskInformation& WithInputS3Bucket(const char* value) { SetInputS3Bucket(value); return *this;}


    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline const Aws::String& GetInputS3Key() const{ return m_inputS3Key; }

    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline bool InputS3KeyHasBeenSet() const { return m_inputS3KeyHasBeenSet; }

    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline void SetInputS3Key(const Aws::String& value) { m_inputS3KeyHasBeenSet = true; m_inputS3Key = value; }

    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline void SetInputS3Key(Aws::String&& value) { m_inputS3KeyHasBeenSet = true; m_inputS3Key = std::move(value); }

    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline void SetInputS3Key(const char* value) { m_inputS3KeyHasBeenSet = true; m_inputS3Key.assign(value); }

    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline ImportFileTaskInformation& WithInputS3Key(const Aws::String& value) { SetInputS3Key(value); return *this;}

    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline ImportFileTaskInformation& WithInputS3Key(Aws::String&& value) { SetInputS3Key(std::move(value)); return *this;}

    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline ImportFileTaskInformation& WithInputS3Key(const char* value) { SetInputS3Key(value); return *this;}


    /**
     * <p> The number of records that failed to be imported. </p>
     */
    inline int GetNumberOfRecordsFailed() const{ return m_numberOfRecordsFailed; }

    /**
     * <p> The number of records that failed to be imported. </p>
     */
    inline bool NumberOfRecordsFailedHasBeenSet() const { return m_numberOfRecordsFailedHasBeenSet; }

    /**
     * <p> The number of records that failed to be imported. </p>
     */
    inline void SetNumberOfRecordsFailed(int value) { m_numberOfRecordsFailedHasBeenSet = true; m_numberOfRecordsFailed = value; }

    /**
     * <p> The number of records that failed to be imported. </p>
     */
    inline ImportFileTaskInformation& WithNumberOfRecordsFailed(int value) { SetNumberOfRecordsFailed(value); return *this;}


    /**
     * <p> The number of records successfully imported. </p>
     */
    inline int GetNumberOfRecordsSuccess() const{ return m_numberOfRecordsSuccess; }

    /**
     * <p> The number of records successfully imported. </p>
     */
    inline bool NumberOfRecordsSuccessHasBeenSet() const { return m_numberOfRecordsSuccessHasBeenSet; }

    /**
     * <p> The number of records successfully imported. </p>
     */
    inline void SetNumberOfRecordsSuccess(int value) { m_numberOfRecordsSuccessHasBeenSet = true; m_numberOfRecordsSuccess = value; }

    /**
     * <p> The number of records successfully imported. </p>
     */
    inline ImportFileTaskInformation& WithNumberOfRecordsSuccess(int value) { SetNumberOfRecordsSuccess(value); return *this;}


    /**
     * <p> Start time of the import task. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> Start time of the import task. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> Start time of the import task. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> Start time of the import task. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> Start time of the import task. </p>
     */
    inline ImportFileTaskInformation& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> Start time of the import task. </p>
     */
    inline ImportFileTaskInformation& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p> Status of import file task. </p>
     */
    inline const ImportFileTaskStatus& GetStatus() const{ return m_status; }

    /**
     * <p> Status of import file task. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> Status of import file task. </p>
     */
    inline void SetStatus(const ImportFileTaskStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> Status of import file task. </p>
     */
    inline void SetStatus(ImportFileTaskStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> Status of import file task. </p>
     */
    inline ImportFileTaskInformation& WithStatus(const ImportFileTaskStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> Status of import file task. </p>
     */
    inline ImportFileTaskInformation& WithStatus(ImportFileTaskStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The S3 bucket name for status report of import task. </p>
     */
    inline const Aws::String& GetStatusReportS3Bucket() const{ return m_statusReportS3Bucket; }

    /**
     * <p> The S3 bucket name for status report of import task. </p>
     */
    inline bool StatusReportS3BucketHasBeenSet() const { return m_statusReportS3BucketHasBeenSet; }

    /**
     * <p> The S3 bucket name for status report of import task. </p>
     */
    inline void SetStatusReportS3Bucket(const Aws::String& value) { m_statusReportS3BucketHasBeenSet = true; m_statusReportS3Bucket = value; }

    /**
     * <p> The S3 bucket name for status report of import task. </p>
     */
    inline void SetStatusReportS3Bucket(Aws::String&& value) { m_statusReportS3BucketHasBeenSet = true; m_statusReportS3Bucket = std::move(value); }

    /**
     * <p> The S3 bucket name for status report of import task. </p>
     */
    inline void SetStatusReportS3Bucket(const char* value) { m_statusReportS3BucketHasBeenSet = true; m_statusReportS3Bucket.assign(value); }

    /**
     * <p> The S3 bucket name for status report of import task. </p>
     */
    inline ImportFileTaskInformation& WithStatusReportS3Bucket(const Aws::String& value) { SetStatusReportS3Bucket(value); return *this;}

    /**
     * <p> The S3 bucket name for status report of import task. </p>
     */
    inline ImportFileTaskInformation& WithStatusReportS3Bucket(Aws::String&& value) { SetStatusReportS3Bucket(std::move(value)); return *this;}

    /**
     * <p> The S3 bucket name for status report of import task. </p>
     */
    inline ImportFileTaskInformation& WithStatusReportS3Bucket(const char* value) { SetStatusReportS3Bucket(value); return *this;}


    /**
     * <p> The Amazon S3 key name for status report of import task. The report contains
     * details about whether each record imported successfully or why it did not. </p>
     */
    inline const Aws::String& GetStatusReportS3Key() const{ return m_statusReportS3Key; }

    /**
     * <p> The Amazon S3 key name for status report of import task. The report contains
     * details about whether each record imported successfully or why it did not. </p>
     */
    inline bool StatusReportS3KeyHasBeenSet() const { return m_statusReportS3KeyHasBeenSet; }

    /**
     * <p> The Amazon S3 key name for status report of import task. The report contains
     * details about whether each record imported successfully or why it did not. </p>
     */
    inline void SetStatusReportS3Key(const Aws::String& value) { m_statusReportS3KeyHasBeenSet = true; m_statusReportS3Key = value; }

    /**
     * <p> The Amazon S3 key name for status report of import task. The report contains
     * details about whether each record imported successfully or why it did not. </p>
     */
    inline void SetStatusReportS3Key(Aws::String&& value) { m_statusReportS3KeyHasBeenSet = true; m_statusReportS3Key = std::move(value); }

    /**
     * <p> The Amazon S3 key name for status report of import task. The report contains
     * details about whether each record imported successfully or why it did not. </p>
     */
    inline void SetStatusReportS3Key(const char* value) { m_statusReportS3KeyHasBeenSet = true; m_statusReportS3Key.assign(value); }

    /**
     * <p> The Amazon S3 key name for status report of import task. The report contains
     * details about whether each record imported successfully or why it did not. </p>
     */
    inline ImportFileTaskInformation& WithStatusReportS3Key(const Aws::String& value) { SetStatusReportS3Key(value); return *this;}

    /**
     * <p> The Amazon S3 key name for status report of import task. The report contains
     * details about whether each record imported successfully or why it did not. </p>
     */
    inline ImportFileTaskInformation& WithStatusReportS3Key(Aws::String&& value) { SetStatusReportS3Key(std::move(value)); return *this;}

    /**
     * <p> The Amazon S3 key name for status report of import task. The report contains
     * details about whether each record imported successfully or why it did not. </p>
     */
    inline ImportFileTaskInformation& WithStatusReportS3Key(const char* value) { SetStatusReportS3Key(value); return *this;}

  private:

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_importName;
    bool m_importNameHasBeenSet = false;

    Aws::String m_inputS3Bucket;
    bool m_inputS3BucketHasBeenSet = false;

    Aws::String m_inputS3Key;
    bool m_inputS3KeyHasBeenSet = false;

    int m_numberOfRecordsFailed;
    bool m_numberOfRecordsFailedHasBeenSet = false;

    int m_numberOfRecordsSuccess;
    bool m_numberOfRecordsSuccessHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    ImportFileTaskStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReportS3Bucket;
    bool m_statusReportS3BucketHasBeenSet = false;

    Aws::String m_statusReportS3Key;
    bool m_statusReportS3KeyHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
