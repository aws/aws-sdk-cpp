/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/MediaAnalysisOperationsConfig.h>
#include <aws/rekognition/model/MediaAnalysisInput.h>
#include <aws/rekognition/model/MediaAnalysisOutputConfig.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class StartMediaAnalysisJobRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API StartMediaAnalysisJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMediaAnalysisJob"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Idempotency token used to prevent the accidental creation of duplicate
     * versions. If you use the same token with multiple
     * <code>StartMediaAnalysisJobRequest</code> requests, the same response is
     * returned. Use <code>ClientRequestToken</code> to prevent the same request from
     * being processed more than once.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Idempotency token used to prevent the accidental creation of duplicate
     * versions. If you use the same token with multiple
     * <code>StartMediaAnalysisJobRequest</code> requests, the same response is
     * returned. Use <code>ClientRequestToken</code> to prevent the same request from
     * being processed more than once.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Idempotency token used to prevent the accidental creation of duplicate
     * versions. If you use the same token with multiple
     * <code>StartMediaAnalysisJobRequest</code> requests, the same response is
     * returned. Use <code>ClientRequestToken</code> to prevent the same request from
     * being processed more than once.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Idempotency token used to prevent the accidental creation of duplicate
     * versions. If you use the same token with multiple
     * <code>StartMediaAnalysisJobRequest</code> requests, the same response is
     * returned. Use <code>ClientRequestToken</code> to prevent the same request from
     * being processed more than once.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Idempotency token used to prevent the accidental creation of duplicate
     * versions. If you use the same token with multiple
     * <code>StartMediaAnalysisJobRequest</code> requests, the same response is
     * returned. Use <code>ClientRequestToken</code> to prevent the same request from
     * being processed more than once.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Idempotency token used to prevent the accidental creation of duplicate
     * versions. If you use the same token with multiple
     * <code>StartMediaAnalysisJobRequest</code> requests, the same response is
     * returned. Use <code>ClientRequestToken</code> to prevent the same request from
     * being processed more than once.</p>
     */
    inline StartMediaAnalysisJobRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Idempotency token used to prevent the accidental creation of duplicate
     * versions. If you use the same token with multiple
     * <code>StartMediaAnalysisJobRequest</code> requests, the same response is
     * returned. Use <code>ClientRequestToken</code> to prevent the same request from
     * being processed more than once.</p>
     */
    inline StartMediaAnalysisJobRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Idempotency token used to prevent the accidental creation of duplicate
     * versions. If you use the same token with multiple
     * <code>StartMediaAnalysisJobRequest</code> requests, the same response is
     * returned. Use <code>ClientRequestToken</code> to prevent the same request from
     * being processed more than once.</p>
     */
    inline StartMediaAnalysisJobRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The name of the job. Does not have to be unique.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the job. Does not have to be unique.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the job. Does not have to be unique.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the job. Does not have to be unique.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the job. Does not have to be unique.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the job. Does not have to be unique.</p>
     */
    inline StartMediaAnalysisJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job. Does not have to be unique.</p>
     */
    inline StartMediaAnalysisJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job. Does not have to be unique.</p>
     */
    inline StartMediaAnalysisJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>Configuration options for the media analysis job to be created.</p>
     */
    inline const MediaAnalysisOperationsConfig& GetOperationsConfig() const{ return m_operationsConfig; }

    /**
     * <p>Configuration options for the media analysis job to be created.</p>
     */
    inline bool OperationsConfigHasBeenSet() const { return m_operationsConfigHasBeenSet; }

    /**
     * <p>Configuration options for the media analysis job to be created.</p>
     */
    inline void SetOperationsConfig(const MediaAnalysisOperationsConfig& value) { m_operationsConfigHasBeenSet = true; m_operationsConfig = value; }

    /**
     * <p>Configuration options for the media analysis job to be created.</p>
     */
    inline void SetOperationsConfig(MediaAnalysisOperationsConfig&& value) { m_operationsConfigHasBeenSet = true; m_operationsConfig = std::move(value); }

    /**
     * <p>Configuration options for the media analysis job to be created.</p>
     */
    inline StartMediaAnalysisJobRequest& WithOperationsConfig(const MediaAnalysisOperationsConfig& value) { SetOperationsConfig(value); return *this;}

    /**
     * <p>Configuration options for the media analysis job to be created.</p>
     */
    inline StartMediaAnalysisJobRequest& WithOperationsConfig(MediaAnalysisOperationsConfig&& value) { SetOperationsConfig(std::move(value)); return *this;}


    /**
     * <p>Input data to be analyzed by the job.</p>
     */
    inline const MediaAnalysisInput& GetInput() const{ return m_input; }

    /**
     * <p>Input data to be analyzed by the job.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>Input data to be analyzed by the job.</p>
     */
    inline void SetInput(const MediaAnalysisInput& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>Input data to be analyzed by the job.</p>
     */
    inline void SetInput(MediaAnalysisInput&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>Input data to be analyzed by the job.</p>
     */
    inline StartMediaAnalysisJobRequest& WithInput(const MediaAnalysisInput& value) { SetInput(value); return *this;}

    /**
     * <p>Input data to be analyzed by the job.</p>
     */
    inline StartMediaAnalysisJobRequest& WithInput(MediaAnalysisInput&& value) { SetInput(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 bucket location to store the results.</p>
     */
    inline const MediaAnalysisOutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>The Amazon S3 bucket location to store the results.</p>
     */
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket location to store the results.</p>
     */
    inline void SetOutputConfig(const MediaAnalysisOutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }

    /**
     * <p>The Amazon S3 bucket location to store the results.</p>
     */
    inline void SetOutputConfig(MediaAnalysisOutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }

    /**
     * <p>The Amazon S3 bucket location to store the results.</p>
     */
    inline StartMediaAnalysisJobRequest& WithOutputConfig(const MediaAnalysisOutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>The Amazon S3 bucket location to store the results.</p>
     */
    inline StartMediaAnalysisJobRequest& WithOutputConfig(MediaAnalysisOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>The identifier of customer managed AWS KMS key (name or ARN). The key is used
     * to encrypt images copied into the service. The key is also used to encrypt
     * results and manifest files written to the output Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The identifier of customer managed AWS KMS key (name or ARN). The key is used
     * to encrypt images copied into the service. The key is also used to encrypt
     * results and manifest files written to the output Amazon S3 bucket.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The identifier of customer managed AWS KMS key (name or ARN). The key is used
     * to encrypt images copied into the service. The key is also used to encrypt
     * results and manifest files written to the output Amazon S3 bucket.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The identifier of customer managed AWS KMS key (name or ARN). The key is used
     * to encrypt images copied into the service. The key is also used to encrypt
     * results and manifest files written to the output Amazon S3 bucket.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The identifier of customer managed AWS KMS key (name or ARN). The key is used
     * to encrypt images copied into the service. The key is also used to encrypt
     * results and manifest files written to the output Amazon S3 bucket.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The identifier of customer managed AWS KMS key (name or ARN). The key is used
     * to encrypt images copied into the service. The key is also used to encrypt
     * results and manifest files written to the output Amazon S3 bucket.</p>
     */
    inline StartMediaAnalysisJobRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The identifier of customer managed AWS KMS key (name or ARN). The key is used
     * to encrypt images copied into the service. The key is also used to encrypt
     * results and manifest files written to the output Amazon S3 bucket.</p>
     */
    inline StartMediaAnalysisJobRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of customer managed AWS KMS key (name or ARN). The key is used
     * to encrypt images copied into the service. The key is also used to encrypt
     * results and manifest files written to the output Amazon S3 bucket.</p>
     */
    inline StartMediaAnalysisJobRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    MediaAnalysisOperationsConfig m_operationsConfig;
    bool m_operationsConfigHasBeenSet = false;

    MediaAnalysisInput m_input;
    bool m_inputHasBeenSet = false;

    MediaAnalysisOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
