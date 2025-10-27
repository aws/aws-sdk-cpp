/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ActionConnectorSummary.h>

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
class SearchActionConnectorsResult {
 public:
  AWS_QUICKSIGHT_API SearchActionConnectorsResult() = default;
  AWS_QUICKSIGHT_API SearchActionConnectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API SearchActionConnectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A pagination token to retrieve the next set of results. If null, there are no
   * more results to retrieve.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  SearchActionConnectorsResult& WithNextToken(NextTokenT&& value) {
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
  SearchActionConnectorsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP status code of the request.</p>
   */
  inline int GetStatus() const { return m_status; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline SearchActionConnectorsResult& WithStatus(int value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of action connector summaries that match the search criteria.</p>
   */
  inline const Aws::Vector<ActionConnectorSummary>& GetActionConnectorSummaries() const { return m_actionConnectorSummaries; }
  template <typename ActionConnectorSummariesT = Aws::Vector<ActionConnectorSummary>>
  void SetActionConnectorSummaries(ActionConnectorSummariesT&& value) {
    m_actionConnectorSummariesHasBeenSet = true;
    m_actionConnectorSummaries = std::forward<ActionConnectorSummariesT>(value);
  }
  template <typename ActionConnectorSummariesT = Aws::Vector<ActionConnectorSummary>>
  SearchActionConnectorsResult& WithActionConnectorSummaries(ActionConnectorSummariesT&& value) {
    SetActionConnectorSummaries(std::forward<ActionConnectorSummariesT>(value));
    return *this;
  }
  template <typename ActionConnectorSummariesT = ActionConnectorSummary>
  SearchActionConnectorsResult& AddActionConnectorSummaries(ActionConnectorSummariesT&& value) {
    m_actionConnectorSummariesHasBeenSet = true;
    m_actionConnectorSummaries.emplace_back(std::forward<ActionConnectorSummariesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;

  int m_status{0};
  bool m_statusHasBeenSet = false;

  Aws::Vector<ActionConnectorSummary> m_actionConnectorSummaries;
  bool m_actionConnectorSummariesHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
