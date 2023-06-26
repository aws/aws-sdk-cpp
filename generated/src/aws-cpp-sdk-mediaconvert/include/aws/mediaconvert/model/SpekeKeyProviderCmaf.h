/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * If your output group type is CMAF, use these settings when doing DRM encryption
   * with a SPEKE-compliant key provider. If your output group type is HLS, DASH, or
   * Microsoft Smooth, use the SpekeKeyProvider settings instead.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/SpekeKeyProviderCmaf">AWS
   * API Reference</a></p>
   */
  class SpekeKeyProviderCmaf
  {
  public:
    AWS_MEDIACONVERT_API SpekeKeyProviderCmaf();
    AWS_MEDIACONVERT_API SpekeKeyProviderCmaf(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API SpekeKeyProviderCmaf& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * If you want your key provider to encrypt the content keys that it provides to
     * MediaConvert, set up a certificate with a master key using AWS Certificate
     * Manager. Specify the certificate's Amazon Resource Name (ARN) here.
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * If you want your key provider to encrypt the content keys that it provides to
     * MediaConvert, set up a certificate with a master key using AWS Certificate
     * Manager. Specify the certificate's Amazon Resource Name (ARN) here.
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * If you want your key provider to encrypt the content keys that it provides to
     * MediaConvert, set up a certificate with a master key using AWS Certificate
     * Manager. Specify the certificate's Amazon Resource Name (ARN) here.
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * If you want your key provider to encrypt the content keys that it provides to
     * MediaConvert, set up a certificate with a master key using AWS Certificate
     * Manager. Specify the certificate's Amazon Resource Name (ARN) here.
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * If you want your key provider to encrypt the content keys that it provides to
     * MediaConvert, set up a certificate with a master key using AWS Certificate
     * Manager. Specify the certificate's Amazon Resource Name (ARN) here.
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * If you want your key provider to encrypt the content keys that it provides to
     * MediaConvert, set up a certificate with a master key using AWS Certificate
     * Manager. Specify the certificate's Amazon Resource Name (ARN) here.
     */
    inline SpekeKeyProviderCmaf& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * If you want your key provider to encrypt the content keys that it provides to
     * MediaConvert, set up a certificate with a master key using AWS Certificate
     * Manager. Specify the certificate's Amazon Resource Name (ARN) here.
     */
    inline SpekeKeyProviderCmaf& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * If you want your key provider to encrypt the content keys that it provides to
     * MediaConvert, set up a certificate with a master key using AWS Certificate
     * Manager. Specify the certificate's Amazon Resource Name (ARN) here.
     */
    inline SpekeKeyProviderCmaf& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * Specify the DRM system IDs that you want signaled in the DASH manifest that
     * MediaConvert creates as part of this CMAF package. The DASH manifest can
     * currently signal up to three system IDs. For more information, see
     * https://dashif.org/identifiers/content_protection/.
     */
    inline const Aws::Vector<Aws::String>& GetDashSignaledSystemIds() const{ return m_dashSignaledSystemIds; }

    /**
     * Specify the DRM system IDs that you want signaled in the DASH manifest that
     * MediaConvert creates as part of this CMAF package. The DASH manifest can
     * currently signal up to three system IDs. For more information, see
     * https://dashif.org/identifiers/content_protection/.
     */
    inline bool DashSignaledSystemIdsHasBeenSet() const { return m_dashSignaledSystemIdsHasBeenSet; }

    /**
     * Specify the DRM system IDs that you want signaled in the DASH manifest that
     * MediaConvert creates as part of this CMAF package. The DASH manifest can
     * currently signal up to three system IDs. For more information, see
     * https://dashif.org/identifiers/content_protection/.
     */
    inline void SetDashSignaledSystemIds(const Aws::Vector<Aws::String>& value) { m_dashSignaledSystemIdsHasBeenSet = true; m_dashSignaledSystemIds = value; }

    /**
     * Specify the DRM system IDs that you want signaled in the DASH manifest that
     * MediaConvert creates as part of this CMAF package. The DASH manifest can
     * currently signal up to three system IDs. For more information, see
     * https://dashif.org/identifiers/content_protection/.
     */
    inline void SetDashSignaledSystemIds(Aws::Vector<Aws::String>&& value) { m_dashSignaledSystemIdsHasBeenSet = true; m_dashSignaledSystemIds = std::move(value); }

    /**
     * Specify the DRM system IDs that you want signaled in the DASH manifest that
     * MediaConvert creates as part of this CMAF package. The DASH manifest can
     * currently signal up to three system IDs. For more information, see
     * https://dashif.org/identifiers/content_protection/.
     */
    inline SpekeKeyProviderCmaf& WithDashSignaledSystemIds(const Aws::Vector<Aws::String>& value) { SetDashSignaledSystemIds(value); return *this;}

    /**
     * Specify the DRM system IDs that you want signaled in the DASH manifest that
     * MediaConvert creates as part of this CMAF package. The DASH manifest can
     * currently signal up to three system IDs. For more information, see
     * https://dashif.org/identifiers/content_protection/.
     */
    inline SpekeKeyProviderCmaf& WithDashSignaledSystemIds(Aws::Vector<Aws::String>&& value) { SetDashSignaledSystemIds(std::move(value)); return *this;}

    /**
     * Specify the DRM system IDs that you want signaled in the DASH manifest that
     * MediaConvert creates as part of this CMAF package. The DASH manifest can
     * currently signal up to three system IDs. For more information, see
     * https://dashif.org/identifiers/content_protection/.
     */
    inline SpekeKeyProviderCmaf& AddDashSignaledSystemIds(const Aws::String& value) { m_dashSignaledSystemIdsHasBeenSet = true; m_dashSignaledSystemIds.push_back(value); return *this; }

    /**
     * Specify the DRM system IDs that you want signaled in the DASH manifest that
     * MediaConvert creates as part of this CMAF package. The DASH manifest can
     * currently signal up to three system IDs. For more information, see
     * https://dashif.org/identifiers/content_protection/.
     */
    inline SpekeKeyProviderCmaf& AddDashSignaledSystemIds(Aws::String&& value) { m_dashSignaledSystemIdsHasBeenSet = true; m_dashSignaledSystemIds.push_back(std::move(value)); return *this; }

    /**
     * Specify the DRM system IDs that you want signaled in the DASH manifest that
     * MediaConvert creates as part of this CMAF package. The DASH manifest can
     * currently signal up to three system IDs. For more information, see
     * https://dashif.org/identifiers/content_protection/.
     */
    inline SpekeKeyProviderCmaf& AddDashSignaledSystemIds(const char* value) { m_dashSignaledSystemIdsHasBeenSet = true; m_dashSignaledSystemIds.push_back(value); return *this; }


    /**
     * Specify the DRM system ID that you want signaled in the HLS manifest that
     * MediaConvert creates as part of this CMAF package. The HLS manifest can
     * currently signal only one system ID. For more information, see
     * https://dashif.org/identifiers/content_protection/.
     */
    inline const Aws::Vector<Aws::String>& GetHlsSignaledSystemIds() const{ return m_hlsSignaledSystemIds; }

    /**
     * Specify the DRM system ID that you want signaled in the HLS manifest that
     * MediaConvert creates as part of this CMAF package. The HLS manifest can
     * currently signal only one system ID. For more information, see
     * https://dashif.org/identifiers/content_protection/.
     */
    inline bool HlsSignaledSystemIdsHasBeenSet() const { return m_hlsSignaledSystemIdsHasBeenSet; }

    /**
     * Specify the DRM system ID that you want signaled in the HLS manifest that
     * MediaConvert creates as part of this CMAF package. The HLS manifest can
     * currently signal only one system ID. For more information, see
     * https://dashif.org/identifiers/content_protection/.
     */
    inline void SetHlsSignaledSystemIds(const Aws::Vector<Aws::String>& value) { m_hlsSignaledSystemIdsHasBeenSet = true; m_hlsSignaledSystemIds = value; }

    /**
     * Specify the DRM system ID that you want signaled in the HLS manifest that
     * MediaConvert creates as part of this CMAF package. The HLS manifest can
     * currently signal only one system ID. For more information, see
     * https://dashif.org/identifiers/content_protection/.
     */
    inline void SetHlsSignaledSystemIds(Aws::Vector<Aws::String>&& value) { m_hlsSignaledSystemIdsHasBeenSet = true; m_hlsSignaledSystemIds = std::move(value); }

    /**
     * Specify the DRM system ID that you want signaled in the HLS manifest that
     * MediaConvert creates as part of this CMAF package. The HLS manifest can
     * currently signal only one system ID. For more information, see
     * https://dashif.org/identifiers/content_protection/.
     */
    inline SpekeKeyProviderCmaf& WithHlsSignaledSystemIds(const Aws::Vector<Aws::String>& value) { SetHlsSignaledSystemIds(value); return *this;}

    /**
     * Specify the DRM system ID that you want signaled in the HLS manifest that
     * MediaConvert creates as part of this CMAF package. The HLS manifest can
     * currently signal only one system ID. For more information, see
     * https://dashif.org/identifiers/content_protection/.
     */
    inline SpekeKeyProviderCmaf& WithHlsSignaledSystemIds(Aws::Vector<Aws::String>&& value) { SetHlsSignaledSystemIds(std::move(value)); return *this;}

    /**
     * Specify the DRM system ID that you want signaled in the HLS manifest that
     * MediaConvert creates as part of this CMAF package. The HLS manifest can
     * currently signal only one system ID. For more information, see
     * https://dashif.org/identifiers/content_protection/.
     */
    inline SpekeKeyProviderCmaf& AddHlsSignaledSystemIds(const Aws::String& value) { m_hlsSignaledSystemIdsHasBeenSet = true; m_hlsSignaledSystemIds.push_back(value); return *this; }

    /**
     * Specify the DRM system ID that you want signaled in the HLS manifest that
     * MediaConvert creates as part of this CMAF package. The HLS manifest can
     * currently signal only one system ID. For more information, see
     * https://dashif.org/identifiers/content_protection/.
     */
    inline SpekeKeyProviderCmaf& AddHlsSignaledSystemIds(Aws::String&& value) { m_hlsSignaledSystemIdsHasBeenSet = true; m_hlsSignaledSystemIds.push_back(std::move(value)); return *this; }

    /**
     * Specify the DRM system ID that you want signaled in the HLS manifest that
     * MediaConvert creates as part of this CMAF package. The HLS manifest can
     * currently signal only one system ID. For more information, see
     * https://dashif.org/identifiers/content_protection/.
     */
    inline SpekeKeyProviderCmaf& AddHlsSignaledSystemIds(const char* value) { m_hlsSignaledSystemIdsHasBeenSet = true; m_hlsSignaledSystemIds.push_back(value); return *this; }


    /**
     * Specify the resource ID that your SPEKE-compliant key provider uses to identify
     * this content.
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * Specify the resource ID that your SPEKE-compliant key provider uses to identify
     * this content.
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * Specify the resource ID that your SPEKE-compliant key provider uses to identify
     * this content.
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * Specify the resource ID that your SPEKE-compliant key provider uses to identify
     * this content.
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * Specify the resource ID that your SPEKE-compliant key provider uses to identify
     * this content.
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * Specify the resource ID that your SPEKE-compliant key provider uses to identify
     * this content.
     */
    inline SpekeKeyProviderCmaf& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * Specify the resource ID that your SPEKE-compliant key provider uses to identify
     * this content.
     */
    inline SpekeKeyProviderCmaf& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * Specify the resource ID that your SPEKE-compliant key provider uses to identify
     * this content.
     */
    inline SpekeKeyProviderCmaf& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * Specify the URL to the key server that your SPEKE-compliant DRM key provider
     * uses to provide keys for encrypting your content.
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * Specify the URL to the key server that your SPEKE-compliant DRM key provider
     * uses to provide keys for encrypting your content.
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * Specify the URL to the key server that your SPEKE-compliant DRM key provider
     * uses to provide keys for encrypting your content.
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * Specify the URL to the key server that your SPEKE-compliant DRM key provider
     * uses to provide keys for encrypting your content.
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * Specify the URL to the key server that your SPEKE-compliant DRM key provider
     * uses to provide keys for encrypting your content.
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * Specify the URL to the key server that your SPEKE-compliant DRM key provider
     * uses to provide keys for encrypting your content.
     */
    inline SpekeKeyProviderCmaf& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * Specify the URL to the key server that your SPEKE-compliant DRM key provider
     * uses to provide keys for encrypting your content.
     */
    inline SpekeKeyProviderCmaf& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * Specify the URL to the key server that your SPEKE-compliant DRM key provider
     * uses to provide keys for encrypting your content.
     */
    inline SpekeKeyProviderCmaf& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_dashSignaledSystemIds;
    bool m_dashSignaledSystemIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_hlsSignaledSystemIds;
    bool m_hlsSignaledSystemIdsHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
