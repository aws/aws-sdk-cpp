/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/CampaignEventFilter.h>
#include <aws/pinpoint/model/QuietTime.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Schedule of the campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/InAppCampaignSchedule">AWS
   * API Reference</a></p>
   */
  class InAppCampaignSchedule
  {
  public:
    AWS_PINPOINT_API InAppCampaignSchedule() = default;
    AWS_PINPOINT_API InAppCampaignSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API InAppCampaignSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The scheduled time after which the in-app message should not be shown.
     * Timestamp is in ISO 8601 format.</p>
     */
    inline const Aws::String& GetEndDate() const { return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    template<typename EndDateT = Aws::String>
    void SetEndDate(EndDateT&& value) { m_endDateHasBeenSet = true; m_endDate = std::forward<EndDateT>(value); }
    template<typename EndDateT = Aws::String>
    InAppCampaignSchedule& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event filter the SDK has to use to show the in-app message in the
     * application.</p>
     */
    inline const CampaignEventFilter& GetEventFilter() const { return m_eventFilter; }
    inline bool EventFilterHasBeenSet() const { return m_eventFilterHasBeenSet; }
    template<typename EventFilterT = CampaignEventFilter>
    void SetEventFilter(EventFilterT&& value) { m_eventFilterHasBeenSet = true; m_eventFilter = std::forward<EventFilterT>(value); }
    template<typename EventFilterT = CampaignEventFilter>
    InAppCampaignSchedule& WithEventFilter(EventFilterT&& value) { SetEventFilter(std::forward<EventFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time during which the in-app message should not be shown to the user.</p>
     */
    inline const QuietTime& GetQuietTime() const { return m_quietTime; }
    inline bool QuietTimeHasBeenSet() const { return m_quietTimeHasBeenSet; }
    template<typename QuietTimeT = QuietTime>
    void SetQuietTime(QuietTimeT&& value) { m_quietTimeHasBeenSet = true; m_quietTime = std::forward<QuietTimeT>(value); }
    template<typename QuietTimeT = QuietTime>
    InAppCampaignSchedule& WithQuietTime(QuietTimeT&& value) { SetQuietTime(std::forward<QuietTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endDate;
    bool m_endDateHasBeenSet = false;

    CampaignEventFilter m_eventFilter;
    bool m_eventFilterHasBeenSet = false;

    QuietTime m_quietTime;
    bool m_quietTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
