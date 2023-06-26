/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/model/EncryptionContractConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackagev2/model/DrmSystem.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>The parameters for the SPEKE key provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/SpekeKeyProvider">AWS
   * API Reference</a></p>
   */
  class SpekeKeyProvider
  {
  public:
    AWS_MEDIAPACKAGEV2_API SpekeKeyProvider();
    AWS_MEDIAPACKAGEV2_API SpekeKeyProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API SpekeKeyProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configure one or more content encryption keys for your endpoints that use
     * SPEKE Version 2.0. The encryption contract defines which content keys are used
     * to encrypt the audio and video tracks in your stream. To configure the
     * encryption contract, specify which audio and video encryption presets to
     * use.</p>
     */
    inline const EncryptionContractConfiguration& GetEncryptionContractConfiguration() const{ return m_encryptionContractConfiguration; }

    /**
     * <p>Configure one or more content encryption keys for your endpoints that use
     * SPEKE Version 2.0. The encryption contract defines which content keys are used
     * to encrypt the audio and video tracks in your stream. To configure the
     * encryption contract, specify which audio and video encryption presets to
     * use.</p>
     */
    inline bool EncryptionContractConfigurationHasBeenSet() const { return m_encryptionContractConfigurationHasBeenSet; }

    /**
     * <p>Configure one or more content encryption keys for your endpoints that use
     * SPEKE Version 2.0. The encryption contract defines which content keys are used
     * to encrypt the audio and video tracks in your stream. To configure the
     * encryption contract, specify which audio and video encryption presets to
     * use.</p>
     */
    inline void SetEncryptionContractConfiguration(const EncryptionContractConfiguration& value) { m_encryptionContractConfigurationHasBeenSet = true; m_encryptionContractConfiguration = value; }

    /**
     * <p>Configure one or more content encryption keys for your endpoints that use
     * SPEKE Version 2.0. The encryption contract defines which content keys are used
     * to encrypt the audio and video tracks in your stream. To configure the
     * encryption contract, specify which audio and video encryption presets to
     * use.</p>
     */
    inline void SetEncryptionContractConfiguration(EncryptionContractConfiguration&& value) { m_encryptionContractConfigurationHasBeenSet = true; m_encryptionContractConfiguration = std::move(value); }

    /**
     * <p>Configure one or more content encryption keys for your endpoints that use
     * SPEKE Version 2.0. The encryption contract defines which content keys are used
     * to encrypt the audio and video tracks in your stream. To configure the
     * encryption contract, specify which audio and video encryption presets to
     * use.</p>
     */
    inline SpekeKeyProvider& WithEncryptionContractConfiguration(const EncryptionContractConfiguration& value) { SetEncryptionContractConfiguration(value); return *this;}

    /**
     * <p>Configure one or more content encryption keys for your endpoints that use
     * SPEKE Version 2.0. The encryption contract defines which content keys are used
     * to encrypt the audio and video tracks in your stream. To configure the
     * encryption contract, specify which audio and video encryption presets to
     * use.</p>
     */
    inline SpekeKeyProvider& WithEncryptionContractConfiguration(EncryptionContractConfiguration&& value) { SetEncryptionContractConfiguration(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the content. The service sends this to the key
     * server to identify the current endpoint. How unique you make this depends on how
     * fine-grained you want access controls to be. The service does not permit you to
     * use the same ID for two simultaneous encryption processes. The resource ID is
     * also known as the content ID.</p> <p>The following example shows a resource ID:
     * <code>MovieNight20171126093045</code> </p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The unique identifier for the content. The service sends this to the key
     * server to identify the current endpoint. How unique you make this depends on how
     * fine-grained you want access controls to be. The service does not permit you to
     * use the same ID for two simultaneous encryption processes. The resource ID is
     * also known as the content ID.</p> <p>The following example shows a resource ID:
     * <code>MovieNight20171126093045</code> </p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The unique identifier for the content. The service sends this to the key
     * server to identify the current endpoint. How unique you make this depends on how
     * fine-grained you want access controls to be. The service does not permit you to
     * use the same ID for two simultaneous encryption processes. The resource ID is
     * also known as the content ID.</p> <p>The following example shows a resource ID:
     * <code>MovieNight20171126093045</code> </p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The unique identifier for the content. The service sends this to the key
     * server to identify the current endpoint. How unique you make this depends on how
     * fine-grained you want access controls to be. The service does not permit you to
     * use the same ID for two simultaneous encryption processes. The resource ID is
     * also known as the content ID.</p> <p>The following example shows a resource ID:
     * <code>MovieNight20171126093045</code> </p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The unique identifier for the content. The service sends this to the key
     * server to identify the current endpoint. How unique you make this depends on how
     * fine-grained you want access controls to be. The service does not permit you to
     * use the same ID for two simultaneous encryption processes. The resource ID is
     * also known as the content ID.</p> <p>The following example shows a resource ID:
     * <code>MovieNight20171126093045</code> </p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The unique identifier for the content. The service sends this to the key
     * server to identify the current endpoint. How unique you make this depends on how
     * fine-grained you want access controls to be. The service does not permit you to
     * use the same ID for two simultaneous encryption processes. The resource ID is
     * also known as the content ID.</p> <p>The following example shows a resource ID:
     * <code>MovieNight20171126093045</code> </p>
     */
    inline SpekeKeyProvider& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The unique identifier for the content. The service sends this to the key
     * server to identify the current endpoint. How unique you make this depends on how
     * fine-grained you want access controls to be. The service does not permit you to
     * use the same ID for two simultaneous encryption processes. The resource ID is
     * also known as the content ID.</p> <p>The following example shows a resource ID:
     * <code>MovieNight20171126093045</code> </p>
     */
    inline SpekeKeyProvider& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the content. The service sends this to the key
     * server to identify the current endpoint. How unique you make this depends on how
     * fine-grained you want access controls to be. The service does not permit you to
     * use the same ID for two simultaneous encryption processes. The resource ID is
     * also known as the content ID.</p> <p>The following example shows a resource ID:
     * <code>MovieNight20171126093045</code> </p>
     */
    inline SpekeKeyProvider& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The DRM solution provider you're using to protect your content during
     * distribution.</p>
     */
    inline const Aws::Vector<DrmSystem>& GetDrmSystems() const{ return m_drmSystems; }

    /**
     * <p>The DRM solution provider you're using to protect your content during
     * distribution.</p>
     */
    inline bool DrmSystemsHasBeenSet() const { return m_drmSystemsHasBeenSet; }

    /**
     * <p>The DRM solution provider you're using to protect your content during
     * distribution.</p>
     */
    inline void SetDrmSystems(const Aws::Vector<DrmSystem>& value) { m_drmSystemsHasBeenSet = true; m_drmSystems = value; }

    /**
     * <p>The DRM solution provider you're using to protect your content during
     * distribution.</p>
     */
    inline void SetDrmSystems(Aws::Vector<DrmSystem>&& value) { m_drmSystemsHasBeenSet = true; m_drmSystems = std::move(value); }

    /**
     * <p>The DRM solution provider you're using to protect your content during
     * distribution.</p>
     */
    inline SpekeKeyProvider& WithDrmSystems(const Aws::Vector<DrmSystem>& value) { SetDrmSystems(value); return *this;}

    /**
     * <p>The DRM solution provider you're using to protect your content during
     * distribution.</p>
     */
    inline SpekeKeyProvider& WithDrmSystems(Aws::Vector<DrmSystem>&& value) { SetDrmSystems(std::move(value)); return *this;}

    /**
     * <p>The DRM solution provider you're using to protect your content during
     * distribution.</p>
     */
    inline SpekeKeyProvider& AddDrmSystems(const DrmSystem& value) { m_drmSystemsHasBeenSet = true; m_drmSystems.push_back(value); return *this; }

    /**
     * <p>The DRM solution provider you're using to protect your content during
     * distribution.</p>
     */
    inline SpekeKeyProvider& AddDrmSystems(DrmSystem&& value) { m_drmSystemsHasBeenSet = true; m_drmSystems.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN for the IAM role granted by the key provider that provides access to
     * the key provider API. This role must have a trust policy that allows
     * MediaPackage to assume the role, and it must have a sufficient permissions
     * policy to allow access to the specific key retrieval URL. Get this from your DRM
     * solution provider.</p> <p>Valid format:
     * <code>arn:aws:iam::{accountID}:role/{name}</code>. The following example shows a
     * role ARN: <code>arn:aws:iam::444455556666:role/SpekeAccess</code> </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN for the IAM role granted by the key provider that provides access to
     * the key provider API. This role must have a trust policy that allows
     * MediaPackage to assume the role, and it must have a sufficient permissions
     * policy to allow access to the specific key retrieval URL. Get this from your DRM
     * solution provider.</p> <p>Valid format:
     * <code>arn:aws:iam::{accountID}:role/{name}</code>. The following example shows a
     * role ARN: <code>arn:aws:iam::444455556666:role/SpekeAccess</code> </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN for the IAM role granted by the key provider that provides access to
     * the key provider API. This role must have a trust policy that allows
     * MediaPackage to assume the role, and it must have a sufficient permissions
     * policy to allow access to the specific key retrieval URL. Get this from your DRM
     * solution provider.</p> <p>Valid format:
     * <code>arn:aws:iam::{accountID}:role/{name}</code>. The following example shows a
     * role ARN: <code>arn:aws:iam::444455556666:role/SpekeAccess</code> </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN for the IAM role granted by the key provider that provides access to
     * the key provider API. This role must have a trust policy that allows
     * MediaPackage to assume the role, and it must have a sufficient permissions
     * policy to allow access to the specific key retrieval URL. Get this from your DRM
     * solution provider.</p> <p>Valid format:
     * <code>arn:aws:iam::{accountID}:role/{name}</code>. The following example shows a
     * role ARN: <code>arn:aws:iam::444455556666:role/SpekeAccess</code> </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN for the IAM role granted by the key provider that provides access to
     * the key provider API. This role must have a trust policy that allows
     * MediaPackage to assume the role, and it must have a sufficient permissions
     * policy to allow access to the specific key retrieval URL. Get this from your DRM
     * solution provider.</p> <p>Valid format:
     * <code>arn:aws:iam::{accountID}:role/{name}</code>. The following example shows a
     * role ARN: <code>arn:aws:iam::444455556666:role/SpekeAccess</code> </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN for the IAM role granted by the key provider that provides access to
     * the key provider API. This role must have a trust policy that allows
     * MediaPackage to assume the role, and it must have a sufficient permissions
     * policy to allow access to the specific key retrieval URL. Get this from your DRM
     * solution provider.</p> <p>Valid format:
     * <code>arn:aws:iam::{accountID}:role/{name}</code>. The following example shows a
     * role ARN: <code>arn:aws:iam::444455556666:role/SpekeAccess</code> </p>
     */
    inline SpekeKeyProvider& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN for the IAM role granted by the key provider that provides access to
     * the key provider API. This role must have a trust policy that allows
     * MediaPackage to assume the role, and it must have a sufficient permissions
     * policy to allow access to the specific key retrieval URL. Get this from your DRM
     * solution provider.</p> <p>Valid format:
     * <code>arn:aws:iam::{accountID}:role/{name}</code>. The following example shows a
     * role ARN: <code>arn:aws:iam::444455556666:role/SpekeAccess</code> </p>
     */
    inline SpekeKeyProvider& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the IAM role granted by the key provider that provides access to
     * the key provider API. This role must have a trust policy that allows
     * MediaPackage to assume the role, and it must have a sufficient permissions
     * policy to allow access to the specific key retrieval URL. Get this from your DRM
     * solution provider.</p> <p>Valid format:
     * <code>arn:aws:iam::{accountID}:role/{name}</code>. The following example shows a
     * role ARN: <code>arn:aws:iam::444455556666:role/SpekeAccess</code> </p>
     */
    inline SpekeKeyProvider& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The URL of the API Gateway proxy that you set up to talk to your key server.
     * The API Gateway proxy must reside in the same AWS Region as MediaPackage and
     * must start with https://.</p> <p>The following example shows a URL:
     * <code>https://1wm2dx1f33.execute-api.us-west-2.amazonaws.com/SpekeSample/copyProtection</code>
     * </p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL of the API Gateway proxy that you set up to talk to your key server.
     * The API Gateway proxy must reside in the same AWS Region as MediaPackage and
     * must start with https://.</p> <p>The following example shows a URL:
     * <code>https://1wm2dx1f33.execute-api.us-west-2.amazonaws.com/SpekeSample/copyProtection</code>
     * </p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL of the API Gateway proxy that you set up to talk to your key server.
     * The API Gateway proxy must reside in the same AWS Region as MediaPackage and
     * must start with https://.</p> <p>The following example shows a URL:
     * <code>https://1wm2dx1f33.execute-api.us-west-2.amazonaws.com/SpekeSample/copyProtection</code>
     * </p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL of the API Gateway proxy that you set up to talk to your key server.
     * The API Gateway proxy must reside in the same AWS Region as MediaPackage and
     * must start with https://.</p> <p>The following example shows a URL:
     * <code>https://1wm2dx1f33.execute-api.us-west-2.amazonaws.com/SpekeSample/copyProtection</code>
     * </p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL of the API Gateway proxy that you set up to talk to your key server.
     * The API Gateway proxy must reside in the same AWS Region as MediaPackage and
     * must start with https://.</p> <p>The following example shows a URL:
     * <code>https://1wm2dx1f33.execute-api.us-west-2.amazonaws.com/SpekeSample/copyProtection</code>
     * </p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL of the API Gateway proxy that you set up to talk to your key server.
     * The API Gateway proxy must reside in the same AWS Region as MediaPackage and
     * must start with https://.</p> <p>The following example shows a URL:
     * <code>https://1wm2dx1f33.execute-api.us-west-2.amazonaws.com/SpekeSample/copyProtection</code>
     * </p>
     */
    inline SpekeKeyProvider& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL of the API Gateway proxy that you set up to talk to your key server.
     * The API Gateway proxy must reside in the same AWS Region as MediaPackage and
     * must start with https://.</p> <p>The following example shows a URL:
     * <code>https://1wm2dx1f33.execute-api.us-west-2.amazonaws.com/SpekeSample/copyProtection</code>
     * </p>
     */
    inline SpekeKeyProvider& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the API Gateway proxy that you set up to talk to your key server.
     * The API Gateway proxy must reside in the same AWS Region as MediaPackage and
     * must start with https://.</p> <p>The following example shows a URL:
     * <code>https://1wm2dx1f33.execute-api.us-west-2.amazonaws.com/SpekeSample/copyProtection</code>
     * </p>
     */
    inline SpekeKeyProvider& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    EncryptionContractConfiguration m_encryptionContractConfiguration;
    bool m_encryptionContractConfigurationHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<DrmSystem> m_drmSystems;
    bool m_drmSystemsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
