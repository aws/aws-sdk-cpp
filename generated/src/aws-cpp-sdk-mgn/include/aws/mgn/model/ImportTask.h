/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/S3BucketSource.h>
#include <aws/mgn/model/ImportStatus.h>
#include <aws/mgn/model/ImportTaskSummary.h>
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
   * <p>Import task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ImportTask">AWS API
   * Reference</a></p>
   */
  class ImportTask
  {
  public:
    AWS_MGN_API ImportTask();
    AWS_MGN_API ImportTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ImportTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Import task creation datetime.</p>
     */
    inline const Aws::String& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::String& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::String&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline void SetCreationDateTime(const char* value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime.assign(value); }
    inline ImportTask& WithCreationDateTime(const Aws::String& value) { SetCreationDateTime(value); return *this;}
    inline ImportTask& WithCreationDateTime(Aws::String&& value) { SetCreationDateTime(std::move(value)); return *this;}
    inline ImportTask& WithCreationDateTime(const char* value) { SetCreationDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import task end datetime.</p>
     */
    inline const Aws::String& GetEndDateTime() const{ return m_endDateTime; }
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }
    inline void SetEndDateTime(const Aws::String& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }
    inline void SetEndDateTime(Aws::String&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::move(value); }
    inline void SetEndDateTime(const char* value) { m_endDateTimeHasBeenSet = true; m_endDateTime.assign(value); }
    inline ImportTask& WithEndDateTime(const Aws::String& value) { SetEndDateTime(value); return *this;}
    inline ImportTask& WithEndDateTime(Aws::String&& value) { SetEndDateTime(std::move(value)); return *this;}
    inline ImportTask& WithEndDateTime(const char* value) { SetEndDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import task id.</p>
     */
    inline const Aws::String& GetImportID() const{ return m_importID; }
    inline bool ImportIDHasBeenSet() const { return m_importIDHasBeenSet; }
    inline void SetImportID(const Aws::String& value) { m_importIDHasBeenSet = true; m_importID = value; }
    inline void SetImportID(Aws::String&& value) { m_importIDHasBeenSet = true; m_importID = std::move(value); }
    inline void SetImportID(const char* value) { m_importIDHasBeenSet = true; m_importID.assign(value); }
    inline ImportTask& WithImportID(const Aws::String& value) { SetImportID(value); return *this;}
    inline ImportTask& WithImportID(Aws::String&& value) { SetImportID(std::move(value)); return *this;}
    inline ImportTask& WithImportID(const char* value) { SetImportID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import task progress percentage.</p>
     */
    inline double GetProgressPercentage() const{ return m_progressPercentage; }
    inline bool ProgressPercentageHasBeenSet() const { return m_progressPercentageHasBeenSet; }
    inline void SetProgressPercentage(double value) { m_progressPercentageHasBeenSet = true; m_progressPercentage = value; }
    inline ImportTask& WithProgressPercentage(double value) { SetProgressPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import task s3 bucket source.</p>
     */
    inline const S3BucketSource& GetS3BucketSource() const{ return m_s3BucketSource; }
    inline bool S3BucketSourceHasBeenSet() const { return m_s3BucketSourceHasBeenSet; }
    inline void SetS3BucketSource(const S3BucketSource& value) { m_s3BucketSourceHasBeenSet = true; m_s3BucketSource = value; }
    inline void SetS3BucketSource(S3BucketSource&& value) { m_s3BucketSourceHasBeenSet = true; m_s3BucketSource = std::move(value); }
    inline ImportTask& WithS3BucketSource(const S3BucketSource& value) { SetS3BucketSource(value); return *this;}
    inline ImportTask& WithS3BucketSource(S3BucketSource&& value) { SetS3BucketSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import task status.</p>
     */
    inline const ImportStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ImportStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ImportStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ImportTask& WithStatus(const ImportStatus& value) { SetStatus(value); return *this;}
    inline ImportTask& WithStatus(ImportStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import task summary.</p>
     */
    inline const ImportTaskSummary& GetSummary() const{ return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    inline void SetSummary(const ImportTaskSummary& value) { m_summaryHasBeenSet = true; m_summary = value; }
    inline void SetSummary(ImportTaskSummary&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }
    inline ImportTask& WithSummary(const ImportTaskSummary& value) { SetSummary(value); return *this;}
    inline ImportTask& WithSummary(ImportTaskSummary&& value) { SetSummary(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::String m_endDateTime;
    bool m_endDateTimeHasBeenSet = false;

    Aws::String m_importID;
    bool m_importIDHasBeenSet = false;

    double m_progressPercentage;
    bool m_progressPercentageHasBeenSet = false;

    S3BucketSource m_s3BucketSource;
    bool m_s3BucketSourceHasBeenSet = false;

    ImportStatus m_status;
    bool m_statusHasBeenSet = false;

    ImportTaskSummary m_summary;
    bool m_summaryHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
