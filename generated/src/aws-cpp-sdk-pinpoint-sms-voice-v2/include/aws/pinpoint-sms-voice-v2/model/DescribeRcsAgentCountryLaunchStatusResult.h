/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/CountryLaunchStatusInformation.h>

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
class DescribeRcsAgentCountryLaunchStatusResult {
 public:
  AWS_PINPOINTSMSVOICEV2_API DescribeRcsAgentCountryLaunchStatusResult() = default;
  AWS_PINPOINTSMSVOICEV2_API DescribeRcsAgentCountryLaunchStatusResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PINPOINTSMSVOICEV2_API DescribeRcsAgentCountryLaunchStatusResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier for the RCS agent.</p>
   */
  inline const Aws::String& GetRcsAgentId() const { return m_rcsAgentId; }
  template <typename RcsAgentIdT = Aws::String>
  void SetRcsAgentId(RcsAgentIdT&& value) {
    m_rcsAgentIdHasBeenSet = true;
    m_rcsAgentId = std::forward<RcsAgentIdT>(value);
  }
  template <typename RcsAgentIdT = Aws::String>
  DescribeRcsAgentCountryLaunchStatusResult& WithRcsAgentId(RcsAgentIdT&& value) {
    SetRcsAgentId(std::forward<RcsAgentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the RCS agent.</p>
   */
  inline const Aws::String& GetRcsAgentArn() const { return m_rcsAgentArn; }
  template <typename RcsAgentArnT = Aws::String>
  void SetRcsAgentArn(RcsAgentArnT&& value) {
    m_rcsAgentArnHasBeenSet = true;
    m_rcsAgentArn = std::forward<RcsAgentArnT>(value);
  }
  template <typename RcsAgentArnT = Aws::String>
  DescribeRcsAgentCountryLaunchStatusResult& WithRcsAgentArn(RcsAgentArnT&& value) {
    SetRcsAgentArn(std::forward<RcsAgentArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of CountryLaunchStatusInformation objects that contain the
   * per-country launch status details.</p>
   */
  inline const Aws::Vector<CountryLaunchStatusInformation>& GetCountryLaunchStatus() const { return m_countryLaunchStatus; }
  template <typename CountryLaunchStatusT = Aws::Vector<CountryLaunchStatusInformation>>
  void SetCountryLaunchStatus(CountryLaunchStatusT&& value) {
    m_countryLaunchStatusHasBeenSet = true;
    m_countryLaunchStatus = std::forward<CountryLaunchStatusT>(value);
  }
  template <typename CountryLaunchStatusT = Aws::Vector<CountryLaunchStatusInformation>>
  DescribeRcsAgentCountryLaunchStatusResult& WithCountryLaunchStatus(CountryLaunchStatusT&& value) {
    SetCountryLaunchStatus(std::forward<CountryLaunchStatusT>(value));
    return *this;
  }
  template <typename CountryLaunchStatusT = CountryLaunchStatusInformation>
  DescribeRcsAgentCountryLaunchStatusResult& AddCountryLaunchStatus(CountryLaunchStatusT&& value) {
    m_countryLaunchStatusHasBeenSet = true;
    m_countryLaunchStatus.emplace_back(std::forward<CountryLaunchStatusT>(value));
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
  DescribeRcsAgentCountryLaunchStatusResult& WithNextToken(NextTokenT&& value) {
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
  DescribeRcsAgentCountryLaunchStatusResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_rcsAgentId;

  Aws::String m_rcsAgentArn;

  Aws::Vector<CountryLaunchStatusInformation> m_countryLaunchStatus;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_rcsAgentIdHasBeenSet = false;
  bool m_rcsAgentArnHasBeenSet = false;
  bool m_countryLaunchStatusHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
