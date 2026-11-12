/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RtmpMediaInfo.h>

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
 * <p>Information about the RTMP (Real-Time Messaging Protocol) source. This
 * includes the application name, the stream name, and metadata about the audio and
 * video streams.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RtmpSourceMetadataInfo">AWS
 * API Reference</a></p>
 */
class RtmpSourceMetadataInfo {
 public:
  AWS_MEDIACONNECT_API RtmpSourceMetadataInfo() = default;
  AWS_MEDIACONNECT_API RtmpSourceMetadataInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RtmpSourceMetadataInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the RTMP application.</p>
   */
  inline const Aws::String& GetApplicationName() const { return m_applicationName; }
  inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
  template <typename ApplicationNameT = Aws::String>
  void SetApplicationName(ApplicationNameT&& value) {
    m_applicationNameHasBeenSet = true;
    m_applicationName = std::forward<ApplicationNameT>(value);
  }
  template <typename ApplicationNameT = Aws::String>
  RtmpSourceMetadataInfo& WithApplicationName(ApplicationNameT&& value) {
    SetApplicationName(std::forward<ApplicationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the RTMP stream.</p>
   */
  inline const Aws::String& GetStreamName() const { return m_streamName; }
  inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
  template <typename StreamNameT = Aws::String>
  void SetStreamName(StreamNameT&& value) {
    m_streamNameHasBeenSet = true;
    m_streamName = std::forward<StreamNameT>(value);
  }
  template <typename StreamNameT = Aws::String>
  RtmpSourceMetadataInfo& WithStreamName(StreamNameT&& value) {
    SetStreamName(std::forward<StreamNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the audio and video streams that are part of the RTMP
   * source.</p>
   */
  inline const RtmpMediaInfo& GetMediaInfo() const { return m_mediaInfo; }
  inline bool MediaInfoHasBeenSet() const { return m_mediaInfoHasBeenSet; }
  template <typename MediaInfoT = RtmpMediaInfo>
  void SetMediaInfo(MediaInfoT&& value) {
    m_mediaInfoHasBeenSet = true;
    m_mediaInfo = std::forward<MediaInfoT>(value);
  }
  template <typename MediaInfoT = RtmpMediaInfo>
  RtmpSourceMetadataInfo& WithMediaInfo(MediaInfoT&& value) {
    SetMediaInfo(std::forward<MediaInfoT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationName;

  Aws::String m_streamName;

  RtmpMediaInfo m_mediaInfo;
  bool m_applicationNameHasBeenSet = false;
  bool m_streamNameHasBeenSet = false;
  bool m_mediaInfoHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
