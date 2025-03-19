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
    AWS_S3CONTROL_API JobDescriptor() = default;
    AWS_S3CONTROL_API JobDescriptor(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API JobDescriptor& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The ID for the specified job.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    JobDescriptor& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether confirmation is required before Amazon S3 begins running
     * the specified job. Confirmation is required only for jobs created through the
     * Amazon S3 console.</p>
     */
    inline bool GetConfirmationRequired() const { return m_confirmationRequired; }
    inline bool ConfirmationRequiredHasBeenSet() const { return m_confirmationRequiredHasBeenSet; }
    inline void SetConfirmationRequired(bool value) { m_confirmationRequiredHasBeenSet = true; m_confirmationRequired = value; }
    inline JobDescriptor& WithConfirmationRequired(bool value) { SetConfirmationRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for this job, if one was provided in this job's <code>Create
     * Job</code> request.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    JobDescriptor& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for this job.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    JobDescriptor& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the specified job.</p>
     */
    inline JobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(JobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline JobDescriptor& WithStatus(JobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information for the specified job's manifest object.</p>
     */
    inline const JobManifest& GetManifest() const { return m_manifest; }
    inline bool ManifestHasBeenSet() const { return m_manifestHasBeenSet; }
    template<typename ManifestT = JobManifest>
    void SetManifest(ManifestT&& value) { m_manifestHasBeenSet = true; m_manifest = std::forward<ManifestT>(value); }
    template<typename ManifestT = JobManifest>
    JobDescriptor& WithManifest(ManifestT&& value) { SetManifest(std::forward<ManifestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation that the specified job is configured to run on the objects
     * listed in the manifest.</p>
     */
    inline const JobOperation& GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    template<typename OperationT = JobOperation>
    void SetOperation(OperationT&& value) { m_operationHasBeenSet = true; m_operation = std::forward<OperationT>(value); }
    template<typename OperationT = JobOperation>
    JobDescriptor& WithOperation(OperationT&& value) { SetOperation(std::forward<OperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority of the specified job.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline JobDescriptor& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the total number of tasks that the specified job has run, the
     * number of tasks that succeeded, and the number of tasks that failed.</p>
     */
    inline const JobProgressSummary& GetProgressSummary() const { return m_progressSummary; }
    inline bool ProgressSummaryHasBeenSet() const { return m_progressSummaryHasBeenSet; }
    template<typename ProgressSummaryT = JobProgressSummary>
    void SetProgressSummary(ProgressSummaryT&& value) { m_progressSummaryHasBeenSet = true; m_progressSummary = std::forward<ProgressSummaryT>(value); }
    template<typename ProgressSummaryT = JobProgressSummary>
    JobDescriptor& WithProgressSummary(ProgressSummaryT&& value) { SetProgressSummary(std::forward<ProgressSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for updating the job.</p>
     */
    inline const Aws::String& GetStatusUpdateReason() const { return m_statusUpdateReason; }
    inline bool StatusUpdateReasonHasBeenSet() const { return m_statusUpdateReasonHasBeenSet; }
    template<typename StatusUpdateReasonT = Aws::String>
    void SetStatusUpdateReason(StatusUpdateReasonT&& value) { m_statusUpdateReasonHasBeenSet = true; m_statusUpdateReason = std::forward<StatusUpdateReasonT>(value); }
    template<typename StatusUpdateReasonT = Aws::String>
    JobDescriptor& WithStatusUpdateReason(StatusUpdateReasonT&& value) { SetStatusUpdateReason(std::forward<StatusUpdateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the specified job failed, this field contains information describing the
     * failure.</p>
     */
    inline const Aws::Vector<JobFailure>& GetFailureReasons() const { return m_failureReasons; }
    inline bool FailureReasonsHasBeenSet() const { return m_failureReasonsHasBeenSet; }
    template<typename FailureReasonsT = Aws::Vector<JobFailure>>
    void SetFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::forward<FailureReasonsT>(value); }
    template<typename FailureReasonsT = Aws::Vector<JobFailure>>
    JobDescriptor& WithFailureReasons(FailureReasonsT&& value) { SetFailureReasons(std::forward<FailureReasonsT>(value)); return *this;}
    template<typename FailureReasonsT = JobFailure>
    JobDescriptor& AddFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.emplace_back(std::forward<FailureReasonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains the configuration information for the job-completion report if you
     * requested one in the <code>Create Job</code> request.</p>
     */
    inline const JobReport& GetReport() const { return m_report; }
    inline bool ReportHasBeenSet() const { return m_reportHasBeenSet; }
    template<typename ReportT = JobReport>
    void SetReport(ReportT&& value) { m_reportHasBeenSet = true; m_report = std::forward<ReportT>(value); }
    template<typename ReportT = JobReport>
    JobDescriptor& WithReport(ReportT&& value) { SetReport(std::forward<ReportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp indicating when this job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    JobDescriptor& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp indicating when this job terminated. A job's termination date is
     * the date and time when it succeeded, failed, or was canceled.</p>
     */
    inline const Aws::Utils::DateTime& GetTerminationDate() const { return m_terminationDate; }
    inline bool TerminationDateHasBeenSet() const { return m_terminationDateHasBeenSet; }
    template<typename TerminationDateT = Aws::Utils::DateTime>
    void SetTerminationDate(TerminationDateT&& value) { m_terminationDateHasBeenSet = true; m_terminationDate = std::forward<TerminationDateT>(value); }
    template<typename TerminationDateT = Aws::Utils::DateTime>
    JobDescriptor& WithTerminationDate(TerminationDateT&& value) { SetTerminationDate(std::forward<TerminationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the Identity and Access Management (IAM)
     * role assigned to run the tasks for this job.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    JobDescriptor& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when this job was suspended, if it has been suspended.</p>
     */
    inline const Aws::Utils::DateTime& GetSuspendedDate() const { return m_suspendedDate; }
    inline bool SuspendedDateHasBeenSet() const { return m_suspendedDateHasBeenSet; }
    template<typename SuspendedDateT = Aws::Utils::DateTime>
    void SetSuspendedDate(SuspendedDateT&& value) { m_suspendedDateHasBeenSet = true; m_suspendedDate = std::forward<SuspendedDateT>(value); }
    template<typename SuspendedDateT = Aws::Utils::DateTime>
    JobDescriptor& WithSuspendedDate(SuspendedDateT&& value) { SetSuspendedDate(std::forward<SuspendedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the specified job was suspended. A job is only suspended if
     * you create it through the Amazon S3 console. When you create the job, it enters
     * the <code>Suspended</code> state to await confirmation before running. After you
     * confirm the job, it automatically exits the <code>Suspended</code> state.</p>
     */
    inline const Aws::String& GetSuspendedCause() const { return m_suspendedCause; }
    inline bool SuspendedCauseHasBeenSet() const { return m_suspendedCauseHasBeenSet; }
    template<typename SuspendedCauseT = Aws::String>
    void SetSuspendedCause(SuspendedCauseT&& value) { m_suspendedCauseHasBeenSet = true; m_suspendedCause = std::forward<SuspendedCauseT>(value); }
    template<typename SuspendedCauseT = Aws::String>
    JobDescriptor& WithSuspendedCause(SuspendedCauseT&& value) { SetSuspendedCause(std::forward<SuspendedCauseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The manifest generator that was used to generate a job manifest for this
     * job.</p>
     */
    inline const JobManifestGenerator& GetManifestGenerator() const { return m_manifestGenerator; }
    inline bool ManifestGeneratorHasBeenSet() const { return m_manifestGeneratorHasBeenSet; }
    template<typename ManifestGeneratorT = JobManifestGenerator>
    void SetManifestGenerator(ManifestGeneratorT&& value) { m_manifestGeneratorHasBeenSet = true; m_manifestGenerator = std::forward<ManifestGeneratorT>(value); }
    template<typename ManifestGeneratorT = JobManifestGenerator>
    JobDescriptor& WithManifestGenerator(ManifestGeneratorT&& value) { SetManifestGenerator(std::forward<ManifestGeneratorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute of the JobDescriptor containing details about the job's
     * generated manifest.</p>
     */
    inline const S3GeneratedManifestDescriptor& GetGeneratedManifestDescriptor() const { return m_generatedManifestDescriptor; }
    inline bool GeneratedManifestDescriptorHasBeenSet() const { return m_generatedManifestDescriptorHasBeenSet; }
    template<typename GeneratedManifestDescriptorT = S3GeneratedManifestDescriptor>
    void SetGeneratedManifestDescriptor(GeneratedManifestDescriptorT&& value) { m_generatedManifestDescriptorHasBeenSet = true; m_generatedManifestDescriptor = std::forward<GeneratedManifestDescriptorT>(value); }
    template<typename GeneratedManifestDescriptorT = S3GeneratedManifestDescriptor>
    JobDescriptor& WithGeneratedManifestDescriptor(GeneratedManifestDescriptorT&& value) { SetGeneratedManifestDescriptor(std::forward<GeneratedManifestDescriptorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    bool m_confirmationRequired{false};
    bool m_confirmationRequiredHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    JobStatus m_status{JobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    JobManifest m_manifest;
    bool m_manifestHasBeenSet = false;

    JobOperation m_operation;
    bool m_operationHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    JobProgressSummary m_progressSummary;
    bool m_progressSummaryHasBeenSet = false;

    Aws::String m_statusUpdateReason;
    bool m_statusUpdateReasonHasBeenSet = false;

    Aws::Vector<JobFailure> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;

    JobReport m_report;
    bool m_reportHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_terminationDate{};
    bool m_terminationDateHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Utils::DateTime m_suspendedDate{};
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
