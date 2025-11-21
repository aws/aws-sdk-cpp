/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/MediaLiveInputPipelineId.h>
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
 * <p>Configuration settings for connecting a router output to a MediaLive
 * input.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MediaLiveInputRouterOutputConfiguration">AWS
 * API Reference</a></p>
 */
class MediaLiveInputRouterOutputConfiguration {
 public:
  AWS_MEDIACONNECT_API MediaLiveInputRouterOutputConfiguration() = default;
  AWS_MEDIACONNECT_API MediaLiveInputRouterOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API MediaLiveInputRouterOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the MediaLive input to connect to this router output.</p>
   */
  inline const Aws::String& GetMediaLiveInputArn() const { return m_mediaLiveInputArn; }
  inline bool MediaLiveInputArnHasBeenSet() const { return m_mediaLiveInputArnHasBeenSet; }
  template <typename MediaLiveInputArnT = Aws::String>
  void SetMediaLiveInputArn(MediaLiveInputArnT&& value) {
    m_mediaLiveInputArnHasBeenSet = true;
    m_mediaLiveInputArn = std::forward<MediaLiveInputArnT>(value);
  }
  template <typename MediaLiveInputArnT = Aws::String>
  MediaLiveInputRouterOutputConfiguration& WithMediaLiveInputArn(MediaLiveInputArnT&& value) {
    SetMediaLiveInputArn(std::forward<MediaLiveInputArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The index of the MediaLive pipeline to connect to this router output.</p>
   */
  inline MediaLiveInputPipelineId GetMediaLivePipelineId() const { return m_mediaLivePipelineId; }
  inline bool MediaLivePipelineIdHasBeenSet() const { return m_mediaLivePipelineIdHasBeenSet; }
  inline void SetMediaLivePipelineId(MediaLiveInputPipelineId value) {
    m_mediaLivePipelineIdHasBeenSet = true;
    m_mediaLivePipelineId = value;
  }
  inline MediaLiveInputRouterOutputConfiguration& WithMediaLivePipelineId(MediaLiveInputPipelineId value) {
    SetMediaLivePipelineId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption configuration for the MediaLive input when connected to this
   * router output.</p>
   */
  inline const MediaLiveTransitEncryption& GetDestinationTransitEncryption() const { return m_destinationTransitEncryption; }
  inline bool DestinationTransitEncryptionHasBeenSet() const { return m_destinationTransitEncryptionHasBeenSet; }
  template <typename DestinationTransitEncryptionT = MediaLiveTransitEncryption>
  void SetDestinationTransitEncryption(DestinationTransitEncryptionT&& value) {
    m_destinationTransitEncryptionHasBeenSet = true;
    m_destinationTransitEncryption = std::forward<DestinationTransitEncryptionT>(value);
  }
  template <typename DestinationTransitEncryptionT = MediaLiveTransitEncryption>
  MediaLiveInputRouterOutputConfiguration& WithDestinationTransitEncryption(DestinationTransitEncryptionT&& value) {
    SetDestinationTransitEncryption(std::forward<DestinationTransitEncryptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_mediaLiveInputArn;
  bool m_mediaLiveInputArnHasBeenSet = false;

  MediaLiveInputPipelineId m_mediaLivePipelineId{MediaLiveInputPipelineId::NOT_SET};
  bool m_mediaLivePipelineIdHasBeenSet = false;

  MediaLiveTransitEncryption m_destinationTransitEncryption;
  bool m_destinationTransitEncryptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
