/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/medical-imaging/MedicalImagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MedicalImaging
{
namespace Model
{

  /**
   */
  class StartDICOMImportJobRequest : public MedicalImagingRequest
  {
  public:
    AWS_MEDICALIMAGING_API StartDICOMImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDICOMImportJob"; }

    AWS_MEDICALIMAGING_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The import job name.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline StartDICOMImportJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline StartDICOMImportJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline StartDICOMImportJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants permission to
     * access medical imaging resources.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }
    inline StartDICOMImportJobRequest& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}
    inline StartDICOMImportJobRequest& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}
    inline StartDICOMImportJobRequest& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for API idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline StartDICOMImportJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline StartDICOMImportJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline StartDICOMImportJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data store identifier.</p>
     */
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = value; }
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::move(value); }
    inline void SetDatastoreId(const char* value) { m_datastoreIdHasBeenSet = true; m_datastoreId.assign(value); }
    inline StartDICOMImportJobRequest& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}
    inline StartDICOMImportJobRequest& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}
    inline StartDICOMImportJobRequest& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input prefix path for the S3 bucket that contains the DICOM files to be
     * imported.</p>
     */
    inline const Aws::String& GetInputS3Uri() const{ return m_inputS3Uri; }
    inline bool InputS3UriHasBeenSet() const { return m_inputS3UriHasBeenSet; }
    inline void SetInputS3Uri(const Aws::String& value) { m_inputS3UriHasBeenSet = true; m_inputS3Uri = value; }
    inline void SetInputS3Uri(Aws::String&& value) { m_inputS3UriHasBeenSet = true; m_inputS3Uri = std::move(value); }
    inline void SetInputS3Uri(const char* value) { m_inputS3UriHasBeenSet = true; m_inputS3Uri.assign(value); }
    inline StartDICOMImportJobRequest& WithInputS3Uri(const Aws::String& value) { SetInputS3Uri(value); return *this;}
    inline StartDICOMImportJobRequest& WithInputS3Uri(Aws::String&& value) { SetInputS3Uri(std::move(value)); return *this;}
    inline StartDICOMImportJobRequest& WithInputS3Uri(const char* value) { SetInputS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output prefix of the S3 bucket to upload the results of the DICOM import
     * job.</p>
     */
    inline const Aws::String& GetOutputS3Uri() const{ return m_outputS3Uri; }
    inline bool OutputS3UriHasBeenSet() const { return m_outputS3UriHasBeenSet; }
    inline void SetOutputS3Uri(const Aws::String& value) { m_outputS3UriHasBeenSet = true; m_outputS3Uri = value; }
    inline void SetOutputS3Uri(Aws::String&& value) { m_outputS3UriHasBeenSet = true; m_outputS3Uri = std::move(value); }
    inline void SetOutputS3Uri(const char* value) { m_outputS3UriHasBeenSet = true; m_outputS3Uri.assign(value); }
    inline StartDICOMImportJobRequest& WithOutputS3Uri(const Aws::String& value) { SetOutputS3Uri(value); return *this;}
    inline StartDICOMImportJobRequest& WithOutputS3Uri(Aws::String&& value) { SetOutputS3Uri(std::move(value)); return *this;}
    inline StartDICOMImportJobRequest& WithOutputS3Uri(const char* value) { SetOutputS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the source S3 bucket owner.</p>
     */
    inline const Aws::String& GetInputOwnerAccountId() const{ return m_inputOwnerAccountId; }
    inline bool InputOwnerAccountIdHasBeenSet() const { return m_inputOwnerAccountIdHasBeenSet; }
    inline void SetInputOwnerAccountId(const Aws::String& value) { m_inputOwnerAccountIdHasBeenSet = true; m_inputOwnerAccountId = value; }
    inline void SetInputOwnerAccountId(Aws::String&& value) { m_inputOwnerAccountIdHasBeenSet = true; m_inputOwnerAccountId = std::move(value); }
    inline void SetInputOwnerAccountId(const char* value) { m_inputOwnerAccountIdHasBeenSet = true; m_inputOwnerAccountId.assign(value); }
    inline StartDICOMImportJobRequest& WithInputOwnerAccountId(const Aws::String& value) { SetInputOwnerAccountId(value); return *this;}
    inline StartDICOMImportJobRequest& WithInputOwnerAccountId(Aws::String&& value) { SetInputOwnerAccountId(std::move(value)); return *this;}
    inline StartDICOMImportJobRequest& WithInputOwnerAccountId(const char* value) { SetInputOwnerAccountId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    Aws::String m_inputS3Uri;
    bool m_inputS3UriHasBeenSet = false;

    Aws::String m_outputS3Uri;
    bool m_outputS3UriHasBeenSet = false;

    Aws::String m_inputOwnerAccountId;
    bool m_inputOwnerAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
