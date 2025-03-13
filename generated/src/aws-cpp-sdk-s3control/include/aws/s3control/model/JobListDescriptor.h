/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/OperationName.h>
#include <aws/s3control/model/JobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/s3control/model/JobProgressSummary.h>
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
   * <p>Contains the configuration and status information for a single job retrieved
   * as part of a job list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/JobListDescriptor">AWS
   * API Reference</a></p>
   */
  class JobListDescriptor
  {
  public:
    AWS_S3CONTROL_API JobListDescriptor() = default;
    AWS_S3CONTROL_API JobListDescriptor(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API JobListDescriptor& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    JobListDescriptor& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-specified description that was included in the specified job's
     * <code>Create Job</code> request.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    JobListDescriptor& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation that the specified job is configured to run on every object
     * listed in the manifest.</p>
     */
    inline OperationName GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(OperationName value) { m_operationHasBeenSet = true; m_operation = value; }
    inline JobListDescriptor& WithOperation(OperationName value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current priority for the specified job.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline JobListDescriptor& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified job's current status.</p>
     */
    inline JobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(JobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline JobListDescriptor& WithStatus(JobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp indicating when the specified job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    JobListDescriptor& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp indicating when the specified job terminated. A job's termination
     * date is the date and time when it succeeded, failed, or was canceled.</p>
     */
    inline const Aws::Utils::DateTime& GetTerminationDate() const { return m_terminationDate; }
    inline bool TerminationDateHasBeenSet() const { return m_terminationDateHasBeenSet; }
    template<typename TerminationDateT = Aws::Utils::DateTime>
    void SetTerminationDate(TerminationDateT&& value) { m_terminationDateHasBeenSet = true; m_terminationDate = std::forward<TerminationDateT>(value); }
    template<typename TerminationDateT = Aws::Utils::DateTime>
    JobListDescriptor& WithTerminationDate(TerminationDateT&& value) { SetTerminationDate(std::forward<TerminationDateT>(value)); return *this;}
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
    JobListDescriptor& WithProgressSummary(ProgressSummaryT&& value) { SetProgressSummary(std::forward<ProgressSummaryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    OperationName m_operation{OperationName::NOT_SET};
    bool m_operationHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    JobStatus m_status{JobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_terminationDate{};
    bool m_terminationDateHasBeenSet = false;

    JobProgressSummary m_progressSummary;
    bool m_progressSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
