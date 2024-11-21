/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/notifications/NotificationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/notifications/model/AggregationDuration.h>
#include <utility>

namespace Aws
{
namespace Notifications
{
namespace Model
{

  /**
   */
  class UpdateNotificationConfigurationRequest : public NotificationsRequest
  {
  public:
    AWS_NOTIFICATIONS_API UpdateNotificationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNotificationConfiguration"; }

    AWS_NOTIFICATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) used to update the
     * NotificationConfiguration.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline UpdateNotificationConfigurationRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateNotificationConfigurationRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateNotificationConfigurationRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the NotificationConfiguration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateNotificationConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateNotificationConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateNotificationConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the NotificationConfiguration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateNotificationConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateNotificationConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateNotificationConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this NotificationConfiguration.</p> <p>The status should always
     * be <code>INACTIVE</code> when part of the CreateNotificationConfiguration
     * response.</p> <ul> <li> <p>Values:</p> <ul> <li> <p> <code>ACTIVE</code> </p>
     * <ul> <li> <p>All EventRules are <code>ACTIVE</code> and any call can be run.</p>
     * </li> </ul> </li> <li> <p> <code>PARTIALLY_ACTIVE</code> </p> <ul> <li> <p>Some
     * EventRules are <code>ACTIVE</code> and some are <code>INACTIVE</code>. Any call
     * can be run.</p> </li> <li> <p>Any call can be run.</p> </li> </ul> </li> <li>
     * <p> <code>INACTIVE</code> </p> <ul> <li> <p>All EventRules are
     * <code>INACTIVE</code> and any call can be run.</p> </li> </ul> </li> <li> <p>
     * <code>DELETING</code> </p> <ul> <li> <p>This NotificationConfiguration is being
     * deleted.</p> </li> <li> <p>Only <code>GET</code> and <code>LIST</code> calls can
     * be run.</p> </li> </ul> </li> </ul> </li> </ul>
     */
    inline const AggregationDuration& GetAggregationDuration() const{ return m_aggregationDuration; }
    inline bool AggregationDurationHasBeenSet() const { return m_aggregationDurationHasBeenSet; }
    inline void SetAggregationDuration(const AggregationDuration& value) { m_aggregationDurationHasBeenSet = true; m_aggregationDuration = value; }
    inline void SetAggregationDuration(AggregationDuration&& value) { m_aggregationDurationHasBeenSet = true; m_aggregationDuration = std::move(value); }
    inline UpdateNotificationConfigurationRequest& WithAggregationDuration(const AggregationDuration& value) { SetAggregationDuration(value); return *this;}
    inline UpdateNotificationConfigurationRequest& WithAggregationDuration(AggregationDuration&& value) { SetAggregationDuration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AggregationDuration m_aggregationDuration;
    bool m_aggregationDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
