/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/KnowledgeBaseRefreshScheduleSummary.h>

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
class ListKnowledgeBaseRefreshSchedulesResult {
 public:
  AWS_QUICKSIGHT_API ListKnowledgeBaseRefreshSchedulesResult() = default;
  AWS_QUICKSIGHT_API ListKnowledgeBaseRefreshSchedulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API ListKnowledgeBaseRefreshSchedulesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of refresh schedules for the knowledge base.</p>
   */
  inline const Aws::Vector<KnowledgeBaseRefreshScheduleSummary>& GetScheduleSummaries() const { return m_scheduleSummaries; }
  template <typename ScheduleSummariesT = Aws::Vector<KnowledgeBaseRefreshScheduleSummary>>
  void SetScheduleSummaries(ScheduleSummariesT&& value) {
    m_scheduleSummariesHasBeenSet = true;
    m_scheduleSummaries = std::forward<ScheduleSummariesT>(value);
  }
  template <typename ScheduleSummariesT = Aws::Vector<KnowledgeBaseRefreshScheduleSummary>>
  ListKnowledgeBaseRefreshSchedulesResult& WithScheduleSummaries(ScheduleSummariesT&& value) {
    SetScheduleSummaries(std::forward<ScheduleSummariesT>(value));
    return *this;
  }
  template <typename ScheduleSummariesT = KnowledgeBaseRefreshScheduleSummary>
  ListKnowledgeBaseRefreshSchedulesResult& AddScheduleSummaries(ScheduleSummariesT&& value) {
    m_scheduleSummariesHasBeenSet = true;
    m_scheduleSummaries.emplace_back(std::forward<ScheduleSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the knowledge base that the schedules apply
   * to.</p>
   */
  inline const Aws::String& GetKnowledgeBaseArn() const { return m_knowledgeBaseArn; }
  template <typename KnowledgeBaseArnT = Aws::String>
  void SetKnowledgeBaseArn(KnowledgeBaseArnT&& value) {
    m_knowledgeBaseArnHasBeenSet = true;
    m_knowledgeBaseArn = std::forward<KnowledgeBaseArnT>(value);
  }
  template <typename KnowledgeBaseArnT = Aws::String>
  ListKnowledgeBaseRefreshSchedulesResult& WithKnowledgeBaseArn(KnowledgeBaseArnT&& value) {
    SetKnowledgeBaseArn(std::forward<KnowledgeBaseArnT>(value));
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
  ListKnowledgeBaseRefreshSchedulesResult& WithNextToken(NextTokenT&& value) {
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
  ListKnowledgeBaseRefreshSchedulesResult& WithRequestId(RequestIdT&& value) {
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
  inline ListKnowledgeBaseRefreshSchedulesResult& WithStatus(int value) {
    SetStatus(value);
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<KnowledgeBaseRefreshScheduleSummary> m_scheduleSummaries;

  Aws::String m_knowledgeBaseArn;

  Aws::String m_nextToken;

  Aws::String m_requestId;

  int m_status{0};
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_scheduleSummariesHasBeenSet = false;
  bool m_knowledgeBaseArnHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
