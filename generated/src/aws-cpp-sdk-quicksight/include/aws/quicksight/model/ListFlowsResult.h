/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FlowSummary.h>

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
class ListFlowsResult {
 public:
  AWS_QUICKSIGHT_API ListFlowsResult() = default;
  AWS_QUICKSIGHT_API ListFlowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API ListFlowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A structure that contains all of the flows in your Amazon Web Services
   * account. This structure provides basic information about the flows.</p>
   */
  inline const Aws::Vector<FlowSummary>& GetFlowSummaryList() const { return m_flowSummaryList; }
  template <typename FlowSummaryListT = Aws::Vector<FlowSummary>>
  void SetFlowSummaryList(FlowSummaryListT&& value) {
    m_flowSummaryListHasBeenSet = true;
    m_flowSummaryList = std::forward<FlowSummaryListT>(value);
  }
  template <typename FlowSummaryListT = Aws::Vector<FlowSummary>>
  ListFlowsResult& WithFlowSummaryList(FlowSummaryListT&& value) {
    SetFlowSummaryList(std::forward<FlowSummaryListT>(value));
    return *this;
  }
  template <typename FlowSummaryListT = FlowSummary>
  ListFlowsResult& AddFlowSummaryList(FlowSummaryListT&& value) {
    m_flowSummaryListHasBeenSet = true;
    m_flowSummaryList.emplace_back(std::forward<FlowSummaryListT>(value));
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
  ListFlowsResult& WithNextToken(NextTokenT&& value) {
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
  ListFlowsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP status of the request.</p>
   */
  inline int GetStatus() const { return m_status; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListFlowsResult& WithStatus(int value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<FlowSummary> m_flowSummaryList;

  Aws::String m_nextToken;

  Aws::String m_requestId;

  int m_status{0};
  bool m_flowSummaryListHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
