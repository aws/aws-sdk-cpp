/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/RunBatchListItem.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Omics {
namespace Model {
class ListRunsInBatchResult {
 public:
  AWS_OMICS_API ListRunsInBatchResult() = default;
  AWS_OMICS_API ListRunsInBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OMICS_API ListRunsInBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of run entries in the batch. See <code>RunBatchListItem</code>.</p>
   */
  inline const Aws::Vector<RunBatchListItem>& GetRuns() const { return m_runs; }
  template <typename RunsT = Aws::Vector<RunBatchListItem>>
  void SetRuns(RunsT&& value) {
    m_runsHasBeenSet = true;
    m_runs = std::forward<RunsT>(value);
  }
  template <typename RunsT = Aws::Vector<RunBatchListItem>>
  ListRunsInBatchResult& WithRuns(RunsT&& value) {
    SetRuns(std::forward<RunsT>(value));
    return *this;
  }
  template <typename RunsT = RunBatchListItem>
  ListRunsInBatchResult& AddRuns(RunsT&& value) {
    m_runsHasBeenSet = true;
    m_runs.emplace_back(std::forward<RunsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token to retrieve the next page of results. Absent when the last
   * run has been returned.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRunsInBatchResult& WithNextToken(NextTokenT&& value) {
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
  ListRunsInBatchResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<RunBatchListItem> m_runs;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_runsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
