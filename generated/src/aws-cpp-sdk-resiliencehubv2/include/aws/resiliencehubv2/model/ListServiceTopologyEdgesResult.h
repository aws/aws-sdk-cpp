/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/ServiceTopologyEdgeSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {
class ListServiceTopologyEdgesResult {
 public:
  AWS_RESILIENCEHUBV2_API ListServiceTopologyEdgesResult() = default;
  AWS_RESILIENCEHUBV2_API ListServiceTopologyEdgesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESILIENCEHUBV2_API ListServiceTopologyEdgesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of service topology edge summaries.</p>
   */
  inline const Aws::Vector<ServiceTopologyEdgeSummary>& GetServiceTopologyEdgeSummaries() const { return m_serviceTopologyEdgeSummaries; }
  template <typename ServiceTopologyEdgeSummariesT = Aws::Vector<ServiceTopologyEdgeSummary>>
  void SetServiceTopologyEdgeSummaries(ServiceTopologyEdgeSummariesT&& value) {
    m_serviceTopologyEdgeSummariesHasBeenSet = true;
    m_serviceTopologyEdgeSummaries = std::forward<ServiceTopologyEdgeSummariesT>(value);
  }
  template <typename ServiceTopologyEdgeSummariesT = Aws::Vector<ServiceTopologyEdgeSummary>>
  ListServiceTopologyEdgesResult& WithServiceTopologyEdgeSummaries(ServiceTopologyEdgeSummariesT&& value) {
    SetServiceTopologyEdgeSummaries(std::forward<ServiceTopologyEdgeSummariesT>(value));
    return *this;
  }
  template <typename ServiceTopologyEdgeSummariesT = ServiceTopologyEdgeSummary>
  ListServiceTopologyEdgesResult& AddServiceTopologyEdgeSummaries(ServiceTopologyEdgeSummariesT&& value) {
    m_serviceTopologyEdgeSummariesHasBeenSet = true;
    m_serviceTopologyEdgeSummaries.emplace_back(std::forward<ServiceTopologyEdgeSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListServiceTopologyEdgesResult& WithNextToken(NextTokenT&& value) {
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
  ListServiceTopologyEdgesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ServiceTopologyEdgeSummary> m_serviceTopologyEdgeSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_serviceTopologyEdgeSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
