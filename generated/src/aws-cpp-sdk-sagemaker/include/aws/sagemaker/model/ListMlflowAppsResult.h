/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/MlflowAppSummary.h>

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
class ListMlflowAppsResult {
 public:
  AWS_SAGEMAKER_API ListMlflowAppsResult() = default;
  AWS_SAGEMAKER_API ListMlflowAppsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API ListMlflowAppsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of MLflow Apps according to chosen filters.</p>
   */
  inline const Aws::Vector<MlflowAppSummary>& GetSummaries() const { return m_summaries; }
  template <typename SummariesT = Aws::Vector<MlflowAppSummary>>
  void SetSummaries(SummariesT&& value) {
    m_summariesHasBeenSet = true;
    m_summaries = std::forward<SummariesT>(value);
  }
  template <typename SummariesT = Aws::Vector<MlflowAppSummary>>
  ListMlflowAppsResult& WithSummaries(SummariesT&& value) {
    SetSummaries(std::forward<SummariesT>(value));
    return *this;
  }
  template <typename SummariesT = MlflowAppSummary>
  ListMlflowAppsResult& AddSummaries(SummariesT&& value) {
    m_summariesHasBeenSet = true;
    m_summaries.emplace_back(std::forward<SummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the previous response was truncated, you will receive this token. Use it
   * in your next request to receive the next set of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListMlflowAppsResult& WithNextToken(NextTokenT&& value) {
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
  ListMlflowAppsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<MlflowAppSummary> m_summaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_summariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
