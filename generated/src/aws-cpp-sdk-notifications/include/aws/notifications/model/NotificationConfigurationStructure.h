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
#include <aws/notifications/model/NotificationConfigurationSubtype.h>
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
    AWS_NOTIFICATIONS_API NotificationConfigurationStructure() = default;
    AWS_NOTIFICATIONS_API NotificationConfigurationStructure(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API NotificationConfigurationStructure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <code>NotificationConfiguration</code>
     * resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    NotificationConfigurationStructure& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>NotificationConfiguration</code>. Supports RFC 3986's
     * unreserved characters.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    NotificationConfigurationStructure& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    NotificationConfigurationStructure& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the <code>NotificationConfiguration</code>.</p>
     */
    inline NotificationConfigurationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(NotificationConfigurationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline NotificationConfigurationStructure& WithStatus(NotificationConfigurationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the <code>NotificationConfiguration</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    NotificationConfigurationStructure& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    inline NotificationConfigurationStructure& WithAggregationDuration(AggregationDuration value) { SetAggregationDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subtype of the notification configuration.</p>
     */
    inline NotificationConfigurationSubtype GetSubtype() const { return m_subtype; }
    inline bool SubtypeHasBeenSet() const { return m_subtypeHasBeenSet; }
    inline void SetSubtype(NotificationConfigurationSubtype value) { m_subtypeHasBeenSet = true; m_subtype = value; }
    inline NotificationConfigurationStructure& WithSubtype(NotificationConfigurationSubtype value) { SetSubtype(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    NotificationConfigurationStatus m_status{NotificationConfigurationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    AggregationDuration m_aggregationDuration{AggregationDuration::NOT_SET};
    bool m_aggregationDurationHasBeenSet = false;

    NotificationConfigurationSubtype m_subtype{NotificationConfigurationSubtype::NOT_SET};
    bool m_subtypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
