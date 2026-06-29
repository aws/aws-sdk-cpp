/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsCreateCalendarEventAction.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsDialPhoneAction.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsOpenUrlAction.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsReplyAction.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsRequestLocationAction.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsShowLocationAction.h>

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
 * <p>A suggested action displayed to the RCS message recipient. Can be a reply,
 * open URL, dial phone, show location, request location, or create calendar
 * event.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RcsSuggestedAction">AWS
 * API Reference</a></p>
 */
class RcsSuggestedAction {
 public:
  AWS_PINPOINTSMSVOICEV2_API RcsSuggestedAction() = default;
  AWS_PINPOINTSMSVOICEV2_API RcsSuggestedAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API RcsSuggestedAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A suggested reply that sends predefined text and postback data when
   * tapped.</p>
   */
  inline const RcsReplyAction& GetReply() const { return m_reply; }
  inline bool ReplyHasBeenSet() const { return m_replyHasBeenSet; }
  template <typename ReplyT = RcsReplyAction>
  void SetReply(ReplyT&& value) {
    m_replyHasBeenSet = true;
    m_reply = std::forward<ReplyT>(value);
  }
  template <typename ReplyT = RcsReplyAction>
  RcsSuggestedAction& WithReply(ReplyT&& value) {
    SetReply(std::forward<ReplyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A suggested action that opens a URL in the user's browser or a webview.</p>
   */
  inline const RcsOpenUrlAction& GetOpenUrl() const { return m_openUrl; }
  inline bool OpenUrlHasBeenSet() const { return m_openUrlHasBeenSet; }
  template <typename OpenUrlT = RcsOpenUrlAction>
  void SetOpenUrl(OpenUrlT&& value) {
    m_openUrlHasBeenSet = true;
    m_openUrl = std::forward<OpenUrlT>(value);
  }
  template <typename OpenUrlT = RcsOpenUrlAction>
  RcsSuggestedAction& WithOpenUrl(OpenUrlT&& value) {
    SetOpenUrl(std::forward<OpenUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A suggested action that initiates a phone call to the specified number.</p>
   */
  inline const RcsDialPhoneAction& GetDialPhone() const { return m_dialPhone; }
  inline bool DialPhoneHasBeenSet() const { return m_dialPhoneHasBeenSet; }
  template <typename DialPhoneT = RcsDialPhoneAction>
  void SetDialPhone(DialPhoneT&& value) {
    m_dialPhoneHasBeenSet = true;
    m_dialPhone = std::forward<DialPhoneT>(value);
  }
  template <typename DialPhoneT = RcsDialPhoneAction>
  RcsSuggestedAction& WithDialPhone(DialPhoneT&& value) {
    SetDialPhone(std::forward<DialPhoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A suggested action that shows a location on a map.</p>
   */
  inline const RcsShowLocationAction& GetShowLocation() const { return m_showLocation; }
  inline bool ShowLocationHasBeenSet() const { return m_showLocationHasBeenSet; }
  template <typename ShowLocationT = RcsShowLocationAction>
  void SetShowLocation(ShowLocationT&& value) {
    m_showLocationHasBeenSet = true;
    m_showLocation = std::forward<ShowLocationT>(value);
  }
  template <typename ShowLocationT = RcsShowLocationAction>
  RcsSuggestedAction& WithShowLocation(ShowLocationT&& value) {
    SetShowLocation(std::forward<ShowLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A suggested action that requests the user's current location.</p>
   */
  inline const RcsRequestLocationAction& GetRequestLocation() const { return m_requestLocation; }
  inline bool RequestLocationHasBeenSet() const { return m_requestLocationHasBeenSet; }
  template <typename RequestLocationT = RcsRequestLocationAction>
  void SetRequestLocation(RequestLocationT&& value) {
    m_requestLocationHasBeenSet = true;
    m_requestLocation = std::forward<RequestLocationT>(value);
  }
  template <typename RequestLocationT = RcsRequestLocationAction>
  RcsSuggestedAction& WithRequestLocation(RequestLocationT&& value) {
    SetRequestLocation(std::forward<RequestLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A suggested action that creates a calendar event on the user's device.</p>
   */
  inline const RcsCreateCalendarEventAction& GetCreateCalendarEvent() const { return m_createCalendarEvent; }
  inline bool CreateCalendarEventHasBeenSet() const { return m_createCalendarEventHasBeenSet; }
  template <typename CreateCalendarEventT = RcsCreateCalendarEventAction>
  void SetCreateCalendarEvent(CreateCalendarEventT&& value) {
    m_createCalendarEventHasBeenSet = true;
    m_createCalendarEvent = std::forward<CreateCalendarEventT>(value);
  }
  template <typename CreateCalendarEventT = RcsCreateCalendarEventAction>
  RcsSuggestedAction& WithCreateCalendarEvent(CreateCalendarEventT&& value) {
    SetCreateCalendarEvent(std::forward<CreateCalendarEventT>(value));
    return *this;
  }
  ///@}
 private:
  RcsReplyAction m_reply;

  RcsOpenUrlAction m_openUrl;

  RcsDialPhoneAction m_dialPhone;

  RcsShowLocationAction m_showLocation;

  RcsRequestLocationAction m_requestLocation;

  RcsCreateCalendarEventAction m_createCalendarEvent;
  bool m_replyHasBeenSet = false;
  bool m_openUrlHasBeenSet = false;
  bool m_dialPhoneHasBeenSet = false;
  bool m_showLocationHasBeenSet = false;
  bool m_requestLocationHasBeenSet = false;
  bool m_createCalendarEventHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
