/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/ReservationPlanSettings.h>
#include <aws/mediaconvert/model/QueueStatus.h>
#include <utility>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class UpdateQueueRequest : public MediaConvertRequest
  {
  public:
    AWS_MEDIACONVERT_API UpdateQueueRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQueue"; }

    AWS_MEDIACONVERT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * Specify the maximum number of jobs your queue can process concurrently. For
     * on-demand queues, the value you enter is constrained by your service quotas for
     * Maximum concurrent jobs, per on-demand queue and Maximum concurrent jobs, per
     * account. For reserved queues, update your reservation plan instead in order to
     * increase your yearly commitment.
     */
    inline int GetConcurrentJobs() const{ return m_concurrentJobs; }
    inline bool ConcurrentJobsHasBeenSet() const { return m_concurrentJobsHasBeenSet; }
    inline void SetConcurrentJobs(int value) { m_concurrentJobsHasBeenSet = true; m_concurrentJobs = value; }
    inline UpdateQueueRequest& WithConcurrentJobs(int value) { SetConcurrentJobs(value); return *this;}
    ///@}

    ///@{
    /**
     * The new description for the queue, if you are changing it.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateQueueRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateQueueRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateQueueRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the queue that you are modifying.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateQueueRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateQueueRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateQueueRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * The new details of your pricing plan for your reserved queue. When you set up a
     * new pricing plan to replace an expired one, you enter into another 12-month
     * commitment. When you add capacity to your queue by increasing the number of RTS,
     * you extend the term of your commitment to 12 months from when you add capacity.
     * After you make these commitments, you can't cancel them.
     */
    inline const ReservationPlanSettings& GetReservationPlanSettings() const{ return m_reservationPlanSettings; }
    inline bool ReservationPlanSettingsHasBeenSet() const { return m_reservationPlanSettingsHasBeenSet; }
    inline void SetReservationPlanSettings(const ReservationPlanSettings& value) { m_reservationPlanSettingsHasBeenSet = true; m_reservationPlanSettings = value; }
    inline void SetReservationPlanSettings(ReservationPlanSettings&& value) { m_reservationPlanSettingsHasBeenSet = true; m_reservationPlanSettings = std::move(value); }
    inline UpdateQueueRequest& WithReservationPlanSettings(const ReservationPlanSettings& value) { SetReservationPlanSettings(value); return *this;}
    inline UpdateQueueRequest& WithReservationPlanSettings(ReservationPlanSettings&& value) { SetReservationPlanSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Pause or activate a queue by changing its status between ACTIVE and PAUSED. If
     * you pause a queue, jobs in that queue won't begin. Jobs that are running when
     * you pause the queue continue to run until they finish or result in an error.
     */
    inline const QueueStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const QueueStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(QueueStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UpdateQueueRequest& WithStatus(const QueueStatus& value) { SetStatus(value); return *this;}
    inline UpdateQueueRequest& WithStatus(QueueStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    int m_concurrentJobs;
    bool m_concurrentJobsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ReservationPlanSettings m_reservationPlanSettings;
    bool m_reservationPlanSettingsHasBeenSet = false;

    QueueStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
