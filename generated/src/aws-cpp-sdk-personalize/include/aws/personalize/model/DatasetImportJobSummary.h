/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/personalize/model/ImportMode.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Provides a summary of the properties of a dataset import job. For a complete
   * listing, call the <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeDatasetImportJob.html">DescribeDatasetImportJob</a>
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DatasetImportJobSummary">AWS
   * API Reference</a></p>
   */
  class DatasetImportJobSummary
  {
  public:
    AWS_PERSONALIZE_API DatasetImportJobSummary();
    AWS_PERSONALIZE_API DatasetImportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API DatasetImportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job.</p>
     */
    inline const Aws::String& GetDatasetImportJobArn() const{ return m_datasetImportJobArn; }
    inline bool DatasetImportJobArnHasBeenSet() const { return m_datasetImportJobArnHasBeenSet; }
    inline void SetDatasetImportJobArn(const Aws::String& value) { m_datasetImportJobArnHasBeenSet = true; m_datasetImportJobArn = value; }
    inline void SetDatasetImportJobArn(Aws::String&& value) { m_datasetImportJobArnHasBeenSet = true; m_datasetImportJobArn = std::move(value); }
    inline void SetDatasetImportJobArn(const char* value) { m_datasetImportJobArnHasBeenSet = true; m_datasetImportJobArn.assign(value); }
    inline DatasetImportJobSummary& WithDatasetImportJobArn(const Aws::String& value) { SetDatasetImportJobArn(value); return *this;}
    inline DatasetImportJobSummary& WithDatasetImportJobArn(Aws::String&& value) { SetDatasetImportJobArn(std::move(value)); return *this;}
    inline DatasetImportJobSummary& WithDatasetImportJobArn(const char* value) { SetDatasetImportJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset import job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline DatasetImportJobSummary& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline DatasetImportJobSummary& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline DatasetImportJobSummary& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the dataset import job.</p> <p>A dataset import job can be in
     * one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
     * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline DatasetImportJobSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DatasetImportJobSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DatasetImportJobSummary& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix time) that the dataset import job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline DatasetImportJobSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline DatasetImportJobSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix time) that the dataset import job status was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline DatasetImportJobSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline DatasetImportJobSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a dataset import job fails, the reason behind the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline DatasetImportJobSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DatasetImportJobSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DatasetImportJobSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The import mode the dataset import job used to update the data in the
     * dataset. For more information see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/updating-existing-bulk-data.html">Updating
     * existing bulk data</a>. </p>
     */
    inline const ImportMode& GetImportMode() const{ return m_importMode; }
    inline bool ImportModeHasBeenSet() const { return m_importModeHasBeenSet; }
    inline void SetImportMode(const ImportMode& value) { m_importModeHasBeenSet = true; m_importMode = value; }
    inline void SetImportMode(ImportMode&& value) { m_importModeHasBeenSet = true; m_importMode = std::move(value); }
    inline DatasetImportJobSummary& WithImportMode(const ImportMode& value) { SetImportMode(value); return *this;}
    inline DatasetImportJobSummary& WithImportMode(ImportMode&& value) { SetImportMode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_datasetImportJobArn;
    bool m_datasetImportJobArnHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    ImportMode m_importMode;
    bool m_importModeHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
