/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RtmpMediaStreamInfo.h>

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
 * <p>Metadata about the audio and video media that is part of the RTMP source
 * content. This includes details about the individual streams.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RtmpMediaInfo">AWS
 * API Reference</a></p>
 */
class RtmpMediaInfo {
 public:
  AWS_MEDIACONNECT_API RtmpMediaInfo() = default;
  AWS_MEDIACONNECT_API RtmpMediaInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RtmpMediaInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of the individual audio and video streams that make up the RTMP
   * source. This includes details about each stream's codec, resolution, frame rate,
   * audio channels, and other parameters.</p>
   */
  inline const Aws::Vector<RtmpMediaStreamInfo>& GetStreams() const { return m_streams; }
  inline bool StreamsHasBeenSet() const { return m_streamsHasBeenSet; }
  template <typename StreamsT = Aws::Vector<RtmpMediaStreamInfo>>
  void SetStreams(StreamsT&& value) {
    m_streamsHasBeenSet = true;
    m_streams = std::forward<StreamsT>(value);
  }
  template <typename StreamsT = Aws::Vector<RtmpMediaStreamInfo>>
  RtmpMediaInfo& WithStreams(StreamsT&& value) {
    SetStreams(std::forward<StreamsT>(value));
    return *this;
  }
  template <typename StreamsT = RtmpMediaStreamInfo>
  RtmpMediaInfo& AddStreams(StreamsT&& value) {
    m_streamsHasBeenSet = true;
    m_streams.emplace_back(std::forward<StreamsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RtmpMediaStreamInfo> m_streams;
  bool m_streamsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
