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
    AWS_SESV2_API Topic();
    AWS_SESV2_API Topic(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Topic& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the topic.</p>
     */
    inline const Aws::String& GetTopicName() const{ return m_topicName; }
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }
    inline void SetTopicName(const Aws::String& value) { m_topicNameHasBeenSet = true; m_topicName = value; }
    inline void SetTopicName(Aws::String&& value) { m_topicNameHasBeenSet = true; m_topicName = std::move(value); }
    inline void SetTopicName(const char* value) { m_topicNameHasBeenSet = true; m_topicName.assign(value); }
    inline Topic& WithTopicName(const Aws::String& value) { SetTopicName(value); return *this;}
    inline Topic& WithTopicName(Aws::String&& value) { SetTopicName(std::move(value)); return *this;}
    inline Topic& WithTopicName(const char* value) { SetTopicName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the topic the contact will see.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline Topic& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline Topic& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline Topic& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of what the topic is about, which the contact will see.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Topic& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Topic& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Topic& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default subscription status to be applied to a contact if the contact has
     * not noted their preference for subscribing to a topic.</p>
     */
    inline const SubscriptionStatus& GetDefaultSubscriptionStatus() const{ return m_defaultSubscriptionStatus; }
    inline bool DefaultSubscriptionStatusHasBeenSet() const { return m_defaultSubscriptionStatusHasBeenSet; }
    inline void SetDefaultSubscriptionStatus(const SubscriptionStatus& value) { m_defaultSubscriptionStatusHasBeenSet = true; m_defaultSubscriptionStatus = value; }
    inline void SetDefaultSubscriptionStatus(SubscriptionStatus&& value) { m_defaultSubscriptionStatusHasBeenSet = true; m_defaultSubscriptionStatus = std::move(value); }
    inline Topic& WithDefaultSubscriptionStatus(const SubscriptionStatus& value) { SetDefaultSubscriptionStatus(value); return *this;}
    inline Topic& WithDefaultSubscriptionStatus(SubscriptionStatus&& value) { SetDefaultSubscriptionStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_topicName;
    bool m_topicNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SubscriptionStatus m_defaultSubscriptionStatus;
    bool m_defaultSubscriptionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
