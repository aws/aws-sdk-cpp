/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterOperationSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {
class ListClusterOperationsResult {
 public:
  AWS_SAGEMAKER_API ListClusterOperationsResult() = default;
  AWS_SAGEMAKER_API ListClusterOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API ListClusterOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A token to retrieve the next set of results. Include this token in subsequent
   * <code>ListClusterOperations</code> calls to fetch more operations.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListClusterOperationsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of operation summaries matching the specified criteria.</p>
   */
  inline const Aws::Vector<ClusterOperationSummary>& GetClusterOperationSummaries() const { return m_clusterOperationSummaries; }
  template <typename ClusterOperationSummariesT = Aws::Vector<ClusterOperationSummary>>
  void SetClusterOperationSummaries(ClusterOperationSummariesT&& value) {
    m_clusterOperationSummariesHasBeenSet = true;
    m_clusterOperationSummaries = std::forward<ClusterOperationSummariesT>(value);
  }
  template <typename ClusterOperationSummariesT = Aws::Vector<ClusterOperationSummary>>
  ListClusterOperationsResult& WithClusterOperationSummaries(ClusterOperationSummariesT&& value) {
    SetClusterOperationSummaries(std::forward<ClusterOperationSummariesT>(value));
    return *this;
  }
  template <typename ClusterOperationSummariesT = ClusterOperationSummary>
  ListClusterOperationsResult& AddClusterOperationSummaries(ClusterOperationSummariesT&& value) {
    m_clusterOperationSummariesHasBeenSet = true;
    m_clusterOperationSummaries.emplace_back(std::forward<ClusterOperationSummariesT>(value));
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
  ListClusterOperationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<ClusterOperationSummary> m_clusterOperationSummaries;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_clusterOperationSummariesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
