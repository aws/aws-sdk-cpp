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
 * <p>Details about an extension to a training plan, including the offering ID,
 * dates, status, and cost information.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrainingPlanExtension">AWS
 * API Reference</a></p>
 */
class TrainingPlanExtension {
 public:
  AWS_SAGEMAKER_API TrainingPlanExtension() = default;
  AWS_SAGEMAKER_API TrainingPlanExtension(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API TrainingPlanExtension& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the extension offering that was used to create this
   * extension.</p>
   */
  inline const Aws::String& GetTrainingPlanExtensionOfferingId() const { return m_trainingPlanExtensionOfferingId; }
  inline bool TrainingPlanExtensionOfferingIdHasBeenSet() const { return m_trainingPlanExtensionOfferingIdHasBeenSet; }
  template <typename TrainingPlanExtensionOfferingIdT = Aws::String>
  void SetTrainingPlanExtensionOfferingId(TrainingPlanExtensionOfferingIdT&& value) {
    m_trainingPlanExtensionOfferingIdHasBeenSet = true;
    m_trainingPlanExtensionOfferingId = std::forward<TrainingPlanExtensionOfferingIdT>(value);
  }
  template <typename TrainingPlanExtensionOfferingIdT = Aws::String>
  TrainingPlanExtension& WithTrainingPlanExtensionOfferingId(TrainingPlanExtensionOfferingIdT&& value) {
    SetTrainingPlanExtensionOfferingId(std::forward<TrainingPlanExtensionOfferingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the extension was created.</p>
   */
  inline const Aws::Utils::DateTime& GetExtendedAt() const { return m_extendedAt; }
  inline bool ExtendedAtHasBeenSet() const { return m_extendedAtHasBeenSet; }
  template <typename ExtendedAtT = Aws::Utils::DateTime>
  void SetExtendedAt(ExtendedAtT&& value) {
    m_extendedAtHasBeenSet = true;
    m_extendedAt = std::forward<ExtendedAtT>(value);
  }
  template <typename ExtendedAtT = Aws::Utils::DateTime>
  TrainingPlanExtension& WithExtendedAt(ExtendedAtT&& value) {
    SetExtendedAt(std::forward<ExtendedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start date of the extension period.</p>
   */
  inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
  inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
  template <typename StartDateT = Aws::Utils::DateTime>
  void SetStartDate(StartDateT&& value) {
    m_startDateHasBeenSet = true;
    m_startDate = std::forward<StartDateT>(value);
  }
  template <typename StartDateT = Aws::Utils::DateTime>
  TrainingPlanExtension& WithStartDate(StartDateT&& value) {
    SetStartDate(std::forward<StartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end date of the extension period.</p>
   */
  inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
  inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
  template <typename EndDateT = Aws::Utils::DateTime>
  void SetEndDate(EndDateT&& value) {
    m_endDateHasBeenSet = true;
    m_endDate = std::forward<EndDateT>(value);
  }
  template <typename EndDateT = Aws::Utils::DateTime>
  TrainingPlanExtension& WithEndDate(EndDateT&& value) {
    SetEndDate(std::forward<EndDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the extension (e.g., Pending, Active, Scheduled,
   * Failed, Expired).</p>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  TrainingPlanExtension& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payment processing status of the extension.</p>
   */
  inline const Aws::String& GetPaymentStatus() const { return m_paymentStatus; }
  inline bool PaymentStatusHasBeenSet() const { return m_paymentStatusHasBeenSet; }
  template <typename PaymentStatusT = Aws::String>
  void SetPaymentStatus(PaymentStatusT&& value) {
    m_paymentStatusHasBeenSet = true;
    m_paymentStatus = std::forward<PaymentStatusT>(value);
  }
  template <typename PaymentStatusT = Aws::String>
  TrainingPlanExtension& WithPaymentStatus(PaymentStatusT&& value) {
    SetPaymentStatus(std::forward<PaymentStatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone of the extension.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  TrainingPlanExtension& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone ID of the extension.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  TrainingPlanExtension& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration of the extension in hours.</p>
   */
  inline int GetDurationHours() const { return m_durationHours; }
  inline bool DurationHoursHasBeenSet() const { return m_durationHoursHasBeenSet; }
  inline void SetDurationHours(int value) {
    m_durationHoursHasBeenSet = true;
    m_durationHours = value;
  }
  inline TrainingPlanExtension& WithDurationHours(int value) {
    SetDurationHours(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The upfront fee for the extension.</p>
   */
  inline const Aws::String& GetUpfrontFee() const { return m_upfrontFee; }
  inline bool UpfrontFeeHasBeenSet() const { return m_upfrontFeeHasBeenSet; }
  template <typename UpfrontFeeT = Aws::String>
  void SetUpfrontFee(UpfrontFeeT&& value) {
    m_upfrontFeeHasBeenSet = true;
    m_upfrontFee = std::forward<UpfrontFeeT>(value);
  }
  template <typename UpfrontFeeT = Aws::String>
  TrainingPlanExtension& WithUpfrontFee(UpfrontFeeT&& value) {
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
  TrainingPlanExtension& WithCurrencyCode(CurrencyCodeT&& value) {
    SetCurrencyCode(std::forward<CurrencyCodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_trainingPlanExtensionOfferingId;

  Aws::Utils::DateTime m_extendedAt{};

  Aws::Utils::DateTime m_startDate{};

  Aws::Utils::DateTime m_endDate{};

  Aws::String m_status;

  Aws::String m_paymentStatus;

  Aws::String m_availabilityZone;

  Aws::String m_availabilityZoneId;

  int m_durationHours{0};

  Aws::String m_upfrontFee;

  Aws::String m_currencyCode;
  bool m_trainingPlanExtensionOfferingIdHasBeenSet = false;
  bool m_extendedAtHasBeenSet = false;
  bool m_startDateHasBeenSet = false;
  bool m_endDateHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_paymentStatusHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_availabilityZoneIdHasBeenSet = false;
  bool m_durationHoursHasBeenSet = false;
  bool m_upfrontFeeHasBeenSet = false;
  bool m_currencyCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
