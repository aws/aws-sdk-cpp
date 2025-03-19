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
    AWS_PINPOINT_API GCMMessage() = default;
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
    inline Action GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(Action value) { m_actionHasBeenSet = true; m_action = value; }
    inline GCMMessage& WithAction(Action value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The body of the notification message.</p>
     */
    inline const Aws::String& GetBody() const { return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    template<typename BodyT = Aws::String>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = Aws::String>
    GCMMessage& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
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
    inline const Aws::String& GetCollapseKey() const { return m_collapseKey; }
    inline bool CollapseKeyHasBeenSet() const { return m_collapseKeyHasBeenSet; }
    template<typename CollapseKeyT = Aws::String>
    void SetCollapseKey(CollapseKeyT&& value) { m_collapseKeyHasBeenSet = true; m_collapseKey = std::forward<CollapseKeyT>(value); }
    template<typename CollapseKeyT = Aws::String>
    GCMMessage& WithCollapseKey(CollapseKeyT&& value) { SetCollapseKey(std::forward<CollapseKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON data payload to use for the push notification, if the notification
     * is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = Aws::Map<Aws::String, Aws::String>>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = Aws::Map<Aws::String, Aws::String>>
    GCMMessage& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    template<typename DataKeyT = Aws::String, typename DataValueT = Aws::String>
    GCMMessage& AddData(DataKeyT&& key, DataValueT&& value) {
      m_dataHasBeenSet = true; m_data.emplace(std::forward<DataKeyT>(key), std::forward<DataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The icon image name of the asset saved in your app.</p>
     */
    inline const Aws::String& GetIconReference() const { return m_iconReference; }
    inline bool IconReferenceHasBeenSet() const { return m_iconReferenceHasBeenSet; }
    template<typename IconReferenceT = Aws::String>
    void SetIconReference(IconReferenceT&& value) { m_iconReferenceHasBeenSet = true; m_iconReference = std::forward<IconReferenceT>(value); }
    template<typename IconReferenceT = Aws::String>
    GCMMessage& WithIconReference(IconReferenceT&& value) { SetIconReference(std::forward<IconReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the large icon image to display in the content view of the push
     * notification.</p>
     */
    inline const Aws::String& GetImageIconUrl() const { return m_imageIconUrl; }
    inline bool ImageIconUrlHasBeenSet() const { return m_imageIconUrlHasBeenSet; }
    template<typename ImageIconUrlT = Aws::String>
    void SetImageIconUrl(ImageIconUrlT&& value) { m_imageIconUrlHasBeenSet = true; m_imageIconUrl = std::forward<ImageIconUrlT>(value); }
    template<typename ImageIconUrlT = Aws::String>
    GCMMessage& WithImageIconUrl(ImageIconUrlT&& value) { SetImageIconUrl(std::forward<ImageIconUrlT>(value)); return *this;}
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
    GCMMessage& WithImageUrl(ImageUrlT&& value) { SetImageUrl(std::forward<ImageUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preferred authentication method, with valid values "KEY" or "TOKEN". If a
     * value isn't provided then the <b>DefaultAuthenticationMethod</b> is used.</p>
     */
    inline const Aws::String& GetPreferredAuthenticationMethod() const { return m_preferredAuthenticationMethod; }
    inline bool PreferredAuthenticationMethodHasBeenSet() const { return m_preferredAuthenticationMethodHasBeenSet; }
    template<typename PreferredAuthenticationMethodT = Aws::String>
    void SetPreferredAuthenticationMethod(PreferredAuthenticationMethodT&& value) { m_preferredAuthenticationMethodHasBeenSet = true; m_preferredAuthenticationMethod = std::forward<PreferredAuthenticationMethodT>(value); }
    template<typename PreferredAuthenticationMethodT = Aws::String>
    GCMMessage& WithPreferredAuthenticationMethod(PreferredAuthenticationMethodT&& value) { SetPreferredAuthenticationMethod(std::forward<PreferredAuthenticationMethodT>(value)); return *this;}
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
    inline const Aws::String& GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    template<typename PriorityT = Aws::String>
    void SetPriority(PriorityT&& value) { m_priorityHasBeenSet = true; m_priority = std::forward<PriorityT>(value); }
    template<typename PriorityT = Aws::String>
    GCMMessage& WithPriority(PriorityT&& value) { SetPriority(std::forward<PriorityT>(value)); return *this;}
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
    GCMMessage& WithRawContent(RawContentT&& value) { SetRawContent(std::forward<RawContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package name of the application where registration tokens must match in
     * order for the recipient to receive the message.</p>
     */
    inline const Aws::String& GetRestrictedPackageName() const { return m_restrictedPackageName; }
    inline bool RestrictedPackageNameHasBeenSet() const { return m_restrictedPackageNameHasBeenSet; }
    template<typename RestrictedPackageNameT = Aws::String>
    void SetRestrictedPackageName(RestrictedPackageNameT&& value) { m_restrictedPackageNameHasBeenSet = true; m_restrictedPackageName = std::forward<RestrictedPackageNameT>(value); }
    template<typename RestrictedPackageNameT = Aws::String>
    GCMMessage& WithRestrictedPackageName(RestrictedPackageNameT&& value) { SetRestrictedPackageName(std::forward<RestrictedPackageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the notification is a silent push notification, which is a
     * push notification that doesn't display on a recipient's device. Silent push
     * notifications can be used for cases such as updating an app's configuration or
     * supporting phone home functionality.</p>
     */
    inline bool GetSilentPush() const { return m_silentPush; }
    inline bool SilentPushHasBeenSet() const { return m_silentPushHasBeenSet; }
    inline void SetSilentPush(bool value) { m_silentPushHasBeenSet = true; m_silentPush = value; }
    inline GCMMessage& WithSilentPush(bool value) { SetSilentPush(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the small icon image to display in the status bar and the content
     * view of the push notification.</p>
     */
    inline const Aws::String& GetSmallImageIconUrl() const { return m_smallImageIconUrl; }
    inline bool SmallImageIconUrlHasBeenSet() const { return m_smallImageIconUrlHasBeenSet; }
    template<typename SmallImageIconUrlT = Aws::String>
    void SetSmallImageIconUrl(SmallImageIconUrlT&& value) { m_smallImageIconUrlHasBeenSet = true; m_smallImageIconUrl = std::forward<SmallImageIconUrlT>(value); }
    template<typename SmallImageIconUrlT = Aws::String>
    GCMMessage& WithSmallImageIconUrl(SmallImageIconUrlT&& value) { SetSmallImageIconUrl(std::forward<SmallImageIconUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sound to play when the recipient receives the push notification. You can
     * use the default stream or specify the file name of a sound resource that's
     * bundled in your app. On an Android platform, the sound file must reside in
     * /res/raw/.</p>
     */
    inline const Aws::String& GetSound() const { return m_sound; }
    inline bool SoundHasBeenSet() const { return m_soundHasBeenSet; }
    template<typename SoundT = Aws::String>
    void SetSound(SoundT&& value) { m_soundHasBeenSet = true; m_sound = std::forward<SoundT>(value); }
    template<typename SoundT = Aws::String>
    GCMMessage& WithSound(SoundT&& value) { SetSound(std::forward<SoundT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const { return m_substitutions; }
    inline bool SubstitutionsHasBeenSet() const { return m_substitutionsHasBeenSet; }
    template<typename SubstitutionsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetSubstitutions(SubstitutionsT&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::forward<SubstitutionsT>(value); }
    template<typename SubstitutionsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    GCMMessage& WithSubstitutions(SubstitutionsT&& value) { SetSubstitutions(std::forward<SubstitutionsT>(value)); return *this;}
    template<typename SubstitutionsKeyT = Aws::String, typename SubstitutionsValueT = Aws::Vector<Aws::String>>
    GCMMessage& AddSubstitutions(SubstitutionsKeyT&& key, SubstitutionsValueT&& value) {
      m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::forward<SubstitutionsKeyT>(key), std::forward<SubstitutionsValueT>(value)); return *this;
    }
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
    inline int GetTimeToLive() const { return m_timeToLive; }
    inline bool TimeToLiveHasBeenSet() const { return m_timeToLiveHasBeenSet; }
    inline void SetTimeToLive(int value) { m_timeToLiveHasBeenSet = true; m_timeToLive = value; }
    inline GCMMessage& WithTimeToLive(int value) { SetTimeToLive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title to display above the notification message on the recipient's
     * device.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    GCMMessage& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps the push notification and the value of the Action property is URL.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    GCMMessage& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}
  private:

    Action m_action{Action::NOT_SET};
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

    bool m_silentPush{false};
    bool m_silentPushHasBeenSet = false;

    Aws::String m_smallImageIconUrl;
    bool m_smallImageIconUrlHasBeenSet = false;

    Aws::String m_sound;
    bool m_soundHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_substitutions;
    bool m_substitutionsHasBeenSet = false;

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
