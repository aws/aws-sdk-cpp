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
   * <p>Specifies the content and settings for a push notification that's sent to
   * recipients of a campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/Message">AWS
   * API Reference</a></p>
   */
  class Message
  {
  public:
    AWS_PINPOINT_API Message() = default;
    AWS_PINPOINT_API Message(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action to occur if a recipient taps the push notification. Valid values
     * are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the foreground app
     * if it was sent to the background. This is the default action.</p></li>
     * <li><p>DEEP_LINK - Your app opens and displays a designated user interface in
     * the app. This setting uses the deep-linking features of iOS and
     * Android.</p></li> <li><p>URL - The default mobile browser on the recipient's
     * device opens and loads the web page at a URL that you specify.</p></li></ul>
     */
    inline Action GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(Action value) { m_actionHasBeenSet = true; m_action = value; }
    inline Message& WithAction(Action value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The body of the notification message. The maximum number of characters is
     * 200.</p>
     */
    inline const Aws::String& GetBody() const { return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    template<typename BodyT = Aws::String>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = Aws::String>
    Message& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the image to display as the push-notification icon, such as the
     * icon for the app.</p>
     */
    inline const Aws::String& GetImageIconUrl() const { return m_imageIconUrl; }
    inline bool ImageIconUrlHasBeenSet() const { return m_imageIconUrlHasBeenSet; }
    template<typename ImageIconUrlT = Aws::String>
    void SetImageIconUrl(ImageIconUrlT&& value) { m_imageIconUrlHasBeenSet = true; m_imageIconUrl = std::forward<ImageIconUrlT>(value); }
    template<typename ImageIconUrlT = Aws::String>
    Message& WithImageIconUrl(ImageIconUrlT&& value) { SetImageIconUrl(std::forward<ImageIconUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the image to display as the small, push-notification icon, such as
     * a small version of the icon for the app.</p>
     */
    inline const Aws::String& GetImageSmallIconUrl() const { return m_imageSmallIconUrl; }
    inline bool ImageSmallIconUrlHasBeenSet() const { return m_imageSmallIconUrlHasBeenSet; }
    template<typename ImageSmallIconUrlT = Aws::String>
    void SetImageSmallIconUrl(ImageSmallIconUrlT&& value) { m_imageSmallIconUrlHasBeenSet = true; m_imageSmallIconUrl = std::forward<ImageSmallIconUrlT>(value); }
    template<typename ImageSmallIconUrlT = Aws::String>
    Message& WithImageSmallIconUrl(ImageSmallIconUrlT&& value) { SetImageSmallIconUrl(std::forward<ImageSmallIconUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of an image to display in the push notification.</p>
     */
    inline const Aws::String& GetImageUrl() const { return m_imageUrl; }
    inline bool ImageUrlHasBeenSet() const { return m_imageUrlHasBeenSet; }
    template<typename ImageUrlT = Aws::String>
    void SetImageUrl(ImageUrlT&& value) { m_imageUrlHasBeenSet = true; m_imageUrl = std::forward<ImageUrlT>(value); }
    template<typename ImageUrlT = Aws::String>
    Message& WithImageUrl(ImageUrlT&& value) { SetImageUrl(std::forward<ImageUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON payload to use for a silent push notification.</p>
     */
    inline const Aws::String& GetJsonBody() const { return m_jsonBody; }
    inline bool JsonBodyHasBeenSet() const { return m_jsonBodyHasBeenSet; }
    template<typename JsonBodyT = Aws::String>
    void SetJsonBody(JsonBodyT&& value) { m_jsonBodyHasBeenSet = true; m_jsonBody = std::forward<JsonBodyT>(value); }
    template<typename JsonBodyT = Aws::String>
    Message& WithJsonBody(JsonBodyT&& value) { SetJsonBody(std::forward<JsonBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the image or video to display in the push notification.</p>
     */
    inline const Aws::String& GetMediaUrl() const { return m_mediaUrl; }
    inline bool MediaUrlHasBeenSet() const { return m_mediaUrlHasBeenSet; }
    template<typename MediaUrlT = Aws::String>
    void SetMediaUrl(MediaUrlT&& value) { m_mediaUrlHasBeenSet = true; m_mediaUrl = std::forward<MediaUrlT>(value); }
    template<typename MediaUrlT = Aws::String>
    Message& WithMediaUrl(MediaUrlT&& value) { SetMediaUrl(std::forward<MediaUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. If specified, this value overrides all other content for the
     * message.</p>
     */
    inline const Aws::String& GetRawContent() const { return m_rawContent; }
    inline bool RawContentHasBeenSet() const { return m_rawContentHasBeenSet; }
    template<typename RawContentT = Aws::String>
    void SetRawContent(RawContentT&& value) { m_rawContentHasBeenSet = true; m_rawContent = std::forward<RawContentT>(value); }
    template<typename RawContentT = Aws::String>
    Message& WithRawContent(RawContentT&& value) { SetRawContent(std::forward<RawContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the notification is a silent push notification, which is a
     * push notification that doesn't display on a recipient's device. Silent push
     * notifications can be used for cases such as updating an app's configuration,
     * displaying messages in an in-app message center, or supporting phone home
     * functionality.</p>
     */
    inline bool GetSilentPush() const { return m_silentPush; }
    inline bool SilentPushHasBeenSet() const { return m_silentPushHasBeenSet; }
    inline void SetSilentPush(bool value) { m_silentPushHasBeenSet = true; m_silentPush = value; }
    inline Message& WithSilentPush(bool value) { SetSilentPush(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds that the push-notification service should keep the
     * message, if the service is unable to deliver the notification the first time.
     * This value is converted to an expiration value when it's sent to a
     * push-notification service. If this value is 0, the service treats the
     * notification as if it expires immediately and the service doesn't store or try
     * to deliver the notification again.</p> <p>This value doesn't apply to messages
     * that are sent through the Amazon Device Messaging (ADM) service.</p>
     */
    inline int GetTimeToLive() const { return m_timeToLive; }
    inline bool TimeToLiveHasBeenSet() const { return m_timeToLiveHasBeenSet; }
    inline void SetTimeToLive(int value) { m_timeToLiveHasBeenSet = true; m_timeToLive = value; }
    inline Message& WithTimeToLive(int value) { SetTimeToLive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title to display above the notification message on a recipient's
     * device.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    Message& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to open in a recipient's default mobile browser, if a recipient taps
     * the push notification and the value of the Action property is URL.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    Message& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}
  private:

    Action m_action{Action::NOT_SET};
    bool m_actionHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::String m_imageIconUrl;
    bool m_imageIconUrlHasBeenSet = false;

    Aws::String m_imageSmallIconUrl;
    bool m_imageSmallIconUrlHasBeenSet = false;

    Aws::String m_imageUrl;
    bool m_imageUrlHasBeenSet = false;

    Aws::String m_jsonBody;
    bool m_jsonBodyHasBeenSet = false;

    Aws::String m_mediaUrl;
    bool m_mediaUrlHasBeenSet = false;

    Aws::String m_rawContent;
    bool m_rawContentHasBeenSet = false;

    bool m_silentPush{false};
    bool m_silentPushHasBeenSet = false;

    int m_timeToLive{0};
    bool m_timeToLiveHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
