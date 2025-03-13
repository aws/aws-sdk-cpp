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
    AWS_NOTIFICATIONS_API UpdateNotificationConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNotificationConfiguration"; }

    AWS_NOTIFICATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) used to update the
     * <code>NotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateNotificationConfigurationRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>NotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateNotificationConfigurationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the <code>NotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateNotificationConfigurationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    inline AggregationDuration GetAggregationDuration() const { return m_aggregationDuration; }
    inline bool AggregationDurationHasBeenSet() const { return m_aggregationDurationHasBeenSet; }
    inline void SetAggregationDuration(AggregationDuration value) { m_aggregationDurationHasBeenSet = true; m_aggregationDuration = value; }
    inline UpdateNotificationConfigurationRequest& WithAggregationDuration(AggregationDuration value) { SetAggregationDuration(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AggregationDuration m_aggregationDuration{AggregationDuration::NOT_SET};
    bool m_aggregationDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
