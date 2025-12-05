/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/PhoneNumberType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PinpointSMSVoiceV2 {
namespace Model {
class CarrierLookupResult {
 public:
  AWS_PINPOINTSMSVOICEV2_API CarrierLookupResult() = default;
  AWS_PINPOINTSMSVOICEV2_API CarrierLookupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PINPOINTSMSVOICEV2_API CarrierLookupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The phone number in E164 format, sanitized from the original input by
   * removing any formatting characters.</p>
   */
  inline const Aws::String& GetE164PhoneNumber() const { return m_e164PhoneNumber; }
  template <typename E164PhoneNumberT = Aws::String>
  void SetE164PhoneNumber(E164PhoneNumberT&& value) {
    m_e164PhoneNumberHasBeenSet = true;
    m_e164PhoneNumber = std::forward<E164PhoneNumberT>(value);
  }
  template <typename E164PhoneNumberT = Aws::String>
  CarrierLookupResult& WithE164PhoneNumber(E164PhoneNumberT&& value) {
    SetE164PhoneNumber(std::forward<E164PhoneNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The numeric dialing code for the country or region where the phone number was
   * originally registered.</p>
   */
  inline const Aws::String& GetDialingCountryCode() const { return m_dialingCountryCode; }
  template <typename DialingCountryCodeT = Aws::String>
  void SetDialingCountryCode(DialingCountryCodeT&& value) {
    m_dialingCountryCodeHasBeenSet = true;
    m_dialingCountryCode = std::forward<DialingCountryCodeT>(value);
  }
  template <typename DialingCountryCodeT = Aws::String>
  CarrierLookupResult& WithDialingCountryCode(DialingCountryCodeT&& value) {
    SetDialingCountryCode(std::forward<DialingCountryCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
   * region where the phone number was originally registered.</p>
   */
  inline const Aws::String& GetIsoCountryCode() const { return m_isoCountryCode; }
  template <typename IsoCountryCodeT = Aws::String>
  void SetIsoCountryCode(IsoCountryCodeT&& value) {
    m_isoCountryCodeHasBeenSet = true;
    m_isoCountryCode = std::forward<IsoCountryCodeT>(value);
  }
  template <typename IsoCountryCodeT = Aws::String>
  CarrierLookupResult& WithIsoCountryCode(IsoCountryCodeT&& value) {
    SetIsoCountryCode(std::forward<IsoCountryCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the country where the phone number was originally registered.</p>
   */
  inline const Aws::String& GetCountry() const { return m_country; }
  template <typename CountryT = Aws::String>
  void SetCountry(CountryT&& value) {
    m_countryHasBeenSet = true;
    m_country = std::forward<CountryT>(value);
  }
  template <typename CountryT = Aws::String>
  CarrierLookupResult& WithCountry(CountryT&& value) {
    SetCountry(std::forward<CountryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The phone number's mobile country code, for mobile phone number types</p>
   */
  inline const Aws::String& GetMCC() const { return m_mCC; }
  template <typename MCCT = Aws::String>
  void SetMCC(MCCT&& value) {
    m_mCCHasBeenSet = true;
    m_mCC = std::forward<MCCT>(value);
  }
  template <typename MCCT = Aws::String>
  CarrierLookupResult& WithMCC(MCCT&& value) {
    SetMCC(std::forward<MCCT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The phone number's mobile network code, for mobile phone number types.</p>
   */
  inline const Aws::String& GetMNC() const { return m_mNC; }
  template <typename MNCT = Aws::String>
  void SetMNC(MNCT&& value) {
    m_mNCHasBeenSet = true;
    m_mNC = std::forward<MNCT>(value);
  }
  template <typename MNCT = Aws::String>
  CarrierLookupResult& WithMNC(MNCT&& value) {
    SetMNC(std::forward<MNCT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The carrier or service provider that the phone number is currently registered
   * with. In some countries and regions, this value may be the carrier or service
   * provider that the phone number was originally registered with.</p>
   */
  inline const Aws::String& GetCarrier() const { return m_carrier; }
  template <typename CarrierT = Aws::String>
  void SetCarrier(CarrierT&& value) {
    m_carrierHasBeenSet = true;
    m_carrier = std::forward<CarrierT>(value);
  }
  template <typename CarrierT = Aws::String>
  CarrierLookupResult& WithCarrier(CarrierT&& value) {
    SetCarrier(std::forward<CarrierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes the type of phone number. Valid values are: MOBILE, LANDLINE,
   * OTHER, and INVALID. Avoid sending SMS or voice messages to INVALID phone
   * numbers, as these numbers are unlikely to belong to actual recipients.</p>
   */
  inline PhoneNumberType GetPhoneNumberType() const { return m_phoneNumberType; }
  inline void SetPhoneNumberType(PhoneNumberType value) {
    m_phoneNumberTypeHasBeenSet = true;
    m_phoneNumberType = value;
  }
  inline CarrierLookupResult& WithPhoneNumberType(PhoneNumberType value) {
    SetPhoneNumberType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CarrierLookupResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_e164PhoneNumber;

  Aws::String m_dialingCountryCode;

  Aws::String m_isoCountryCode;

  Aws::String m_country;

  Aws::String m_mCC;

  Aws::String m_mNC;

  Aws::String m_carrier;

  PhoneNumberType m_phoneNumberType{PhoneNumberType::NOT_SET};

  Aws::String m_requestId;
  bool m_e164PhoneNumberHasBeenSet = false;
  bool m_dialingCountryCodeHasBeenSet = false;
  bool m_isoCountryCodeHasBeenSet = false;
  bool m_countryHasBeenSet = false;
  bool m_mCCHasBeenSet = false;
  bool m_mNCHasBeenSet = false;
  bool m_carrierHasBeenSet = false;
  bool m_phoneNumberTypeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
