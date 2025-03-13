/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/SageMakerResourceName.h>
#include <aws/sagemaker/model/ReservedCapacityOffering.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Details about a training plan offering.</p> <p>For more information about how
   * to reserve GPU capacity for your SageMaker HyperPod clusters using Amazon
   * SageMaker Training Plan, see <code> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateTrainingPlan.html">CreateTrainingPlan</a>
   * </code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrainingPlanOffering">AWS
   * API Reference</a></p>
   */
  class TrainingPlanOffering
  {
  public:
    AWS_SAGEMAKER_API TrainingPlanOffering() = default;
    AWS_SAGEMAKER_API TrainingPlanOffering(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrainingPlanOffering& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for this training plan offering.</p>
     */
    inline const Aws::String& GetTrainingPlanOfferingId() const { return m_trainingPlanOfferingId; }
    inline bool TrainingPlanOfferingIdHasBeenSet() const { return m_trainingPlanOfferingIdHasBeenSet; }
    template<typename TrainingPlanOfferingIdT = Aws::String>
    void SetTrainingPlanOfferingId(TrainingPlanOfferingIdT&& value) { m_trainingPlanOfferingIdHasBeenSet = true; m_trainingPlanOfferingId = std::forward<TrainingPlanOfferingIdT>(value); }
    template<typename TrainingPlanOfferingIdT = Aws::String>
    TrainingPlanOffering& WithTrainingPlanOfferingId(TrainingPlanOfferingIdT&& value) { SetTrainingPlanOfferingId(std::forward<TrainingPlanOfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target resources (e.g., SageMaker Training Jobs, SageMaker HyperPod) for
     * this training plan offering.</p> <p>Training plans are specific to their target
     * resource.</p> <ul> <li> <p>A training plan designed for SageMaker training jobs
     * can only be used to schedule and run training jobs.</p> </li> <li> <p>A training
     * plan for HyperPod clusters can be used exclusively to provide compute resources
     * to a cluster's instance group.</p> </li> </ul>
     */
    inline const Aws::Vector<SageMakerResourceName>& GetTargetResources() const { return m_targetResources; }
    inline bool TargetResourcesHasBeenSet() const { return m_targetResourcesHasBeenSet; }
    template<typename TargetResourcesT = Aws::Vector<SageMakerResourceName>>
    void SetTargetResources(TargetResourcesT&& value) { m_targetResourcesHasBeenSet = true; m_targetResources = std::forward<TargetResourcesT>(value); }
    template<typename TargetResourcesT = Aws::Vector<SageMakerResourceName>>
    TrainingPlanOffering& WithTargetResources(TargetResourcesT&& value) { SetTargetResources(std::forward<TargetResourcesT>(value)); return *this;}
    inline TrainingPlanOffering& AddTargetResources(SageMakerResourceName value) { m_targetResourcesHasBeenSet = true; m_targetResources.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The requested start time that the user specified when searching for the
     * training plan offering.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedStartTimeAfter() const { return m_requestedStartTimeAfter; }
    inline bool RequestedStartTimeAfterHasBeenSet() const { return m_requestedStartTimeAfterHasBeenSet; }
    template<typename RequestedStartTimeAfterT = Aws::Utils::DateTime>
    void SetRequestedStartTimeAfter(RequestedStartTimeAfterT&& value) { m_requestedStartTimeAfterHasBeenSet = true; m_requestedStartTimeAfter = std::forward<RequestedStartTimeAfterT>(value); }
    template<typename RequestedStartTimeAfterT = Aws::Utils::DateTime>
    TrainingPlanOffering& WithRequestedStartTimeAfter(RequestedStartTimeAfterT&& value) { SetRequestedStartTimeAfter(std::forward<RequestedStartTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The requested end time that the user specified when searching for the
     * training plan offering.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedEndTimeBefore() const { return m_requestedEndTimeBefore; }
    inline bool RequestedEndTimeBeforeHasBeenSet() const { return m_requestedEndTimeBeforeHasBeenSet; }
    template<typename RequestedEndTimeBeforeT = Aws::Utils::DateTime>
    void SetRequestedEndTimeBefore(RequestedEndTimeBeforeT&& value) { m_requestedEndTimeBeforeHasBeenSet = true; m_requestedEndTimeBefore = std::forward<RequestedEndTimeBeforeT>(value); }
    template<typename RequestedEndTimeBeforeT = Aws::Utils::DateTime>
    TrainingPlanOffering& WithRequestedEndTimeBefore(RequestedEndTimeBeforeT&& value) { SetRequestedEndTimeBefore(std::forward<RequestedEndTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of whole hours in the total duration for this training plan
     * offering.</p>
     */
    inline long long GetDurationHours() const { return m_durationHours; }
    inline bool DurationHoursHasBeenSet() const { return m_durationHoursHasBeenSet; }
    inline void SetDurationHours(long long value) { m_durationHoursHasBeenSet = true; m_durationHours = value; }
    inline TrainingPlanOffering& WithDurationHours(long long value) { SetDurationHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional minutes beyond whole hours in the total duration for this
     * training plan offering.</p>
     */
    inline long long GetDurationMinutes() const { return m_durationMinutes; }
    inline bool DurationMinutesHasBeenSet() const { return m_durationMinutesHasBeenSet; }
    inline void SetDurationMinutes(long long value) { m_durationMinutesHasBeenSet = true; m_durationMinutes = value; }
    inline TrainingPlanOffering& WithDurationMinutes(long long value) { SetDurationMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upfront fee for this training plan offering.</p>
     */
    inline const Aws::String& GetUpfrontFee() const { return m_upfrontFee; }
    inline bool UpfrontFeeHasBeenSet() const { return m_upfrontFeeHasBeenSet; }
    template<typename UpfrontFeeT = Aws::String>
    void SetUpfrontFee(UpfrontFeeT&& value) { m_upfrontFeeHasBeenSet = true; m_upfrontFee = std::forward<UpfrontFeeT>(value); }
    template<typename UpfrontFeeT = Aws::String>
    TrainingPlanOffering& WithUpfrontFee(UpfrontFeeT&& value) { SetUpfrontFee(std::forward<UpfrontFeeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code for the upfront fee (e.g., USD).</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    TrainingPlanOffering& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of reserved capacity offerings associated with this training plan
     * offering.</p>
     */
    inline const Aws::Vector<ReservedCapacityOffering>& GetReservedCapacityOfferings() const { return m_reservedCapacityOfferings; }
    inline bool ReservedCapacityOfferingsHasBeenSet() const { return m_reservedCapacityOfferingsHasBeenSet; }
    template<typename ReservedCapacityOfferingsT = Aws::Vector<ReservedCapacityOffering>>
    void SetReservedCapacityOfferings(ReservedCapacityOfferingsT&& value) { m_reservedCapacityOfferingsHasBeenSet = true; m_reservedCapacityOfferings = std::forward<ReservedCapacityOfferingsT>(value); }
    template<typename ReservedCapacityOfferingsT = Aws::Vector<ReservedCapacityOffering>>
    TrainingPlanOffering& WithReservedCapacityOfferings(ReservedCapacityOfferingsT&& value) { SetReservedCapacityOfferings(std::forward<ReservedCapacityOfferingsT>(value)); return *this;}
    template<typename ReservedCapacityOfferingsT = ReservedCapacityOffering>
    TrainingPlanOffering& AddReservedCapacityOfferings(ReservedCapacityOfferingsT&& value) { m_reservedCapacityOfferingsHasBeenSet = true; m_reservedCapacityOfferings.emplace_back(std::forward<ReservedCapacityOfferingsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_trainingPlanOfferingId;
    bool m_trainingPlanOfferingIdHasBeenSet = false;

    Aws::Vector<SageMakerResourceName> m_targetResources;
    bool m_targetResourcesHasBeenSet = false;

    Aws::Utils::DateTime m_requestedStartTimeAfter{};
    bool m_requestedStartTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_requestedEndTimeBefore{};
    bool m_requestedEndTimeBeforeHasBeenSet = false;

    long long m_durationHours{0};
    bool m_durationHoursHasBeenSet = false;

    long long m_durationMinutes{0};
    bool m_durationMinutesHasBeenSet = false;

    Aws::String m_upfrontFee;
    bool m_upfrontFeeHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    Aws::Vector<ReservedCapacityOffering> m_reservedCapacityOfferings;
    bool m_reservedCapacityOfferingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
