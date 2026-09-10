/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>

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
class ListAvailablePhoneNumbersResult {
 public:
  AWS_PINPOINTSMSVOICEV2_API ListAvailablePhoneNumbersResult() = default;
  AWS_PINPOINTSMSVOICEV2_API ListAvailablePhoneNumbersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PINPOINTSMSVOICEV2_API ListAvailablePhoneNumbersResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of phone numbers, in E.164 format, that are available to request
   * based on the specified filters.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAvailablePhoneNumbers() const { return m_availablePhoneNumbers; }
  template <typename AvailablePhoneNumbersT = Aws::Vector<Aws::String>>
  void SetAvailablePhoneNumbers(AvailablePhoneNumbersT&& value) {
    m_availablePhoneNumbersHasBeenSet = true;
    m_availablePhoneNumbers = std::forward<AvailablePhoneNumbersT>(value);
  }
  template <typename AvailablePhoneNumbersT = Aws::Vector<Aws::String>>
  ListAvailablePhoneNumbersResult& WithAvailablePhoneNumbers(AvailablePhoneNumbersT&& value) {
    SetAvailablePhoneNumbers(std::forward<AvailablePhoneNumbersT>(value));
    return *this;
  }
  template <typename AvailablePhoneNumbersT = Aws::String>
  ListAvailablePhoneNumbersResult& AddAvailablePhoneNumbers(AvailablePhoneNumbersT&& value) {
    m_availablePhoneNumbersHasBeenSet = true;
    m_availablePhoneNumbers.emplace_back(std::forward<AvailablePhoneNumbersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to include in the next request to retrieve the next page of
   * results. This value is null when there are no more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAvailablePhoneNumbersResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListAvailablePhoneNumbersResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Aws::String> m_availablePhoneNumbers;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_availablePhoneNumbersHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
