/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/CreateFaceLivenessSessionRequestSettings.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class CreateFaceLivenessSessionRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API CreateFaceLivenessSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFaceLivenessSession"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The identifier for your AWS Key Management Service key (AWS KMS key). Used
     * to encrypt audit images and reference images.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline CreateFaceLivenessSessionRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline CreateFaceLivenessSessionRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline CreateFaceLivenessSessionRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A session settings object. It contains settings for the operation to be
     * performed. For Face Liveness, it accepts <code>OutputConfig</code> and
     * <code>AuditImagesLimit</code>.</p>
     */
    inline const CreateFaceLivenessSessionRequestSettings& GetSettings() const{ return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    inline void SetSettings(const CreateFaceLivenessSessionRequestSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }
    inline void SetSettings(CreateFaceLivenessSessionRequestSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }
    inline CreateFaceLivenessSessionRequest& WithSettings(const CreateFaceLivenessSessionRequestSettings& value) { SetSettings(value); return *this;}
    inline CreateFaceLivenessSessionRequest& WithSettings(CreateFaceLivenessSessionRequestSettings&& value) { SetSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Idempotent token is used to recognize the Face Liveness request. If the same
     * token is used with multiple <code>CreateFaceLivenessSession</code> requests, the
     * same session is returned. This token is employed to avoid unintentionally
     * creating the same session multiple times.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreateFaceLivenessSessionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateFaceLivenessSessionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateFaceLivenessSessionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    CreateFaceLivenessSessionRequestSettings m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
