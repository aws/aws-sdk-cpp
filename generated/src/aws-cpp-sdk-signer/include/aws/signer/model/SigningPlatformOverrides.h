/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/model/SigningConfigurationOverrides.h>
#include <aws/signer/model/ImageFormat.h>
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
namespace signer
{
namespace Model
{

  /**
   * <p>Any overrides that are applied to the signing configuration of a code signing
   * platform.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/SigningPlatformOverrides">AWS
   * API Reference</a></p>
   */
  class SigningPlatformOverrides
  {
  public:
    AWS_SIGNER_API SigningPlatformOverrides();
    AWS_SIGNER_API SigningPlatformOverrides(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API SigningPlatformOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A signing configuration that overrides the default encryption or hash
     * algorithm of a signing job.</p>
     */
    inline const SigningConfigurationOverrides& GetSigningConfiguration() const{ return m_signingConfiguration; }

    /**
     * <p>A signing configuration that overrides the default encryption or hash
     * algorithm of a signing job.</p>
     */
    inline bool SigningConfigurationHasBeenSet() const { return m_signingConfigurationHasBeenSet; }

    /**
     * <p>A signing configuration that overrides the default encryption or hash
     * algorithm of a signing job.</p>
     */
    inline void SetSigningConfiguration(const SigningConfigurationOverrides& value) { m_signingConfigurationHasBeenSet = true; m_signingConfiguration = value; }

    /**
     * <p>A signing configuration that overrides the default encryption or hash
     * algorithm of a signing job.</p>
     */
    inline void SetSigningConfiguration(SigningConfigurationOverrides&& value) { m_signingConfigurationHasBeenSet = true; m_signingConfiguration = std::move(value); }

    /**
     * <p>A signing configuration that overrides the default encryption or hash
     * algorithm of a signing job.</p>
     */
    inline SigningPlatformOverrides& WithSigningConfiguration(const SigningConfigurationOverrides& value) { SetSigningConfiguration(value); return *this;}

    /**
     * <p>A signing configuration that overrides the default encryption or hash
     * algorithm of a signing job.</p>
     */
    inline SigningPlatformOverrides& WithSigningConfiguration(SigningConfigurationOverrides&& value) { SetSigningConfiguration(std::move(value)); return *this;}


    /**
     * <p>A signed image is a JSON object. When overriding the default signing platform
     * configuration, a customer can select either of two signing formats,
     * <code>JSONEmbedded</code> or <code>JSONDetached</code>. (A third format value,
     * <code>JSON</code>, is reserved for future use.) With <code>JSONEmbedded</code>,
     * the signing image has the payload embedded in it. With
     * <code>JSONDetached</code>, the payload is not be embedded in the signing
     * image.</p>
     */
    inline const ImageFormat& GetSigningImageFormat() const{ return m_signingImageFormat; }

    /**
     * <p>A signed image is a JSON object. When overriding the default signing platform
     * configuration, a customer can select either of two signing formats,
     * <code>JSONEmbedded</code> or <code>JSONDetached</code>. (A third format value,
     * <code>JSON</code>, is reserved for future use.) With <code>JSONEmbedded</code>,
     * the signing image has the payload embedded in it. With
     * <code>JSONDetached</code>, the payload is not be embedded in the signing
     * image.</p>
     */
    inline bool SigningImageFormatHasBeenSet() const { return m_signingImageFormatHasBeenSet; }

    /**
     * <p>A signed image is a JSON object. When overriding the default signing platform
     * configuration, a customer can select either of two signing formats,
     * <code>JSONEmbedded</code> or <code>JSONDetached</code>. (A third format value,
     * <code>JSON</code>, is reserved for future use.) With <code>JSONEmbedded</code>,
     * the signing image has the payload embedded in it. With
     * <code>JSONDetached</code>, the payload is not be embedded in the signing
     * image.</p>
     */
    inline void SetSigningImageFormat(const ImageFormat& value) { m_signingImageFormatHasBeenSet = true; m_signingImageFormat = value; }

    /**
     * <p>A signed image is a JSON object. When overriding the default signing platform
     * configuration, a customer can select either of two signing formats,
     * <code>JSONEmbedded</code> or <code>JSONDetached</code>. (A third format value,
     * <code>JSON</code>, is reserved for future use.) With <code>JSONEmbedded</code>,
     * the signing image has the payload embedded in it. With
     * <code>JSONDetached</code>, the payload is not be embedded in the signing
     * image.</p>
     */
    inline void SetSigningImageFormat(ImageFormat&& value) { m_signingImageFormatHasBeenSet = true; m_signingImageFormat = std::move(value); }

    /**
     * <p>A signed image is a JSON object. When overriding the default signing platform
     * configuration, a customer can select either of two signing formats,
     * <code>JSONEmbedded</code> or <code>JSONDetached</code>. (A third format value,
     * <code>JSON</code>, is reserved for future use.) With <code>JSONEmbedded</code>,
     * the signing image has the payload embedded in it. With
     * <code>JSONDetached</code>, the payload is not be embedded in the signing
     * image.</p>
     */
    inline SigningPlatformOverrides& WithSigningImageFormat(const ImageFormat& value) { SetSigningImageFormat(value); return *this;}

    /**
     * <p>A signed image is a JSON object. When overriding the default signing platform
     * configuration, a customer can select either of two signing formats,
     * <code>JSONEmbedded</code> or <code>JSONDetached</code>. (A third format value,
     * <code>JSON</code>, is reserved for future use.) With <code>JSONEmbedded</code>,
     * the signing image has the payload embedded in it. With
     * <code>JSONDetached</code>, the payload is not be embedded in the signing
     * image.</p>
     */
    inline SigningPlatformOverrides& WithSigningImageFormat(ImageFormat&& value) { SetSigningImageFormat(std::move(value)); return *this;}

  private:

    SigningConfigurationOverrides m_signingConfiguration;
    bool m_signingConfigurationHasBeenSet = false;

    ImageFormat m_signingImageFormat;
    bool m_signingImageFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
