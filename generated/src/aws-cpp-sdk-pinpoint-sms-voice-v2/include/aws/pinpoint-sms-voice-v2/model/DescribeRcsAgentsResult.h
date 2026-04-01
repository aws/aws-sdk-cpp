/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsAgentInformation.h>

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
class DescribeRcsAgentsResult {
 public:
  AWS_PINPOINTSMSVOICEV2_API DescribeRcsAgentsResult() = default;
  AWS_PINPOINTSMSVOICEV2_API DescribeRcsAgentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PINPOINTSMSVOICEV2_API DescribeRcsAgentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of RcsAgentInformation objects that contain the details for the
   * requested RCS agents.</p>
   */
  inline const Aws::Vector<RcsAgentInformation>& GetRcsAgents() const { return m_rcsAgents; }
  template <typename RcsAgentsT = Aws::Vector<RcsAgentInformation>>
  void SetRcsAgents(RcsAgentsT&& value) {
    m_rcsAgentsHasBeenSet = true;
    m_rcsAgents = std::forward<RcsAgentsT>(value);
  }
  template <typename RcsAgentsT = Aws::Vector<RcsAgentInformation>>
  DescribeRcsAgentsResult& WithRcsAgents(RcsAgentsT&& value) {
    SetRcsAgents(std::forward<RcsAgentsT>(value));
    return *this;
  }
  template <typename RcsAgentsT = RcsAgentInformation>
  DescribeRcsAgentsResult& AddRcsAgents(RcsAgentsT&& value) {
    m_rcsAgentsHasBeenSet = true;
    m_rcsAgents.emplace_back(std::forward<RcsAgentsT>(value));
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
  DescribeRcsAgentsResult& WithNextToken(NextTokenT&& value) {
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
  DescribeRcsAgentsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<RcsAgentInformation> m_rcsAgents;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_rcsAgentsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
