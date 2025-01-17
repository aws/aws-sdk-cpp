/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/notifications/model/NotificationConfigurationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/notifications/model/AggregationDuration.h>
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
namespace Notifications
{
namespace Model
{

  /**
   * <p>Contains the complete list of fields for a
   * NotificationConfiguration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/NotificationConfigurationStructure">AWS
   * API Reference</a></p>
   */
  class NotificationConfigurationStructure
  {
  public:
    AWS_NOTIFICATIONS_API NotificationConfigurationStructure();
    AWS_NOTIFICATIONS_API NotificationConfigurationStructure(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API NotificationConfigurationStructure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <code>NotificationConfiguration</code>
     * resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline NotificationConfigurationStructure& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline NotificationConfigurationStructure& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline NotificationConfigurationStructure& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

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
    inline NotificationConfigurationStructure& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline NotificationConfigurationStructure& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline NotificationConfigurationStructure& WithName(const char* value) { SetName(value); return *this;}
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
    inline NotificationConfigurationStructure& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline NotificationConfigurationStructure& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline NotificationConfigurationStructure& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the <code>NotificationConfiguration</code>.</p>
     */
    inline const NotificationConfigurationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const NotificationConfigurationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(NotificationConfigurationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline NotificationConfigurationStructure& WithStatus(const NotificationConfigurationStatus& value) { SetStatus(value); return *this;}
    inline NotificationConfigurationStructure& WithStatus(NotificationConfigurationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the <code>NotificationConfiguration</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline NotificationConfigurationStructure& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline NotificationConfigurationStructure& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
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
    inline NotificationConfigurationStructure& WithAggregationDuration(const AggregationDuration& value) { SetAggregationDuration(value); return *this;}
    inline NotificationConfigurationStructure& WithAggregationDuration(AggregationDuration&& value) { SetAggregationDuration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    NotificationConfigurationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    AggregationDuration m_aggregationDuration;
    bool m_aggregationDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
