/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>

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
class UpdateLinkedWhatsAppBusinessAccountPhoneNumberResult {
 public:
  AWS_SOCIALMESSAGING_API UpdateLinkedWhatsAppBusinessAccountPhoneNumberResult() = default;
  AWS_SOCIALMESSAGING_API UpdateLinkedWhatsAppBusinessAccountPhoneNumberResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SOCIALMESSAGING_API UpdateLinkedWhatsAppBusinessAccountPhoneNumberResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the phone number that was updated.</p>
   */
  inline const Aws::String& GetPhoneNumberId() const { return m_phoneNumberId; }
  template <typename PhoneNumberIdT = Aws::String>
  void SetPhoneNumberId(PhoneNumberIdT&& value) {
    m_phoneNumberIdHasBeenSet = true;
    m_phoneNumberId = std::forward<PhoneNumberIdT>(value);
  }
  template <typename PhoneNumberIdT = Aws::String>
  UpdateLinkedWhatsAppBusinessAccountPhoneNumberResult& WithPhoneNumberId(PhoneNumberIdT&& value) {
    SetPhoneNumberId(std::forward<PhoneNumberIdT>(value));
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
  UpdateLinkedWhatsAppBusinessAccountPhoneNumberResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_phoneNumberId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_phoneNumberIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
