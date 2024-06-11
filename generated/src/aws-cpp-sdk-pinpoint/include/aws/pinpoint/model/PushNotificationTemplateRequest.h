﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/AndroidPushNotificationTemplate.h>
#include <aws/pinpoint/model/APNSPushNotificationTemplate.h>
#include <aws/pinpoint/model/DefaultPushNotificationTemplate.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Specifies the content and settings for a message template that can be used in
   * messages that are sent through a push notification channel.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PushNotificationTemplateRequest">AWS
   * API Reference</a></p>
   */
  class PushNotificationTemplateRequest
  {
  public:
    AWS_PINPOINT_API PushNotificationTemplateRequest();
    AWS_PINPOINT_API PushNotificationTemplateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API PushNotificationTemplateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message template to use for the ADM (Amazon Device Messaging) channel.
     * This message template overrides the default template for push notification
     * channels (DefaultPushNotificationTemplate).</p>
     */
    inline const AndroidPushNotificationTemplate& GetADM() const{ return m_aDM; }
    inline bool ADMHasBeenSet() const { return m_aDMHasBeenSet; }
    inline void SetADM(const AndroidPushNotificationTemplate& value) { m_aDMHasBeenSet = true; m_aDM = value; }
    inline void SetADM(AndroidPushNotificationTemplate&& value) { m_aDMHasBeenSet = true; m_aDM = std::move(value); }
    inline PushNotificationTemplateRequest& WithADM(const AndroidPushNotificationTemplate& value) { SetADM(value); return *this;}
    inline PushNotificationTemplateRequest& WithADM(AndroidPushNotificationTemplate&& value) { SetADM(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message template to use for the APNs (Apple Push Notification service)
     * channel. This message template overrides the default template for push
     * notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline const APNSPushNotificationTemplate& GetAPNS() const{ return m_aPNS; }
    inline bool APNSHasBeenSet() const { return m_aPNSHasBeenSet; }
    inline void SetAPNS(const APNSPushNotificationTemplate& value) { m_aPNSHasBeenSet = true; m_aPNS = value; }
    inline void SetAPNS(APNSPushNotificationTemplate&& value) { m_aPNSHasBeenSet = true; m_aPNS = std::move(value); }
    inline PushNotificationTemplateRequest& WithAPNS(const APNSPushNotificationTemplate& value) { SetAPNS(value); return *this;}
    inline PushNotificationTemplateRequest& WithAPNS(APNSPushNotificationTemplate&& value) { SetAPNS(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message template to use for the Baidu (Baidu Cloud Push) channel. This
     * message template overrides the default template for push notification channels
     * (DefaultPushNotificationTemplate).</p>
     */
    inline const AndroidPushNotificationTemplate& GetBaidu() const{ return m_baidu; }
    inline bool BaiduHasBeenSet() const { return m_baiduHasBeenSet; }
    inline void SetBaidu(const AndroidPushNotificationTemplate& value) { m_baiduHasBeenSet = true; m_baidu = value; }
    inline void SetBaidu(AndroidPushNotificationTemplate&& value) { m_baiduHasBeenSet = true; m_baidu = std::move(value); }
    inline PushNotificationTemplateRequest& WithBaidu(const AndroidPushNotificationTemplate& value) { SetBaidu(value); return *this;}
    inline PushNotificationTemplateRequest& WithBaidu(AndroidPushNotificationTemplate&& value) { SetBaidu(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default message template to use for push notification channels.</p>
     */
    inline const DefaultPushNotificationTemplate& GetDefault() const{ return m_default; }
    inline bool DefaultHasBeenSet() const { return m_defaultHasBeenSet; }
    inline void SetDefault(const DefaultPushNotificationTemplate& value) { m_defaultHasBeenSet = true; m_default = value; }
    inline void SetDefault(DefaultPushNotificationTemplate&& value) { m_defaultHasBeenSet = true; m_default = std::move(value); }
    inline PushNotificationTemplateRequest& WithDefault(const DefaultPushNotificationTemplate& value) { SetDefault(value); return *this;}
    inline PushNotificationTemplateRequest& WithDefault(DefaultPushNotificationTemplate&& value) { SetDefault(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON object that specifies the default values to use for message variables
     * in the message template. This object is a set of key-value pairs. Each key
     * defines a message variable in the template. The corresponding value defines the
     * default value for that variable. When you create a message that's based on the
     * template, you can override these defaults with message-specific and
     * address-specific variables and values.</p>
     */
    inline const Aws::String& GetDefaultSubstitutions() const{ return m_defaultSubstitutions; }
    inline bool DefaultSubstitutionsHasBeenSet() const { return m_defaultSubstitutionsHasBeenSet; }
    inline void SetDefaultSubstitutions(const Aws::String& value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions = value; }
    inline void SetDefaultSubstitutions(Aws::String&& value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions = std::move(value); }
    inline void SetDefaultSubstitutions(const char* value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions.assign(value); }
    inline PushNotificationTemplateRequest& WithDefaultSubstitutions(const Aws::String& value) { SetDefaultSubstitutions(value); return *this;}
    inline PushNotificationTemplateRequest& WithDefaultSubstitutions(Aws::String&& value) { SetDefaultSubstitutions(std::move(value)); return *this;}
    inline PushNotificationTemplateRequest& WithDefaultSubstitutions(const char* value) { SetDefaultSubstitutions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message template to use for the GCM channel, which is used to send
     * notifications through the Firebase Cloud Messaging (FCM), formerly Google Cloud
     * Messaging (GCM), service. This message template overrides the default template
     * for push notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline const AndroidPushNotificationTemplate& GetGCM() const{ return m_gCM; }
    inline bool GCMHasBeenSet() const { return m_gCMHasBeenSet; }
    inline void SetGCM(const AndroidPushNotificationTemplate& value) { m_gCMHasBeenSet = true; m_gCM = value; }
    inline void SetGCM(AndroidPushNotificationTemplate&& value) { m_gCMHasBeenSet = true; m_gCM = std::move(value); }
    inline PushNotificationTemplateRequest& WithGCM(const AndroidPushNotificationTemplate& value) { SetGCM(value); return *this;}
    inline PushNotificationTemplateRequest& WithGCM(AndroidPushNotificationTemplate&& value) { SetGCM(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the recommender model to use for the message
     * template. Amazon Pinpoint uses this value to determine how to retrieve and
     * process data from a recommender model when it sends messages that use the
     * template, if the template contains message variables for recommendation
     * data.</p>
     */
    inline const Aws::String& GetRecommenderId() const{ return m_recommenderId; }
    inline bool RecommenderIdHasBeenSet() const { return m_recommenderIdHasBeenSet; }
    inline void SetRecommenderId(const Aws::String& value) { m_recommenderIdHasBeenSet = true; m_recommenderId = value; }
    inline void SetRecommenderId(Aws::String&& value) { m_recommenderIdHasBeenSet = true; m_recommenderId = std::move(value); }
    inline void SetRecommenderId(const char* value) { m_recommenderIdHasBeenSet = true; m_recommenderId.assign(value); }
    inline PushNotificationTemplateRequest& WithRecommenderId(const Aws::String& value) { SetRecommenderId(value); return *this;}
    inline PushNotificationTemplateRequest& WithRecommenderId(Aws::String&& value) { SetRecommenderId(std::move(value)); return *this;}
    inline PushNotificationTemplateRequest& WithRecommenderId(const char* value) { SetRecommenderId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>As of <b>22-05-2023</b> tags has been deprecated for update operations.
     * After this date any value in tags is not processed and an error code is not
     * returned. To manage tags we recommend using either <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/tags-resource-arn.html">Tags</a>
     * in the <i>API Reference for Amazon Pinpoint</i>, <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/resourcegroupstaggingapi/index.html">resourcegroupstaggingapi</a>
     * commands in the <i>AWS Command Line Interface Documentation</i> or <a
     * href="https://sdk.amazonaws.com/java/api/latest/software/amazon/awssdk/services/resourcegroupstaggingapi/package-summary.html">resourcegroupstaggingapi</a>
     * in the <i>AWS SDK</i>.</p> <p>(Deprecated) A string-to-string map of
     * key-value pairs that defines the tags to associate with the message template.
     * Each tag consists of a required tag key and an associated tag value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline PushNotificationTemplateRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline PushNotificationTemplateRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline PushNotificationTemplateRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline PushNotificationTemplateRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline PushNotificationTemplateRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline PushNotificationTemplateRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline PushNotificationTemplateRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline PushNotificationTemplateRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline PushNotificationTemplateRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A custom description of the message template.</p>
     */
    inline const Aws::String& GetTemplateDescription() const{ return m_templateDescription; }
    inline bool TemplateDescriptionHasBeenSet() const { return m_templateDescriptionHasBeenSet; }
    inline void SetTemplateDescription(const Aws::String& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = value; }
    inline void SetTemplateDescription(Aws::String&& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = std::move(value); }
    inline void SetTemplateDescription(const char* value) { m_templateDescriptionHasBeenSet = true; m_templateDescription.assign(value); }
    inline PushNotificationTemplateRequest& WithTemplateDescription(const Aws::String& value) { SetTemplateDescription(value); return *this;}
    inline PushNotificationTemplateRequest& WithTemplateDescription(Aws::String&& value) { SetTemplateDescription(std::move(value)); return *this;}
    inline PushNotificationTemplateRequest& WithTemplateDescription(const char* value) { SetTemplateDescription(value); return *this;}
    ///@}
  private:

    AndroidPushNotificationTemplate m_aDM;
    bool m_aDMHasBeenSet = false;

    APNSPushNotificationTemplate m_aPNS;
    bool m_aPNSHasBeenSet = false;

    AndroidPushNotificationTemplate m_baidu;
    bool m_baiduHasBeenSet = false;

    DefaultPushNotificationTemplate m_default;
    bool m_defaultHasBeenSet = false;

    Aws::String m_defaultSubstitutions;
    bool m_defaultSubstitutionsHasBeenSet = false;

    AndroidPushNotificationTemplate m_gCM;
    bool m_gCMHasBeenSet = false;

    Aws::String m_recommenderId;
    bool m_recommenderIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_templateDescription;
    bool m_templateDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
