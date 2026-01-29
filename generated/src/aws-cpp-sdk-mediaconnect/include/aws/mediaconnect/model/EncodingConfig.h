/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/EncodingProfile.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p> The encoding configuration to apply to the NDI® source when transcoding it
 * to a transport stream for downstream distribution. You can choose between
 * several predefined encoding profiles based on common use cases. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/EncodingConfig">AWS
 * API Reference</a></p>
 */
class EncodingConfig {
 public:
  AWS_MEDIACONNECT_API EncodingConfig() = default;
  AWS_MEDIACONNECT_API EncodingConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API EncodingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The encoding profile to use when transcoding the NDI source content to a
   * transport stream. You can change this value while the flow is running. </p>
   */
  inline EncodingProfile GetEncodingProfile() const { return m_encodingProfile; }
  inline bool EncodingProfileHasBeenSet() const { return m_encodingProfileHasBeenSet; }
  inline void SetEncodingProfile(EncodingProfile value) {
    m_encodingProfileHasBeenSet = true;
    m_encodingProfile = value;
  }
  inline EncodingConfig& WithEncodingProfile(EncodingProfile value) {
    SetEncodingProfile(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The maximum video bitrate to use when transcoding the NDI source to a
   * transport stream. This parameter enables you to override the default video
   * bitrate within the encoding profile's supported range. </p> <p> The supported
   * range is 10,000,000 - 50,000,000 bits per second (bps). If you don't specify a
   * value, MediaConnect uses the default value of 20,000,000 bps. </p>
   */
  inline int GetVideoMaxBitrate() const { return m_videoMaxBitrate; }
  inline bool VideoMaxBitrateHasBeenSet() const { return m_videoMaxBitrateHasBeenSet; }
  inline void SetVideoMaxBitrate(int value) {
    m_videoMaxBitrateHasBeenSet = true;
    m_videoMaxBitrate = value;
  }
  inline EncodingConfig& WithVideoMaxBitrate(int value) {
    SetVideoMaxBitrate(value);
    return *this;
  }
  ///@}
 private:
  EncodingProfile m_encodingProfile{EncodingProfile::NOT_SET};

  int m_videoMaxBitrate{0};
  bool m_encodingProfileHasBeenSet = false;
  bool m_videoMaxBitrateHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
