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
    AWS_MEDICALIMAGING_API DICOMImportJobProperties();
    AWS_MEDICALIMAGING_API DICOMImportJobProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API DICOMImportJobProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The import job identifier.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The import job identifier.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The import job identifier.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The import job identifier.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The import job identifier.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The import job identifier.</p>
     */
    inline DICOMImportJobProperties& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The import job identifier.</p>
     */
    inline DICOMImportJobProperties& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The import job identifier.</p>
     */
    inline DICOMImportJobProperties& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The import job name.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The import job name.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The import job name.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The import job name.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The import job name.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The import job name.</p>
     */
    inline DICOMImportJobProperties& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The import job name.</p>
     */
    inline DICOMImportJobProperties& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The import job name.</p>
     */
    inline DICOMImportJobProperties& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The filters for listing import jobs based on status.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The filters for listing import jobs based on status.</p>
     */
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }

    /**
     * <p>The filters for listing import jobs based on status.</p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }

    /**
     * <p>The filters for listing import jobs based on status.</p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }

    /**
     * <p>The filters for listing import jobs based on status.</p>
     */
    inline DICOMImportJobProperties& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The filters for listing import jobs based on status.</p>
     */
    inline DICOMImportJobProperties& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>The data store identifier.</p>
     */
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }

    /**
     * <p>The data store identifier.</p>
     */
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }

    /**
     * <p>The data store identifier.</p>
     */
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = value; }

    /**
     * <p>The data store identifier.</p>
     */
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::move(value); }

    /**
     * <p>The data store identifier.</p>
     */
    inline void SetDatastoreId(const char* value) { m_datastoreIdHasBeenSet = true; m_datastoreId.assign(value); }

    /**
     * <p>The data store identifier.</p>
     */
    inline DICOMImportJobProperties& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}

    /**
     * <p>The data store identifier.</p>
     */
    inline DICOMImportJobProperties& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}

    /**
     * <p>The data store identifier.</p>
     */
    inline DICOMImportJobProperties& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that grants permissions to access medical
     * imaging resources.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that grants permissions to access medical
     * imaging resources.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that grants permissions to access medical
     * imaging resources.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that grants permissions to access medical
     * imaging resources.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that grants permissions to access medical
     * imaging resources.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that grants permissions to access medical
     * imaging resources.</p>
     */
    inline DICOMImportJobProperties& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that grants permissions to access medical
     * imaging resources.</p>
     */
    inline DICOMImportJobProperties& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that grants permissions to access medical
     * imaging resources.</p>
     */
    inline DICOMImportJobProperties& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p>The timestamp for when the import job was ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }

    /**
     * <p>The timestamp for when the import job was ended.</p>
     */
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }

    /**
     * <p>The timestamp for when the import job was ended.</p>
     */
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAtHasBeenSet = true; m_endedAt = value; }

    /**
     * <p>The timestamp for when the import job was ended.</p>
     */
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::move(value); }

    /**
     * <p>The timestamp for when the import job was ended.</p>
     */
    inline DICOMImportJobProperties& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}

    /**
     * <p>The timestamp for when the import job was ended.</p>
     */
    inline DICOMImportJobProperties& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}


    /**
     * <p>The timestamp for when the import job was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedAt() const{ return m_submittedAt; }

    /**
     * <p>The timestamp for when the import job was submitted.</p>
     */
    inline bool SubmittedAtHasBeenSet() const { return m_submittedAtHasBeenSet; }

    /**
     * <p>The timestamp for when the import job was submitted.</p>
     */
    inline void SetSubmittedAt(const Aws::Utils::DateTime& value) { m_submittedAtHasBeenSet = true; m_submittedAt = value; }

    /**
     * <p>The timestamp for when the import job was submitted.</p>
     */
    inline void SetSubmittedAt(Aws::Utils::DateTime&& value) { m_submittedAtHasBeenSet = true; m_submittedAt = std::move(value); }

    /**
     * <p>The timestamp for when the import job was submitted.</p>
     */
    inline DICOMImportJobProperties& WithSubmittedAt(const Aws::Utils::DateTime& value) { SetSubmittedAt(value); return *this;}

    /**
     * <p>The timestamp for when the import job was submitted.</p>
     */
    inline DICOMImportJobProperties& WithSubmittedAt(Aws::Utils::DateTime&& value) { SetSubmittedAt(std::move(value)); return *this;}


    /**
     * <p>The input prefix path for the S3 bucket that contains the DICOM P10 files to
     * be imported.</p>
     */
    inline const Aws::String& GetInputS3Uri() const{ return m_inputS3Uri; }

    /**
     * <p>The input prefix path for the S3 bucket that contains the DICOM P10 files to
     * be imported.</p>
     */
    inline bool InputS3UriHasBeenSet() const { return m_inputS3UriHasBeenSet; }

    /**
     * <p>The input prefix path for the S3 bucket that contains the DICOM P10 files to
     * be imported.</p>
     */
    inline void SetInputS3Uri(const Aws::String& value) { m_inputS3UriHasBeenSet = true; m_inputS3Uri = value; }

    /**
     * <p>The input prefix path for the S3 bucket that contains the DICOM P10 files to
     * be imported.</p>
     */
    inline void SetInputS3Uri(Aws::String&& value) { m_inputS3UriHasBeenSet = true; m_inputS3Uri = std::move(value); }

    /**
     * <p>The input prefix path for the S3 bucket that contains the DICOM P10 files to
     * be imported.</p>
     */
    inline void SetInputS3Uri(const char* value) { m_inputS3UriHasBeenSet = true; m_inputS3Uri.assign(value); }

    /**
     * <p>The input prefix path for the S3 bucket that contains the DICOM P10 files to
     * be imported.</p>
     */
    inline DICOMImportJobProperties& WithInputS3Uri(const Aws::String& value) { SetInputS3Uri(value); return *this;}

    /**
     * <p>The input prefix path for the S3 bucket that contains the DICOM P10 files to
     * be imported.</p>
     */
    inline DICOMImportJobProperties& WithInputS3Uri(Aws::String&& value) { SetInputS3Uri(std::move(value)); return *this;}

    /**
     * <p>The input prefix path for the S3 bucket that contains the DICOM P10 files to
     * be imported.</p>
     */
    inline DICOMImportJobProperties& WithInputS3Uri(const char* value) { SetInputS3Uri(value); return *this;}


    /**
     * <p>The output prefix of the S3 bucket to upload the results of the DICOM import
     * job.</p>
     */
    inline const Aws::String& GetOutputS3Uri() const{ return m_outputS3Uri; }

    /**
     * <p>The output prefix of the S3 bucket to upload the results of the DICOM import
     * job.</p>
     */
    inline bool OutputS3UriHasBeenSet() const { return m_outputS3UriHasBeenSet; }

    /**
     * <p>The output prefix of the S3 bucket to upload the results of the DICOM import
     * job.</p>
     */
    inline void SetOutputS3Uri(const Aws::String& value) { m_outputS3UriHasBeenSet = true; m_outputS3Uri = value; }

    /**
     * <p>The output prefix of the S3 bucket to upload the results of the DICOM import
     * job.</p>
     */
    inline void SetOutputS3Uri(Aws::String&& value) { m_outputS3UriHasBeenSet = true; m_outputS3Uri = std::move(value); }

    /**
     * <p>The output prefix of the S3 bucket to upload the results of the DICOM import
     * job.</p>
     */
    inline void SetOutputS3Uri(const char* value) { m_outputS3UriHasBeenSet = true; m_outputS3Uri.assign(value); }

    /**
     * <p>The output prefix of the S3 bucket to upload the results of the DICOM import
     * job.</p>
     */
    inline DICOMImportJobProperties& WithOutputS3Uri(const Aws::String& value) { SetOutputS3Uri(value); return *this;}

    /**
     * <p>The output prefix of the S3 bucket to upload the results of the DICOM import
     * job.</p>
     */
    inline DICOMImportJobProperties& WithOutputS3Uri(Aws::String&& value) { SetOutputS3Uri(std::move(value)); return *this;}

    /**
     * <p>The output prefix of the S3 bucket to upload the results of the DICOM import
     * job.</p>
     */
    inline DICOMImportJobProperties& WithOutputS3Uri(const char* value) { SetOutputS3Uri(value); return *this;}


    /**
     * <p>The error message thrown if an import job fails.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The error message thrown if an import job fails.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The error message thrown if an import job fails.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The error message thrown if an import job fails.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The error message thrown if an import job fails.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The error message thrown if an import job fails.</p>
     */
    inline DICOMImportJobProperties& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The error message thrown if an import job fails.</p>
     */
    inline DICOMImportJobProperties& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The error message thrown if an import job fails.</p>
     */
    inline DICOMImportJobProperties& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet = false;

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt;
    bool m_endedAtHasBeenSet = false;

    Aws::Utils::DateTime m_submittedAt;
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
