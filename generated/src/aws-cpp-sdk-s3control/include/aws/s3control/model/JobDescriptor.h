/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/JobStatus.h>
#include <aws/s3control/model/JobManifest.h>
#include <aws/s3control/model/JobOperation.h>
#include <aws/s3control/model/JobProgressSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/JobReport.h>
#include <aws/core/utils/DateTime.h>
#include <aws/s3control/model/JobManifestGenerator.h>
#include <aws/s3control/model/S3GeneratedManifestDescriptor.h>
#include <aws/s3control/model/JobFailure.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>A container element for the job configuration and status information returned
   * by a <code>Describe Job</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/JobDescriptor">AWS
   * API Reference</a></p>
   */
  class JobDescriptor
  {
  public:
    AWS_S3CONTROL_API JobDescriptor();
    AWS_S3CONTROL_API JobDescriptor(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API JobDescriptor& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The ID for the specified job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline JobDescriptor& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline JobDescriptor& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline JobDescriptor& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether confirmation is required before Amazon S3 begins running
     * the specified job. Confirmation is required only for jobs created through the
     * Amazon S3 console.</p>
     */
    inline bool GetConfirmationRequired() const{ return m_confirmationRequired; }
    inline bool ConfirmationRequiredHasBeenSet() const { return m_confirmationRequiredHasBeenSet; }
    inline void SetConfirmationRequired(bool value) { m_confirmationRequiredHasBeenSet = true; m_confirmationRequired = value; }
    inline JobDescriptor& WithConfirmationRequired(bool value) { SetConfirmationRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for this job, if one was provided in this job's <code>Create
     * Job</code> request.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline JobDescriptor& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline JobDescriptor& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline JobDescriptor& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for this job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }
    inline JobDescriptor& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline JobDescriptor& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline JobDescriptor& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the specified job.</p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline JobDescriptor& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}
    inline JobDescriptor& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information for the specified job's manifest object.</p>
     */
    inline const JobManifest& GetManifest() const{ return m_manifest; }
    inline bool ManifestHasBeenSet() const { return m_manifestHasBeenSet; }
    inline void SetManifest(const JobManifest& value) { m_manifestHasBeenSet = true; m_manifest = value; }
    inline void SetManifest(JobManifest&& value) { m_manifestHasBeenSet = true; m_manifest = std::move(value); }
    inline JobDescriptor& WithManifest(const JobManifest& value) { SetManifest(value); return *this;}
    inline JobDescriptor& WithManifest(JobManifest&& value) { SetManifest(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation that the specified job is configured to run on the objects
     * listed in the manifest.</p>
     */
    inline const JobOperation& GetOperation() const{ return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(const JobOperation& value) { m_operationHasBeenSet = true; m_operation = value; }
    inline void SetOperation(JobOperation&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }
    inline JobDescriptor& WithOperation(const JobOperation& value) { SetOperation(value); return *this;}
    inline JobDescriptor& WithOperation(JobOperation&& value) { SetOperation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority of the specified job.</p>
     */
    inline int GetPriority() const{ return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline JobDescriptor& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the total number of tasks that the specified job has run, the
     * number of tasks that succeeded, and the number of tasks that failed.</p>
     */
    inline const JobProgressSummary& GetProgressSummary() const{ return m_progressSummary; }
    inline bool ProgressSummaryHasBeenSet() const { return m_progressSummaryHasBeenSet; }
    inline void SetProgressSummary(const JobProgressSummary& value) { m_progressSummaryHasBeenSet = true; m_progressSummary = value; }
    inline void SetProgressSummary(JobProgressSummary&& value) { m_progressSummaryHasBeenSet = true; m_progressSummary = std::move(value); }
    inline JobDescriptor& WithProgressSummary(const JobProgressSummary& value) { SetProgressSummary(value); return *this;}
    inline JobDescriptor& WithProgressSummary(JobProgressSummary&& value) { SetProgressSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for updating the job.</p>
     */
    inline const Aws::String& GetStatusUpdateReason() const{ return m_statusUpdateReason; }
    inline bool StatusUpdateReasonHasBeenSet() const { return m_statusUpdateReasonHasBeenSet; }
    inline void SetStatusUpdateReason(const Aws::String& value) { m_statusUpdateReasonHasBeenSet = true; m_statusUpdateReason = value; }
    inline void SetStatusUpdateReason(Aws::String&& value) { m_statusUpdateReasonHasBeenSet = true; m_statusUpdateReason = std::move(value); }
    inline void SetStatusUpdateReason(const char* value) { m_statusUpdateReasonHasBeenSet = true; m_statusUpdateReason.assign(value); }
    inline JobDescriptor& WithStatusUpdateReason(const Aws::String& value) { SetStatusUpdateReason(value); return *this;}
    inline JobDescriptor& WithStatusUpdateReason(Aws::String&& value) { SetStatusUpdateReason(std::move(value)); return *this;}
    inline JobDescriptor& WithStatusUpdateReason(const char* value) { SetStatusUpdateReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the specified job failed, this field contains information describing the
     * failure.</p>
     */
    inline const Aws::Vector<JobFailure>& GetFailureReasons() const{ return m_failureReasons; }
    inline bool FailureReasonsHasBeenSet() const { return m_failureReasonsHasBeenSet; }
    inline void SetFailureReasons(const Aws::Vector<JobFailure>& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = value; }
    inline void SetFailureReasons(Aws::Vector<JobFailure>&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::move(value); }
    inline JobDescriptor& WithFailureReasons(const Aws::Vector<JobFailure>& value) { SetFailureReasons(value); return *this;}
    inline JobDescriptor& WithFailureReasons(Aws::Vector<JobFailure>&& value) { SetFailureReasons(std::move(value)); return *this;}
    inline JobDescriptor& AddFailureReasons(const JobFailure& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }
    inline JobDescriptor& AddFailureReasons(JobFailure&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains the configuration information for the job-completion report if you
     * requested one in the <code>Create Job</code> request.</p>
     */
    inline const JobReport& GetReport() const{ return m_report; }
    inline bool ReportHasBeenSet() const { return m_reportHasBeenSet; }
    inline void SetReport(const JobReport& value) { m_reportHasBeenSet = true; m_report = value; }
    inline void SetReport(JobReport&& value) { m_reportHasBeenSet = true; m_report = std::move(value); }
    inline JobDescriptor& WithReport(const JobReport& value) { SetReport(value); return *this;}
    inline JobDescriptor& WithReport(JobReport&& value) { SetReport(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp indicating when this job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline JobDescriptor& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline JobDescriptor& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp indicating when this job terminated. A job's termination date is
     * the date and time when it succeeded, failed, or was canceled.</p>
     */
    inline const Aws::Utils::DateTime& GetTerminationDate() const{ return m_terminationDate; }
    inline bool TerminationDateHasBeenSet() const { return m_terminationDateHasBeenSet; }
    inline void SetTerminationDate(const Aws::Utils::DateTime& value) { m_terminationDateHasBeenSet = true; m_terminationDate = value; }
    inline void SetTerminationDate(Aws::Utils::DateTime&& value) { m_terminationDateHasBeenSet = true; m_terminationDate = std::move(value); }
    inline JobDescriptor& WithTerminationDate(const Aws::Utils::DateTime& value) { SetTerminationDate(value); return *this;}
    inline JobDescriptor& WithTerminationDate(Aws::Utils::DateTime&& value) { SetTerminationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the Identity and Access Management (IAM)
     * role assigned to run the tasks for this job.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline JobDescriptor& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline JobDescriptor& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline JobDescriptor& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when this job was suspended, if it has been suspended.</p>
     */
    inline const Aws::Utils::DateTime& GetSuspendedDate() const{ return m_suspendedDate; }
    inline bool SuspendedDateHasBeenSet() const { return m_suspendedDateHasBeenSet; }
    inline void SetSuspendedDate(const Aws::Utils::DateTime& value) { m_suspendedDateHasBeenSet = true; m_suspendedDate = value; }
    inline void SetSuspendedDate(Aws::Utils::DateTime&& value) { m_suspendedDateHasBeenSet = true; m_suspendedDate = std::move(value); }
    inline JobDescriptor& WithSuspendedDate(const Aws::Utils::DateTime& value) { SetSuspendedDate(value); return *this;}
    inline JobDescriptor& WithSuspendedDate(Aws::Utils::DateTime&& value) { SetSuspendedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the specified job was suspended. A job is only suspended if
     * you create it through the Amazon S3 console. When you create the job, it enters
     * the <code>Suspended</code> state to await confirmation before running. After you
     * confirm the job, it automatically exits the <code>Suspended</code> state.</p>
     */
    inline const Aws::String& GetSuspendedCause() const{ return m_suspendedCause; }
    inline bool SuspendedCauseHasBeenSet() const { return m_suspendedCauseHasBeenSet; }
    inline void SetSuspendedCause(const Aws::String& value) { m_suspendedCauseHasBeenSet = true; m_suspendedCause = value; }
    inline void SetSuspendedCause(Aws::String&& value) { m_suspendedCauseHasBeenSet = true; m_suspendedCause = std::move(value); }
    inline void SetSuspendedCause(const char* value) { m_suspendedCauseHasBeenSet = true; m_suspendedCause.assign(value); }
    inline JobDescriptor& WithSuspendedCause(const Aws::String& value) { SetSuspendedCause(value); return *this;}
    inline JobDescriptor& WithSuspendedCause(Aws::String&& value) { SetSuspendedCause(std::move(value)); return *this;}
    inline JobDescriptor& WithSuspendedCause(const char* value) { SetSuspendedCause(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The manifest generator that was used to generate a job manifest for this
     * job.</p>
     */
    inline const JobManifestGenerator& GetManifestGenerator() const{ return m_manifestGenerator; }
    inline bool ManifestGeneratorHasBeenSet() const { return m_manifestGeneratorHasBeenSet; }
    inline void SetManifestGenerator(const JobManifestGenerator& value) { m_manifestGeneratorHasBeenSet = true; m_manifestGenerator = value; }
    inline void SetManifestGenerator(JobManifestGenerator&& value) { m_manifestGeneratorHasBeenSet = true; m_manifestGenerator = std::move(value); }
    inline JobDescriptor& WithManifestGenerator(const JobManifestGenerator& value) { SetManifestGenerator(value); return *this;}
    inline JobDescriptor& WithManifestGenerator(JobManifestGenerator&& value) { SetManifestGenerator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute of the JobDescriptor containing details about the job's
     * generated manifest.</p>
     */
    inline const S3GeneratedManifestDescriptor& GetGeneratedManifestDescriptor() const{ return m_generatedManifestDescriptor; }
    inline bool GeneratedManifestDescriptorHasBeenSet() const { return m_generatedManifestDescriptorHasBeenSet; }
    inline void SetGeneratedManifestDescriptor(const S3GeneratedManifestDescriptor& value) { m_generatedManifestDescriptorHasBeenSet = true; m_generatedManifestDescriptor = value; }
    inline void SetGeneratedManifestDescriptor(S3GeneratedManifestDescriptor&& value) { m_generatedManifestDescriptorHasBeenSet = true; m_generatedManifestDescriptor = std::move(value); }
    inline JobDescriptor& WithGeneratedManifestDescriptor(const S3GeneratedManifestDescriptor& value) { SetGeneratedManifestDescriptor(value); return *this;}
    inline JobDescriptor& WithGeneratedManifestDescriptor(S3GeneratedManifestDescriptor&& value) { SetGeneratedManifestDescriptor(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    bool m_confirmationRequired;
    bool m_confirmationRequiredHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    JobStatus m_status;
    bool m_statusHasBeenSet = false;

    JobManifest m_manifest;
    bool m_manifestHasBeenSet = false;

    JobOperation m_operation;
    bool m_operationHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    JobProgressSummary m_progressSummary;
    bool m_progressSummaryHasBeenSet = false;

    Aws::String m_statusUpdateReason;
    bool m_statusUpdateReasonHasBeenSet = false;

    Aws::Vector<JobFailure> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;

    JobReport m_report;
    bool m_reportHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_terminationDate;
    bool m_terminationDateHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Utils::DateTime m_suspendedDate;
    bool m_suspendedDateHasBeenSet = false;

    Aws::String m_suspendedCause;
    bool m_suspendedCauseHasBeenSet = false;

    JobManifestGenerator m_manifestGenerator;
    bool m_manifestGeneratorHasBeenSet = false;

    S3GeneratedManifestDescriptor m_generatedManifestDescriptor;
    bool m_generatedManifestDescriptorHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
