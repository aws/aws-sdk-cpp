/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/AlarmMuteRuleSummary.h>
#include <aws/monitoring/model/ResponseMetadata.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatch {
namespace Model {
class ListAlarmMuteRulesResult {
 public:
  AWS_CLOUDWATCH_API ListAlarmMuteRulesResult() = default;
  AWS_CLOUDWATCH_API ListAlarmMuteRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_CLOUDWATCH_API ListAlarmMuteRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>A list of alarm mute rule summaries.</p>
   */
  inline const Aws::Vector<AlarmMuteRuleSummary>& GetAlarmMuteRuleSummaries() const { return m_alarmMuteRuleSummaries; }
  template <typename AlarmMuteRuleSummariesT = Aws::Vector<AlarmMuteRuleSummary>>
  void SetAlarmMuteRuleSummaries(AlarmMuteRuleSummariesT&& value) {
    m_alarmMuteRuleSummariesHasBeenSet = true;
    m_alarmMuteRuleSummaries = std::forward<AlarmMuteRuleSummariesT>(value);
  }
  template <typename AlarmMuteRuleSummariesT = Aws::Vector<AlarmMuteRuleSummary>>
  ListAlarmMuteRulesResult& WithAlarmMuteRuleSummaries(AlarmMuteRuleSummariesT&& value) {
    SetAlarmMuteRuleSummaries(std::forward<AlarmMuteRuleSummariesT>(value));
    return *this;
  }
  template <typename AlarmMuteRuleSummariesT = AlarmMuteRuleSummary>
  ListAlarmMuteRulesResult& AddAlarmMuteRuleSummaries(AlarmMuteRuleSummariesT&& value) {
    m_alarmMuteRuleSummariesHasBeenSet = true;
    m_alarmMuteRuleSummaries.emplace_back(std::forward<AlarmMuteRuleSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use when requesting the next set of results. If this field is
   * absent, there are no more results to retrieve.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAlarmMuteRulesResult& WithNextToken(NextTokenT&& value) {
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
  ListAlarmMuteRulesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  ListAlarmMuteRulesResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AlarmMuteRuleSummary> m_alarmMuteRuleSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_alarmMuteRuleSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
