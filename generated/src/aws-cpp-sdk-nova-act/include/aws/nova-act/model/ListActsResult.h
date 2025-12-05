/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/ActSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NovaAct {
namespace Model {
class ListActsResult {
 public:
  AWS_NOVAACT_API ListActsResult() = default;
  AWS_NOVAACT_API ListActsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NOVAACT_API ListActsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of summary information for acts in the session.</p>
   */
  inline const Aws::Vector<ActSummary>& GetActSummaries() const { return m_actSummaries; }
  template <typename ActSummariesT = Aws::Vector<ActSummary>>
  void SetActSummaries(ActSummariesT&& value) {
    m_actSummariesHasBeenSet = true;
    m_actSummaries = std::forward<ActSummariesT>(value);
  }
  template <typename ActSummariesT = Aws::Vector<ActSummary>>
  ListActsResult& WithActSummaries(ActSummariesT&& value) {
    SetActSummaries(std::forward<ActSummariesT>(value));
    return *this;
  }
  template <typename ActSummariesT = ActSummary>
  ListActsResult& AddActSummaries(ActSummariesT&& value) {
    m_actSummariesHasBeenSet = true;
    m_actSummaries.emplace_back(std::forward<ActSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for retrieving the next page of results, if available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListActsResult& WithNextToken(NextTokenT&& value) {
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
  ListActsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ActSummary> m_actSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_actSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
