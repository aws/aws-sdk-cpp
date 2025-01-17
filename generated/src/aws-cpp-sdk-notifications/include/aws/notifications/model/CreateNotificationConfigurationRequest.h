/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/notifications/NotificationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/notifications/model/AggregationDuration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Notifications
{
namespace Model
{

  /**
   */
  class CreateNotificationConfigurationRequest : public NotificationsRequest
  {
  public:
    AWS_NOTIFICATIONS_API CreateNotificationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNotificationConfiguration"; }

    AWS_NOTIFICATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the <code>NotificationConfiguration</code>. Supports RFC 3986's
     * unreserved characters.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateNotificationConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateNotificationConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateNotificationConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the <code>NotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateNotificationConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateNotificationConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateNotificationConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation preference of the <code>NotificationConfiguration</code>.</p>
     * <ul> <li> <p>Values:</p> <ul> <li> <p> <code>LONG</code> </p> <ul> <li>
     * <p>Aggregate notifications for long periods of time (12 hours).</p> </li> </ul>
     * </li> <li> <p> <code>SHORT</code> </p> <ul> <li> <p>Aggregate notifications for
     * short periods of time (5 minutes).</p> </li> </ul> </li> <li> <p>
     * <code>NONE</code> </p> <ul> <li> <p>Don't aggregate notifications.</p> </li>
     * </ul> </li> </ul> </li> </ul>
     */
    inline const AggregationDuration& GetAggregationDuration() const{ return m_aggregationDuration; }
    inline bool AggregationDurationHasBeenSet() const { return m_aggregationDurationHasBeenSet; }
    inline void SetAggregationDuration(const AggregationDuration& value) { m_aggregationDurationHasBeenSet = true; m_aggregationDuration = value; }
    inline void SetAggregationDuration(AggregationDuration&& value) { m_aggregationDurationHasBeenSet = true; m_aggregationDuration = std::move(value); }
    inline CreateNotificationConfigurationRequest& WithAggregationDuration(const AggregationDuration& value) { SetAggregationDuration(value); return *this;}
    inline CreateNotificationConfigurationRequest& WithAggregationDuration(AggregationDuration&& value) { SetAggregationDuration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of tags assigned to a resource. A tag is a string-to-string map of
     * key-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateNotificationConfigurationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateNotificationConfigurationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateNotificationConfigurationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateNotificationConfigurationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateNotificationConfigurationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateNotificationConfigurationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateNotificationConfigurationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateNotificationConfigurationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateNotificationConfigurationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AggregationDuration m_aggregationDuration;
    bool m_aggregationDurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
