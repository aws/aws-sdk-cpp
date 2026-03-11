/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>Details about an available extension offering for a training plan. Use the
 * offering ID with the <code> <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ExtendTrainingPlan.html">ExtendTrainingPlan</a>
 * </code> API to extend a training plan.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrainingPlanExtensionOffering">AWS
 * API Reference</a></p>
 */
class TrainingPlanExtensionOffering {
 public:
  AWS_SAGEMAKER_API TrainingPlanExtensionOffering() = default;
  AWS_SAGEMAKER_API TrainingPlanExtensionOffering(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API TrainingPlanExtensionOffering& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for this extension offering.</p>
   */
  inline const Aws::String& GetTrainingPlanExtensionOfferingId() const { return m_trainingPlanExtensionOfferingId; }
  inline bool TrainingPlanExtensionOfferingIdHasBeenSet() const { return m_trainingPlanExtensionOfferingIdHasBeenSet; }
  template <typename TrainingPlanExtensionOfferingIdT = Aws::String>
  void SetTrainingPlanExtensionOfferingId(TrainingPlanExtensionOfferingIdT&& value) {
    m_trainingPlanExtensionOfferingIdHasBeenSet = true;
    m_trainingPlanExtensionOfferingId = std::forward<TrainingPlanExtensionOfferingIdT>(value);
  }
  template <typename TrainingPlanExtensionOfferingIdT = Aws::String>
  TrainingPlanExtensionOffering& WithTrainingPlanExtensionOfferingId(TrainingPlanExtensionOfferingIdT&& value) {
    SetTrainingPlanExtensionOfferingId(std::forward<TrainingPlanExtensionOfferingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone for this extension offering.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  TrainingPlanExtensionOffering& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start date of this extension offering.</p>
   */
  inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
  inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
  template <typename StartDateT = Aws::Utils::DateTime>
  void SetStartDate(StartDateT&& value) {
    m_startDateHasBeenSet = true;
    m_startDate = std::forward<StartDateT>(value);
  }
  template <typename StartDateT = Aws::Utils::DateTime>
  TrainingPlanExtensionOffering& WithStartDate(StartDateT&& value) {
    SetStartDate(std::forward<StartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end date of this extension offering.</p>
   */
  inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
  inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
  template <typename EndDateT = Aws::Utils::DateTime>
  void SetEndDate(EndDateT&& value) {
    m_endDateHasBeenSet = true;
    m_endDate = std::forward<EndDateT>(value);
  }
  template <typename EndDateT = Aws::Utils::DateTime>
  TrainingPlanExtensionOffering& WithEndDate(EndDateT&& value) {
    SetEndDate(std::forward<EndDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration of this extension offering in hours.</p>
   */
  inline int GetDurationHours() const { return m_durationHours; }
  inline bool DurationHoursHasBeenSet() const { return m_durationHoursHasBeenSet; }
  inline void SetDurationHours(int value) {
    m_durationHoursHasBeenSet = true;
    m_durationHours = value;
  }
  inline TrainingPlanExtensionOffering& WithDurationHours(int value) {
    SetDurationHours(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The upfront fee for this extension offering.</p>
   */
  inline const Aws::String& GetUpfrontFee() const { return m_upfrontFee; }
  inline bool UpfrontFeeHasBeenSet() const { return m_upfrontFeeHasBeenSet; }
  template <typename UpfrontFeeT = Aws::String>
  void SetUpfrontFee(UpfrontFeeT&& value) {
    m_upfrontFeeHasBeenSet = true;
    m_upfrontFee = std::forward<UpfrontFeeT>(value);
  }
  template <typename UpfrontFeeT = Aws::String>
  TrainingPlanExtensionOffering& WithUpfrontFee(UpfrontFeeT&& value) {
    SetUpfrontFee(std::forward<UpfrontFeeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The currency code for the upfront fee (e.g., USD).</p>
   */
  inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
  inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
  template <typename CurrencyCodeT = Aws::String>
  void SetCurrencyCode(CurrencyCodeT&& value) {
    m_currencyCodeHasBeenSet = true;
    m_currencyCode = std::forward<CurrencyCodeT>(value);
  }
  template <typename CurrencyCodeT = Aws::String>
  TrainingPlanExtensionOffering& WithCurrencyCode(CurrencyCodeT&& value) {
    SetCurrencyCode(std::forward<CurrencyCodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_trainingPlanExtensionOfferingId;

  Aws::String m_availabilityZone;

  Aws::Utils::DateTime m_startDate{};

  Aws::Utils::DateTime m_endDate{};

  int m_durationHours{0};

  Aws::String m_upfrontFee;

  Aws::String m_currencyCode;
  bool m_trainingPlanExtensionOfferingIdHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_startDateHasBeenSet = false;
  bool m_endDateHasBeenSet = false;
  bool m_durationHoursHasBeenSet = false;
  bool m_upfrontFeeHasBeenSet = false;
  bool m_currencyCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
