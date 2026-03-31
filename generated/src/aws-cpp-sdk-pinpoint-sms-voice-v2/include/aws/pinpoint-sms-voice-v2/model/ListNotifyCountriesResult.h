/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/NotifyCountryInformation.h>

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
class ListNotifyCountriesResult {
 public:
  AWS_PINPOINTSMSVOICEV2_API ListNotifyCountriesResult() = default;
  AWS_PINPOINTSMSVOICEV2_API ListNotifyCountriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PINPOINTSMSVOICEV2_API ListNotifyCountriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of NotifyCountryInformation objects that contain the results.</p>
   */
  inline const Aws::Vector<NotifyCountryInformation>& GetNotifyCountries() const { return m_notifyCountries; }
  template <typename NotifyCountriesT = Aws::Vector<NotifyCountryInformation>>
  void SetNotifyCountries(NotifyCountriesT&& value) {
    m_notifyCountriesHasBeenSet = true;
    m_notifyCountries = std::forward<NotifyCountriesT>(value);
  }
  template <typename NotifyCountriesT = Aws::Vector<NotifyCountryInformation>>
  ListNotifyCountriesResult& WithNotifyCountries(NotifyCountriesT&& value) {
    SetNotifyCountries(std::forward<NotifyCountriesT>(value));
    return *this;
  }
  template <typename NotifyCountriesT = NotifyCountryInformation>
  ListNotifyCountriesResult& AddNotifyCountries(NotifyCountriesT&& value) {
    m_notifyCountriesHasBeenSet = true;
    m_notifyCountries.emplace_back(std::forward<NotifyCountriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to be used for the next set of paginated results. If this field is
   * empty then there are no more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListNotifyCountriesResult& WithNextToken(NextTokenT&& value) {
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
  ListNotifyCountriesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<NotifyCountryInformation> m_notifyCountries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_notifyCountriesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
