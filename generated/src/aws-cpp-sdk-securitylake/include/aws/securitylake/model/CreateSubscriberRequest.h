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
    AWS_SECURITYLAKE_API CreateSubscriberRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSubscriber"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon S3 or Lake Formation access type.</p>
     */
    inline const Aws::Vector<AccessType>& GetAccessTypes() const { return m_accessTypes; }
    inline bool AccessTypesHasBeenSet() const { return m_accessTypesHasBeenSet; }
    template<typename AccessTypesT = Aws::Vector<AccessType>>
    void SetAccessTypes(AccessTypesT&& value) { m_accessTypesHasBeenSet = true; m_accessTypes = std::forward<AccessTypesT>(value); }
    template<typename AccessTypesT = Aws::Vector<AccessType>>
    CreateSubscriberRequest& WithAccessTypes(AccessTypesT&& value) { SetAccessTypes(std::forward<AccessTypesT>(value)); return *this;}
    inline CreateSubscriberRequest& AddAccessTypes(AccessType value) { m_accessTypesHasBeenSet = true; m_accessTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Security Lake supports log and event collection for natively
     * supported Amazon Web Services services.</p>
     */
    inline const Aws::Vector<LogSourceResource>& GetSources() const { return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    template<typename SourcesT = Aws::Vector<LogSourceResource>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<LogSourceResource>>
    CreateSubscriberRequest& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = LogSourceResource>
    CreateSubscriberRequest& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description for your subscriber account in Security Lake.</p>
     */
    inline const Aws::String& GetSubscriberDescription() const { return m_subscriberDescription; }
    inline bool SubscriberDescriptionHasBeenSet() const { return m_subscriberDescriptionHasBeenSet; }
    template<typename SubscriberDescriptionT = Aws::String>
    void SetSubscriberDescription(SubscriberDescriptionT&& value) { m_subscriberDescriptionHasBeenSet = true; m_subscriberDescription = std::forward<SubscriberDescriptionT>(value); }
    template<typename SubscriberDescriptionT = Aws::String>
    CreateSubscriberRequest& WithSubscriberDescription(SubscriberDescriptionT&& value) { SetSubscriberDescription(std::forward<SubscriberDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services identity used to access your data.</p>
     */
    inline const AwsIdentity& GetSubscriberIdentity() const { return m_subscriberIdentity; }
    inline bool SubscriberIdentityHasBeenSet() const { return m_subscriberIdentityHasBeenSet; }
    template<typename SubscriberIdentityT = AwsIdentity>
    void SetSubscriberIdentity(SubscriberIdentityT&& value) { m_subscriberIdentityHasBeenSet = true; m_subscriberIdentity = std::forward<SubscriberIdentityT>(value); }
    template<typename SubscriberIdentityT = AwsIdentity>
    CreateSubscriberRequest& WithSubscriberIdentity(SubscriberIdentityT&& value) { SetSubscriberIdentity(std::forward<SubscriberIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your Security Lake subscriber account.</p>
     */
    inline const Aws::String& GetSubscriberName() const { return m_subscriberName; }
    inline bool SubscriberNameHasBeenSet() const { return m_subscriberNameHasBeenSet; }
    template<typename SubscriberNameT = Aws::String>
    void SetSubscriberName(SubscriberNameT&& value) { m_subscriberNameHasBeenSet = true; m_subscriberName = std::forward<SubscriberNameT>(value); }
    template<typename SubscriberNameT = Aws::String>
    CreateSubscriberRequest& WithSubscriberName(SubscriberNameT&& value) { SetSubscriberName(std::forward<SubscriberNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects, one for each tag to associate with the subscriber. For
     * each tag, you must specify both a tag key and a tag value. A tag value cannot be
     * null, but it can be an empty string.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateSubscriberRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateSubscriberRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
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
