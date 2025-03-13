/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/AndroidPushNotificationTemplate.h>
#include <aws/pinpoint/model/APNSPushNotificationTemplate.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/DefaultPushNotificationTemplate.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/TemplateType.h>
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
   * <p>Provides information about the content and settings for a message template
   * that can be used in messages that are sent through a push notification
   * channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PushNotificationTemplateResponse">AWS
   * API Reference</a></p>
   */
  class PushNotificationTemplateResponse
  {
  public:
    AWS_PINPOINT_API PushNotificationTemplateResponse() = default;
    AWS_PINPOINT_API PushNotificationTemplateResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API PushNotificationTemplateResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message template that's used for the ADM (Amazon Device Messaging)
     * channel. This message template overrides the default template for push
     * notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline const AndroidPushNotificationTemplate& GetADM() const { return m_aDM; }
    inline bool ADMHasBeenSet() const { return m_aDMHasBeenSet; }
    template<typename ADMT = AndroidPushNotificationTemplate>
    void SetADM(ADMT&& value) { m_aDMHasBeenSet = true; m_aDM = std::forward<ADMT>(value); }
    template<typename ADMT = AndroidPushNotificationTemplate>
    PushNotificationTemplateResponse& WithADM(ADMT&& value) { SetADM(std::forward<ADMT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message template that's used for the APNs (Apple Push Notification
     * service) channel. This message template overrides the default template for push
     * notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline const APNSPushNotificationTemplate& GetAPNS() const { return m_aPNS; }
    inline bool APNSHasBeenSet() const { return m_aPNSHasBeenSet; }
    template<typename APNST = APNSPushNotificationTemplate>
    void SetAPNS(APNST&& value) { m_aPNSHasBeenSet = true; m_aPNS = std::forward<APNST>(value); }
    template<typename APNST = APNSPushNotificationTemplate>
    PushNotificationTemplateResponse& WithAPNS(APNST&& value) { SetAPNS(std::forward<APNST>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    PushNotificationTemplateResponse& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message template that's used for the Baidu (Baidu Cloud Push) channel.
     * This message template overrides the default template for push notification
     * channels (DefaultPushNotificationTemplate).</p>
     */
    inline const AndroidPushNotificationTemplate& GetBaidu() const { return m_baidu; }
    inline bool BaiduHasBeenSet() const { return m_baiduHasBeenSet; }
    template<typename BaiduT = AndroidPushNotificationTemplate>
    void SetBaidu(BaiduT&& value) { m_baiduHasBeenSet = true; m_baidu = std::forward<BaiduT>(value); }
    template<typename BaiduT = AndroidPushNotificationTemplate>
    PushNotificationTemplateResponse& WithBaidu(BaiduT&& value) { SetBaidu(std::forward<BaiduT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in ISO 8601 format, when the message template was created.</p>
     */
    inline const Aws::String& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::String>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::String>
    PushNotificationTemplateResponse& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default message template that's used for push notification channels.</p>
     */
    inline const DefaultPushNotificationTemplate& GetDefault() const { return m_default; }
    inline bool DefaultHasBeenSet() const { return m_defaultHasBeenSet; }
    template<typename DefaultT = DefaultPushNotificationTemplate>
    void SetDefault(DefaultT&& value) { m_defaultHasBeenSet = true; m_default = std::forward<DefaultT>(value); }
    template<typename DefaultT = DefaultPushNotificationTemplate>
    PushNotificationTemplateResponse& WithDefault(DefaultT&& value) { SetDefault(std::forward<DefaultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON object that specifies the default values that are used for message
     * variables in the message template. This object is a set of key-value pairs. Each
     * key defines a message variable in the template. The corresponding value defines
     * the default value for that variable.</p>
     */
    inline const Aws::String& GetDefaultSubstitutions() const { return m_defaultSubstitutions; }
    inline bool DefaultSubstitutionsHasBeenSet() const { return m_defaultSubstitutionsHasBeenSet; }
    template<typename DefaultSubstitutionsT = Aws::String>
    void SetDefaultSubstitutions(DefaultSubstitutionsT&& value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions = std::forward<DefaultSubstitutionsT>(value); }
    template<typename DefaultSubstitutionsT = Aws::String>
    PushNotificationTemplateResponse& WithDefaultSubstitutions(DefaultSubstitutionsT&& value) { SetDefaultSubstitutions(std::forward<DefaultSubstitutionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message template that's used for the GCM channel, which is used to send
     * notifications through the Firebase Cloud Messaging (FCM), formerly Google Cloud
     * Messaging (GCM), service. This message template overrides the default template
     * for push notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline const AndroidPushNotificationTemplate& GetGCM() const { return m_gCM; }
    inline bool GCMHasBeenSet() const { return m_gCMHasBeenSet; }
    template<typename GCMT = AndroidPushNotificationTemplate>
    void SetGCM(GCMT&& value) { m_gCMHasBeenSet = true; m_gCM = std::forward<GCMT>(value); }
    template<typename GCMT = AndroidPushNotificationTemplate>
    PushNotificationTemplateResponse& WithGCM(GCMT&& value) { SetGCM(std::forward<GCMT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in ISO 8601 format, when the message template was last
     * modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::String>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::String>
    PushNotificationTemplateResponse& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the recommender model that's used by the message
     * template.</p>
     */
    inline const Aws::String& GetRecommenderId() const { return m_recommenderId; }
    inline bool RecommenderIdHasBeenSet() const { return m_recommenderIdHasBeenSet; }
    template<typename RecommenderIdT = Aws::String>
    void SetRecommenderId(RecommenderIdT&& value) { m_recommenderIdHasBeenSet = true; m_recommenderId = std::forward<RecommenderIdT>(value); }
    template<typename RecommenderIdT = Aws::String>
    PushNotificationTemplateResponse& WithRecommenderId(RecommenderIdT&& value) { SetRecommenderId(std::forward<RecommenderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    PushNotificationTemplateResponse& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    PushNotificationTemplateResponse& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The custom description of the message template.</p>
     */
    inline const Aws::String& GetTemplateDescription() const { return m_templateDescription; }
    inline bool TemplateDescriptionHasBeenSet() const { return m_templateDescriptionHasBeenSet; }
    template<typename TemplateDescriptionT = Aws::String>
    void SetTemplateDescription(TemplateDescriptionT&& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = std::forward<TemplateDescriptionT>(value); }
    template<typename TemplateDescriptionT = Aws::String>
    PushNotificationTemplateResponse& WithTemplateDescription(TemplateDescriptionT&& value) { SetTemplateDescription(std::forward<TemplateDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the message template.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    PushNotificationTemplateResponse& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of channel that the message template is designed for. For a push
     * notification template, this value is PUSH.</p>
     */
    inline TemplateType GetTemplateType() const { return m_templateType; }
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
    inline void SetTemplateType(TemplateType value) { m_templateTypeHasBeenSet = true; m_templateType = value; }
    inline PushNotificationTemplateResponse& WithTemplateType(TemplateType value) { SetTemplateType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier, as an integer, for the active version of the message
     * template, or the version of the template that you specified by using the version
     * parameter in your request.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    PushNotificationTemplateResponse& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}
  private:

    AndroidPushNotificationTemplate m_aDM;
    bool m_aDMHasBeenSet = false;

    APNSPushNotificationTemplate m_aPNS;
    bool m_aPNSHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    AndroidPushNotificationTemplate m_baidu;
    bool m_baiduHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    DefaultPushNotificationTemplate m_default;
    bool m_defaultHasBeenSet = false;

    Aws::String m_defaultSubstitutions;
    bool m_defaultSubstitutionsHasBeenSet = false;

    AndroidPushNotificationTemplate m_gCM;
    bool m_gCMHasBeenSet = false;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_recommenderId;
    bool m_recommenderIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_templateDescription;
    bool m_templateDescriptionHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    TemplateType m_templateType{TemplateType::NOT_SET};
    bool m_templateTypeHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
