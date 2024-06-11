﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/IngestionMode.h>
#include <aws/personalize/model/DatasetExportJobOutput.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Describes a job that exports a dataset to an Amazon S3 bucket. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateDatasetExportJob.html">CreateDatasetExportJob</a>.</p>
   * <p>A dataset export job can be in one of the following states:</p> <ul> <li>
   * <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p>
   * </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DatasetExportJob">AWS
   * API Reference</a></p>
   */
  class DatasetExportJob
  {
  public:
    AWS_PERSONALIZE_API DatasetExportJob();
    AWS_PERSONALIZE_API DatasetExportJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API DatasetExportJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the export job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline DatasetExportJob& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline DatasetExportJob& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline DatasetExportJob& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset export job.</p>
     */
    inline const Aws::String& GetDatasetExportJobArn() const{ return m_datasetExportJobArn; }
    inline bool DatasetExportJobArnHasBeenSet() const { return m_datasetExportJobArnHasBeenSet; }
    inline void SetDatasetExportJobArn(const Aws::String& value) { m_datasetExportJobArnHasBeenSet = true; m_datasetExportJobArn = value; }
    inline void SetDatasetExportJobArn(Aws::String&& value) { m_datasetExportJobArnHasBeenSet = true; m_datasetExportJobArn = std::move(value); }
    inline void SetDatasetExportJobArn(const char* value) { m_datasetExportJobArnHasBeenSet = true; m_datasetExportJobArn.assign(value); }
    inline DatasetExportJob& WithDatasetExportJobArn(const Aws::String& value) { SetDatasetExportJobArn(value); return *this;}
    inline DatasetExportJob& WithDatasetExportJobArn(Aws::String&& value) { SetDatasetExportJobArn(std::move(value)); return *this;}
    inline DatasetExportJob& WithDatasetExportJobArn(const char* value) { SetDatasetExportJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset to export.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }
    inline DatasetExportJob& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}
    inline DatasetExportJob& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}
    inline DatasetExportJob& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data to export, based on how you imported the data. You can choose to
     * export <code>BULK</code> data that you imported using a dataset import job,
     * <code>PUT</code> data that you imported incrementally (using the console,
     * PutEvents, PutUsers and PutItems operations), or <code>ALL</code> for both
     * types. The default value is <code>PUT</code>. </p>
     */
    inline const IngestionMode& GetIngestionMode() const{ return m_ingestionMode; }
    inline bool IngestionModeHasBeenSet() const { return m_ingestionModeHasBeenSet; }
    inline void SetIngestionMode(const IngestionMode& value) { m_ingestionModeHasBeenSet = true; m_ingestionMode = value; }
    inline void SetIngestionMode(IngestionMode&& value) { m_ingestionModeHasBeenSet = true; m_ingestionMode = std::move(value); }
    inline DatasetExportJob& WithIngestionMode(const IngestionMode& value) { SetIngestionMode(value); return *this;}
    inline DatasetExportJob& WithIngestionMode(IngestionMode&& value) { SetIngestionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that has permissions
     * to add data to your output Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline DatasetExportJob& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DatasetExportJob& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DatasetExportJob& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the dataset export job.</p> <p>A dataset export job can be in
     * one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
     * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline DatasetExportJob& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DatasetExportJob& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DatasetExportJob& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the Amazon S3 bucket where the job's output is stored. For
     * example:</p> <p> <code>s3://bucket-name/folder-name/</code> </p>
     */
    inline const DatasetExportJobOutput& GetJobOutput() const{ return m_jobOutput; }
    inline bool JobOutputHasBeenSet() const { return m_jobOutputHasBeenSet; }
    inline void SetJobOutput(const DatasetExportJobOutput& value) { m_jobOutputHasBeenSet = true; m_jobOutput = value; }
    inline void SetJobOutput(DatasetExportJobOutput&& value) { m_jobOutputHasBeenSet = true; m_jobOutput = std::move(value); }
    inline DatasetExportJob& WithJobOutput(const DatasetExportJobOutput& value) { SetJobOutput(value); return *this;}
    inline DatasetExportJob& WithJobOutput(DatasetExportJobOutput&& value) { SetJobOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date and time (in Unix time) of the dataset export job.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline DatasetExportJob& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline DatasetExportJob& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix time) the status of the dataset export job was
     * last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline DatasetExportJob& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline DatasetExportJob& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a dataset export job fails, provides the reason why.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline DatasetExportJob& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DatasetExportJob& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DatasetExportJob& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_datasetExportJobArn;
    bool m_datasetExportJobArnHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    IngestionMode m_ingestionMode;
    bool m_ingestionModeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    DatasetExportJobOutput m_jobOutput;
    bool m_jobOutputHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
