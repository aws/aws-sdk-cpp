﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class ModifyEventSubscriptionRequest : public NeptuneRequest
  {
  public:
    AWS_NEPTUNE_API ModifyEventSubscriptionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyEventSubscription"; }

    AWS_NEPTUNE_API Aws::String SerializePayload() const override;

  protected:
    AWS_NEPTUNE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the event notification subscription.</p>
     */
    inline const Aws::String& GetSubscriptionName() const { return m_subscriptionName; }
    inline bool SubscriptionNameHasBeenSet() const { return m_subscriptionNameHasBeenSet; }
    template<typename SubscriptionNameT = Aws::String>
    void SetSubscriptionName(SubscriptionNameT&& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = std::forward<SubscriptionNameT>(value); }
    template<typename SubscriptionNameT = Aws::String>
    ModifyEventSubscriptionRequest& WithSubscriptionName(SubscriptionNameT&& value) { SetSubscriptionName(std::forward<SubscriptionNameT>(value)); return *this;}
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
    ModifyEventSubscriptionRequest& WithSnsTopicArn(SnsTopicArnT&& value) { SetSnsTopicArn(std::forward<SnsTopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of source that is generating the events. For example, if you want to
     * be notified of events generated by a DB instance, you would set this parameter
     * to db-instance. if this value is not specified, all events are returned.</p>
     * <p>Valid values: db-instance | db-parameter-group | db-security-group |
     * db-snapshot</p>
     */
    inline const Aws::String& GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    template<typename SourceTypeT = Aws::String>
    void SetSourceType(SourceTypeT&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::forward<SourceTypeT>(value); }
    template<typename SourceTypeT = Aws::String>
    ModifyEventSubscriptionRequest& WithSourceType(SourceTypeT&& value) { SetSourceType(std::forward<SourceTypeT>(value)); return *this;}
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
    ModifyEventSubscriptionRequest& WithEventCategories(EventCategoriesT&& value) { SetEventCategories(std::forward<EventCategoriesT>(value)); return *this;}
    template<typename EventCategoriesT = Aws::String>
    ModifyEventSubscriptionRequest& AddEventCategories(EventCategoriesT&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.emplace_back(std::forward<EventCategoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A Boolean value; set to <b>true</b> to activate the subscription.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ModifyEventSubscriptionRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
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

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
