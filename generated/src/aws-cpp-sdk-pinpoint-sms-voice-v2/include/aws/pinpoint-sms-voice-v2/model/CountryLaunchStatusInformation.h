/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/CarrierStatusInformation.h>
#include <aws/pinpoint-sms-voice-v2/model/CountryLaunchStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 * <p>Contains per-country launch status details for an RCS agent.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CountryLaunchStatusInformation">AWS
 * API Reference</a></p>
 */
class CountryLaunchStatusInformation {
 public:
  AWS_PINPOINTSMSVOICEV2_API CountryLaunchStatusInformation() = default;
  AWS_PINPOINTSMSVOICEV2_API CountryLaunchStatusInformation(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API CountryLaunchStatusInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
   * region.</p>
   */
  inline const Aws::String& GetIsoCountryCode() const { return m_isoCountryCode; }
  inline bool IsoCountryCodeHasBeenSet() const { return m_isoCountryCodeHasBeenSet; }
  template <typename IsoCountryCodeT = Aws::String>
  void SetIsoCountryCode(IsoCountryCodeT&& value) {
    m_isoCountryCodeHasBeenSet = true;
    m_isoCountryCode = std::forward<IsoCountryCodeT>(value);
  }
  template <typename IsoCountryCodeT = Aws::String>
  CountryLaunchStatusInformation& WithIsoCountryCode(IsoCountryCodeT&& value) {
    SetIsoCountryCode(std::forward<IsoCountryCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The launch status for this country.</p>
   */
  inline CountryLaunchStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CountryLaunchStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CountryLaunchStatusInformation& WithStatus(CountryLaunchStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The RCS platform identifier for this country.</p>
   */
  inline const Aws::String& GetRcsPlatformId() const { return m_rcsPlatformId; }
  inline bool RcsPlatformIdHasBeenSet() const { return m_rcsPlatformIdHasBeenSet; }
  template <typename RcsPlatformIdT = Aws::String>
  void SetRcsPlatformId(RcsPlatformIdT&& value) {
    m_rcsPlatformIdHasBeenSet = true;
    m_rcsPlatformId = std::forward<RcsPlatformIdT>(value);
  }
  template <typename RcsPlatformIdT = Aws::String>
  CountryLaunchStatusInformation& WithRcsPlatformId(RcsPlatformIdT&& value) {
    SetRcsPlatformId(std::forward<RcsPlatformIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the registration associated with this country
   * launch.</p>
   */
  inline const Aws::String& GetRegistrationId() const { return m_registrationId; }
  inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }
  template <typename RegistrationIdT = Aws::String>
  void SetRegistrationId(RegistrationIdT&& value) {
    m_registrationIdHasBeenSet = true;
    m_registrationId = std::forward<RegistrationIdT>(value);
  }
  template <typename RegistrationIdT = Aws::String>
  CountryLaunchStatusInformation& WithRegistrationId(RegistrationIdT&& value) {
    SetRegistrationId(std::forward<RegistrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of CarrierStatusInformation objects containing carrier-level launch
   * status details.</p>
   */
  inline const Aws::Vector<CarrierStatusInformation>& GetCarrierStatus() const { return m_carrierStatus; }
  inline bool CarrierStatusHasBeenSet() const { return m_carrierStatusHasBeenSet; }
  template <typename CarrierStatusT = Aws::Vector<CarrierStatusInformation>>
  void SetCarrierStatus(CarrierStatusT&& value) {
    m_carrierStatusHasBeenSet = true;
    m_carrierStatus = std::forward<CarrierStatusT>(value);
  }
  template <typename CarrierStatusT = Aws::Vector<CarrierStatusInformation>>
  CountryLaunchStatusInformation& WithCarrierStatus(CarrierStatusT&& value) {
    SetCarrierStatus(std::forward<CarrierStatusT>(value));
    return *this;
  }
  template <typename CarrierStatusT = CarrierStatusInformation>
  CountryLaunchStatusInformation& AddCarrierStatus(CarrierStatusT&& value) {
    m_carrierStatusHasBeenSet = true;
    m_carrierStatus.emplace_back(std::forward<CarrierStatusT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_isoCountryCode;

  CountryLaunchStatus m_status{CountryLaunchStatus::NOT_SET};

  Aws::String m_rcsPlatformId;

  Aws::String m_registrationId;

  Aws::Vector<CarrierStatusInformation> m_carrierStatus;
  bool m_isoCountryCodeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_rcsPlatformIdHasBeenSet = false;
  bool m_registrationIdHasBeenSet = false;
  bool m_carrierStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
