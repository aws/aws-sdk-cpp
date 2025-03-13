/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/Action.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies channel-specific content and settings for a message template that
   * can be used in push notifications that are sent through the APNs (Apple Push
   * Notification service) channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/APNSPushNotificationTemplate">AWS
   * API Reference</a></p>
   */
  class APNSPushNotificationTemplate
  {
  public:
    AWS_PINPOINT_API APNSPushNotificationTemplate() = default;
    AWS_PINPOINT_API APNSPushNotificationTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API APNSPushNotificationTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action to occur if a recipient taps a push notification that's based on
     * the message template. Valid values are:</p> <ul><li><p>OPEN_APP - Your app opens
     * or it becomes the foreground app if it was sent to the background. This is the
     * default action.</p></li> <li><p>DEEP_LINK - Your app opens and displays a
     * designated user interface in the app. This setting uses the deep-linking
     * features of the iOS platform.</p></li> <li><p>URL - The default mobile browser
     * on the recipient's device opens and loads the web page at a URL that you
     * specify.</p></li></ul>
     */
    inline Action GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(Action value) { m_actionHasBeenSet = true; m_action = value; }
    inline APNSPushNotificationTemplate& WithAction(Action value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message body to use in push notifications that are based on the message
     * template.</p>
     */
    inline const Aws::String& GetBody() const { return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    template<typename BodyT = Aws::String>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = Aws::String>
    APNSPushNotificationTemplate& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of an image or video to display in push notifications that are based
     * on the message template.</p>
     */
    inline const Aws::String& GetMediaUrl() const { return m_mediaUrl; }
    inline bool MediaUrlHasBeenSet() const { return m_mediaUrlHasBeenSet; }
    template<typename MediaUrlT = Aws::String>
    void SetMediaUrl(MediaUrlT&& value) { m_mediaUrlHasBeenSet = true; m_mediaUrl = std::forward<MediaUrlT>(value); }
    template<typename MediaUrlT = Aws::String>
    APNSPushNotificationTemplate& WithMediaUrl(MediaUrlT&& value) { SetMediaUrl(std::forward<MediaUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The raw, JSON-formatted string to use as the payload for push notifications
     * that are based on the message template. If specified, this value overrides all
     * other content for the message template.</p>
     */
    inline const Aws::String& GetRawContent() const { return m_rawContent; }
    inline bool RawContentHasBeenSet() const { return m_rawContentHasBeenSet; }
    template<typename RawContentT = Aws::String>
    void SetRawContent(RawContentT&& value) { m_rawContentHasBeenSet = true; m_rawContent = std::forward<RawContentT>(value); }
    template<typename RawContentT = Aws::String>
    APNSPushNotificationTemplate& WithRawContent(RawContentT&& value) { SetRawContent(std::forward<RawContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key for the sound to play when the recipient receives a push notification
     * that's based on the message template. The value for this key is the name of a
     * sound file in your app's main bundle or the Library/Sounds folder in your app's
     * data container. If the sound file can't be found or you specify default for the
     * value, the system plays the default alert sound.</p>
     */
    inline const Aws::String& GetSound() const { return m_sound; }
    inline bool SoundHasBeenSet() const { return m_soundHasBeenSet; }
    template<typename SoundT = Aws::String>
    void SetSound(SoundT&& value) { m_soundHasBeenSet = true; m_sound = std::forward<SoundT>(value); }
    template<typename SoundT = Aws::String>
    APNSPushNotificationTemplate& WithSound(SoundT&& value) { SetSound(std::forward<SoundT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title to use in push notifications that are based on the message
     * template. This title appears above the notification message on a recipient's
     * device.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    APNSPushNotificationTemplate& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps a push notification that's based on the message template and the value of
     * the Action property is URL.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    APNSPushNotificationTemplate& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}
  private:

    Action m_action{Action::NOT_SET};
    bool m_actionHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::String m_mediaUrl;
    bool m_mediaUrlHasBeenSet = false;

    Aws::String m_rawContent;
    bool m_rawContentHasBeenSet = false;

    Aws::String m_sound;
    bool m_soundHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
