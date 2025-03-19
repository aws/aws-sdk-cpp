/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medical-imaging/model/JobStatus.h>
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
namespace MedicalImaging
{
namespace Model
{

  /**
   * <p>Properties of the import job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/DICOMImportJobProperties">AWS
   * API Reference</a></p>
   */
  class DICOMImportJobProperties
  {
  public:
    AWS_MEDICALIMAGING_API DICOMImportJobProperties() = default;
    AWS_MEDICALIMAGING_API DICOMImportJobProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API DICOMImportJobProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The import job identifier.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    DICOMImportJobProperties& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The import job name.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    DICOMImportJobProperties& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filters for listing import jobs based on status.</p>
     */
    inline JobStatus GetJobStatus() const { return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(JobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline DICOMImportJobProperties& WithJobStatus(JobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data store identifier.</p>
     */
    inline const Aws::String& GetDatastoreId() const { return m_datastoreId; }
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }
    template<typename DatastoreIdT = Aws::String>
    void SetDatastoreId(DatastoreIdT&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::forward<DatastoreIdT>(value); }
    template<typename DatastoreIdT = Aws::String>
    DICOMImportJobProperties& WithDatastoreId(DatastoreIdT&& value) { SetDatastoreId(std::forward<DatastoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that grants permissions to access medical
     * imaging resources.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    template<typename DataAccessRoleArnT = Aws::String>
    void SetDataAccessRoleArn(DataAccessRoleArnT&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value); }
    template<typename DataAccessRoleArnT = Aws::String>
    DICOMImportJobProperties& WithDataAccessRoleArn(DataAccessRoleArnT&& value) { SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the import job was ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
    template<typename EndedAtT = Aws::Utils::DateTime>
    void SetEndedAt(EndedAtT&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::forward<EndedAtT>(value); }
    template<typename EndedAtT = Aws::Utils::DateTime>
    DICOMImportJobProperties& WithEndedAt(EndedAtT&& value) { SetEndedAt(std::forward<EndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the import job was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedAt() const { return m_submittedAt; }
    inline bool SubmittedAtHasBeenSet() const { return m_submittedAtHasBeenSet; }
    template<typename SubmittedAtT = Aws::Utils::DateTime>
    void SetSubmittedAt(SubmittedAtT&& value) { m_submittedAtHasBeenSet = true; m_submittedAt = std::forward<SubmittedAtT>(value); }
    template<typename SubmittedAtT = Aws::Utils::DateTime>
    DICOMImportJobProperties& WithSubmittedAt(SubmittedAtT&& value) { SetSubmittedAt(std::forward<SubmittedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input prefix path for the S3 bucket that contains the DICOM P10 files to
     * be imported.</p>
     */
    inline const Aws::String& GetInputS3Uri() const { return m_inputS3Uri; }
    inline bool InputS3UriHasBeenSet() const { return m_inputS3UriHasBeenSet; }
    template<typename InputS3UriT = Aws::String>
    void SetInputS3Uri(InputS3UriT&& value) { m_inputS3UriHasBeenSet = true; m_inputS3Uri = std::forward<InputS3UriT>(value); }
    template<typename InputS3UriT = Aws::String>
    DICOMImportJobProperties& WithInputS3Uri(InputS3UriT&& value) { SetInputS3Uri(std::forward<InputS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output prefix of the S3 bucket to upload the results of the DICOM import
     * job.</p>
     */
    inline const Aws::String& GetOutputS3Uri() const { return m_outputS3Uri; }
    inline bool OutputS3UriHasBeenSet() const { return m_outputS3UriHasBeenSet; }
    template<typename OutputS3UriT = Aws::String>
    void SetOutputS3Uri(OutputS3UriT&& value) { m_outputS3UriHasBeenSet = true; m_outputS3Uri = std::forward<OutputS3UriT>(value); }
    template<typename OutputS3UriT = Aws::String>
    DICOMImportJobProperties& WithOutputS3Uri(OutputS3UriT&& value) { SetOutputS3Uri(std::forward<OutputS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message thrown if an import job fails.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DICOMImportJobProperties& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobStatus m_jobStatus{JobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt{};
    bool m_endedAtHasBeenSet = false;

    Aws::Utils::DateTime m_submittedAt{};
    bool m_submittedAtHasBeenSet = false;

    Aws::String m_inputS3Uri;
    bool m_inputS3UriHasBeenSet = false;

    Aws::String m_outputS3Uri;
    bool m_outputS3UriHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
