/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/AwsIdentity.h>
#include <aws/securitylake/model/AccessType.h>
#include <aws/securitylake/model/LogSourceResource.h>
#include <aws/securitylake/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class CreateSubscriberRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API CreateSubscriberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSubscriber"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon S3 or Lake Formation access type.</p>
     */
    inline const Aws::Vector<AccessType>& GetAccessTypes() const{ return m_accessTypes; }

    /**
     * <p>The Amazon S3 or Lake Formation access type.</p>
     */
    inline bool AccessTypesHasBeenSet() const { return m_accessTypesHasBeenSet; }

    /**
     * <p>The Amazon S3 or Lake Formation access type.</p>
     */
    inline void SetAccessTypes(const Aws::Vector<AccessType>& value) { m_accessTypesHasBeenSet = true; m_accessTypes = value; }

    /**
     * <p>The Amazon S3 or Lake Formation access type.</p>
     */
    inline void SetAccessTypes(Aws::Vector<AccessType>&& value) { m_accessTypesHasBeenSet = true; m_accessTypes = std::move(value); }

    /**
     * <p>The Amazon S3 or Lake Formation access type.</p>
     */
    inline CreateSubscriberRequest& WithAccessTypes(const Aws::Vector<AccessType>& value) { SetAccessTypes(value); return *this;}

    /**
     * <p>The Amazon S3 or Lake Formation access type.</p>
     */
    inline CreateSubscriberRequest& WithAccessTypes(Aws::Vector<AccessType>&& value) { SetAccessTypes(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 or Lake Formation access type.</p>
     */
    inline CreateSubscriberRequest& AddAccessTypes(const AccessType& value) { m_accessTypesHasBeenSet = true; m_accessTypes.push_back(value); return *this; }

    /**
     * <p>The Amazon S3 or Lake Formation access type.</p>
     */
    inline CreateSubscriberRequest& AddAccessTypes(AccessType&& value) { m_accessTypesHasBeenSet = true; m_accessTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * Security Lake supports log and event collection for natively supported Amazon
     * Web Services.</p>
     */
    inline const Aws::Vector<LogSourceResource>& GetSources() const{ return m_sources; }

    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * Security Lake supports log and event collection for natively supported Amazon
     * Web Services.</p>
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * Security Lake supports log and event collection for natively supported Amazon
     * Web Services.</p>
     */
    inline void SetSources(const Aws::Vector<LogSourceResource>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * Security Lake supports log and event collection for natively supported Amazon
     * Web Services.</p>
     */
    inline void SetSources(Aws::Vector<LogSourceResource>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * Security Lake supports log and event collection for natively supported Amazon
     * Web Services.</p>
     */
    inline CreateSubscriberRequest& WithSources(const Aws::Vector<LogSourceResource>& value) { SetSources(value); return *this;}

    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * Security Lake supports log and event collection for natively supported Amazon
     * Web Services.</p>
     */
    inline CreateSubscriberRequest& WithSources(Aws::Vector<LogSourceResource>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * Security Lake supports log and event collection for natively supported Amazon
     * Web Services.</p>
     */
    inline CreateSubscriberRequest& AddSources(const LogSourceResource& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * Security Lake supports log and event collection for natively supported Amazon
     * Web Services.</p>
     */
    inline CreateSubscriberRequest& AddSources(LogSourceResource&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }


    /**
     * <p>The description for your subscriber account in Security Lake.</p>
     */
    inline const Aws::String& GetSubscriberDescription() const{ return m_subscriberDescription; }

    /**
     * <p>The description for your subscriber account in Security Lake.</p>
     */
    inline bool SubscriberDescriptionHasBeenSet() const { return m_subscriberDescriptionHasBeenSet; }

    /**
     * <p>The description for your subscriber account in Security Lake.</p>
     */
    inline void SetSubscriberDescription(const Aws::String& value) { m_subscriberDescriptionHasBeenSet = true; m_subscriberDescription = value; }

    /**
     * <p>The description for your subscriber account in Security Lake.</p>
     */
    inline void SetSubscriberDescription(Aws::String&& value) { m_subscriberDescriptionHasBeenSet = true; m_subscriberDescription = std::move(value); }

    /**
     * <p>The description for your subscriber account in Security Lake.</p>
     */
    inline void SetSubscriberDescription(const char* value) { m_subscriberDescriptionHasBeenSet = true; m_subscriberDescription.assign(value); }

    /**
     * <p>The description for your subscriber account in Security Lake.</p>
     */
    inline CreateSubscriberRequest& WithSubscriberDescription(const Aws::String& value) { SetSubscriberDescription(value); return *this;}

    /**
     * <p>The description for your subscriber account in Security Lake.</p>
     */
    inline CreateSubscriberRequest& WithSubscriberDescription(Aws::String&& value) { SetSubscriberDescription(std::move(value)); return *this;}

    /**
     * <p>The description for your subscriber account in Security Lake.</p>
     */
    inline CreateSubscriberRequest& WithSubscriberDescription(const char* value) { SetSubscriberDescription(value); return *this;}


    /**
     * <p>The AWS identity used to access your data.</p>
     */
    inline const AwsIdentity& GetSubscriberIdentity() const{ return m_subscriberIdentity; }

    /**
     * <p>The AWS identity used to access your data.</p>
     */
    inline bool SubscriberIdentityHasBeenSet() const { return m_subscriberIdentityHasBeenSet; }

    /**
     * <p>The AWS identity used to access your data.</p>
     */
    inline void SetSubscriberIdentity(const AwsIdentity& value) { m_subscriberIdentityHasBeenSet = true; m_subscriberIdentity = value; }

    /**
     * <p>The AWS identity used to access your data.</p>
     */
    inline void SetSubscriberIdentity(AwsIdentity&& value) { m_subscriberIdentityHasBeenSet = true; m_subscriberIdentity = std::move(value); }

    /**
     * <p>The AWS identity used to access your data.</p>
     */
    inline CreateSubscriberRequest& WithSubscriberIdentity(const AwsIdentity& value) { SetSubscriberIdentity(value); return *this;}

    /**
     * <p>The AWS identity used to access your data.</p>
     */
    inline CreateSubscriberRequest& WithSubscriberIdentity(AwsIdentity&& value) { SetSubscriberIdentity(std::move(value)); return *this;}


    /**
     * <p>The name of your Security Lake subscriber account.</p>
     */
    inline const Aws::String& GetSubscriberName() const{ return m_subscriberName; }

    /**
     * <p>The name of your Security Lake subscriber account.</p>
     */
    inline bool SubscriberNameHasBeenSet() const { return m_subscriberNameHasBeenSet; }

    /**
     * <p>The name of your Security Lake subscriber account.</p>
     */
    inline void SetSubscriberName(const Aws::String& value) { m_subscriberNameHasBeenSet = true; m_subscriberName = value; }

    /**
     * <p>The name of your Security Lake subscriber account.</p>
     */
    inline void SetSubscriberName(Aws::String&& value) { m_subscriberNameHasBeenSet = true; m_subscriberName = std::move(value); }

    /**
     * <p>The name of your Security Lake subscriber account.</p>
     */
    inline void SetSubscriberName(const char* value) { m_subscriberNameHasBeenSet = true; m_subscriberName.assign(value); }

    /**
     * <p>The name of your Security Lake subscriber account.</p>
     */
    inline CreateSubscriberRequest& WithSubscriberName(const Aws::String& value) { SetSubscriberName(value); return *this;}

    /**
     * <p>The name of your Security Lake subscriber account.</p>
     */
    inline CreateSubscriberRequest& WithSubscriberName(Aws::String&& value) { SetSubscriberName(std::move(value)); return *this;}

    /**
     * <p>The name of your Security Lake subscriber account.</p>
     */
    inline CreateSubscriberRequest& WithSubscriberName(const char* value) { SetSubscriberName(value); return *this;}


    /**
     * <p>An array of objects, one for each tag to associate with the subscriber. For
     * each tag, you must specify both a tag key and a tag value. A tag value cannot be
     * null, but it can be an empty string.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of objects, one for each tag to associate with the subscriber. For
     * each tag, you must specify both a tag key and a tag value. A tag value cannot be
     * null, but it can be an empty string.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of objects, one for each tag to associate with the subscriber. For
     * each tag, you must specify both a tag key and a tag value. A tag value cannot be
     * null, but it can be an empty string.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of objects, one for each tag to associate with the subscriber. For
     * each tag, you must specify both a tag key and a tag value. A tag value cannot be
     * null, but it can be an empty string.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of objects, one for each tag to associate with the subscriber. For
     * each tag, you must specify both a tag key and a tag value. A tag value cannot be
     * null, but it can be an empty string.</p>
     */
    inline CreateSubscriberRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of objects, one for each tag to associate with the subscriber. For
     * each tag, you must specify both a tag key and a tag value. A tag value cannot be
     * null, but it can be an empty string.</p>
     */
    inline CreateSubscriberRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each tag to associate with the subscriber. For
     * each tag, you must specify both a tag key and a tag value. A tag value cannot be
     * null, but it can be an empty string.</p>
     */
    inline CreateSubscriberRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each tag to associate with the subscriber. For
     * each tag, you must specify both a tag key and a tag value. A tag value cannot be
     * null, but it can be an empty string.</p>
     */
    inline CreateSubscriberRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AccessType> m_accessTypes;
    bool m_accessTypesHasBeenSet = false;

    Aws::Vector<LogSourceResource> m_sources;
    bool m_sourcesHasBeenSet = false;

    Aws::String m_subscriberDescription;
    bool m_subscriberDescriptionHasBeenSet = false;

    AwsIdentity m_subscriberIdentity;
    bool m_subscriberIdentityHasBeenSet = false;

    Aws::String m_subscriberName;
    bool m_subscriberNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
