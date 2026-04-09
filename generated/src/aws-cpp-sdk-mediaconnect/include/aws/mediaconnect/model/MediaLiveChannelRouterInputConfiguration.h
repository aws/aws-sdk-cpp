/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/MediaLiveChannelPipelineId.h>
#include <aws/mediaconnect/model/MediaLiveTransitEncryption.h>

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
 * <p>Configuration settings for connecting a router input to a MediaLive channel
 * output.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MediaLiveChannelRouterInputConfiguration">AWS
 * API Reference</a></p>
 */
class MediaLiveChannelRouterInputConfiguration {
 public:
  AWS_MEDIACONNECT_API MediaLiveChannelRouterInputConfiguration() = default;
  AWS_MEDIACONNECT_API MediaLiveChannelRouterInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API MediaLiveChannelRouterInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the MediaLive channel to connect to this router input.</p>
   */
  inline const Aws::String& GetMediaLiveChannelArn() const { return m_mediaLiveChannelArn; }
  inline bool MediaLiveChannelArnHasBeenSet() const { return m_mediaLiveChannelArnHasBeenSet; }
  template <typename MediaLiveChannelArnT = Aws::String>
  void SetMediaLiveChannelArn(MediaLiveChannelArnT&& value) {
    m_mediaLiveChannelArnHasBeenSet = true;
    m_mediaLiveChannelArn = std::forward<MediaLiveChannelArnT>(value);
  }
  template <typename MediaLiveChannelArnT = Aws::String>
  MediaLiveChannelRouterInputConfiguration& WithMediaLiveChannelArn(MediaLiveChannelArnT&& value) {
    SetMediaLiveChannelArn(std::forward<MediaLiveChannelArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The index of the MediaLive pipeline to connect to this router input.</p>
   */
  inline MediaLiveChannelPipelineId GetMediaLivePipelineId() const { return m_mediaLivePipelineId; }
  inline bool MediaLivePipelineIdHasBeenSet() const { return m_mediaLivePipelineIdHasBeenSet; }
  inline void SetMediaLivePipelineId(MediaLiveChannelPipelineId value) {
    m_mediaLivePipelineIdHasBeenSet = true;
    m_mediaLivePipelineId = value;
  }
  inline MediaLiveChannelRouterInputConfiguration& WithMediaLivePipelineId(MediaLiveChannelPipelineId value) {
    SetMediaLivePipelineId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the MediaLive channel output to connect to this router input.</p>
   */
  inline const Aws::String& GetMediaLiveChannelOutputName() const { return m_mediaLiveChannelOutputName; }
  inline bool MediaLiveChannelOutputNameHasBeenSet() const { return m_mediaLiveChannelOutputNameHasBeenSet; }
  template <typename MediaLiveChannelOutputNameT = Aws::String>
  void SetMediaLiveChannelOutputName(MediaLiveChannelOutputNameT&& value) {
    m_mediaLiveChannelOutputNameHasBeenSet = true;
    m_mediaLiveChannelOutputName = std::forward<MediaLiveChannelOutputNameT>(value);
  }
  template <typename MediaLiveChannelOutputNameT = Aws::String>
  MediaLiveChannelRouterInputConfiguration& WithMediaLiveChannelOutputName(MediaLiveChannelOutputNameT&& value) {
    SetMediaLiveChannelOutputName(std::forward<MediaLiveChannelOutputNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const MediaLiveTransitEncryption& GetSourceTransitDecryption() const { return m_sourceTransitDecryption; }
  inline bool SourceTransitDecryptionHasBeenSet() const { return m_sourceTransitDecryptionHasBeenSet; }
  template <typename SourceTransitDecryptionT = MediaLiveTransitEncryption>
  void SetSourceTransitDecryption(SourceTransitDecryptionT&& value) {
    m_sourceTransitDecryptionHasBeenSet = true;
    m_sourceTransitDecryption = std::forward<SourceTransitDecryptionT>(value);
  }
  template <typename SourceTransitDecryptionT = MediaLiveTransitEncryption>
  MediaLiveChannelRouterInputConfiguration& WithSourceTransitDecryption(SourceTransitDecryptionT&& value) {
    SetSourceTransitDecryption(std::forward<SourceTransitDecryptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_mediaLiveChannelArn;

  MediaLiveChannelPipelineId m_mediaLivePipelineId{MediaLiveChannelPipelineId::NOT_SET};

  Aws::String m_mediaLiveChannelOutputName;

  MediaLiveTransitEncryption m_sourceTransitDecryption;
  bool m_mediaLiveChannelArnHasBeenSet = false;
  bool m_mediaLivePipelineIdHasBeenSet = false;
  bool m_mediaLiveChannelOutputNameHasBeenSet = false;
  bool m_sourceTransitDecryptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
