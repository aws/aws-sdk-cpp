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
 * <p>The content of the push message template that applies to ADM (Amazon Device
 * Messaging) notification service.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/PushADMMessageTemplateContent">AWS
 * API Reference</a></p>
 */
class PushADMMessageTemplateContent {
 public:
  AWS_QCONNECT_API PushADMMessageTemplateContent() = default;
  AWS_QCONNECT_API PushADMMessageTemplateContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API PushADMMessageTemplateContent& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  PushADMMessageTemplateContent& WithTitle(TitleT&& value) {
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
  PushADMMessageTemplateContent& WithBody(BodyT&& value) {
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
   * in the app. This action uses the deep-linking features of the Android
   * platform.</p> </li> <li> <p> <code>URL</code> - The default mobile browser on
   * the recipient's device opens and loads the web page at a URL that you
   * specify.</p> </li> </ul>
   */
  inline PushMessageAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(PushMessageAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline PushADMMessageTemplateContent& WithAction(PushMessageAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sound to play when a recipient receives a push notification that's based
   * on the message template. You can use the default stream or specify the file name
   * of a sound resource that's bundled in your app. On an Android platform, the
   * sound file must reside in <code>/res/raw/</code>.</p>
   */
  inline const Aws::String& GetSound() const { return m_sound; }
  inline bool SoundHasBeenSet() const { return m_soundHasBeenSet; }
  template <typename SoundT = Aws::String>
  void SetSound(SoundT&& value) {
    m_soundHasBeenSet = true;
    m_sound = std::forward<SoundT>(value);
  }
  template <typename SoundT = Aws::String>
  PushADMMessageTemplateContent& WithSound(SoundT&& value) {
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
  PushADMMessageTemplateContent& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of an image to display in a push notification that's based on the
   * message template.</p>
   */
  inline const Aws::String& GetImageUrl() const { return m_imageUrl; }
  inline bool ImageUrlHasBeenSet() const { return m_imageUrlHasBeenSet; }
  template <typename ImageUrlT = Aws::String>
  void SetImageUrl(ImageUrlT&& value) {
    m_imageUrlHasBeenSet = true;
    m_imageUrl = std::forward<ImageUrlT>(value);
  }
  template <typename ImageUrlT = Aws::String>
  PushADMMessageTemplateContent& WithImageUrl(ImageUrlT&& value) {
    SetImageUrl(std::forward<ImageUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the large icon image to display in the content view of a push
   * notification that's based on the message template.</p>
   */
  inline const Aws::String& GetImageIconUrl() const { return m_imageIconUrl; }
  inline bool ImageIconUrlHasBeenSet() const { return m_imageIconUrlHasBeenSet; }
  template <typename ImageIconUrlT = Aws::String>
  void SetImageIconUrl(ImageIconUrlT&& value) {
    m_imageIconUrlHasBeenSet = true;
    m_imageIconUrl = std::forward<ImageIconUrlT>(value);
  }
  template <typename ImageIconUrlT = Aws::String>
  PushADMMessageTemplateContent& WithImageIconUrl(ImageIconUrlT&& value) {
    SetImageIconUrl(std::forward<ImageIconUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the small icon image to display in the status bar and the content
   * view of a push notification that's based on the message template.</p>
   */
  inline const Aws::String& GetSmallImageIconUrl() const { return m_smallImageIconUrl; }
  inline bool SmallImageIconUrlHasBeenSet() const { return m_smallImageIconUrlHasBeenSet; }
  template <typename SmallImageIconUrlT = Aws::String>
  void SetSmallImageIconUrl(SmallImageIconUrlT&& value) {
    m_smallImageIconUrlHasBeenSet = true;
    m_smallImageIconUrl = std::forward<SmallImageIconUrlT>(value);
  }
  template <typename SmallImageIconUrlT = Aws::String>
  PushADMMessageTemplateContent& WithSmallImageIconUrl(SmallImageIconUrlT&& value) {
    SetSmallImageIconUrl(std::forward<SmallImageIconUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the small icon image to display in the status bar and the content
   * view of a push notification that's based on the message template.</p>
   */
  inline const MessageTemplateBodyContentProvider& GetRawContent() const { return m_rawContent; }
  inline bool RawContentHasBeenSet() const { return m_rawContentHasBeenSet; }
  template <typename RawContentT = MessageTemplateBodyContentProvider>
  void SetRawContent(RawContentT&& value) {
    m_rawContentHasBeenSet = true;
    m_rawContent = std::forward<RawContentT>(value);
  }
  template <typename RawContentT = MessageTemplateBodyContentProvider>
  PushADMMessageTemplateContent& WithRawContent(RawContentT&& value) {
    SetRawContent(std::forward<RawContentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_title;
  bool m_titleHasBeenSet = false;

  MessageTemplateBodyContentProvider m_body;
  bool m_bodyHasBeenSet = false;

  PushMessageAction m_action{PushMessageAction::NOT_SET};
  bool m_actionHasBeenSet = false;

  Aws::String m_sound;
  bool m_soundHasBeenSet = false;

  Aws::String m_url;
  bool m_urlHasBeenSet = false;

  Aws::String m_imageUrl;
  bool m_imageUrlHasBeenSet = false;

  Aws::String m_imageIconUrl;
  bool m_imageIconUrlHasBeenSet = false;

  Aws::String m_smallImageIconUrl;
  bool m_smallImageIconUrlHasBeenSet = false;

  MessageTemplateBodyContentProvider m_rawContent;
  bool m_rawContentHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
