/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The image format of a AWS Signer platform or profile.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/SigningImageFormat">AWS
   * API Reference</a></p>
   */
  class SigningImageFormat
  {
  public:
    AWS_SIGNER_API SigningImageFormat() = default;
    AWS_SIGNER_API SigningImageFormat(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API SigningImageFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The supported formats of a signing image.</p>
     */
    inline const Aws::Vector<ImageFormat>& GetSupportedFormats() const { return m_supportedFormats; }
    inline bool SupportedFormatsHasBeenSet() const { return m_supportedFormatsHasBeenSet; }
    template<typename SupportedFormatsT = Aws::Vector<ImageFormat>>
    void SetSupportedFormats(SupportedFormatsT&& value) { m_supportedFormatsHasBeenSet = true; m_supportedFormats = std::forward<SupportedFormatsT>(value); }
    template<typename SupportedFormatsT = Aws::Vector<ImageFormat>>
    SigningImageFormat& WithSupportedFormats(SupportedFormatsT&& value) { SetSupportedFormats(std::forward<SupportedFormatsT>(value)); return *this;}
    inline SigningImageFormat& AddSupportedFormats(ImageFormat value) { m_supportedFormatsHasBeenSet = true; m_supportedFormats.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The default format of a signing image.</p>
     */
    inline ImageFormat GetDefaultFormat() const { return m_defaultFormat; }
    inline bool DefaultFormatHasBeenSet() const { return m_defaultFormatHasBeenSet; }
    inline void SetDefaultFormat(ImageFormat value) { m_defaultFormatHasBeenSet = true; m_defaultFormat = value; }
    inline SigningImageFormat& WithDefaultFormat(ImageFormat value) { SetDefaultFormat(value); return *this;}
    ///@}
  private:

    Aws::Vector<ImageFormat> m_supportedFormats;
    bool m_supportedFormatsHasBeenSet = false;

    ImageFormat m_defaultFormat{ImageFormat::NOT_SET};
    bool m_defaultFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
