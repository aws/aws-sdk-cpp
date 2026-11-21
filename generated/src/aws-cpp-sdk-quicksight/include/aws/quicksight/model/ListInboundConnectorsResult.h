/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/InboundConnectorSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {
class ListInboundConnectorsResult {
 public:
  AWS_QUICKSIGHT_API ListInboundConnectorsResult() = default;
  AWS_QUICKSIGHT_API ListInboundConnectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API ListInboundConnectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The HTTP status of the request.</p>
   */
  inline int GetStatus() const { return m_status; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListInboundConnectorsResult& WithStatus(int value) {
    SetStatus(value);
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
  ListInboundConnectorsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of inbound connector summaries.</p>
   */
  inline const Aws::Vector<InboundConnectorSummary>& GetInboundConnectorSummaries() const { return m_inboundConnectorSummaries; }
  template <typename InboundConnectorSummariesT = Aws::Vector<InboundConnectorSummary>>
  void SetInboundConnectorSummaries(InboundConnectorSummariesT&& value) {
    m_inboundConnectorSummariesHasBeenSet = true;
    m_inboundConnectorSummaries = std::forward<InboundConnectorSummariesT>(value);
  }
  template <typename InboundConnectorSummariesT = Aws::Vector<InboundConnectorSummary>>
  ListInboundConnectorsResult& WithInboundConnectorSummaries(InboundConnectorSummariesT&& value) {
    SetInboundConnectorSummaries(std::forward<InboundConnectorSummariesT>(value));
    return *this;
  }
  template <typename InboundConnectorSummariesT = InboundConnectorSummary>
  ListInboundConnectorsResult& AddInboundConnectorSummaries(InboundConnectorSummariesT&& value) {
    m_inboundConnectorSummariesHasBeenSet = true;
    m_inboundConnectorSummaries.emplace_back(std::forward<InboundConnectorSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results, or null if there are no more
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListInboundConnectorsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  int m_status{0};

  Aws::String m_requestId;

  Aws::Vector<InboundConnectorSummary> m_inboundConnectorSummaries;

  Aws::String m_nextToken;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_inboundConnectorSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
