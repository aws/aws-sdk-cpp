/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/DataSource.h>
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
   * <p>Describes a job that deletes all references to specific users from an Amazon
   * Personalize dataset group in batches. For information about creating a data
   * deletion job, see <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/delete-records.html">Deleting
   * users</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DataDeletionJob">AWS
   * API Reference</a></p>
   */
  class DataDeletionJob
  {
  public:
    AWS_PERSONALIZE_API DataDeletionJob();
    AWS_PERSONALIZE_API DataDeletionJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API DataDeletionJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the data deletion job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the data deletion job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the data deletion job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the data deletion job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the data deletion job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the data deletion job.</p>
     */
    inline DataDeletionJob& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the data deletion job.</p>
     */
    inline DataDeletionJob& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the data deletion job.</p>
     */
    inline DataDeletionJob& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the data deletion job.</p>
     */
    inline const Aws::String& GetDataDeletionJobArn() const{ return m_dataDeletionJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the data deletion job.</p>
     */
    inline bool DataDeletionJobArnHasBeenSet() const { return m_dataDeletionJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the data deletion job.</p>
     */
    inline void SetDataDeletionJobArn(const Aws::String& value) { m_dataDeletionJobArnHasBeenSet = true; m_dataDeletionJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the data deletion job.</p>
     */
    inline void SetDataDeletionJobArn(Aws::String&& value) { m_dataDeletionJobArnHasBeenSet = true; m_dataDeletionJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the data deletion job.</p>
     */
    inline void SetDataDeletionJobArn(const char* value) { m_dataDeletionJobArnHasBeenSet = true; m_dataDeletionJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the data deletion job.</p>
     */
    inline DataDeletionJob& WithDataDeletionJobArn(const Aws::String& value) { SetDataDeletionJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the data deletion job.</p>
     */
    inline DataDeletionJob& WithDataDeletionJobArn(Aws::String&& value) { SetDataDeletionJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the data deletion job.</p>
     */
    inline DataDeletionJob& WithDataDeletionJobArn(const char* value) { SetDataDeletionJobArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group the job deletes records
     * from.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group the job deletes records
     * from.</p>
     */
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group the job deletes records
     * from.</p>
     */
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group the job deletes records
     * from.</p>
     */
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group the job deletes records
     * from.</p>
     */
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group the job deletes records
     * from.</p>
     */
    inline DataDeletionJob& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group the job deletes records
     * from.</p>
     */
    inline DataDeletionJob& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group the job deletes records
     * from.</p>
     */
    inline DataDeletionJob& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}


    
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    
    inline DataDeletionJob& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    
    inline DataDeletionJob& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that has permissions to read
     * from the Amazon S3 data source.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that has permissions to read
     * from the Amazon S3 data source.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that has permissions to read
     * from the Amazon S3 data source.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that has permissions to read
     * from the Amazon S3 data source.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that has permissions to read
     * from the Amazon S3 data source.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that has permissions to read
     * from the Amazon S3 data source.</p>
     */
    inline DataDeletionJob& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that has permissions to read
     * from the Amazon S3 data source.</p>
     */
    inline DataDeletionJob& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that has permissions to read
     * from the Amazon S3 data source.</p>
     */
    inline DataDeletionJob& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The status of the data deletion job.</p> <p>A data deletion job can have one
     * of the following statuses:</p> <ul> <li> <p>PENDING &gt; IN_PROGRESS &gt;
     * COMPLETED -or- FAILED</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the data deletion job.</p> <p>A data deletion job can have one
     * of the following statuses:</p> <ul> <li> <p>PENDING &gt; IN_PROGRESS &gt;
     * COMPLETED -or- FAILED</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the data deletion job.</p> <p>A data deletion job can have one
     * of the following statuses:</p> <ul> <li> <p>PENDING &gt; IN_PROGRESS &gt;
     * COMPLETED -or- FAILED</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the data deletion job.</p> <p>A data deletion job can have one
     * of the following statuses:</p> <ul> <li> <p>PENDING &gt; IN_PROGRESS &gt;
     * COMPLETED -or- FAILED</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the data deletion job.</p> <p>A data deletion job can have one
     * of the following statuses:</p> <ul> <li> <p>PENDING &gt; IN_PROGRESS &gt;
     * COMPLETED -or- FAILED</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the data deletion job.</p> <p>A data deletion job can have one
     * of the following statuses:</p> <ul> <li> <p>PENDING &gt; IN_PROGRESS &gt;
     * COMPLETED -or- FAILED</p> </li> </ul>
     */
    inline DataDeletionJob& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the data deletion job.</p> <p>A data deletion job can have one
     * of the following statuses:</p> <ul> <li> <p>PENDING &gt; IN_PROGRESS &gt;
     * COMPLETED -or- FAILED</p> </li> </ul>
     */
    inline DataDeletionJob& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the data deletion job.</p> <p>A data deletion job can have one
     * of the following statuses:</p> <ul> <li> <p>PENDING &gt; IN_PROGRESS &gt;
     * COMPLETED -or- FAILED</p> </li> </ul>
     */
    inline DataDeletionJob& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The number of records deleted by a COMPLETED job.</p>
     */
    inline int GetNumDeleted() const{ return m_numDeleted; }

    /**
     * <p>The number of records deleted by a COMPLETED job.</p>
     */
    inline bool NumDeletedHasBeenSet() const { return m_numDeletedHasBeenSet; }

    /**
     * <p>The number of records deleted by a COMPLETED job.</p>
     */
    inline void SetNumDeleted(int value) { m_numDeletedHasBeenSet = true; m_numDeleted = value; }

    /**
     * <p>The number of records deleted by a COMPLETED job.</p>
     */
    inline DataDeletionJob& WithNumDeleted(int value) { SetNumDeleted(value); return *this;}


    /**
     * <p>The creation date and time (in Unix time) of the data deletion job.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The creation date and time (in Unix time) of the data deletion job.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The creation date and time (in Unix time) of the data deletion job.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The creation date and time (in Unix time) of the data deletion job.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The creation date and time (in Unix time) of the data deletion job.</p>
     */
    inline DataDeletionJob& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The creation date and time (in Unix time) of the data deletion job.</p>
     */
    inline DataDeletionJob& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time (in Unix time) the data deletion job was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The date and time (in Unix time) the data deletion job was last updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time (in Unix time) the data deletion job was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The date and time (in Unix time) the data deletion job was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time (in Unix time) the data deletion job was last updated.</p>
     */
    inline DataDeletionJob& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time (in Unix time) the data deletion job was last updated.</p>
     */
    inline DataDeletionJob& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}


    /**
     * <p>If a data deletion job fails, provides the reason why.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If a data deletion job fails, provides the reason why.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If a data deletion job fails, provides the reason why.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If a data deletion job fails, provides the reason why.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If a data deletion job fails, provides the reason why.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If a data deletion job fails, provides the reason why.</p>
     */
    inline DataDeletionJob& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If a data deletion job fails, provides the reason why.</p>
     */
    inline DataDeletionJob& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If a data deletion job fails, provides the reason why.</p>
     */
    inline DataDeletionJob& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_dataDeletionJobArn;
    bool m_dataDeletionJobArnHasBeenSet = false;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    int m_numDeleted;
    bool m_numDeletedHasBeenSet = false;

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
