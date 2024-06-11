﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/VoiceIDRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/voice-id/model/EnrollmentConfig.h>
#include <aws/voice-id/model/InputDataConfig.h>
#include <aws/voice-id/model/OutputDataConfig.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace VoiceID
{
namespace Model
{

  /**
   */
  class StartSpeakerEnrollmentJobRequest : public VoiceIDRequest
  {
  public:
    AWS_VOICEID_API StartSpeakerEnrollmentJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSpeakerEnrollmentJob"; }

    AWS_VOICEID_API Aws::String SerializePayload() const override;

    AWS_VOICEID_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline StartSpeakerEnrollmentJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline StartSpeakerEnrollmentJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline StartSpeakerEnrollmentJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role Amazon Resource Name (ARN) that grants Voice ID permissions to
     * access customer's buckets to read the input manifest file and write the job
     * output file. Refer to <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/voiceid-batch-enrollment.html">Batch
     * enrollment using audio data from prior calls</a> for the permissions needed in
     * this role.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }
    inline StartSpeakerEnrollmentJobRequest& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}
    inline StartSpeakerEnrollmentJobRequest& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}
    inline StartSpeakerEnrollmentJobRequest& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the domain that contains the speaker enrollment job and in
     * which the speakers are enrolled. </p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline StartSpeakerEnrollmentJobRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline StartSpeakerEnrollmentJobRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline StartSpeakerEnrollmentJobRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The enrollment config that contains details such as the action to take when a
     * speaker is already enrolled in Voice ID or when a speaker is identified as a
     * fraudster.</p>
     */
    inline const EnrollmentConfig& GetEnrollmentConfig() const{ return m_enrollmentConfig; }
    inline bool EnrollmentConfigHasBeenSet() const { return m_enrollmentConfigHasBeenSet; }
    inline void SetEnrollmentConfig(const EnrollmentConfig& value) { m_enrollmentConfigHasBeenSet = true; m_enrollmentConfig = value; }
    inline void SetEnrollmentConfig(EnrollmentConfig&& value) { m_enrollmentConfigHasBeenSet = true; m_enrollmentConfig = std::move(value); }
    inline StartSpeakerEnrollmentJobRequest& WithEnrollmentConfig(const EnrollmentConfig& value) { SetEnrollmentConfig(value); return *this;}
    inline StartSpeakerEnrollmentJobRequest& WithEnrollmentConfig(EnrollmentConfig&& value) { SetEnrollmentConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input data config containing the S3 location for the input manifest file
     * that contains the list of speaker enrollment requests.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }
    inline StartSpeakerEnrollmentJobRequest& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}
    inline StartSpeakerEnrollmentJobRequest& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for your speaker enrollment job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline StartSpeakerEnrollmentJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline StartSpeakerEnrollmentJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline StartSpeakerEnrollmentJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output data config containing the S3 location where Voice ID writes the
     * job output file; you must also include a KMS key ID to encrypt the file.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }
    inline StartSpeakerEnrollmentJobRequest& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}
    inline StartSpeakerEnrollmentJobRequest& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    EnrollmentConfig m_enrollmentConfig;
    bool m_enrollmentConfigHasBeenSet = false;

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
