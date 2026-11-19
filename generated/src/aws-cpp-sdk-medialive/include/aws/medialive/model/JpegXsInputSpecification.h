/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputCodec.h>
#include <aws/medialive/model/JpegXsInputMaximumBitrate.h>
#include <aws/medialive/model/JpegXsInputResolution.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaLive {
namespace Model {

/**
 * Specification of the JPEG XS input for this channel. Use instead of
 * inputSpecification when the input codec is JPEG XS.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/JpegXsInputSpecification">AWS
 * API Reference</a></p>
 */
class JpegXsInputSpecification {
 public:
  AWS_MEDIALIVE_API JpegXsInputSpecification() = default;
  AWS_MEDIALIVE_API JpegXsInputSpecification(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API JpegXsInputSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Input codec. Must be JPEGXS.
   */
  inline InputCodec GetCodec() const { return m_codec; }
  inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }
  inline void SetCodec(InputCodec value) {
    m_codecHasBeenSet = true;
    m_codec = value;
  }
  inline JpegXsInputSpecification& WithCodec(InputCodec value) {
    SetCodec(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Maximum JPEG XS input bitrate
   */
  inline JpegXsInputMaximumBitrate GetMaximumBitrate() const { return m_maximumBitrate; }
  inline bool MaximumBitrateHasBeenSet() const { return m_maximumBitrateHasBeenSet; }
  inline void SetMaximumBitrate(JpegXsInputMaximumBitrate value) {
    m_maximumBitrateHasBeenSet = true;
    m_maximumBitrate = value;
  }
  inline JpegXsInputSpecification& WithMaximumBitrate(JpegXsInputMaximumBitrate value) {
    SetMaximumBitrate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Maximum JPEG XS input resolution
   */
  inline JpegXsInputResolution GetResolution() const { return m_resolution; }
  inline bool ResolutionHasBeenSet() const { return m_resolutionHasBeenSet; }
  inline void SetResolution(JpegXsInputResolution value) {
    m_resolutionHasBeenSet = true;
    m_resolution = value;
  }
  inline JpegXsInputSpecification& WithResolution(JpegXsInputResolution value) {
    SetResolution(value);
    return *this;
  }
  ///@}
 private:
  InputCodec m_codec{InputCodec::NOT_SET};

  JpegXsInputMaximumBitrate m_maximumBitrate{JpegXsInputMaximumBitrate::NOT_SET};

  JpegXsInputResolution m_resolution{JpegXsInputResolution::NOT_SET};
  bool m_codecHasBeenSet = false;
  bool m_maximumBitrateHasBeenSet = false;
  bool m_resolutionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
