/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/model/ContentKeyPeriodConfiguration.h>
#include <aws/mediapackagev2/model/DrmSystem.h>
#include <aws/mediapackagev2/model/EncryptionContractConfiguration.h>
#include <aws/mediapackagev2/model/SpekeVersion.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mediapackagev2 {
namespace Model {

/**
 * <p>The parameters for the SPEKE key provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/SpekeKeyProvider">AWS
 * API Reference</a></p>
 */
class SpekeKeyProvider {
 public:
  AWS_MEDIAPACKAGEV2_API SpekeKeyProvider() = default;
  AWS_MEDIAPACKAGEV2_API SpekeKeyProvider(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIAPACKAGEV2_API SpekeKeyProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configure one or more content encryption keys for your endpoints that use
   * SPEKE Version 2.0. The encryption contract defines which content keys are used
   * to encrypt the audio and video tracks in your stream. To configure the
   * encryption contract, specify which audio and video encryption presets to
   * use.</p>
   */
  inline const EncryptionContractConfiguration& GetEncryptionContractConfiguration() const { return m_encryptionContractConfiguration; }
  inline bool EncryptionContractConfigurationHasBeenSet() const { return m_encryptionContractConfigurationHasBeenSet; }
  template <typename EncryptionContractConfigurationT = EncryptionContractConfiguration>
  void SetEncryptionContractConfiguration(EncryptionContractConfigurationT&& value) {
    m_encryptionContractConfigurationHasBeenSet = true;
    m_encryptionContractConfiguration = std::forward<EncryptionContractConfigurationT>(value);
  }
  template <typename EncryptionContractConfigurationT = EncryptionContractConfiguration>
  SpekeKeyProvider& WithEncryptionContractConfiguration(EncryptionContractConfigurationT&& value) {
    SetEncryptionContractConfiguration(std::forward<EncryptionContractConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the content. The service sends this to the key
   * server to identify the current endpoint. How unique you make this depends on how
   * fine-grained you want access controls to be. The service does not permit you to
   * use the same ID for two simultaneous encryption processes. The resource ID is
   * also known as the content ID.</p> <p>The following example shows a resource ID:
   * <code>MovieNight20171126093045</code> </p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  SpekeKeyProvider& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DRM solution provider you're using to protect your content during
   * distribution.</p>
   */
  inline const Aws::Vector<DrmSystem>& GetDrmSystems() const { return m_drmSystems; }
  inline bool DrmSystemsHasBeenSet() const { return m_drmSystemsHasBeenSet; }
  template <typename DrmSystemsT = Aws::Vector<DrmSystem>>
  void SetDrmSystems(DrmSystemsT&& value) {
    m_drmSystemsHasBeenSet = true;
    m_drmSystems = std::forward<DrmSystemsT>(value);
  }
  template <typename DrmSystemsT = Aws::Vector<DrmSystem>>
  SpekeKeyProvider& WithDrmSystems(DrmSystemsT&& value) {
    SetDrmSystems(std::forward<DrmSystemsT>(value));
    return *this;
  }
  inline SpekeKeyProvider& AddDrmSystems(DrmSystem value) {
    m_drmSystemsHasBeenSet = true;
    m_drmSystems.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN for the IAM role granted by the key provider that provides access to
   * the key provider API. This role must have a trust policy that allows
   * MediaPackage to assume the role, and it must have a sufficient permissions
   * policy to allow access to the specific key retrieval URL. Get this from your DRM
   * solution provider.</p> <p>Valid format:
   * <code>arn:aws:iam::{accountID}:role/{name}</code>. The following example shows a
   * role ARN: <code>arn:aws:iam::444455556666:role/SpekeAccess</code> </p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  SpekeKeyProvider& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the API Gateway proxy that you set up to talk to your key server.
   * The API Gateway proxy must reside in the same AWS Region as MediaPackage and
   * must start with https://.</p> <p>The following example shows a URL:
   * <code>https://1wm2dx1f33.execute-api.us-west-2.amazonaws.com/SpekeSample/copyProtection</code>
   * </p>
   */
  inline const Aws::String& GetUrl() const { return m_url; }
  inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
  template <typename UrlT = Aws::String>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = Aws::String>
  SpekeKeyProvider& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN for the certificate that you imported to Amazon Web Services
   * Certificate Manager to add content key encryption to this endpoint. For this
   * feature to work, your DRM key provider must support content key encryption.</p>
   */
  inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
  inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
  template <typename CertificateArnT = Aws::String>
  void SetCertificateArn(CertificateArnT&& value) {
    m_certificateArnHasBeenSet = true;
    m_certificateArn = std::forward<CertificateArnT>(value);
  }
  template <typename CertificateArnT = Aws::String>
  SpekeKeyProvider& WithCertificateArn(CertificateArnT&& value) {
    SetCertificateArn(std::forward<CertificateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the SPEKE version used with your DRM key provider. If you don't
   * specify a value, the default is <code>V2_0</code>.</p> <p>The allowed values
   * are:</p> <ul> <li> <p> <code>V2_0</code> - Follows the SPEKE Version 2.0
   * contract and signals only the content key index in key requests. This is the
   * default.</p> </li> <li> <p> <code>V2_1</code> - Follows the SPEKE Version 2.1
   * contract and additionally supports signaling the start and end times a content
   * key is used for, using <code>ContentKeyPeriodConfiguration</code>.</p> </li>
   * </ul> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/speke/latest/documentation/standard-payload-components-v2.html">SPEKE
   * Version 2.0 payload</a>.</p>
   */
  inline SpekeVersion GetSpekeVersion() const { return m_spekeVersion; }
  inline bool SpekeVersionHasBeenSet() const { return m_spekeVersionHasBeenSet; }
  inline void SetSpekeVersion(SpekeVersion value) {
    m_spekeVersionHasBeenSet = true;
    m_spekeVersion = value;
  }
  inline SpekeKeyProvider& WithSpekeVersion(SpekeVersion value) {
    SetSpekeVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that controls whether MediaPackage signals the start and
   * end times a content key is used for, in the <code>ContentKeyPeriod</code> sent
   * to your DRM key provider. Signaling this timing is supported only when key
   * rotation is enabled (<code>KeyRotationIntervalSeconds</code> is set to a
   * non-zero value) and <code>SpekeVersion</code> is <code>V2_1</code>. You can
   * update these settings on an existing origin endpoint.</p>
   */
  inline const ContentKeyPeriodConfiguration& GetContentKeyPeriodConfiguration() const { return m_contentKeyPeriodConfiguration; }
  inline bool ContentKeyPeriodConfigurationHasBeenSet() const { return m_contentKeyPeriodConfigurationHasBeenSet; }
  template <typename ContentKeyPeriodConfigurationT = ContentKeyPeriodConfiguration>
  void SetContentKeyPeriodConfiguration(ContentKeyPeriodConfigurationT&& value) {
    m_contentKeyPeriodConfigurationHasBeenSet = true;
    m_contentKeyPeriodConfiguration = std::forward<ContentKeyPeriodConfigurationT>(value);
  }
  template <typename ContentKeyPeriodConfigurationT = ContentKeyPeriodConfiguration>
  SpekeKeyProvider& WithContentKeyPeriodConfiguration(ContentKeyPeriodConfigurationT&& value) {
    SetContentKeyPeriodConfiguration(std::forward<ContentKeyPeriodConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  EncryptionContractConfiguration m_encryptionContractConfiguration;

  Aws::String m_resourceId;

  Aws::Vector<DrmSystem> m_drmSystems;

  Aws::String m_roleArn;

  Aws::String m_url;

  Aws::String m_certificateArn;

  SpekeVersion m_spekeVersion{SpekeVersion::NOT_SET};

  ContentKeyPeriodConfiguration m_contentKeyPeriodConfiguration;
  bool m_encryptionContractConfigurationHasBeenSet = false;
  bool m_resourceIdHasBeenSet = false;
  bool m_drmSystemsHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_urlHasBeenSet = false;
  bool m_certificateArnHasBeenSet = false;
  bool m_spekeVersionHasBeenSet = false;
  bool m_contentKeyPeriodConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
