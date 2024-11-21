/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/PricingPlan.h>
#include <aws/mediaconvert/model/ReservationPlanSettings.h>
#include <aws/mediaconvert/model/QueueStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class CreateQueueRequest : public MediaConvertRequest
  {
  public:
    AWS_MEDIACONVERT_API CreateQueueRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateQueue"; }

    AWS_MEDIACONVERT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * Specify the maximum number of jobs your queue can process concurrently. For
     * on-demand queues, the value you enter is constrained by your service quotas for
     * Maximum concurrent jobs, per on-demand queue and Maximum concurrent jobs, per
     * account. For reserved queues, specify the number of jobs you can process
     * concurrently in your reservation plan instead.
     */
    inline int GetConcurrentJobs() const{ return m_concurrentJobs; }
    inline bool ConcurrentJobsHasBeenSet() const { return m_concurrentJobsHasBeenSet; }
    inline void SetConcurrentJobs(int value) { m_concurrentJobsHasBeenSet = true; m_concurrentJobs = value; }
    inline CreateQueueRequest& WithConcurrentJobs(int value) { SetConcurrentJobs(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. A description of the queue that you are creating.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateQueueRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateQueueRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateQueueRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the queue that you are creating.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateQueueRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateQueueRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateQueueRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies whether the pricing plan for the queue is on-demand or reserved. For
     * on-demand, you pay per minute, billed in increments of .01 minute. For reserved,
     * you pay for the transcoding capacity of the entire queue, regardless of how much
     * or how little you use it. Reserved pricing requires a 12-month commitment. When
     * you use the API to create a queue, the default is on-demand.
     */
    inline const PricingPlan& GetPricingPlan() const{ return m_pricingPlan; }
    inline bool PricingPlanHasBeenSet() const { return m_pricingPlanHasBeenSet; }
    inline void SetPricingPlan(const PricingPlan& value) { m_pricingPlanHasBeenSet = true; m_pricingPlan = value; }
    inline void SetPricingPlan(PricingPlan&& value) { m_pricingPlanHasBeenSet = true; m_pricingPlan = std::move(value); }
    inline CreateQueueRequest& WithPricingPlan(const PricingPlan& value) { SetPricingPlan(value); return *this;}
    inline CreateQueueRequest& WithPricingPlan(PricingPlan&& value) { SetPricingPlan(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Details about the pricing plan for your reserved queue. Required for reserved
     * queues and not applicable to on-demand queues.
     */
    inline const ReservationPlanSettings& GetReservationPlanSettings() const{ return m_reservationPlanSettings; }
    inline bool ReservationPlanSettingsHasBeenSet() const { return m_reservationPlanSettingsHasBeenSet; }
    inline void SetReservationPlanSettings(const ReservationPlanSettings& value) { m_reservationPlanSettingsHasBeenSet = true; m_reservationPlanSettings = value; }
    inline void SetReservationPlanSettings(ReservationPlanSettings&& value) { m_reservationPlanSettingsHasBeenSet = true; m_reservationPlanSettings = std::move(value); }
    inline CreateQueueRequest& WithReservationPlanSettings(const ReservationPlanSettings& value) { SetReservationPlanSettings(value); return *this;}
    inline CreateQueueRequest& WithReservationPlanSettings(ReservationPlanSettings&& value) { SetReservationPlanSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Initial state of the queue. If you create a paused queue, then jobs in that
     * queue won't begin.
     */
    inline const QueueStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const QueueStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(QueueStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CreateQueueRequest& WithStatus(const QueueStatus& value) { SetStatus(value); return *this;}
    inline CreateQueueRequest& WithStatus(QueueStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateQueueRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateQueueRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateQueueRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateQueueRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateQueueRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateQueueRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateQueueRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateQueueRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateQueueRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    int m_concurrentJobs;
    bool m_concurrentJobsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PricingPlan m_pricingPlan;
    bool m_pricingPlanHasBeenSet = false;

    ReservationPlanSettings m_reservationPlanSettings;
    bool m_reservationPlanSettingsHasBeenSet = false;

    QueueStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
