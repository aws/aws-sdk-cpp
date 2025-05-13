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
    AWS_MEDICALIMAGING_API StartDICOMImportJobRequest() = default;

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
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    StartDICOMImportJobRequest& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants permission to
     * access medical imaging resources.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    template<typename DataAccessRoleArnT = Aws::String>
    void SetDataAccessRoleArn(DataAccessRoleArnT&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value); }
    template<typename DataAccessRoleArnT = Aws::String>
    StartDICOMImportJobRequest& WithDataAccessRoleArn(DataAccessRoleArnT&& value) { SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for API idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    StartDICOMImportJobRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
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
    StartDICOMImportJobRequest& WithDatastoreId(DatastoreIdT&& value) { SetDatastoreId(std::forward<DatastoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input prefix path for the S3 bucket that contains the DICOM files to be
     * imported.</p>
     */
    inline const Aws::String& GetInputS3Uri() const { return m_inputS3Uri; }
    inline bool InputS3UriHasBeenSet() const { return m_inputS3UriHasBeenSet; }
    template<typename InputS3UriT = Aws::String>
    void SetInputS3Uri(InputS3UriT&& value) { m_inputS3UriHasBeenSet = true; m_inputS3Uri = std::forward<InputS3UriT>(value); }
    template<typename InputS3UriT = Aws::String>
    StartDICOMImportJobRequest& WithInputS3Uri(InputS3UriT&& value) { SetInputS3Uri(std::forward<InputS3UriT>(value)); return *this;}
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
    StartDICOMImportJobRequest& WithOutputS3Uri(OutputS3UriT&& value) { SetOutputS3Uri(std::forward<OutputS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the source S3 bucket owner.</p>
     */
    inline const Aws::String& GetInputOwnerAccountId() const { return m_inputOwnerAccountId; }
    inline bool InputOwnerAccountIdHasBeenSet() const { return m_inputOwnerAccountIdHasBeenSet; }
    template<typename InputOwnerAccountIdT = Aws::String>
    void SetInputOwnerAccountId(InputOwnerAccountIdT&& value) { m_inputOwnerAccountIdHasBeenSet = true; m_inputOwnerAccountId = std::forward<InputOwnerAccountIdT>(value); }
    template<typename InputOwnerAccountIdT = Aws::String>
    StartDICOMImportJobRequest& WithInputOwnerAccountId(InputOwnerAccountIdT&& value) { SetInputOwnerAccountId(std::forward<InputOwnerAccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

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
