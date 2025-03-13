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
    AWS_MGN_API ImportTask() = default;
    AWS_MGN_API ImportTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ImportTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Import task creation datetime.</p>
     */
    inline const Aws::String& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::String>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::String>
    ImportTask& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import task end datetime.</p>
     */
    inline const Aws::String& GetEndDateTime() const { return m_endDateTime; }
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }
    template<typename EndDateTimeT = Aws::String>
    void SetEndDateTime(EndDateTimeT&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::forward<EndDateTimeT>(value); }
    template<typename EndDateTimeT = Aws::String>
    ImportTask& WithEndDateTime(EndDateTimeT&& value) { SetEndDateTime(std::forward<EndDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import task id.</p>
     */
    inline const Aws::String& GetImportID() const { return m_importID; }
    inline bool ImportIDHasBeenSet() const { return m_importIDHasBeenSet; }
    template<typename ImportIDT = Aws::String>
    void SetImportID(ImportIDT&& value) { m_importIDHasBeenSet = true; m_importID = std::forward<ImportIDT>(value); }
    template<typename ImportIDT = Aws::String>
    ImportTask& WithImportID(ImportIDT&& value) { SetImportID(std::forward<ImportIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import task progress percentage.</p>
     */
    inline double GetProgressPercentage() const { return m_progressPercentage; }
    inline bool ProgressPercentageHasBeenSet() const { return m_progressPercentageHasBeenSet; }
    inline void SetProgressPercentage(double value) { m_progressPercentageHasBeenSet = true; m_progressPercentage = value; }
    inline ImportTask& WithProgressPercentage(double value) { SetProgressPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import task s3 bucket source.</p>
     */
    inline const S3BucketSource& GetS3BucketSource() const { return m_s3BucketSource; }
    inline bool S3BucketSourceHasBeenSet() const { return m_s3BucketSourceHasBeenSet; }
    template<typename S3BucketSourceT = S3BucketSource>
    void SetS3BucketSource(S3BucketSourceT&& value) { m_s3BucketSourceHasBeenSet = true; m_s3BucketSource = std::forward<S3BucketSourceT>(value); }
    template<typename S3BucketSourceT = S3BucketSource>
    ImportTask& WithS3BucketSource(S3BucketSourceT&& value) { SetS3BucketSource(std::forward<S3BucketSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import task status.</p>
     */
    inline ImportStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ImportStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ImportTask& WithStatus(ImportStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import task summary.</p>
     */
    inline const ImportTaskSummary& GetSummary() const { return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    template<typename SummaryT = ImportTaskSummary>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = ImportTaskSummary>
    ImportTask& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::String m_endDateTime;
    bool m_endDateTimeHasBeenSet = false;

    Aws::String m_importID;
    bool m_importIDHasBeenSet = false;

    double m_progressPercentage{0.0};
    bool m_progressPercentageHasBeenSet = false;

    S3BucketSource m_s3BucketSource;
    bool m_s3BucketSourceHasBeenSet = false;

    ImportStatus m_status{ImportStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ImportTaskSummary m_summary;
    bool m_summaryHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
