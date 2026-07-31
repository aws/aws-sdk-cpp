/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/ResolvedTargetResource.h>

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
class ListResolvedTestRunTargetResourcesResult {
 public:
  AWS_RESILIENCEHUBV2_API ListResolvedTestRunTargetResourcesResult() = default;
  AWS_RESILIENCEHUBV2_API ListResolvedTestRunTargetResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESILIENCEHUBV2_API ListResolvedTestRunTargetResourcesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of resolved target resources.</p>
   */
  inline const Aws::Vector<ResolvedTargetResource>& GetResolvedTargetResources() const { return m_resolvedTargetResources; }
  template <typename ResolvedTargetResourcesT = Aws::Vector<ResolvedTargetResource>>
  void SetResolvedTargetResources(ResolvedTargetResourcesT&& value) {
    m_resolvedTargetResourcesHasBeenSet = true;
    m_resolvedTargetResources = std::forward<ResolvedTargetResourcesT>(value);
  }
  template <typename ResolvedTargetResourcesT = Aws::Vector<ResolvedTargetResource>>
  ListResolvedTestRunTargetResourcesResult& WithResolvedTargetResources(ResolvedTargetResourcesT&& value) {
    SetResolvedTargetResources(std::forward<ResolvedTargetResourcesT>(value));
    return *this;
  }
  template <typename ResolvedTargetResourcesT = ResolvedTargetResource>
  ListResolvedTestRunTargetResourcesResult& AddResolvedTargetResources(ResolvedTargetResourcesT&& value) {
    m_resolvedTargetResourcesHasBeenSet = true;
    m_resolvedTargetResources.emplace_back(std::forward<ResolvedTargetResourcesT>(value));
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
  ListResolvedTestRunTargetResourcesResult& WithNextToken(NextTokenT&& value) {
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
  ListResolvedTestRunTargetResourcesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ResolvedTargetResource> m_resolvedTargetResources;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_resolvedTargetResourcesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
