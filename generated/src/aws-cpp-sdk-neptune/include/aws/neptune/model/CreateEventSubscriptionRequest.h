﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class CreateEventSubscriptionRequest : public NeptuneRequest
  {
  public:
    AWS_NEPTUNE_API CreateEventSubscriptionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEventSubscription"; }

    AWS_NEPTUNE_API Aws::String SerializePayload() const override;

  protected:
    AWS_NEPTUNE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the subscription.</p> <p>Constraints: The name must be less than
     * 255 characters.</p>
     */
    inline const Aws::String& GetSubscriptionName() const { return m_subscriptionName; }
    inline bool SubscriptionNameHasBeenSet() const { return m_subscriptionNameHasBeenSet; }
    template<typename SubscriptionNameT = Aws::String>
    void SetSubscriptionName(SubscriptionNameT&& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = std::forward<SubscriptionNameT>(value); }
    template<typename SubscriptionNameT = Aws::String>
    CreateEventSubscriptionRequest& WithSubscriptionName(SubscriptionNameT&& value) { SetSubscriptionName(std::forward<SubscriptionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic created for event
     * notification. The ARN is created by Amazon SNS when you create a topic and
     * subscribe to it.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const { return m_snsTopicArn; }
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }
    template<typename SnsTopicArnT = Aws::String>
    void SetSnsTopicArn(SnsTopicArnT&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::forward<SnsTopicArnT>(value); }
    template<typename SnsTopicArnT = Aws::String>
    CreateEventSubscriptionRequest& WithSnsTopicArn(SnsTopicArnT&& value) { SetSnsTopicArn(std::forward<SnsTopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of source that is generating the events. For example, if you want to
     * be notified of events generated by a DB instance, you would set this parameter
     * to db-instance. if this value is not specified, all events are returned.</p>
     * <p>Valid values: <code>db-instance</code> | <code>db-cluster</code> |
     * <code>db-parameter-group</code> | <code>db-security-group</code> |
     * <code>db-snapshot</code> | <code>db-cluster-snapshot</code> </p>
     */
    inline const Aws::String& GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    template<typename SourceTypeT = Aws::String>
    void SetSourceType(SourceTypeT&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::forward<SourceTypeT>(value); }
    template<typename SourceTypeT = Aws::String>
    CreateEventSubscriptionRequest& WithSourceType(SourceTypeT&& value) { SetSourceType(std::forward<SourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of event categories for a SourceType that you want to subscribe to.
     * You can see a list of the categories for a given SourceType by using the
     * <b>DescribeEventCategories</b> action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventCategories() const { return m_eventCategories; }
    inline bool EventCategoriesHasBeenSet() const { return m_eventCategoriesHasBeenSet; }
    template<typename EventCategoriesT = Aws::Vector<Aws::String>>
    void SetEventCategories(EventCategoriesT&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = std::forward<EventCategoriesT>(value); }
    template<typename EventCategoriesT = Aws::Vector<Aws::String>>
    CreateEventSubscriptionRequest& WithEventCategories(EventCategoriesT&& value) { SetEventCategories(std::forward<EventCategoriesT>(value)); return *this;}
    template<typename EventCategoriesT = Aws::String>
    CreateEventSubscriptionRequest& AddEventCategories(EventCategoriesT&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.emplace_back(std::forward<EventCategoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of identifiers of the event sources for which events are returned.
     * If not specified, then all sources are included in the response. An identifier
     * must begin with a letter and must contain only ASCII letters, digits, and
     * hyphens; it can't end with a hyphen or contain two consecutive hyphens.</p>
     * <p>Constraints:</p> <ul> <li> <p>If SourceIds are supplied, SourceType must also
     * be provided.</p> </li> <li> <p>If the source type is a DB instance, then a
     * <code>DBInstanceIdentifier</code> must be supplied.</p> </li> <li> <p>If the
     * source type is a DB security group, a <code>DBSecurityGroupName</code> must be
     * supplied.</p> </li> <li> <p>If the source type is a DB parameter group, a
     * <code>DBParameterGroupName</code> must be supplied.</p> </li> <li> <p>If the
     * source type is a DB snapshot, a <code>DBSnapshotIdentifier</code> must be
     * supplied.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetSourceIds() const { return m_sourceIds; }
    inline bool SourceIdsHasBeenSet() const { return m_sourceIdsHasBeenSet; }
    template<typename SourceIdsT = Aws::Vector<Aws::String>>
    void SetSourceIds(SourceIdsT&& value) { m_sourceIdsHasBeenSet = true; m_sourceIds = std::forward<SourceIdsT>(value); }
    template<typename SourceIdsT = Aws::Vector<Aws::String>>
    CreateEventSubscriptionRequest& WithSourceIds(SourceIdsT&& value) { SetSourceIds(std::forward<SourceIdsT>(value)); return *this;}
    template<typename SourceIdsT = Aws::String>
    CreateEventSubscriptionRequest& AddSourceIds(SourceIdsT&& value) { m_sourceIdsHasBeenSet = true; m_sourceIds.emplace_back(std::forward<SourceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A Boolean value; set to <b>true</b> to activate the subscription, set to
     * <b>false</b> to create the subscription but not active it.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline CreateEventSubscriptionRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to be applied to the new event subscription.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateEventSubscriptionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateEventSubscriptionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_subscriptionName;
    bool m_subscriptionNameHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventCategories;
    bool m_eventCategoriesHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceIds;
    bool m_sourceIdsHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
