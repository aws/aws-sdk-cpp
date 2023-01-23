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
    AWS_PINPOINT_API InAppMessageCampaign();
    AWS_PINPOINT_API InAppMessageCampaign(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API InAppMessageCampaign& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Campaign id of the corresponding campaign.</p>
     */
    inline const Aws::String& GetCampaignId() const{ return m_campaignId; }

    /**
     * <p>Campaign id of the corresponding campaign.</p>
     */
    inline bool CampaignIdHasBeenSet() const { return m_campaignIdHasBeenSet; }

    /**
     * <p>Campaign id of the corresponding campaign.</p>
     */
    inline void SetCampaignId(const Aws::String& value) { m_campaignIdHasBeenSet = true; m_campaignId = value; }

    /**
     * <p>Campaign id of the corresponding campaign.</p>
     */
    inline void SetCampaignId(Aws::String&& value) { m_campaignIdHasBeenSet = true; m_campaignId = std::move(value); }

    /**
     * <p>Campaign id of the corresponding campaign.</p>
     */
    inline void SetCampaignId(const char* value) { m_campaignIdHasBeenSet = true; m_campaignId.assign(value); }

    /**
     * <p>Campaign id of the corresponding campaign.</p>
     */
    inline InAppMessageCampaign& WithCampaignId(const Aws::String& value) { SetCampaignId(value); return *this;}

    /**
     * <p>Campaign id of the corresponding campaign.</p>
     */
    inline InAppMessageCampaign& WithCampaignId(Aws::String&& value) { SetCampaignId(std::move(value)); return *this;}

    /**
     * <p>Campaign id of the corresponding campaign.</p>
     */
    inline InAppMessageCampaign& WithCampaignId(const char* value) { SetCampaignId(value); return *this;}


    /**
     * <p>Daily cap which controls the number of times any in-app messages can be shown
     * to the endpoint during a day.</p>
     */
    inline int GetDailyCap() const{ return m_dailyCap; }

    /**
     * <p>Daily cap which controls the number of times any in-app messages can be shown
     * to the endpoint during a day.</p>
     */
    inline bool DailyCapHasBeenSet() const { return m_dailyCapHasBeenSet; }

    /**
     * <p>Daily cap which controls the number of times any in-app messages can be shown
     * to the endpoint during a day.</p>
     */
    inline void SetDailyCap(int value) { m_dailyCapHasBeenSet = true; m_dailyCap = value; }

    /**
     * <p>Daily cap which controls the number of times any in-app messages can be shown
     * to the endpoint during a day.</p>
     */
    inline InAppMessageCampaign& WithDailyCap(int value) { SetDailyCap(value); return *this;}


    /**
     * <p>In-app message content with all fields required for rendering an in-app
     * message.</p>
     */
    inline const InAppMessage& GetInAppMessage() const{ return m_inAppMessage; }

    /**
     * <p>In-app message content with all fields required for rendering an in-app
     * message.</p>
     */
    inline bool InAppMessageHasBeenSet() const { return m_inAppMessageHasBeenSet; }

    /**
     * <p>In-app message content with all fields required for rendering an in-app
     * message.</p>
     */
    inline void SetInAppMessage(const InAppMessage& value) { m_inAppMessageHasBeenSet = true; m_inAppMessage = value; }

    /**
     * <p>In-app message content with all fields required for rendering an in-app
     * message.</p>
     */
    inline void SetInAppMessage(InAppMessage&& value) { m_inAppMessageHasBeenSet = true; m_inAppMessage = std::move(value); }

    /**
     * <p>In-app message content with all fields required for rendering an in-app
     * message.</p>
     */
    inline InAppMessageCampaign& WithInAppMessage(const InAppMessage& value) { SetInAppMessage(value); return *this;}

    /**
     * <p>In-app message content with all fields required for rendering an in-app
     * message.</p>
     */
    inline InAppMessageCampaign& WithInAppMessage(InAppMessage&& value) { SetInAppMessage(std::move(value)); return *this;}


    /**
     * <p>Priority of the in-app message.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>Priority of the in-app message.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>Priority of the in-app message.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>Priority of the in-app message.</p>
     */
    inline InAppMessageCampaign& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>Schedule of the campaign.</p>
     */
    inline const InAppCampaignSchedule& GetSchedule() const{ return m_schedule; }

    /**
     * <p>Schedule of the campaign.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>Schedule of the campaign.</p>
     */
    inline void SetSchedule(const InAppCampaignSchedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>Schedule of the campaign.</p>
     */
    inline void SetSchedule(InAppCampaignSchedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>Schedule of the campaign.</p>
     */
    inline InAppMessageCampaign& WithSchedule(const InAppCampaignSchedule& value) { SetSchedule(value); return *this;}

    /**
     * <p>Schedule of the campaign.</p>
     */
    inline InAppMessageCampaign& WithSchedule(InAppCampaignSchedule&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * <p>Session cap which controls the number of times an in-app message can be shown
     * to the endpoint during an application session.</p>
     */
    inline int GetSessionCap() const{ return m_sessionCap; }

    /**
     * <p>Session cap which controls the number of times an in-app message can be shown
     * to the endpoint during an application session.</p>
     */
    inline bool SessionCapHasBeenSet() const { return m_sessionCapHasBeenSet; }

    /**
     * <p>Session cap which controls the number of times an in-app message can be shown
     * to the endpoint during an application session.</p>
     */
    inline void SetSessionCap(int value) { m_sessionCapHasBeenSet = true; m_sessionCap = value; }

    /**
     * <p>Session cap which controls the number of times an in-app message can be shown
     * to the endpoint during an application session.</p>
     */
    inline InAppMessageCampaign& WithSessionCap(int value) { SetSessionCap(value); return *this;}


    /**
     * <p>Total cap which controls the number of times an in-app message can be shown
     * to the endpoint.</p>
     */
    inline int GetTotalCap() const{ return m_totalCap; }

    /**
     * <p>Total cap which controls the number of times an in-app message can be shown
     * to the endpoint.</p>
     */
    inline bool TotalCapHasBeenSet() const { return m_totalCapHasBeenSet; }

    /**
     * <p>Total cap which controls the number of times an in-app message can be shown
     * to the endpoint.</p>
     */
    inline void SetTotalCap(int value) { m_totalCapHasBeenSet = true; m_totalCap = value; }

    /**
     * <p>Total cap which controls the number of times an in-app message can be shown
     * to the endpoint.</p>
     */
    inline InAppMessageCampaign& WithTotalCap(int value) { SetTotalCap(value); return *this;}


    /**
     * <p>Treatment id of the campaign.</p>
     */
    inline const Aws::String& GetTreatmentId() const{ return m_treatmentId; }

    /**
     * <p>Treatment id of the campaign.</p>
     */
    inline bool TreatmentIdHasBeenSet() const { return m_treatmentIdHasBeenSet; }

    /**
     * <p>Treatment id of the campaign.</p>
     */
    inline void SetTreatmentId(const Aws::String& value) { m_treatmentIdHasBeenSet = true; m_treatmentId = value; }

    /**
     * <p>Treatment id of the campaign.</p>
     */
    inline void SetTreatmentId(Aws::String&& value) { m_treatmentIdHasBeenSet = true; m_treatmentId = std::move(value); }

    /**
     * <p>Treatment id of the campaign.</p>
     */
    inline void SetTreatmentId(const char* value) { m_treatmentIdHasBeenSet = true; m_treatmentId.assign(value); }

    /**
     * <p>Treatment id of the campaign.</p>
     */
    inline InAppMessageCampaign& WithTreatmentId(const Aws::String& value) { SetTreatmentId(value); return *this;}

    /**
     * <p>Treatment id of the campaign.</p>
     */
    inline InAppMessageCampaign& WithTreatmentId(Aws::String&& value) { SetTreatmentId(std::move(value)); return *this;}

    /**
     * <p>Treatment id of the campaign.</p>
     */
    inline InAppMessageCampaign& WithTreatmentId(const char* value) { SetTreatmentId(value); return *this;}

  private:

    Aws::String m_campaignId;
    bool m_campaignIdHasBeenSet = false;

    int m_dailyCap;
    bool m_dailyCapHasBeenSet = false;

    InAppMessage m_inAppMessage;
    bool m_inAppMessageHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    InAppCampaignSchedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    int m_sessionCap;
    bool m_sessionCapHasBeenSet = false;

    int m_totalCap;
    bool m_totalCapHasBeenSet = false;

    Aws::String m_treatmentId;
    bool m_treatmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
