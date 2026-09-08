/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/NumberCapability.h>
#include <aws/pinpoint-sms-voice-v2/model/NumberPreferenceItem.h>
#include <aws/pinpoint-sms-voice-v2/model/SearchableNumberType.h>

#include <utility>

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 */
class ListAvailablePhoneNumbersRequest : public PinpointSMSVoiceV2Request {
 public:
  AWS_PINPOINTSMSVOICEV2_API ListAvailablePhoneNumbersRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAvailablePhoneNumbers"; }

  AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

  AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
   * region in which to search for available phone numbers. This operation currently
   * supports only <code>US</code>.</p>
   */
  inline const Aws::String& GetIsoCountryCode() const { return m_isoCountryCode; }
  inline bool IsoCountryCodeHasBeenSet() const { return m_isoCountryCodeHasBeenSet; }
  template <typename IsoCountryCodeT = Aws::String>
  void SetIsoCountryCode(IsoCountryCodeT&& value) {
    m_isoCountryCodeHasBeenSet = true;
    m_isoCountryCode = std::forward<IsoCountryCodeT>(value);
  }
  template <typename IsoCountryCodeT = Aws::String>
  ListAvailablePhoneNumbersRequest& WithIsoCountryCode(IsoCountryCodeT&& value) {
    SetIsoCountryCode(std::forward<IsoCountryCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The capabilities to filter by, such as SMS. Only phone numbers that support
   * all of the specified capabilities are returned.</p>
   */
  inline const Aws::Vector<NumberCapability>& GetNumberCapabilities() const { return m_numberCapabilities; }
  inline bool NumberCapabilitiesHasBeenSet() const { return m_numberCapabilitiesHasBeenSet; }
  template <typename NumberCapabilitiesT = Aws::Vector<NumberCapability>>
  void SetNumberCapabilities(NumberCapabilitiesT&& value) {
    m_numberCapabilitiesHasBeenSet = true;
    m_numberCapabilities = std::forward<NumberCapabilitiesT>(value);
  }
  template <typename NumberCapabilitiesT = Aws::Vector<NumberCapability>>
  ListAvailablePhoneNumbersRequest& WithNumberCapabilities(NumberCapabilitiesT&& value) {
    SetNumberCapabilities(std::forward<NumberCapabilitiesT>(value));
    return *this;
  }
  inline ListAvailablePhoneNumbersRequest& AddNumberCapabilities(NumberCapability value) {
    m_numberCapabilitiesHasBeenSet = true;
    m_numberCapabilities.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of phone number to search for.</p>
   */
  inline SearchableNumberType GetNumberType() const { return m_numberType; }
  inline bool NumberTypeHasBeenSet() const { return m_numberTypeHasBeenSet; }
  inline void SetNumberType(SearchableNumberType value) {
    m_numberTypeHasBeenSet = true;
    m_numberType = value;
  }
  inline ListAvailablePhoneNumbersRequest& WithNumberType(SearchableNumberType value) {
    SetNumberType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The registration associated with the request. A registration is required for
   * regulated number types. You can specify either:</p> <ul> <li> <p>The unique
   * identifier of the registration.</p> </li> <li> <p>The Amazon Resource Name (ARN)
   * of the registration.</p> </li> </ul>
   */
  inline const Aws::String& GetRegistrationId() const { return m_registrationId; }
  inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }
  template <typename RegistrationIdT = Aws::String>
  void SetRegistrationId(RegistrationIdT&& value) {
    m_registrationIdHasBeenSet = true;
    m_registrationId = std::forward<RegistrationIdT>(value);
  }
  template <typename RegistrationIdT = Aws::String>
  ListAvailablePhoneNumbersRequest& WithRegistrationId(RegistrationIdT&& value) {
    SetRegistrationId(std::forward<RegistrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional. If omitted, returns unfiltered available numbers. Max 1 element for
   * List API.</p>
   */
  inline const Aws::Vector<NumberPreferenceItem>& GetNumberPreference() const { return m_numberPreference; }
  inline bool NumberPreferenceHasBeenSet() const { return m_numberPreferenceHasBeenSet; }
  template <typename NumberPreferenceT = Aws::Vector<NumberPreferenceItem>>
  void SetNumberPreference(NumberPreferenceT&& value) {
    m_numberPreferenceHasBeenSet = true;
    m_numberPreference = std::forward<NumberPreferenceT>(value);
  }
  template <typename NumberPreferenceT = Aws::Vector<NumberPreferenceItem>>
  ListAvailablePhoneNumbersRequest& WithNumberPreference(NumberPreferenceT&& value) {
    SetNumberPreference(std::forward<NumberPreferenceT>(value));
    return *this;
  }
  template <typename NumberPreferenceT = NumberPreferenceItem>
  ListAvailablePhoneNumbersRequest& AddNumberPreference(NumberPreferenceT&& value) {
    m_numberPreferenceHasBeenSet = true;
    m_numberPreference.emplace_back(std::forward<NumberPreferenceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token returned from a previous request to retrieve the next page of
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAvailablePhoneNumbersRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return per page. If you don't specify a
   * value, the default is 10.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAvailablePhoneNumbersRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_isoCountryCode;

  Aws::Vector<NumberCapability> m_numberCapabilities;

  SearchableNumberType m_numberType{SearchableNumberType::NOT_SET};

  Aws::String m_registrationId;

  Aws::Vector<NumberPreferenceItem> m_numberPreference;

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_isoCountryCodeHasBeenSet = false;
  bool m_numberCapabilitiesHasBeenSet = false;
  bool m_numberTypeHasBeenSet = false;
  bool m_registrationIdHasBeenSet = false;
  bool m_numberPreferenceHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
