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
    AWS_MEDIACONVERT_API SpekeKeyProvider();
    AWS_MEDIACONVERT_API SpekeKeyProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API SpekeKeyProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * If you want your key provider to encrypt the content keys that it provides to
     * MediaConvert, set up a certificate with a master key using AWS Certificate
     * Manager. Specify the certificate's Amazon Resource Name (ARN) here.
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }
    inline SpekeKeyProvider& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}
    inline SpekeKeyProvider& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}
    inline SpekeKeyProvider& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the SPEKE version, either v1.0 or v2.0, that MediaConvert uses when
     * encrypting your output. For more information, see:
     * https://docs.aws.amazon.com/speke/latest/documentation/speke-api-specification.html
     * To use SPEKE v1.0: Leave blank. To use SPEKE v2.0: Specify a SPEKE v2.0 video
     * preset and a SPEKE v2.0 audio preset.
     */
    inline const EncryptionContractConfiguration& GetEncryptionContractConfiguration() const{ return m_encryptionContractConfiguration; }
    inline bool EncryptionContractConfigurationHasBeenSet() const { return m_encryptionContractConfigurationHasBeenSet; }
    inline void SetEncryptionContractConfiguration(const EncryptionContractConfiguration& value) { m_encryptionContractConfigurationHasBeenSet = true; m_encryptionContractConfiguration = value; }
    inline void SetEncryptionContractConfiguration(EncryptionContractConfiguration&& value) { m_encryptionContractConfigurationHasBeenSet = true; m_encryptionContractConfiguration = std::move(value); }
    inline SpekeKeyProvider& WithEncryptionContractConfiguration(const EncryptionContractConfiguration& value) { SetEncryptionContractConfiguration(value); return *this;}
    inline SpekeKeyProvider& WithEncryptionContractConfiguration(EncryptionContractConfiguration&& value) { SetEncryptionContractConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the resource ID that your SPEKE-compliant key provider uses to identify
     * this content.
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline SpekeKeyProvider& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline SpekeKeyProvider& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline SpekeKeyProvider& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * Relates to SPEKE implementation. DRM system identifiers. DASH output groups
     * support a max of two system ids. Other group types support one system id. See

     * https://dashif.org/identifiers/content_protection/ for more details.
     */
    inline const Aws::Vector<Aws::String>& GetSystemIds() const{ return m_systemIds; }
    inline bool SystemIdsHasBeenSet() const { return m_systemIdsHasBeenSet; }
    inline void SetSystemIds(const Aws::Vector<Aws::String>& value) { m_systemIdsHasBeenSet = true; m_systemIds = value; }
    inline void SetSystemIds(Aws::Vector<Aws::String>&& value) { m_systemIdsHasBeenSet = true; m_systemIds = std::move(value); }
    inline SpekeKeyProvider& WithSystemIds(const Aws::Vector<Aws::String>& value) { SetSystemIds(value); return *this;}
    inline SpekeKeyProvider& WithSystemIds(Aws::Vector<Aws::String>&& value) { SetSystemIds(std::move(value)); return *this;}
    inline SpekeKeyProvider& AddSystemIds(const Aws::String& value) { m_systemIdsHasBeenSet = true; m_systemIds.push_back(value); return *this; }
    inline SpekeKeyProvider& AddSystemIds(Aws::String&& value) { m_systemIdsHasBeenSet = true; m_systemIds.push_back(std::move(value)); return *this; }
    inline SpekeKeyProvider& AddSystemIds(const char* value) { m_systemIdsHasBeenSet = true; m_systemIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * Specify the URL to the key server that your SPEKE-compliant DRM key provider
     * uses to provide keys for encrypting your content.
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline SpekeKeyProvider& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline SpekeKeyProvider& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline SpekeKeyProvider& WithUrl(const char* value) { SetUrl(value); return *this;}
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
