/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/NdiMediaStreamInfo.h>

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
 * <p> Metadata about the audio and video media that is part of the NDI® source
 * content. This includes details about the individual media streams.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/NdiMediaInfo">AWS
 * API Reference</a></p>
 */
class NdiMediaInfo {
 public:
  AWS_MEDIACONNECT_API NdiMediaInfo() = default;
  AWS_MEDIACONNECT_API NdiMediaInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API NdiMediaInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> A list of the individual media streams that make up the NDI source. This
   * includes details about each stream's codec, resolution, frame rate, audio
   * channels, and other parameters. </p>
   */
  inline const Aws::Vector<NdiMediaStreamInfo>& GetStreams() const { return m_streams; }
  inline bool StreamsHasBeenSet() const { return m_streamsHasBeenSet; }
  template <typename StreamsT = Aws::Vector<NdiMediaStreamInfo>>
  void SetStreams(StreamsT&& value) {
    m_streamsHasBeenSet = true;
    m_streams = std::forward<StreamsT>(value);
  }
  template <typename StreamsT = Aws::Vector<NdiMediaStreamInfo>>
  NdiMediaInfo& WithStreams(StreamsT&& value) {
    SetStreams(std::forward<StreamsT>(value));
    return *this;
  }
  template <typename StreamsT = NdiMediaStreamInfo>
  NdiMediaInfo& AddStreams(StreamsT&& value) {
    m_streamsHasBeenSet = true;
    m_streams.emplace_back(std::forward<StreamsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<NdiMediaStreamInfo> m_streams;
  bool m_streamsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
