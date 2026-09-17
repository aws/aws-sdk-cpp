/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/model/WhatsAppCallSettings.h>
#include <aws/socialmessaging/model/WhatsAppPhoneNumberDetail.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SocialMessaging {
namespace Model {
class GetLinkedWhatsAppBusinessAccountPhoneNumberResult {
 public:
  AWS_SOCIALMESSAGING_API GetLinkedWhatsAppBusinessAccountPhoneNumberResult() = default;
  AWS_SOCIALMESSAGING_API GetLinkedWhatsAppBusinessAccountPhoneNumberResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SOCIALMESSAGING_API GetLinkedWhatsAppBusinessAccountPhoneNumberResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const WhatsAppPhoneNumberDetail& GetPhoneNumber() const { return m_phoneNumber; }
  template <typename PhoneNumberT = WhatsAppPhoneNumberDetail>
  void SetPhoneNumber(PhoneNumberT&& value) {
    m_phoneNumberHasBeenSet = true;
    m_phoneNumber = std::forward<PhoneNumberT>(value);
  }
  template <typename PhoneNumberT = WhatsAppPhoneNumberDetail>
  GetLinkedWhatsAppBusinessAccountPhoneNumberResult& WithPhoneNumber(PhoneNumberT&& value) {
    SetPhoneNumber(std::forward<PhoneNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The WABA identifier linked to the phone number, formatted as
   * <code>waba-01234567890123456789012345678901</code>.</p>
   */
  inline const Aws::String& GetLinkedWhatsAppBusinessAccountId() const { return m_linkedWhatsAppBusinessAccountId; }
  template <typename LinkedWhatsAppBusinessAccountIdT = Aws::String>
  void SetLinkedWhatsAppBusinessAccountId(LinkedWhatsAppBusinessAccountIdT&& value) {
    m_linkedWhatsAppBusinessAccountIdHasBeenSet = true;
    m_linkedWhatsAppBusinessAccountId = std::forward<LinkedWhatsAppBusinessAccountIdT>(value);
  }
  template <typename LinkedWhatsAppBusinessAccountIdT = Aws::String>
  GetLinkedWhatsAppBusinessAccountPhoneNumberResult& WithLinkedWhatsAppBusinessAccountId(LinkedWhatsAppBusinessAccountIdT&& value) {
    SetLinkedWhatsAppBusinessAccountId(std::forward<LinkedWhatsAppBusinessAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The calling settings configured for the phone number. This value is absent
   * when calling is not configured.</p>
   */
  inline const WhatsAppCallSettings& GetCallSettings() const { return m_callSettings; }
  template <typename CallSettingsT = WhatsAppCallSettings>
  void SetCallSettings(CallSettingsT&& value) {
    m_callSettingsHasBeenSet = true;
    m_callSettings = std::forward<CallSettingsT>(value);
  }
  template <typename CallSettingsT = WhatsAppCallSettings>
  GetLinkedWhatsAppBusinessAccountPhoneNumberResult& WithCallSettings(CallSettingsT&& value) {
    SetCallSettings(std::forward<CallSettingsT>(value));
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
  GetLinkedWhatsAppBusinessAccountPhoneNumberResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  WhatsAppPhoneNumberDetail m_phoneNumber;

  Aws::String m_linkedWhatsAppBusinessAccountId;

  WhatsAppCallSettings m_callSettings;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_phoneNumberHasBeenSet = false;
  bool m_linkedWhatsAppBusinessAccountIdHasBeenSet = false;
  bool m_callSettingsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
