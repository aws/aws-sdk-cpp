/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A truncated version of the <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/API_BatchSegmentJob.html">BatchSegmentJob</a>
   * datatype. <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/API_ListBatchSegmentJobs.html">ListBatchSegmentJobs</a>
   * operation returns a list of batch segment job summaries.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/BatchSegmentJobSummary">AWS
   * API Reference</a></p>
   */
  class BatchSegmentJobSummary
  {
  public:
    AWS_PERSONALIZE_API BatchSegmentJobSummary();
    AWS_PERSONALIZE_API BatchSegmentJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API BatchSegmentJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the batch segment job.</p>
     */
    inline const Aws::String& GetBatchSegmentJobArn() const{ return m_batchSegmentJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the batch segment job.</p>
     */
    inline bool BatchSegmentJobArnHasBeenSet() const { return m_batchSegmentJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the batch segment job.</p>
     */
    inline void SetBatchSegmentJobArn(const Aws::String& value) { m_batchSegmentJobArnHasBeenSet = true; m_batchSegmentJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the batch segment job.</p>
     */
    inline void SetBatchSegmentJobArn(Aws::String&& value) { m_batchSegmentJobArnHasBeenSet = true; m_batchSegmentJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the batch segment job.</p>
     */
    inline void SetBatchSegmentJobArn(const char* value) { m_batchSegmentJobArnHasBeenSet = true; m_batchSegmentJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the batch segment job.</p>
     */
    inline BatchSegmentJobSummary& WithBatchSegmentJobArn(const Aws::String& value) { SetBatchSegmentJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the batch segment job.</p>
     */
    inline BatchSegmentJobSummary& WithBatchSegmentJobArn(Aws::String&& value) { SetBatchSegmentJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the batch segment job.</p>
     */
    inline BatchSegmentJobSummary& WithBatchSegmentJobArn(const char* value) { SetBatchSegmentJobArn(value); return *this;}


    /**
     * <p>The name of the batch segment job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the batch segment job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the batch segment job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the batch segment job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the batch segment job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the batch segment job.</p>
     */
    inline BatchSegmentJobSummary& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the batch segment job.</p>
     */
    inline BatchSegmentJobSummary& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the batch segment job.</p>
     */
    inline BatchSegmentJobSummary& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The status of the batch segment job. The status is one of the following
     * values:</p> <ul> <li> <p>PENDING</p> </li> <li> <p>IN PROGRESS</p> </li> <li>
     * <p>ACTIVE</p> </li> <li> <p>CREATE FAILED</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the batch segment job. The status is one of the following
     * values:</p> <ul> <li> <p>PENDING</p> </li> <li> <p>IN PROGRESS</p> </li> <li>
     * <p>ACTIVE</p> </li> <li> <p>CREATE FAILED</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the batch segment job. The status is one of the following
     * values:</p> <ul> <li> <p>PENDING</p> </li> <li> <p>IN PROGRESS</p> </li> <li>
     * <p>ACTIVE</p> </li> <li> <p>CREATE FAILED</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the batch segment job. The status is one of the following
     * values:</p> <ul> <li> <p>PENDING</p> </li> <li> <p>IN PROGRESS</p> </li> <li>
     * <p>ACTIVE</p> </li> <li> <p>CREATE FAILED</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the batch segment job. The status is one of the following
     * values:</p> <ul> <li> <p>PENDING</p> </li> <li> <p>IN PROGRESS</p> </li> <li>
     * <p>ACTIVE</p> </li> <li> <p>CREATE FAILED</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the batch segment job. The status is one of the following
     * values:</p> <ul> <li> <p>PENDING</p> </li> <li> <p>IN PROGRESS</p> </li> <li>
     * <p>ACTIVE</p> </li> <li> <p>CREATE FAILED</p> </li> </ul>
     */
    inline BatchSegmentJobSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the batch segment job. The status is one of the following
     * values:</p> <ul> <li> <p>PENDING</p> </li> <li> <p>IN PROGRESS</p> </li> <li>
     * <p>ACTIVE</p> </li> <li> <p>CREATE FAILED</p> </li> </ul>
     */
    inline BatchSegmentJobSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the batch segment job. The status is one of the following
     * values:</p> <ul> <li> <p>PENDING</p> </li> <li> <p>IN PROGRESS</p> </li> <li>
     * <p>ACTIVE</p> </li> <li> <p>CREATE FAILED</p> </li> </ul>
     */
    inline BatchSegmentJobSummary& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The time at which the batch segment job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The time at which the batch segment job was created.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The time at which the batch segment job was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The time at which the batch segment job was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The time at which the batch segment job was created.</p>
     */
    inline BatchSegmentJobSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The time at which the batch segment job was created.</p>
     */
    inline BatchSegmentJobSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the batch segment job was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The time at which the batch segment job was last updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The time at which the batch segment job was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The time at which the batch segment job was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The time at which the batch segment job was last updated.</p>
     */
    inline BatchSegmentJobSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The time at which the batch segment job was last updated.</p>
     */
    inline BatchSegmentJobSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}


    /**
     * <p>If the batch segment job failed, the reason for the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the batch segment job failed, the reason for the failure.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If the batch segment job failed, the reason for the failure.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If the batch segment job failed, the reason for the failure.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If the batch segment job failed, the reason for the failure.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If the batch segment job failed, the reason for the failure.</p>
     */
    inline BatchSegmentJobSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the batch segment job failed, the reason for the failure.</p>
     */
    inline BatchSegmentJobSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the batch segment job failed, the reason for the failure.</p>
     */
    inline BatchSegmentJobSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the solution version used by the batch
     * segment job to generate batch segments.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const{ return m_solutionVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version used by the batch
     * segment job to generate batch segments.</p>
     */
    inline bool SolutionVersionArnHasBeenSet() const { return m_solutionVersionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version used by the batch
     * segment job to generate batch segments.</p>
     */
    inline void SetSolutionVersionArn(const Aws::String& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version used by the batch
     * segment job to generate batch segments.</p>
     */
    inline void SetSolutionVersionArn(Aws::String&& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version used by the batch
     * segment job to generate batch segments.</p>
     */
    inline void SetSolutionVersionArn(const char* value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version used by the batch
     * segment job to generate batch segments.</p>
     */
    inline BatchSegmentJobSummary& WithSolutionVersionArn(const Aws::String& value) { SetSolutionVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version used by the batch
     * segment job to generate batch segments.</p>
     */
    inline BatchSegmentJobSummary& WithSolutionVersionArn(Aws::String&& value) { SetSolutionVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version used by the batch
     * segment job to generate batch segments.</p>
     */
    inline BatchSegmentJobSummary& WithSolutionVersionArn(const char* value) { SetSolutionVersionArn(value); return *this;}

  private:

    Aws::String m_batchSegmentJobArn;
    bool m_batchSegmentJobArnHasBeenSet = false;

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

    Aws::String m_solutionVersionArn;
    bool m_solutionVersionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
