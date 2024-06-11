/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/Action.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Specifies the settings for a one-time message that's sent directly to an
   * endpoint through the GCM channel. The GCM channel enables Amazon Pinpoint to
   * send messages to the Firebase Cloud Messaging (FCM), formerly Google Cloud
   * Messaging (GCM), service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GCMMessage">AWS
   * API Reference</a></p>
   */
  class GCMMessage
  {
  public:
    AWS_PINPOINT_API GCMMessage();
    AWS_PINPOINT_API GCMMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API GCMMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action to occur if the recipient taps the push notification. Valid values
     * are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the foreground app
     * if it was sent to the background. This is the default action.</p></li>
     * <li><p>DEEP_LINK - Your app opens and displays a designated user interface in
     * the app. This action uses the deep-linking features of the Android
     * platform.</p></li> <li><p>URL - The default mobile browser on the recipient's
     * device opens and loads the web page at a URL that you specify.</p></li></ul>
     */
    inline const Action& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline GCMMessage& WithAction(const Action& value) { SetAction(value); return *this;}
    inline GCMMessage& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The body of the notification message.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }
    inline GCMMessage& WithBody(const Aws::String& value) { SetBody(value); return *this;}
    inline GCMMessage& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}
    inline GCMMessage& WithBody(const char* value) { SetBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An arbitrary string that identifies a group of messages that can be collapsed
     * to ensure that only the last message is sent when delivery can resume. This
     * helps avoid sending too many instances of the same messages when the recipient's
     * device comes online again or becomes active.</p> <p>Amazon Pinpoint specifies
     * this value in the Firebase Cloud Messaging (FCM) collapse_key parameter when it
     * sends the notification message to FCM.</p>
     */
    inline const Aws::String& GetCollapseKey() const{ return m_collapseKey; }
    inline bool CollapseKeyHasBeenSet() const { return m_collapseKeyHasBeenSet; }
    inline void SetCollapseKey(const Aws::String& value) { m_collapseKeyHasBeenSet = true; m_collapseKey = value; }
    inline void SetCollapseKey(Aws::String&& value) { m_collapseKeyHasBeenSet = true; m_collapseKey = std::move(value); }
    inline void SetCollapseKey(const char* value) { m_collapseKeyHasBeenSet = true; m_collapseKey.assign(value); }
    inline GCMMessage& WithCollapseKey(const Aws::String& value) { SetCollapseKey(value); return *this;}
    inline GCMMessage& WithCollapseKey(Aws::String&& value) { SetCollapseKey(std::move(value)); return *this;}
    inline GCMMessage& WithCollapseKey(const char* value) { SetCollapseKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON data payload to use for the push notification, if the notification
     * is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetData() const{ return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    inline void SetData(const Aws::Map<Aws::String, Aws::String>& value) { m_dataHasBeenSet = true; m_data = value; }
    inline void SetData(Aws::Map<Aws::String, Aws::String>&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }
    inline GCMMessage& WithData(const Aws::Map<Aws::String, Aws::String>& value) { SetData(value); return *this;}
    inline GCMMessage& WithData(Aws::Map<Aws::String, Aws::String>&& value) { SetData(std::move(value)); return *this;}
    inline GCMMessage& AddData(const Aws::String& key, const Aws::String& value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }
    inline GCMMessage& AddData(Aws::String&& key, const Aws::String& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), value); return *this; }
    inline GCMMessage& AddData(const Aws::String& key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }
    inline GCMMessage& AddData(Aws::String&& key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), std::move(value)); return *this; }
    inline GCMMessage& AddData(const char* key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }
    inline GCMMessage& AddData(Aws::String&& key, const char* value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), value); return *this; }
    inline GCMMessage& AddData(const char* key, const char* value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The icon image name of the asset saved in your app.</p>
     */
    inline const Aws::String& GetIconReference() const{ return m_iconReference; }
    inline bool IconReferenceHasBeenSet() const { return m_iconReferenceHasBeenSet; }
    inline void SetIconReference(const Aws::String& value) { m_iconReferenceHasBeenSet = true; m_iconReference = value; }
    inline void SetIconReference(Aws::String&& value) { m_iconReferenceHasBeenSet = true; m_iconReference = std::move(value); }
    inline void SetIconReference(const char* value) { m_iconReferenceHasBeenSet = true; m_iconReference.assign(value); }
    inline GCMMessage& WithIconReference(const Aws::String& value) { SetIconReference(value); return *this;}
    inline GCMMessage& WithIconReference(Aws::String&& value) { SetIconReference(std::move(value)); return *this;}
    inline GCMMessage& WithIconReference(const char* value) { SetIconReference(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the large icon image to display in the content view of the push
     * notification.</p>
     */
    inline const Aws::String& GetImageIconUrl() const{ return m_imageIconUrl; }
    inline bool ImageIconUrlHasBeenSet() const { return m_imageIconUrlHasBeenSet; }
    inline void SetImageIconUrl(const Aws::String& value) { m_imageIconUrlHasBeenSet = true; m_imageIconUrl = value; }
    inline void SetImageIconUrl(Aws::String&& value) { m_imageIconUrlHasBeenSet = true; m_imageIconUrl = std::move(value); }
    inline void SetImageIconUrl(const char* value) { m_imageIconUrlHasBeenSet = true; m_imageIconUrl.assign(value); }
    inline GCMMessage& WithImageIconUrl(const Aws::String& value) { SetImageIconUrl(value); return *this;}
    inline GCMMessage& WithImageIconUrl(Aws::String&& value) { SetImageIconUrl(std::move(value)); return *this;}
    inline GCMMessage& WithImageIconUrl(const char* value) { SetImageIconUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of an image to display in the push notification.</p>
     */
    inline const Aws::String& GetImageUrl() const{ return m_imageUrl; }
    inline bool ImageUrlHasBeenSet() const { return m_imageUrlHasBeenSet; }
    inline void SetImageUrl(const Aws::String& value) { m_imageUrlHasBeenSet = true; m_imageUrl = value; }
    inline void SetImageUrl(Aws::String&& value) { m_imageUrlHasBeenSet = true; m_imageUrl = std::move(value); }
    inline void SetImageUrl(const char* value) { m_imageUrlHasBeenSet = true; m_imageUrl.assign(value); }
    inline GCMMessage& WithImageUrl(const Aws::String& value) { SetImageUrl(value); return *this;}
    inline GCMMessage& WithImageUrl(Aws::String&& value) { SetImageUrl(std::move(value)); return *this;}
    inline GCMMessage& WithImageUrl(const char* value) { SetImageUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preferred authentication method, with valid values "KEY" or "TOKEN". If a
     * value isn't provided then the <b>DefaultAuthenticationMethod</b> is used.</p>
     */
    inline const Aws::String& GetPreferredAuthenticationMethod() const{ return m_preferredAuthenticationMethod; }
    inline bool PreferredAuthenticationMethodHasBeenSet() const { return m_preferredAuthenticationMethodHasBeenSet; }
    inline void SetPreferredAuthenticationMethod(const Aws::String& value) { m_preferredAuthenticationMethodHasBeenSet = true; m_preferredAuthenticationMethod = value; }
    inline void SetPreferredAuthenticationMethod(Aws::String&& value) { m_preferredAuthenticationMethodHasBeenSet = true; m_preferredAuthenticationMethod = std::move(value); }
    inline void SetPreferredAuthenticationMethod(const char* value) { m_preferredAuthenticationMethodHasBeenSet = true; m_preferredAuthenticationMethod.assign(value); }
    inline GCMMessage& WithPreferredAuthenticationMethod(const Aws::String& value) { SetPreferredAuthenticationMethod(value); return *this;}
    inline GCMMessage& WithPreferredAuthenticationMethod(Aws::String&& value) { SetPreferredAuthenticationMethod(std::move(value)); return *this;}
    inline GCMMessage& WithPreferredAuthenticationMethod(const char* value) { SetPreferredAuthenticationMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>para>normal – The notification might be delayed. Delivery is optimized for
     * battery usage on the recipient's device. Use this value unless immediate
     * delivery is required.</p>/listitem> <li><p>high – The notification is sent
     * immediately and might wake a sleeping device.</p></li>/para> <p>Amazon Pinpoint
     * specifies this value in the FCM priority parameter when it sends the
     * notification message to FCM.</p> <p>The equivalent values for Apple Push
     * Notification service (APNs) are 5, for normal, and 10, for high. If you specify
     * an APNs value for this property, Amazon Pinpoint accepts and converts the value
     * to the corresponding FCM value.</p>
     */
    inline const Aws::String& GetPriority() const{ return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(const Aws::String& value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline void SetPriority(Aws::String&& value) { m_priorityHasBeenSet = true; m_priority = std::move(value); }
    inline void SetPriority(const char* value) { m_priorityHasBeenSet = true; m_priority.assign(value); }
    inline GCMMessage& WithPriority(const Aws::String& value) { SetPriority(value); return *this;}
    inline GCMMessage& WithPriority(Aws::String&& value) { SetPriority(std::move(value)); return *this;}
    inline GCMMessage& WithPriority(const char* value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. If specified, this value overrides all other content for the
     * message.</p>
     */
    inline const Aws::String& GetRawContent() const{ return m_rawContent; }
    inline bool RawContentHasBeenSet() const { return m_rawContentHasBeenSet; }
    inline void SetRawContent(const Aws::String& value) { m_rawContentHasBeenSet = true; m_rawContent = value; }
    inline void SetRawContent(Aws::String&& value) { m_rawContentHasBeenSet = true; m_rawContent = std::move(value); }
    inline void SetRawContent(const char* value) { m_rawContentHasBeenSet = true; m_rawContent.assign(value); }
    inline GCMMessage& WithRawContent(const Aws::String& value) { SetRawContent(value); return *this;}
    inline GCMMessage& WithRawContent(Aws::String&& value) { SetRawContent(std::move(value)); return *this;}
    inline GCMMessage& WithRawContent(const char* value) { SetRawContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package name of the application where registration tokens must match in
     * order for the recipient to receive the message.</p>
     */
    inline const Aws::String& GetRestrictedPackageName() const{ return m_restrictedPackageName; }
    inline bool RestrictedPackageNameHasBeenSet() const { return m_restrictedPackageNameHasBeenSet; }
    inline void SetRestrictedPackageName(const Aws::String& value) { m_restrictedPackageNameHasBeenSet = true; m_restrictedPackageName = value; }
    inline void SetRestrictedPackageName(Aws::String&& value) { m_restrictedPackageNameHasBeenSet = true; m_restrictedPackageName = std::move(value); }
    inline void SetRestrictedPackageName(const char* value) { m_restrictedPackageNameHasBeenSet = true; m_restrictedPackageName.assign(value); }
    inline GCMMessage& WithRestrictedPackageName(const Aws::String& value) { SetRestrictedPackageName(value); return *this;}
    inline GCMMessage& WithRestrictedPackageName(Aws::String&& value) { SetRestrictedPackageName(std::move(value)); return *this;}
    inline GCMMessage& WithRestrictedPackageName(const char* value) { SetRestrictedPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the notification is a silent push notification, which is a
     * push notification that doesn't display on a recipient's device. Silent push
     * notifications can be used for cases such as updating an app's configuration or
     * supporting phone home functionality.</p>
     */
    inline bool GetSilentPush() const{ return m_silentPush; }
    inline bool SilentPushHasBeenSet() const { return m_silentPushHasBeenSet; }
    inline void SetSilentPush(bool value) { m_silentPushHasBeenSet = true; m_silentPush = value; }
    inline GCMMessage& WithSilentPush(bool value) { SetSilentPush(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the small icon image to display in the status bar and the content
     * view of the push notification.</p>
     */
    inline const Aws::String& GetSmallImageIconUrl() const{ return m_smallImageIconUrl; }
    inline bool SmallImageIconUrlHasBeenSet() const { return m_smallImageIconUrlHasBeenSet; }
    inline void SetSmallImageIconUrl(const Aws::String& value) { m_smallImageIconUrlHasBeenSet = true; m_smallImageIconUrl = value; }
    inline void SetSmallImageIconUrl(Aws::String&& value) { m_smallImageIconUrlHasBeenSet = true; m_smallImageIconUrl = std::move(value); }
    inline void SetSmallImageIconUrl(const char* value) { m_smallImageIconUrlHasBeenSet = true; m_smallImageIconUrl.assign(value); }
    inline GCMMessage& WithSmallImageIconUrl(const Aws::String& value) { SetSmallImageIconUrl(value); return *this;}
    inline GCMMessage& WithSmallImageIconUrl(Aws::String&& value) { SetSmallImageIconUrl(std::move(value)); return *this;}
    inline GCMMessage& WithSmallImageIconUrl(const char* value) { SetSmallImageIconUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sound to play when the recipient receives the push notification. You can
     * use the default stream or specify the file name of a sound resource that's
     * bundled in your app. On an Android platform, the sound file must reside in
     * /res/raw/.</p>
     */
    inline const Aws::String& GetSound() const{ return m_sound; }
    inline bool SoundHasBeenSet() const { return m_soundHasBeenSet; }
    inline void SetSound(const Aws::String& value) { m_soundHasBeenSet = true; m_sound = value; }
    inline void SetSound(Aws::String&& value) { m_soundHasBeenSet = true; m_sound = std::move(value); }
    inline void SetSound(const char* value) { m_soundHasBeenSet = true; m_sound.assign(value); }
    inline GCMMessage& WithSound(const Aws::String& value) { SetSound(value); return *this;}
    inline GCMMessage& WithSound(Aws::String&& value) { SetSound(std::move(value)); return *this;}
    inline GCMMessage& WithSound(const char* value) { SetSound(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const{ return m_substitutions; }
    inline bool SubstitutionsHasBeenSet() const { return m_substitutionsHasBeenSet; }
    inline void SetSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_substitutionsHasBeenSet = true; m_substitutions = value; }
    inline void SetSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::move(value); }
    inline GCMMessage& WithSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetSubstitutions(value); return *this;}
    inline GCMMessage& WithSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetSubstitutions(std::move(value)); return *this;}
    inline GCMMessage& AddSubstitutions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }
    inline GCMMessage& AddSubstitutions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), value); return *this; }
    inline GCMMessage& AddSubstitutions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }
    inline GCMMessage& AddSubstitutions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), std::move(value)); return *this; }
    inline GCMMessage& AddSubstitutions(const char* key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }
    inline GCMMessage& AddSubstitutions(const char* key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, that FCM should store and attempt to deliver
     * the push notification, if the service is unable to deliver the notification the
     * first time. If you don't specify this value, FCM defaults to the maximum value,
     * which is 2,419,200 seconds (28 days).</p> <p>Amazon Pinpoint specifies this
     * value in the FCM time_to_live parameter when it sends the notification message
     * to FCM.</p>
     */
    inline int GetTimeToLive() const{ return m_timeToLive; }
    inline bool TimeToLiveHasBeenSet() const { return m_timeToLiveHasBeenSet; }
    inline void SetTimeToLive(int value) { m_timeToLiveHasBeenSet = true; m_timeToLive = value; }
    inline GCMMessage& WithTimeToLive(int value) { SetTimeToLive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title to display above the notification message on the recipient's
     * device.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline GCMMessage& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline GCMMessage& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline GCMMessage& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps the push notification and the value of the Action property is URL.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline GCMMessage& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline GCMMessage& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline GCMMessage& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}
  private:

    Action m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::String m_collapseKey;
    bool m_collapseKeyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_data;
    bool m_dataHasBeenSet = false;

    Aws::String m_iconReference;
    bool m_iconReferenceHasBeenSet = false;

    Aws::String m_imageIconUrl;
    bool m_imageIconUrlHasBeenSet = false;

    Aws::String m_imageUrl;
    bool m_imageUrlHasBeenSet = false;

    Aws::String m_preferredAuthenticationMethod;
    bool m_preferredAuthenticationMethodHasBeenSet = false;

    Aws::String m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::String m_rawContent;
    bool m_rawContentHasBeenSet = false;

    Aws::String m_restrictedPackageName;
    bool m_restrictedPackageNameHasBeenSet = false;

    bool m_silentPush;
    bool m_silentPushHasBeenSet = false;

    Aws::String m_smallImageIconUrl;
    bool m_smallImageIconUrlHasBeenSet = false;

    Aws::String m_sound;
    bool m_soundHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_substitutions;
    bool m_substitutionsHasBeenSet = false;

    int m_timeToLive;
    bool m_timeToLiveHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
