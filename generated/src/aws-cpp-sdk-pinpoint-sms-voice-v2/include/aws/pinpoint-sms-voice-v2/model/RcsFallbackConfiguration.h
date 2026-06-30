/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsFallbackChannel.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 * <p>Configuration for SMS or MMS fallback when RCS delivery fails or the
 * TimeToLive expires without delivery confirmation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RcsFallbackConfiguration">AWS
 * API Reference</a></p>
 */
class RcsFallbackConfiguration {
 public:
  AWS_PINPOINTSMSVOICEV2_API RcsFallbackConfiguration() = default;
  AWS_PINPOINTSMSVOICEV2_API RcsFallbackConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API RcsFallbackConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The fallback channel to use when RCS delivery fails. Valid values are SMS and
   * MMS. SMS and MMS are mutually exclusive.</p>
   */
  inline RcsFallbackChannel GetChannel() const { return m_channel; }
  inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
  inline void SetChannel(RcsFallbackChannel value) {
    m_channelHasBeenSet = true;
    m_channel = value;
  }
  inline RcsFallbackConfiguration& WithChannel(RcsFallbackChannel value) {
    SetChannel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text body of the fallback message. Required for SMS fallback. For MMS
   * fallback, at least one of MessageBody or MediaUrls must be provided.</p>
   */
  inline const Aws::String& GetMessageBody() const { return m_messageBody; }
  inline bool MessageBodyHasBeenSet() const { return m_messageBodyHasBeenSet; }
  template <typename MessageBodyT = Aws::String>
  void SetMessageBody(MessageBodyT&& value) {
    m_messageBodyHasBeenSet = true;
    m_messageBody = std::forward<MessageBodyT>(value);
  }
  template <typename MessageBodyT = Aws::String>
  RcsFallbackConfiguration& WithMessageBody(MessageBodyT&& value) {
    SetMessageBody(std::forward<MessageBodyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of S3 URIs to media files for MMS fallback. Only valid when Channel
   * is MMS.</p>
   */
  inline const Aws::Vector<Aws::String>& GetMediaUrls() const { return m_mediaUrls; }
  inline bool MediaUrlsHasBeenSet() const { return m_mediaUrlsHasBeenSet; }
  template <typename MediaUrlsT = Aws::Vector<Aws::String>>
  void SetMediaUrls(MediaUrlsT&& value) {
    m_mediaUrlsHasBeenSet = true;
    m_mediaUrls = std::forward<MediaUrlsT>(value);
  }
  template <typename MediaUrlsT = Aws::Vector<Aws::String>>
  RcsFallbackConfiguration& WithMediaUrls(MediaUrlsT&& value) {
    SetMediaUrls(std::forward<MediaUrlsT>(value));
    return *this;
  }
  template <typename MediaUrlsT = Aws::String>
  RcsFallbackConfiguration& AddMediaUrls(MediaUrlsT&& value) {
    m_mediaUrlsHasBeenSet = true;
    m_mediaUrls.emplace_back(std::forward<MediaUrlsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The origination identity to use for the fallback message. This can be a
   * PhoneNumber, PhoneNumberId, PhoneNumberArn, SenderId, or SenderIdArn. Pool IDs
   * and pool ARNs are not accepted. If not specified and the original message was
   * sent via a pool, the service selects a suitable number from the pool.</p>
   */
  inline const Aws::String& GetOriginationIdentity() const { return m_originationIdentity; }
  inline bool OriginationIdentityHasBeenSet() const { return m_originationIdentityHasBeenSet; }
  template <typename OriginationIdentityT = Aws::String>
  void SetOriginationIdentity(OriginationIdentityT&& value) {
    m_originationIdentityHasBeenSet = true;
    m_originationIdentity = std::forward<OriginationIdentityT>(value);
  }
  template <typename OriginationIdentityT = Aws::String>
  RcsFallbackConfiguration& WithOriginationIdentity(OriginationIdentityT&& value) {
    SetOriginationIdentity(std::forward<OriginationIdentityT>(value));
    return *this;
  }
  ///@}
 private:
  RcsFallbackChannel m_channel{RcsFallbackChannel::NOT_SET};

  Aws::String m_messageBody;

  Aws::Vector<Aws::String> m_mediaUrls;

  Aws::String m_originationIdentity;
  bool m_channelHasBeenSet = false;
  bool m_messageBodyHasBeenSet = false;
  bool m_mediaUrlsHasBeenSet = false;
  bool m_originationIdentityHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
