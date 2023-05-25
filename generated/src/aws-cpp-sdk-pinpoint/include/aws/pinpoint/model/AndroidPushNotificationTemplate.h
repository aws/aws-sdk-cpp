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
   * can be used in push notifications that are sent through the ADM (Amazon Device
   * Messaging), Baidu (Baidu Cloud Push), or GCM (Firebase Cloud Messaging, formerly
   * Google Cloud Messaging) channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/AndroidPushNotificationTemplate">AWS
   * API Reference</a></p>
   */
  class AndroidPushNotificationTemplate
  {
  public:
    AWS_PINPOINT_API AndroidPushNotificationTemplate();
    AWS_PINPOINT_API AndroidPushNotificationTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API AndroidPushNotificationTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action to occur if a recipient taps a push notification that's based on
     * the message template. Valid values are:</p> <ul><li><p>OPEN_APP - Your app opens
     * or it becomes the foreground app if it was sent to the background. This is the
     * default action.</p></li> <li><p>DEEP_LINK - Your app opens and displays a
     * designated user interface in the app. This action uses the deep-linking features
     * of the Android platform.</p></li> <li><p>URL - The default mobile browser on the
     * recipient's device opens and loads the web page at a URL that you
     * specify.</p></li></ul>
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * <p>The action to occur if a recipient taps a push notification that's based on
     * the message template. Valid values are:</p> <ul><li><p>OPEN_APP - Your app opens
     * or it becomes the foreground app if it was sent to the background. This is the
     * default action.</p></li> <li><p>DEEP_LINK - Your app opens and displays a
     * designated user interface in the app. This action uses the deep-linking features
     * of the Android platform.</p></li> <li><p>URL - The default mobile browser on the
     * recipient's device opens and loads the web page at a URL that you
     * specify.</p></li></ul>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action to occur if a recipient taps a push notification that's based on
     * the message template. Valid values are:</p> <ul><li><p>OPEN_APP - Your app opens
     * or it becomes the foreground app if it was sent to the background. This is the
     * default action.</p></li> <li><p>DEEP_LINK - Your app opens and displays a
     * designated user interface in the app. This action uses the deep-linking features
     * of the Android platform.</p></li> <li><p>URL - The default mobile browser on the
     * recipient's device opens and loads the web page at a URL that you
     * specify.</p></li></ul>
     */
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action to occur if a recipient taps a push notification that's based on
     * the message template. Valid values are:</p> <ul><li><p>OPEN_APP - Your app opens
     * or it becomes the foreground app if it was sent to the background. This is the
     * default action.</p></li> <li><p>DEEP_LINK - Your app opens and displays a
     * designated user interface in the app. This action uses the deep-linking features
     * of the Android platform.</p></li> <li><p>URL - The default mobile browser on the
     * recipient's device opens and loads the web page at a URL that you
     * specify.</p></li></ul>
     */
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action to occur if a recipient taps a push notification that's based on
     * the message template. Valid values are:</p> <ul><li><p>OPEN_APP - Your app opens
     * or it becomes the foreground app if it was sent to the background. This is the
     * default action.</p></li> <li><p>DEEP_LINK - Your app opens and displays a
     * designated user interface in the app. This action uses the deep-linking features
     * of the Android platform.</p></li> <li><p>URL - The default mobile browser on the
     * recipient's device opens and loads the web page at a URL that you
     * specify.</p></li></ul>
     */
    inline AndroidPushNotificationTemplate& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * <p>The action to occur if a recipient taps a push notification that's based on
     * the message template. Valid values are:</p> <ul><li><p>OPEN_APP - Your app opens
     * or it becomes the foreground app if it was sent to the background. This is the
     * default action.</p></li> <li><p>DEEP_LINK - Your app opens and displays a
     * designated user interface in the app. This action uses the deep-linking features
     * of the Android platform.</p></li> <li><p>URL - The default mobile browser on the
     * recipient's device opens and loads the web page at a URL that you
     * specify.</p></li></ul>
     */
    inline AndroidPushNotificationTemplate& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The message body to use in a push notification that's based on the message
     * template.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * <p>The message body to use in a push notification that's based on the message
     * template.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>The message body to use in a push notification that's based on the message
     * template.</p>
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>The message body to use in a push notification that's based on the message
     * template.</p>
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>The message body to use in a push notification that's based on the message
     * template.</p>
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * <p>The message body to use in a push notification that's based on the message
     * template.</p>
     */
    inline AndroidPushNotificationTemplate& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * <p>The message body to use in a push notification that's based on the message
     * template.</p>
     */
    inline AndroidPushNotificationTemplate& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * <p>The message body to use in a push notification that's based on the message
     * template.</p>
     */
    inline AndroidPushNotificationTemplate& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * <p>The URL of the large icon image to display in the content view of a push
     * notification that's based on the message template.</p>
     */
    inline const Aws::String& GetImageIconUrl() const{ return m_imageIconUrl; }

    /**
     * <p>The URL of the large icon image to display in the content view of a push
     * notification that's based on the message template.</p>
     */
    inline bool ImageIconUrlHasBeenSet() const { return m_imageIconUrlHasBeenSet; }

    /**
     * <p>The URL of the large icon image to display in the content view of a push
     * notification that's based on the message template.</p>
     */
    inline void SetImageIconUrl(const Aws::String& value) { m_imageIconUrlHasBeenSet = true; m_imageIconUrl = value; }

    /**
     * <p>The URL of the large icon image to display in the content view of a push
     * notification that's based on the message template.</p>
     */
    inline void SetImageIconUrl(Aws::String&& value) { m_imageIconUrlHasBeenSet = true; m_imageIconUrl = std::move(value); }

    /**
     * <p>The URL of the large icon image to display in the content view of a push
     * notification that's based on the message template.</p>
     */
    inline void SetImageIconUrl(const char* value) { m_imageIconUrlHasBeenSet = true; m_imageIconUrl.assign(value); }

    /**
     * <p>The URL of the large icon image to display in the content view of a push
     * notification that's based on the message template.</p>
     */
    inline AndroidPushNotificationTemplate& WithImageIconUrl(const Aws::String& value) { SetImageIconUrl(value); return *this;}

    /**
     * <p>The URL of the large icon image to display in the content view of a push
     * notification that's based on the message template.</p>
     */
    inline AndroidPushNotificationTemplate& WithImageIconUrl(Aws::String&& value) { SetImageIconUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the large icon image to display in the content view of a push
     * notification that's based on the message template.</p>
     */
    inline AndroidPushNotificationTemplate& WithImageIconUrl(const char* value) { SetImageIconUrl(value); return *this;}


    /**
     * <p>The URL of an image to display in a push notification that's based on the
     * message template.</p>
     */
    inline const Aws::String& GetImageUrl() const{ return m_imageUrl; }

    /**
     * <p>The URL of an image to display in a push notification that's based on the
     * message template.</p>
     */
    inline bool ImageUrlHasBeenSet() const { return m_imageUrlHasBeenSet; }

    /**
     * <p>The URL of an image to display in a push notification that's based on the
     * message template.</p>
     */
    inline void SetImageUrl(const Aws::String& value) { m_imageUrlHasBeenSet = true; m_imageUrl = value; }

    /**
     * <p>The URL of an image to display in a push notification that's based on the
     * message template.</p>
     */
    inline void SetImageUrl(Aws::String&& value) { m_imageUrlHasBeenSet = true; m_imageUrl = std::move(value); }

    /**
     * <p>The URL of an image to display in a push notification that's based on the
     * message template.</p>
     */
    inline void SetImageUrl(const char* value) { m_imageUrlHasBeenSet = true; m_imageUrl.assign(value); }

    /**
     * <p>The URL of an image to display in a push notification that's based on the
     * message template.</p>
     */
    inline AndroidPushNotificationTemplate& WithImageUrl(const Aws::String& value) { SetImageUrl(value); return *this;}

    /**
     * <p>The URL of an image to display in a push notification that's based on the
     * message template.</p>
     */
    inline AndroidPushNotificationTemplate& WithImageUrl(Aws::String&& value) { SetImageUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of an image to display in a push notification that's based on the
     * message template.</p>
     */
    inline AndroidPushNotificationTemplate& WithImageUrl(const char* value) { SetImageUrl(value); return *this;}


    /**
     * <p>The raw, JSON-formatted string to use as the payload for a push notification
     * that's based on the message template. If specified, this value overrides all
     * other content for the message template.</p>
     */
    inline const Aws::String& GetRawContent() const{ return m_rawContent; }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for a push notification
     * that's based on the message template. If specified, this value overrides all
     * other content for the message template.</p>
     */
    inline bool RawContentHasBeenSet() const { return m_rawContentHasBeenSet; }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for a push notification
     * that's based on the message template. If specified, this value overrides all
     * other content for the message template.</p>
     */
    inline void SetRawContent(const Aws::String& value) { m_rawContentHasBeenSet = true; m_rawContent = value; }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for a push notification
     * that's based on the message template. If specified, this value overrides all
     * other content for the message template.</p>
     */
    inline void SetRawContent(Aws::String&& value) { m_rawContentHasBeenSet = true; m_rawContent = std::move(value); }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for a push notification
     * that's based on the message template. If specified, this value overrides all
     * other content for the message template.</p>
     */
    inline void SetRawContent(const char* value) { m_rawContentHasBeenSet = true; m_rawContent.assign(value); }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for a push notification
     * that's based on the message template. If specified, this value overrides all
     * other content for the message template.</p>
     */
    inline AndroidPushNotificationTemplate& WithRawContent(const Aws::String& value) { SetRawContent(value); return *this;}

    /**
     * <p>The raw, JSON-formatted string to use as the payload for a push notification
     * that's based on the message template. If specified, this value overrides all
     * other content for the message template.</p>
     */
    inline AndroidPushNotificationTemplate& WithRawContent(Aws::String&& value) { SetRawContent(std::move(value)); return *this;}

    /**
     * <p>The raw, JSON-formatted string to use as the payload for a push notification
     * that's based on the message template. If specified, this value overrides all
     * other content for the message template.</p>
     */
    inline AndroidPushNotificationTemplate& WithRawContent(const char* value) { SetRawContent(value); return *this;}


    /**
     * <p>The URL of the small icon image to display in the status bar and the content
     * view of a push notification that's based on the message template.</p>
     */
    inline const Aws::String& GetSmallImageIconUrl() const{ return m_smallImageIconUrl; }

    /**
     * <p>The URL of the small icon image to display in the status bar and the content
     * view of a push notification that's based on the message template.</p>
     */
    inline bool SmallImageIconUrlHasBeenSet() const { return m_smallImageIconUrlHasBeenSet; }

    /**
     * <p>The URL of the small icon image to display in the status bar and the content
     * view of a push notification that's based on the message template.</p>
     */
    inline void SetSmallImageIconUrl(const Aws::String& value) { m_smallImageIconUrlHasBeenSet = true; m_smallImageIconUrl = value; }

    /**
     * <p>The URL of the small icon image to display in the status bar and the content
     * view of a push notification that's based on the message template.</p>
     */
    inline void SetSmallImageIconUrl(Aws::String&& value) { m_smallImageIconUrlHasBeenSet = true; m_smallImageIconUrl = std::move(value); }

    /**
     * <p>The URL of the small icon image to display in the status bar and the content
     * view of a push notification that's based on the message template.</p>
     */
    inline void SetSmallImageIconUrl(const char* value) { m_smallImageIconUrlHasBeenSet = true; m_smallImageIconUrl.assign(value); }

    /**
     * <p>The URL of the small icon image to display in the status bar and the content
     * view of a push notification that's based on the message template.</p>
     */
    inline AndroidPushNotificationTemplate& WithSmallImageIconUrl(const Aws::String& value) { SetSmallImageIconUrl(value); return *this;}

    /**
     * <p>The URL of the small icon image to display in the status bar and the content
     * view of a push notification that's based on the message template.</p>
     */
    inline AndroidPushNotificationTemplate& WithSmallImageIconUrl(Aws::String&& value) { SetSmallImageIconUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the small icon image to display in the status bar and the content
     * view of a push notification that's based on the message template.</p>
     */
    inline AndroidPushNotificationTemplate& WithSmallImageIconUrl(const char* value) { SetSmallImageIconUrl(value); return *this;}


    /**
     * <p>The sound to play when a recipient receives a push notification that's based
     * on the message template. You can use the default stream or specify the file name
     * of a sound resource that's bundled in your app. On an Android platform, the
     * sound file must reside in /res/raw/.</p>
     */
    inline const Aws::String& GetSound() const{ return m_sound; }

    /**
     * <p>The sound to play when a recipient receives a push notification that's based
     * on the message template. You can use the default stream or specify the file name
     * of a sound resource that's bundled in your app. On an Android platform, the
     * sound file must reside in /res/raw/.</p>
     */
    inline bool SoundHasBeenSet() const { return m_soundHasBeenSet; }

    /**
     * <p>The sound to play when a recipient receives a push notification that's based
     * on the message template. You can use the default stream or specify the file name
     * of a sound resource that's bundled in your app. On an Android platform, the
     * sound file must reside in /res/raw/.</p>
     */
    inline void SetSound(const Aws::String& value) { m_soundHasBeenSet = true; m_sound = value; }

    /**
     * <p>The sound to play when a recipient receives a push notification that's based
     * on the message template. You can use the default stream or specify the file name
     * of a sound resource that's bundled in your app. On an Android platform, the
     * sound file must reside in /res/raw/.</p>
     */
    inline void SetSound(Aws::String&& value) { m_soundHasBeenSet = true; m_sound = std::move(value); }

    /**
     * <p>The sound to play when a recipient receives a push notification that's based
     * on the message template. You can use the default stream or specify the file name
     * of a sound resource that's bundled in your app. On an Android platform, the
     * sound file must reside in /res/raw/.</p>
     */
    inline void SetSound(const char* value) { m_soundHasBeenSet = true; m_sound.assign(value); }

    /**
     * <p>The sound to play when a recipient receives a push notification that's based
     * on the message template. You can use the default stream or specify the file name
     * of a sound resource that's bundled in your app. On an Android platform, the
     * sound file must reside in /res/raw/.</p>
     */
    inline AndroidPushNotificationTemplate& WithSound(const Aws::String& value) { SetSound(value); return *this;}

    /**
     * <p>The sound to play when a recipient receives a push notification that's based
     * on the message template. You can use the default stream or specify the file name
     * of a sound resource that's bundled in your app. On an Android platform, the
     * sound file must reside in /res/raw/.</p>
     */
    inline AndroidPushNotificationTemplate& WithSound(Aws::String&& value) { SetSound(std::move(value)); return *this;}

    /**
     * <p>The sound to play when a recipient receives a push notification that's based
     * on the message template. You can use the default stream or specify the file name
     * of a sound resource that's bundled in your app. On an Android platform, the
     * sound file must reside in /res/raw/.</p>
     */
    inline AndroidPushNotificationTemplate& WithSound(const char* value) { SetSound(value); return *this;}


    /**
     * <p>The title to use in a push notification that's based on the message template.
     * This title appears above the notification message on a recipient's device.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title to use in a push notification that's based on the message template.
     * This title appears above the notification message on a recipient's device.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title to use in a push notification that's based on the message template.
     * This title appears above the notification message on a recipient's device.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title to use in a push notification that's based on the message template.
     * This title appears above the notification message on a recipient's device.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title to use in a push notification that's based on the message template.
     * This title appears above the notification message on a recipient's device.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title to use in a push notification that's based on the message template.
     * This title appears above the notification message on a recipient's device.</p>
     */
    inline AndroidPushNotificationTemplate& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title to use in a push notification that's based on the message template.
     * This title appears above the notification message on a recipient's device.</p>
     */
    inline AndroidPushNotificationTemplate& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title to use in a push notification that's based on the message template.
     * This title appears above the notification message on a recipient's device.</p>
     */
    inline AndroidPushNotificationTemplate& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The URL to open in a recipient's default mobile browser, if a recipient taps
     * a push notification that's based on the message template and the value of the
     * Action property is URL.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL to open in a recipient's default mobile browser, if a recipient taps
     * a push notification that's based on the message template and the value of the
     * Action property is URL.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL to open in a recipient's default mobile browser, if a recipient taps
     * a push notification that's based on the message template and the value of the
     * Action property is URL.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL to open in a recipient's default mobile browser, if a recipient taps
     * a push notification that's based on the message template and the value of the
     * Action property is URL.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL to open in a recipient's default mobile browser, if a recipient taps
     * a push notification that's based on the message template and the value of the
     * Action property is URL.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL to open in a recipient's default mobile browser, if a recipient taps
     * a push notification that's based on the message template and the value of the
     * Action property is URL.</p>
     */
    inline AndroidPushNotificationTemplate& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL to open in a recipient's default mobile browser, if a recipient taps
     * a push notification that's based on the message template and the value of the
     * Action property is URL.</p>
     */
    inline AndroidPushNotificationTemplate& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL to open in a recipient's default mobile browser, if a recipient taps
     * a push notification that's based on the message template and the value of the
     * Action property is URL.</p>
     */
    inline AndroidPushNotificationTemplate& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Action m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::String m_imageIconUrl;
    bool m_imageIconUrlHasBeenSet = false;

    Aws::String m_imageUrl;
    bool m_imageUrlHasBeenSet = false;

    Aws::String m_rawContent;
    bool m_rawContentHasBeenSet = false;

    Aws::String m_smallImageIconUrl;
    bool m_smallImageIconUrlHasBeenSet = false;

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
