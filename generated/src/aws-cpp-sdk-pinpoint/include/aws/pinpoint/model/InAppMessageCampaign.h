/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/InAppMessage.h>
#include <aws/pinpoint/model/InAppCampaignSchedule.h>
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
   * <p>Targeted in-app message campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/InAppMessageCampaign">AWS
   * API Reference</a></p>
   */
  class InAppMessageCampaign
  {
  public:
    AWS_PINPOINT_API InAppMessageCampaign() = default;
    AWS_PINPOINT_API InAppMessageCampaign(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API InAppMessageCampaign& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Campaign id of the corresponding campaign.</p>
     */
    inline const Aws::String& GetCampaignId() const { return m_campaignId; }
    inline bool CampaignIdHasBeenSet() const { return m_campaignIdHasBeenSet; }
    template<typename CampaignIdT = Aws::String>
    void SetCampaignId(CampaignIdT&& value) { m_campaignIdHasBeenSet = true; m_campaignId = std::forward<CampaignIdT>(value); }
    template<typename CampaignIdT = Aws::String>
    InAppMessageCampaign& WithCampaignId(CampaignIdT&& value) { SetCampaignId(std::forward<CampaignIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Daily cap which controls the number of times any in-app messages can be shown
     * to the endpoint during a day.</p>
     */
    inline int GetDailyCap() const { return m_dailyCap; }
    inline bool DailyCapHasBeenSet() const { return m_dailyCapHasBeenSet; }
    inline void SetDailyCap(int value) { m_dailyCapHasBeenSet = true; m_dailyCap = value; }
    inline InAppMessageCampaign& WithDailyCap(int value) { SetDailyCap(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>In-app message content with all fields required for rendering an in-app
     * message.</p>
     */
    inline const InAppMessage& GetInAppMessage() const { return m_inAppMessage; }
    inline bool InAppMessageHasBeenSet() const { return m_inAppMessageHasBeenSet; }
    template<typename InAppMessageT = InAppMessage>
    void SetInAppMessage(InAppMessageT&& value) { m_inAppMessageHasBeenSet = true; m_inAppMessage = std::forward<InAppMessageT>(value); }
    template<typename InAppMessageT = InAppMessage>
    InAppMessageCampaign& WithInAppMessage(InAppMessageT&& value) { SetInAppMessage(std::forward<InAppMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Priority of the in-app message.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline InAppMessageCampaign& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Schedule of the campaign.</p>
     */
    inline const InAppCampaignSchedule& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = InAppCampaignSchedule>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = InAppCampaignSchedule>
    InAppMessageCampaign& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Session cap which controls the number of times an in-app message can be shown
     * to the endpoint during an application session.</p>
     */
    inline int GetSessionCap() const { return m_sessionCap; }
    inline bool SessionCapHasBeenSet() const { return m_sessionCapHasBeenSet; }
    inline void SetSessionCap(int value) { m_sessionCapHasBeenSet = true; m_sessionCap = value; }
    inline InAppMessageCampaign& WithSessionCap(int value) { SetSessionCap(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total cap which controls the number of times an in-app message can be shown
     * to the endpoint.</p>
     */
    inline int GetTotalCap() const { return m_totalCap; }
    inline bool TotalCapHasBeenSet() const { return m_totalCapHasBeenSet; }
    inline void SetTotalCap(int value) { m_totalCapHasBeenSet = true; m_totalCap = value; }
    inline InAppMessageCampaign& WithTotalCap(int value) { SetTotalCap(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Treatment id of the campaign.</p>
     */
    inline const Aws::String& GetTreatmentId() const { return m_treatmentId; }
    inline bool TreatmentIdHasBeenSet() const { return m_treatmentIdHasBeenSet; }
    template<typename TreatmentIdT = Aws::String>
    void SetTreatmentId(TreatmentIdT&& value) { m_treatmentIdHasBeenSet = true; m_treatmentId = std::forward<TreatmentIdT>(value); }
    template<typename TreatmentIdT = Aws::String>
    InAppMessageCampaign& WithTreatmentId(TreatmentIdT&& value) { SetTreatmentId(std::forward<TreatmentIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_campaignId;
    bool m_campaignIdHasBeenSet = false;

    int m_dailyCap{0};
    bool m_dailyCapHasBeenSet = false;

    InAppMessage m_inAppMessage;
    bool m_inAppMessageHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    InAppCampaignSchedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    int m_sessionCap{0};
    bool m_sessionCapHasBeenSet = false;

    int m_totalCap{0};
    bool m_totalCapHasBeenSet = false;

    Aws::String m_treatmentId;
    bool m_treatmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
