/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediaconvert/model/PricingPlan.h>
#include <aws/mediaconvert/model/ReservationPlan.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/QueueStatus.h>
#include <aws/mediaconvert/model/Type.h>
#include <aws/mediaconvert/model/ServiceOverride.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * You can use queues to manage the resources that are available to your AWS
   * account for running multiple transcoding jobs at the same time. If you don't
   * specify a queue, the service sends all jobs through the default queue. For more
   * information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-queues.html.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Queue">AWS
   * API Reference</a></p>
   */
  class Queue
  {
  public:
    AWS_MEDIACONVERT_API Queue() = default;
    AWS_MEDIACONVERT_API Queue(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Queue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Queue& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The maximum number of jobs your queue can process concurrently.
     */
    inline int GetConcurrentJobs() const { return m_concurrentJobs; }
    inline bool ConcurrentJobsHasBeenSet() const { return m_concurrentJobsHasBeenSet; }
    inline void SetConcurrentJobs(int value) { m_concurrentJobsHasBeenSet = true; m_concurrentJobs = value; }
    inline Queue& WithConcurrentJobs(int value) { SetConcurrentJobs(value); return *this;}
    ///@}

    ///@{
    /**
     * The timestamp in epoch seconds for when you created the queue.
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Queue& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An optional description that you create for each queue.
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Queue& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The timestamp in epoch seconds for when you most recently updated the queue.
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    Queue& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A name that you create for each queue. Each name must be unique within your
     * account.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Queue& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies whether the pricing plan for the queue is on-demand or reserved. For
     * on-demand, you pay per minute, billed in increments of .01 minute. For reserved,
     * you pay for the transcoding capacity of the entire queue, regardless of how much
     * or how little you use it. Reserved pricing requires a 12-month commitment.
     */
    inline PricingPlan GetPricingPlan() const { return m_pricingPlan; }
    inline bool PricingPlanHasBeenSet() const { return m_pricingPlanHasBeenSet; }
    inline void SetPricingPlan(PricingPlan value) { m_pricingPlanHasBeenSet = true; m_pricingPlan = value; }
    inline Queue& WithPricingPlan(PricingPlan value) { SetPricingPlan(value); return *this;}
    ///@}

    ///@{
    /**
     * The estimated number of jobs with a PROGRESSING status.
     */
    inline int GetProgressingJobsCount() const { return m_progressingJobsCount; }
    inline bool ProgressingJobsCountHasBeenSet() const { return m_progressingJobsCountHasBeenSet; }
    inline void SetProgressingJobsCount(int value) { m_progressingJobsCountHasBeenSet = true; m_progressingJobsCount = value; }
    inline Queue& WithProgressingJobsCount(int value) { SetProgressingJobsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * Details about the pricing plan for your reserved queue. Required for reserved
     * queues and not applicable to on-demand queues.
     */
    inline const ReservationPlan& GetReservationPlan() const { return m_reservationPlan; }
    inline bool ReservationPlanHasBeenSet() const { return m_reservationPlanHasBeenSet; }
    template<typename ReservationPlanT = ReservationPlan>
    void SetReservationPlan(ReservationPlanT&& value) { m_reservationPlanHasBeenSet = true; m_reservationPlan = std::forward<ReservationPlanT>(value); }
    template<typename ReservationPlanT = ReservationPlan>
    Queue& WithReservationPlan(ReservationPlanT&& value) { SetReservationPlan(std::forward<ReservationPlanT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A list of any service overrides applied by MediaConvert to the settings that you
     * have configured. If you see any overrides, we recommend that you contact AWS
     * Support.
     */
    inline const Aws::Vector<ServiceOverride>& GetServiceOverrides() const { return m_serviceOverrides; }
    inline bool ServiceOverridesHasBeenSet() const { return m_serviceOverridesHasBeenSet; }
    template<typename ServiceOverridesT = Aws::Vector<ServiceOverride>>
    void SetServiceOverrides(ServiceOverridesT&& value) { m_serviceOverridesHasBeenSet = true; m_serviceOverrides = std::forward<ServiceOverridesT>(value); }
    template<typename ServiceOverridesT = Aws::Vector<ServiceOverride>>
    Queue& WithServiceOverrides(ServiceOverridesT&& value) { SetServiceOverrides(std::forward<ServiceOverridesT>(value)); return *this;}
    template<typename ServiceOverridesT = ServiceOverride>
    Queue& AddServiceOverrides(ServiceOverridesT&& value) { m_serviceOverridesHasBeenSet = true; m_serviceOverrides.emplace_back(std::forward<ServiceOverridesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Queues can be ACTIVE or PAUSED. If you pause a queue, the service won't begin
     * processing jobs in that queue. Jobs that are running when you pause the queue
     * continue to run until they finish or result in an error.
     */
    inline QueueStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(QueueStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Queue& WithStatus(QueueStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * The estimated number of jobs with a SUBMITTED status.
     */
    inline int GetSubmittedJobsCount() const { return m_submittedJobsCount; }
    inline bool SubmittedJobsCountHasBeenSet() const { return m_submittedJobsCountHasBeenSet; }
    inline void SetSubmittedJobsCount(int value) { m_submittedJobsCountHasBeenSet = true; m_submittedJobsCount = value; }
    inline Queue& WithSubmittedJobsCount(int value) { SetSubmittedJobsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies whether this on-demand queue is system or custom. System queues are
     * built in. You can't modify or delete system queues. You can create and modify
     * custom queues.
     */
    inline Type GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(Type value) { m_typeHasBeenSet = true; m_type = value; }
    inline Queue& WithType(Type value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    int m_concurrentJobs{0};
    bool m_concurrentJobsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated{};
    bool m_lastUpdatedHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PricingPlan m_pricingPlan{PricingPlan::NOT_SET};
    bool m_pricingPlanHasBeenSet = false;

    int m_progressingJobsCount{0};
    bool m_progressingJobsCountHasBeenSet = false;

    ReservationPlan m_reservationPlan;
    bool m_reservationPlanHasBeenSet = false;

    Aws::Vector<ServiceOverride> m_serviceOverrides;
    bool m_serviceOverridesHasBeenSet = false;

    QueueStatus m_status{QueueStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    int m_submittedJobsCount{0};
    bool m_submittedJobsCountHasBeenSet = false;

    Type m_type{Type::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
