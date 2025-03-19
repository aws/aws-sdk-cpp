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
    AWS_MEDIACONVERT_API UpdateQueueRequest() = default;

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
    inline int GetConcurrentJobs() const { return m_concurrentJobs; }
    inline bool ConcurrentJobsHasBeenSet() const { return m_concurrentJobsHasBeenSet; }
    inline void SetConcurrentJobs(int value) { m_concurrentJobsHasBeenSet = true; m_concurrentJobs = value; }
    inline UpdateQueueRequest& WithConcurrentJobs(int value) { SetConcurrentJobs(value); return *this;}
    ///@}

    ///@{
    /**
     * The new description for the queue, if you are changing it.
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateQueueRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the queue that you are modifying.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateQueueRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The new details of your pricing plan for your reserved queue. When you set up a
     * new pricing plan to replace an expired one, you enter into another 12-month
     * commitment. When you add capacity to your queue by increasing the number of RTS,
     * you extend the term of your commitment to 12 months from when you add capacity.
     * After you make these commitments, you can't cancel them.
     */
    inline const ReservationPlanSettings& GetReservationPlanSettings() const { return m_reservationPlanSettings; }
    inline bool ReservationPlanSettingsHasBeenSet() const { return m_reservationPlanSettingsHasBeenSet; }
    template<typename ReservationPlanSettingsT = ReservationPlanSettings>
    void SetReservationPlanSettings(ReservationPlanSettingsT&& value) { m_reservationPlanSettingsHasBeenSet = true; m_reservationPlanSettings = std::forward<ReservationPlanSettingsT>(value); }
    template<typename ReservationPlanSettingsT = ReservationPlanSettings>
    UpdateQueueRequest& WithReservationPlanSettings(ReservationPlanSettingsT&& value) { SetReservationPlanSettings(std::forward<ReservationPlanSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Pause or activate a queue by changing its status between ACTIVE and PAUSED. If
     * you pause a queue, jobs in that queue won't begin. Jobs that are running when
     * you pause the queue continue to run until they finish or result in an error.
     */
    inline QueueStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(QueueStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateQueueRequest& WithStatus(QueueStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    int m_concurrentJobs{0};
    bool m_concurrentJobsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ReservationPlanSettings m_reservationPlanSettings;
    bool m_reservationPlanSettingsHasBeenSet = false;

    QueueStatus m_status{QueueStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
