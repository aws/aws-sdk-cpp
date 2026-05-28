/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/ServiceSummary.h>

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
class ListServicesResult {
 public:
  AWS_RESILIENCEHUBV2_API ListServicesResult() = default;
  AWS_RESILIENCEHUBV2_API ListServicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESILIENCEHUBV2_API ListServicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of service summaries.</p>
   */
  inline const Aws::Vector<ServiceSummary>& GetServiceSummaries() const { return m_serviceSummaries; }
  template <typename ServiceSummariesT = Aws::Vector<ServiceSummary>>
  void SetServiceSummaries(ServiceSummariesT&& value) {
    m_serviceSummariesHasBeenSet = true;
    m_serviceSummaries = std::forward<ServiceSummariesT>(value);
  }
  template <typename ServiceSummariesT = Aws::Vector<ServiceSummary>>
  ListServicesResult& WithServiceSummaries(ServiceSummariesT&& value) {
    SetServiceSummaries(std::forward<ServiceSummariesT>(value));
    return *this;
  }
  template <typename ServiceSummariesT = ServiceSummary>
  ListServicesResult& AddServiceSummaries(ServiceSummariesT&& value) {
    m_serviceSummariesHasBeenSet = true;
    m_serviceSummaries.emplace_back(std::forward<ServiceSummariesT>(value));
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
  ListServicesResult& WithNextToken(NextTokenT&& value) {
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
  ListServicesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ServiceSummary> m_serviceSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_serviceSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
