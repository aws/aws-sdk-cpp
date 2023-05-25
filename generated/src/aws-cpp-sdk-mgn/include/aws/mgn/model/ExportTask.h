/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/ExportStatus.h>
#include <aws/mgn/model/ExportTaskSummary.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Export task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ExportTask">AWS API
   * Reference</a></p>
   */
  class ExportTask
  {
  public:
    AWS_MGN_API ExportTask();
    AWS_MGN_API ExportTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ExportTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Export task creation datetime.</p>
     */
    inline const Aws::String& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>Export task creation datetime.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>Export task creation datetime.</p>
     */
    inline void SetCreationDateTime(const Aws::String& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>Export task creation datetime.</p>
     */
    inline void SetCreationDateTime(Aws::String&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>Export task creation datetime.</p>
     */
    inline void SetCreationDateTime(const char* value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime.assign(value); }

    /**
     * <p>Export task creation datetime.</p>
     */
    inline ExportTask& WithCreationDateTime(const Aws::String& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>Export task creation datetime.</p>
     */
    inline ExportTask& WithCreationDateTime(Aws::String&& value) { SetCreationDateTime(std::move(value)); return *this;}

    /**
     * <p>Export task creation datetime.</p>
     */
    inline ExportTask& WithCreationDateTime(const char* value) { SetCreationDateTime(value); return *this;}


    /**
     * <p>Export task end datetime.</p>
     */
    inline const Aws::String& GetEndDateTime() const{ return m_endDateTime; }

    /**
     * <p>Export task end datetime.</p>
     */
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }

    /**
     * <p>Export task end datetime.</p>
     */
    inline void SetEndDateTime(const Aws::String& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }

    /**
     * <p>Export task end datetime.</p>
     */
    inline void SetEndDateTime(Aws::String&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::move(value); }

    /**
     * <p>Export task end datetime.</p>
     */
    inline void SetEndDateTime(const char* value) { m_endDateTimeHasBeenSet = true; m_endDateTime.assign(value); }

    /**
     * <p>Export task end datetime.</p>
     */
    inline ExportTask& WithEndDateTime(const Aws::String& value) { SetEndDateTime(value); return *this;}

    /**
     * <p>Export task end datetime.</p>
     */
    inline ExportTask& WithEndDateTime(Aws::String&& value) { SetEndDateTime(std::move(value)); return *this;}

    /**
     * <p>Export task end datetime.</p>
     */
    inline ExportTask& WithEndDateTime(const char* value) { SetEndDateTime(value); return *this;}


    /**
     * <p>Export task id.</p>
     */
    inline const Aws::String& GetExportID() const{ return m_exportID; }

    /**
     * <p>Export task id.</p>
     */
    inline bool ExportIDHasBeenSet() const { return m_exportIDHasBeenSet; }

    /**
     * <p>Export task id.</p>
     */
    inline void SetExportID(const Aws::String& value) { m_exportIDHasBeenSet = true; m_exportID = value; }

    /**
     * <p>Export task id.</p>
     */
    inline void SetExportID(Aws::String&& value) { m_exportIDHasBeenSet = true; m_exportID = std::move(value); }

    /**
     * <p>Export task id.</p>
     */
    inline void SetExportID(const char* value) { m_exportIDHasBeenSet = true; m_exportID.assign(value); }

    /**
     * <p>Export task id.</p>
     */
    inline ExportTask& WithExportID(const Aws::String& value) { SetExportID(value); return *this;}

    /**
     * <p>Export task id.</p>
     */
    inline ExportTask& WithExportID(Aws::String&& value) { SetExportID(std::move(value)); return *this;}

    /**
     * <p>Export task id.</p>
     */
    inline ExportTask& WithExportID(const char* value) { SetExportID(value); return *this;}


    /**
     * <p>Export task progress percentage.</p>
     */
    inline double GetProgressPercentage() const{ return m_progressPercentage; }

    /**
     * <p>Export task progress percentage.</p>
     */
    inline bool ProgressPercentageHasBeenSet() const { return m_progressPercentageHasBeenSet; }

    /**
     * <p>Export task progress percentage.</p>
     */
    inline void SetProgressPercentage(double value) { m_progressPercentageHasBeenSet = true; m_progressPercentage = value; }

    /**
     * <p>Export task progress percentage.</p>
     */
    inline ExportTask& WithProgressPercentage(double value) { SetProgressPercentage(value); return *this;}


    /**
     * <p>Export task s3 bucket.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>Export task s3 bucket.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>Export task s3 bucket.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>Export task s3 bucket.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>Export task s3 bucket.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>Export task s3 bucket.</p>
     */
    inline ExportTask& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>Export task s3 bucket.</p>
     */
    inline ExportTask& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>Export task s3 bucket.</p>
     */
    inline ExportTask& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>Export task s3 bucket owner.</p>
     */
    inline const Aws::String& GetS3BucketOwner() const{ return m_s3BucketOwner; }

    /**
     * <p>Export task s3 bucket owner.</p>
     */
    inline bool S3BucketOwnerHasBeenSet() const { return m_s3BucketOwnerHasBeenSet; }

    /**
     * <p>Export task s3 bucket owner.</p>
     */
    inline void SetS3BucketOwner(const Aws::String& value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner = value; }

    /**
     * <p>Export task s3 bucket owner.</p>
     */
    inline void SetS3BucketOwner(Aws::String&& value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner = std::move(value); }

    /**
     * <p>Export task s3 bucket owner.</p>
     */
    inline void SetS3BucketOwner(const char* value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner.assign(value); }

    /**
     * <p>Export task s3 bucket owner.</p>
     */
    inline ExportTask& WithS3BucketOwner(const Aws::String& value) { SetS3BucketOwner(value); return *this;}

    /**
     * <p>Export task s3 bucket owner.</p>
     */
    inline ExportTask& WithS3BucketOwner(Aws::String&& value) { SetS3BucketOwner(std::move(value)); return *this;}

    /**
     * <p>Export task s3 bucket owner.</p>
     */
    inline ExportTask& WithS3BucketOwner(const char* value) { SetS3BucketOwner(value); return *this;}


    /**
     * <p>Export task s3 key.</p>
     */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }

    /**
     * <p>Export task s3 key.</p>
     */
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }

    /**
     * <p>Export task s3 key.</p>
     */
    inline void SetS3Key(const Aws::String& value) { m_s3KeyHasBeenSet = true; m_s3Key = value; }

    /**
     * <p>Export task s3 key.</p>
     */
    inline void SetS3Key(Aws::String&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::move(value); }

    /**
     * <p>Export task s3 key.</p>
     */
    inline void SetS3Key(const char* value) { m_s3KeyHasBeenSet = true; m_s3Key.assign(value); }

    /**
     * <p>Export task s3 key.</p>
     */
    inline ExportTask& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}

    /**
     * <p>Export task s3 key.</p>
     */
    inline ExportTask& WithS3Key(Aws::String&& value) { SetS3Key(std::move(value)); return *this;}

    /**
     * <p>Export task s3 key.</p>
     */
    inline ExportTask& WithS3Key(const char* value) { SetS3Key(value); return *this;}


    /**
     * <p>Export task status.</p>
     */
    inline const ExportStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Export task status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Export task status.</p>
     */
    inline void SetStatus(const ExportStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Export task status.</p>
     */
    inline void SetStatus(ExportStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Export task status.</p>
     */
    inline ExportTask& WithStatus(const ExportStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Export task status.</p>
     */
    inline ExportTask& WithStatus(ExportStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Export task summary.</p>
     */
    inline const ExportTaskSummary& GetSummary() const{ return m_summary; }

    /**
     * <p>Export task summary.</p>
     */
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }

    /**
     * <p>Export task summary.</p>
     */
    inline void SetSummary(const ExportTaskSummary& value) { m_summaryHasBeenSet = true; m_summary = value; }

    /**
     * <p>Export task summary.</p>
     */
    inline void SetSummary(ExportTaskSummary&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }

    /**
     * <p>Export task summary.</p>
     */
    inline ExportTask& WithSummary(const ExportTaskSummary& value) { SetSummary(value); return *this;}

    /**
     * <p>Export task summary.</p>
     */
    inline ExportTask& WithSummary(ExportTaskSummary&& value) { SetSummary(std::move(value)); return *this;}

  private:

    Aws::String m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::String m_endDateTime;
    bool m_endDateTimeHasBeenSet = false;

    Aws::String m_exportID;
    bool m_exportIDHasBeenSet = false;

    double m_progressPercentage;
    bool m_progressPercentageHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3BucketOwner;
    bool m_s3BucketOwnerHasBeenSet = false;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet = false;

    ExportStatus m_status;
    bool m_statusHasBeenSet = false;

    ExportTaskSummary m_summary;
    bool m_summaryHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
