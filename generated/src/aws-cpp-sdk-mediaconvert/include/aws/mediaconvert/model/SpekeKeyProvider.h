/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/EncryptionContractConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * If your output group type is HLS, DASH, or Microsoft Smooth, use these settings
   * when doing DRM encryption with a SPEKE-compliant key provider. If your output
   * group type is CMAF, use the SpekeKeyProviderCmaf settings instead.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/SpekeKeyProvider">AWS
   * API Reference</a></p>
   */
  class SpekeKeyProvider
  {
  public:
    AWS_MEDIACONVERT_API SpekeKeyProvider() = default;
    AWS_MEDIACONVERT_API SpekeKeyProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API SpekeKeyProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * If you want your key provider to encrypt the content keys that it provides to
     * MediaConvert, set up a certificate with a master key using AWS Certificate
     * Manager. Specify the certificate's Amazon Resource Name (ARN) here.
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    SpekeKeyProvider& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the SPEKE version, either v1.0 or v2.0, that MediaConvert uses when
     * encrypting your output. For more information, see:
     * https://docs.aws.amazon.com/speke/latest/documentation/speke-api-specification.html
     * To use SPEKE v1.0: Leave blank. To use SPEKE v2.0: Specify a SPEKE v2.0 video
     * preset and a SPEKE v2.0 audio preset.
     */
    inline const EncryptionContractConfiguration& GetEncryptionContractConfiguration() const { return m_encryptionContractConfiguration; }
    inline bool EncryptionContractConfigurationHasBeenSet() const { return m_encryptionContractConfigurationHasBeenSet; }
    template<typename EncryptionContractConfigurationT = EncryptionContractConfiguration>
    void SetEncryptionContractConfiguration(EncryptionContractConfigurationT&& value) { m_encryptionContractConfigurationHasBeenSet = true; m_encryptionContractConfiguration = std::forward<EncryptionContractConfigurationT>(value); }
    template<typename EncryptionContractConfigurationT = EncryptionContractConfiguration>
    SpekeKeyProvider& WithEncryptionContractConfiguration(EncryptionContractConfigurationT&& value) { SetEncryptionContractConfiguration(std::forward<EncryptionContractConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the resource ID that your SPEKE-compliant key provider uses to identify
     * this content.
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    SpekeKeyProvider& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Relates to SPEKE implementation. DRM system identifiers. DASH output groups
     * support a max of two system ids. HLS output groups support a max of 3 system
     * ids. Other group types support one system id. See
     * https://dashif.org/identifiers/content_protection/ for more details.
     */
    inline const Aws::Vector<Aws::String>& GetSystemIds() const { return m_systemIds; }
    inline bool SystemIdsHasBeenSet() const { return m_systemIdsHasBeenSet; }
    template<typename SystemIdsT = Aws::Vector<Aws::String>>
    void SetSystemIds(SystemIdsT&& value) { m_systemIdsHasBeenSet = true; m_systemIds = std::forward<SystemIdsT>(value); }
    template<typename SystemIdsT = Aws::Vector<Aws::String>>
    SpekeKeyProvider& WithSystemIds(SystemIdsT&& value) { SetSystemIds(std::forward<SystemIdsT>(value)); return *this;}
    template<typename SystemIdsT = Aws::String>
    SpekeKeyProvider& AddSystemIds(SystemIdsT&& value) { m_systemIdsHasBeenSet = true; m_systemIds.emplace_back(std::forward<SystemIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Specify the URL to the key server that your SPEKE-compliant DRM key provider
     * uses to provide keys for encrypting your content.
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    SpekeKeyProvider& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    EncryptionContractConfiguration m_encryptionContractConfiguration;
    bool m_encryptionContractConfigurationHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_systemIds;
    bool m_systemIdsHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
