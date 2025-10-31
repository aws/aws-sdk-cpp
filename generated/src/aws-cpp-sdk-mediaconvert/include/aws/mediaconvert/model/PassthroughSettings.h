/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/VideoSelectorMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConvert {
namespace Model {

/**
 * Optional settings when you set Codec to the value Passthrough.<p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/PassthroughSettings">AWS
 * API Reference</a></p>
 */
class PassthroughSettings {
 public:
  AWS_MEDIACONVERT_API PassthroughSettings() = default;
  AWS_MEDIACONVERT_API PassthroughSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API PassthroughSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * AUTO will select the highest bitrate input in the video selector source.
   * REMUX_ALL will passthrough all the selected streams in the video selector
   * source. When selecting streams from multiple renditions (i.e. using Stream video
   * selector type): REMUX_ALL will only remux all streams selected, and AUTO will
   * use the highest bitrate video stream among the selected streams as source.
   */
  inline VideoSelectorMode GetVideoSelectorMode() const { return m_videoSelectorMode; }
  inline bool VideoSelectorModeHasBeenSet() const { return m_videoSelectorModeHasBeenSet; }
  inline void SetVideoSelectorMode(VideoSelectorMode value) {
    m_videoSelectorModeHasBeenSet = true;
    m_videoSelectorMode = value;
  }
  inline PassthroughSettings& WithVideoSelectorMode(VideoSelectorMode value) {
    SetVideoSelectorMode(value);
    return *this;
  }
  ///@}
 private:
  VideoSelectorMode m_videoSelectorMode{VideoSelectorMode::NOT_SET};
  bool m_videoSelectorModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
