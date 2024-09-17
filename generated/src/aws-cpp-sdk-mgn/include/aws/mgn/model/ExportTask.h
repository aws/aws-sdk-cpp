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


    ///@{
    /**
     * <p>Export task creation datetime.</p>
     */
    inline const Aws::String& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::String& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::String&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline void SetCreationDateTime(const char* value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime.assign(value); }
    inline ExportTask& WithCreationDateTime(const Aws::String& value) { SetCreationDateTime(value); return *this;}
    inline ExportTask& WithCreationDateTime(Aws::String&& value) { SetCreationDateTime(std::move(value)); return *this;}
    inline ExportTask& WithCreationDateTime(const char* value) { SetCreationDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Export task end datetime.</p>
     */
    inline const Aws::String& GetEndDateTime() const{ return m_endDateTime; }
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }
    inline void SetEndDateTime(const Aws::String& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }
    inline void SetEndDateTime(Aws::String&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::move(value); }
    inline void SetEndDateTime(const char* value) { m_endDateTimeHasBeenSet = true; m_endDateTime.assign(value); }
    inline ExportTask& WithEndDateTime(const Aws::String& value) { SetEndDateTime(value); return *this;}
    inline ExportTask& WithEndDateTime(Aws::String&& value) { SetEndDateTime(std::move(value)); return *this;}
    inline ExportTask& WithEndDateTime(const char* value) { SetEndDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Export task id.</p>
     */
    inline const Aws::String& GetExportID() const{ return m_exportID; }
    inline bool ExportIDHasBeenSet() const { return m_exportIDHasBeenSet; }
    inline void SetExportID(const Aws::String& value) { m_exportIDHasBeenSet = true; m_exportID = value; }
    inline void SetExportID(Aws::String&& value) { m_exportIDHasBeenSet = true; m_exportID = std::move(value); }
    inline void SetExportID(const char* value) { m_exportIDHasBeenSet = true; m_exportID.assign(value); }
    inline ExportTask& WithExportID(const Aws::String& value) { SetExportID(value); return *this;}
    inline ExportTask& WithExportID(Aws::String&& value) { SetExportID(std::move(value)); return *this;}
    inline ExportTask& WithExportID(const char* value) { SetExportID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Export task progress percentage.</p>
     */
    inline double GetProgressPercentage() const{ return m_progressPercentage; }
    inline bool ProgressPercentageHasBeenSet() const { return m_progressPercentageHasBeenSet; }
    inline void SetProgressPercentage(double value) { m_progressPercentageHasBeenSet = true; m_progressPercentage = value; }
    inline ExportTask& WithProgressPercentage(double value) { SetProgressPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Export task s3 bucket.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }
    inline ExportTask& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}
    inline ExportTask& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}
    inline ExportTask& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Export task s3 bucket owner.</p>
     */
    inline const Aws::String& GetS3BucketOwner() const{ return m_s3BucketOwner; }
    inline bool S3BucketOwnerHasBeenSet() const { return m_s3BucketOwnerHasBeenSet; }
    inline void SetS3BucketOwner(const Aws::String& value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner = value; }
    inline void SetS3BucketOwner(Aws::String&& value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner = std::move(value); }
    inline void SetS3BucketOwner(const char* value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner.assign(value); }
    inline ExportTask& WithS3BucketOwner(const Aws::String& value) { SetS3BucketOwner(value); return *this;}
    inline ExportTask& WithS3BucketOwner(Aws::String&& value) { SetS3BucketOwner(std::move(value)); return *this;}
    inline ExportTask& WithS3BucketOwner(const char* value) { SetS3BucketOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Export task s3 key.</p>
     */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }
    inline void SetS3Key(const Aws::String& value) { m_s3KeyHasBeenSet = true; m_s3Key = value; }
    inline void SetS3Key(Aws::String&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::move(value); }
    inline void SetS3Key(const char* value) { m_s3KeyHasBeenSet = true; m_s3Key.assign(value); }
    inline ExportTask& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}
    inline ExportTask& WithS3Key(Aws::String&& value) { SetS3Key(std::move(value)); return *this;}
    inline ExportTask& WithS3Key(const char* value) { SetS3Key(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Export task status.</p>
     */
    inline const ExportStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ExportStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ExportStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ExportTask& WithStatus(const ExportStatus& value) { SetStatus(value); return *this;}
    inline ExportTask& WithStatus(ExportStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Export task summary.</p>
     */
    inline const ExportTaskSummary& GetSummary() const{ return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    inline void SetSummary(const ExportTaskSummary& value) { m_summaryHasBeenSet = true; m_summary = value; }
    inline void SetSummary(ExportTaskSummary&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }
    inline ExportTask& WithSummary(const ExportTaskSummary& value) { SetSummary(value); return *this;}
    inline ExportTask& WithSummary(ExportTaskSummary&& value) { SetSummary(std::move(value)); return *this;}
    ///@}
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
