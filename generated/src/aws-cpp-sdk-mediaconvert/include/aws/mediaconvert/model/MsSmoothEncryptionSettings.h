/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/SpekeKeyProvider.h>
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
   * If you are using DRM, set DRM System (MsSmoothEncryptionSettings) to specify the
   * value SpekeKeyProvider.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/MsSmoothEncryptionSettings">AWS
   * API Reference</a></p>
   */
  class MsSmoothEncryptionSettings
  {
  public:
    AWS_MEDIACONVERT_API MsSmoothEncryptionSettings();
    AWS_MEDIACONVERT_API MsSmoothEncryptionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API MsSmoothEncryptionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * If your output group type is HLS, DASH, or Microsoft Smooth, use these settings
     * when doing DRM encryption with a SPEKE-compliant key provider.  If your output
     * group type is CMAF, use the SpekeKeyProviderCmaf settings instead.
     */
    inline const SpekeKeyProvider& GetSpekeKeyProvider() const{ return m_spekeKeyProvider; }

    /**
     * If your output group type is HLS, DASH, or Microsoft Smooth, use these settings
     * when doing DRM encryption with a SPEKE-compliant key provider.  If your output
     * group type is CMAF, use the SpekeKeyProviderCmaf settings instead.
     */
    inline bool SpekeKeyProviderHasBeenSet() const { return m_spekeKeyProviderHasBeenSet; }

    /**
     * If your output group type is HLS, DASH, or Microsoft Smooth, use these settings
     * when doing DRM encryption with a SPEKE-compliant key provider.  If your output
     * group type is CMAF, use the SpekeKeyProviderCmaf settings instead.
     */
    inline void SetSpekeKeyProvider(const SpekeKeyProvider& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = value; }

    /**
     * If your output group type is HLS, DASH, or Microsoft Smooth, use these settings
     * when doing DRM encryption with a SPEKE-compliant key provider.  If your output
     * group type is CMAF, use the SpekeKeyProviderCmaf settings instead.
     */
    inline void SetSpekeKeyProvider(SpekeKeyProvider&& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = std::move(value); }

    /**
     * If your output group type is HLS, DASH, or Microsoft Smooth, use these settings
     * when doing DRM encryption with a SPEKE-compliant key provider.  If your output
     * group type is CMAF, use the SpekeKeyProviderCmaf settings instead.
     */
    inline MsSmoothEncryptionSettings& WithSpekeKeyProvider(const SpekeKeyProvider& value) { SetSpekeKeyProvider(value); return *this;}

    /**
     * If your output group type is HLS, DASH, or Microsoft Smooth, use these settings
     * when doing DRM encryption with a SPEKE-compliant key provider.  If your output
     * group type is CMAF, use the SpekeKeyProviderCmaf settings instead.
     */
    inline MsSmoothEncryptionSettings& WithSpekeKeyProvider(SpekeKeyProvider&& value) { SetSpekeKeyProvider(std::move(value)); return *this;}

  private:

    SpekeKeyProvider m_spekeKeyProvider;
    bool m_spekeKeyProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
