/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/MessageTemplateBodyContentProvider.h>
#include <aws/qconnect/model/PushMessageAction.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>The content of the push message template that applies to APNS (Apple Push
 * Notification service) notification service.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/PushAPNSMessageTemplateContent">AWS
 * API Reference</a></p>
 */
class PushAPNSMessageTemplateContent {
 public:
  AWS_QCONNECT_API PushAPNSMessageTemplateContent() = default;
  AWS_QCONNECT_API PushAPNSMessageTemplateContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API PushAPNSMessageTemplateContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The title to use in a push notification that's based on the message template.
   * This title appears above the notification message on a recipient's device.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  PushAPNSMessageTemplateContent& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The message body to use in a push notification that is based on the message
   * template.</p>
   */
  inline const MessageTemplateBodyContentProvider& GetBody() const { return m_body; }
  inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
  template <typename BodyT = MessageTemplateBodyContentProvider>
  void SetBody(BodyT&& value) {
    m_bodyHasBeenSet = true;
    m_body = std::forward<BodyT>(value);
  }
  template <typename BodyT = MessageTemplateBodyContentProvider>
  PushAPNSMessageTemplateContent& WithBody(BodyT&& value) {
    SetBody(std::forward<BodyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action to occur if a recipient taps a push notification that is based on
   * the message template. Valid values are:</p> <ul> <li> <p> <code>OPEN_APP</code>
   * - Your app opens or it becomes the foreground app if it was sent to the
   * background. This is the default action.</p> </li> <li> <p>
   * <code>DEEP_LINK</code> - Your app opens and displays a designated user interface
   * in the app. This action uses the deep-linking features of the iOS platform.</p>
   * </li> <li> <p> <code>URL</code> - The default mobile browser on the recipient's
   * device opens and loads the web page at a URL that you specify.</p> </li> </ul>
   */
  inline PushMessageAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(PushMessageAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline PushAPNSMessageTemplateContent& WithAction(PushMessageAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key for the sound to play when the recipient receives a push notification
   * that's based on the message template. The value for this key is the name of a
   * sound file in your app's main bundle or the <code>Library/Sounds</code> folder
   * in your app's data container. If the sound file can't be found or you specify
   * <code>default</code> for the value, the system plays the default alert
   * sound.</p>
   */
  inline const Aws::String& GetSound() const { return m_sound; }
  inline bool SoundHasBeenSet() const { return m_soundHasBeenSet; }
  template <typename SoundT = Aws::String>
  void SetSound(SoundT&& value) {
    m_soundHasBeenSet = true;
    m_sound = std::forward<SoundT>(value);
  }
  template <typename SoundT = Aws::String>
  PushAPNSMessageTemplateContent& WithSound(SoundT&& value) {
    SetSound(std::forward<SoundT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL to open in a recipient's default mobile browser, if a recipient taps
   * a push notification that's based on the message template and the value of the
   * <code>action</code> property is <code>URL</code>.</p>
   */
  inline const Aws::String& GetUrl() const { return m_url; }
  inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
  template <typename UrlT = Aws::String>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = Aws::String>
  PushAPNSMessageTemplateContent& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of an image or video to display in push notifications that are based
   * on the message template.</p>
   */
  inline const Aws::String& GetMediaUrl() const { return m_mediaUrl; }
  inline bool MediaUrlHasBeenSet() const { return m_mediaUrlHasBeenSet; }
  template <typename MediaUrlT = Aws::String>
  void SetMediaUrl(MediaUrlT&& value) {
    m_mediaUrlHasBeenSet = true;
    m_mediaUrl = std::forward<MediaUrlT>(value);
  }
  template <typename MediaUrlT = Aws::String>
  PushAPNSMessageTemplateContent& WithMediaUrl(MediaUrlT&& value) {
    SetMediaUrl(std::forward<MediaUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The raw, JSON-formatted string to use as the payload for a push notification
   * that's based on the message template. If specified, this value overrides all
   * other content for the message template.</p>
   */
  inline const MessageTemplateBodyContentProvider& GetRawContent() const { return m_rawContent; }
  inline bool RawContentHasBeenSet() const { return m_rawContentHasBeenSet; }
  template <typename RawContentT = MessageTemplateBodyContentProvider>
  void SetRawContent(RawContentT&& value) {
    m_rawContentHasBeenSet = true;
    m_rawContent = std::forward<RawContentT>(value);
  }
  template <typename RawContentT = MessageTemplateBodyContentProvider>
  PushAPNSMessageTemplateContent& WithRawContent(RawContentT&& value) {
    SetRawContent(std::forward<RawContentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_title;

  MessageTemplateBodyContentProvider m_body;

  PushMessageAction m_action{PushMessageAction::NOT_SET};

  Aws::String m_sound;

  Aws::String m_url;

  Aws::String m_mediaUrl;

  MessageTemplateBodyContentProvider m_rawContent;
  bool m_titleHasBeenSet = false;
  bool m_bodyHasBeenSet = false;
  bool m_actionHasBeenSet = false;
  bool m_soundHasBeenSet = false;
  bool m_urlHasBeenSet = false;
  bool m_mediaUrlHasBeenSet = false;
  bool m_rawContentHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
