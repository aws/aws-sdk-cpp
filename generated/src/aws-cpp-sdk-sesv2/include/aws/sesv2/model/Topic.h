/**
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
   * <p>An interest group, theme, or label within a list. Lists can have multiple
   * topics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/Topic">AWS API
   * Reference</a></p>
   */
  class Topic
  {
  public:
    AWS_SESV2_API Topic() = default;
    AWS_SESV2_API Topic(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Topic& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    Topic& WithTopicName(TopicNameT&& value) { SetTopicName(std::forward<TopicNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the topic the contact will see.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    Topic& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of what the topic is about, which the contact will see.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Topic& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default subscription status to be applied to a contact if the contact has
     * not noted their preference for subscribing to a topic.</p>
     */
    inline SubscriptionStatus GetDefaultSubscriptionStatus() const { return m_defaultSubscriptionStatus; }
    inline bool DefaultSubscriptionStatusHasBeenSet() const { return m_defaultSubscriptionStatusHasBeenSet; }
    inline void SetDefaultSubscriptionStatus(SubscriptionStatus value) { m_defaultSubscriptionStatusHasBeenSet = true; m_defaultSubscriptionStatus = value; }
    inline Topic& WithDefaultSubscriptionStatus(SubscriptionStatus value) { SetDefaultSubscriptionStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_topicName;
    bool m_topicNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SubscriptionStatus m_defaultSubscriptionStatus{SubscriptionStatus::NOT_SET};
    bool m_defaultSubscriptionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
