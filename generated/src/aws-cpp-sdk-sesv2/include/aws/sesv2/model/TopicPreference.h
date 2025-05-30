﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/SubscriptionStatus.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>The contact's preference for being opted-in to or opted-out of a
   * topic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/TopicPreference">AWS
   * API Reference</a></p>
   */
  class TopicPreference
  {
  public:
    AWS_SESV2_API TopicPreference() = default;
    AWS_SESV2_API TopicPreference(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API TopicPreference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the topic.</p>
     */
    inline const Aws::String& GetTopicName() const { return m_topicName; }
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }
    template<typename TopicNameT = Aws::String>
    void SetTopicName(TopicNameT&& value) { m_topicNameHasBeenSet = true; m_topicName = std::forward<TopicNameT>(value); }
    template<typename TopicNameT = Aws::String>
    TopicPreference& WithTopicName(TopicNameT&& value) { SetTopicName(std::forward<TopicNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact's subscription status to a topic which is either
     * <code>OPT_IN</code> or <code>OPT_OUT</code>.</p>
     */
    inline SubscriptionStatus GetSubscriptionStatus() const { return m_subscriptionStatus; }
    inline bool SubscriptionStatusHasBeenSet() const { return m_subscriptionStatusHasBeenSet; }
    inline void SetSubscriptionStatus(SubscriptionStatus value) { m_subscriptionStatusHasBeenSet = true; m_subscriptionStatus = value; }
    inline TopicPreference& WithSubscriptionStatus(SubscriptionStatus value) { SetSubscriptionStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_topicName;
    bool m_topicNameHasBeenSet = false;

    SubscriptionStatus m_subscriptionStatus{SubscriptionStatus::NOT_SET};
    bool m_subscriptionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
