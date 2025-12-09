/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/ListOpportunityFromEngagementTaskSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {
class ListOpportunityFromEngagementTasksResult {
 public:
  AWS_PARTNERCENTRALSELLING_API ListOpportunityFromEngagementTasksResult() = default;
  AWS_PARTNERCENTRALSELLING_API ListOpportunityFromEngagementTasksResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALSELLING_API ListOpportunityFromEngagementTasksResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of <code>ListOpportunityFromEngagementTaskSummary</code> objects,
   * each representing a task that matches the specified filters. The array may be
   * empty if no tasks match the criteria.</p>
   */
  inline const Aws::Vector<ListOpportunityFromEngagementTaskSummary>& GetTaskSummaries() const { return m_taskSummaries; }
  template <typename TaskSummariesT = Aws::Vector<ListOpportunityFromEngagementTaskSummary>>
  void SetTaskSummaries(TaskSummariesT&& value) {
    m_taskSummariesHasBeenSet = true;
    m_taskSummaries = std::forward<TaskSummariesT>(value);
  }
  template <typename TaskSummariesT = Aws::Vector<ListOpportunityFromEngagementTaskSummary>>
  ListOpportunityFromEngagementTasksResult& WithTaskSummaries(TaskSummariesT&& value) {
    SetTaskSummaries(std::forward<TaskSummariesT>(value));
    return *this;
  }
  template <typename TaskSummariesT = ListOpportunityFromEngagementTaskSummary>
  ListOpportunityFromEngagementTasksResult& AddTaskSummaries(TaskSummariesT&& value) {
    m_taskSummariesHasBeenSet = true;
    m_taskSummaries.emplace_back(std::forward<TaskSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token used for pagination to retrieve the next page of results. If there
   * are more results available, this field will contain a token that can be used in
   * a subsequent API call to retrieve the next page. If there are no more results,
   * this field will be null or an empty string.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListOpportunityFromEngagementTasksResult& WithNextToken(NextTokenT&& value) {
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
  ListOpportunityFromEngagementTasksResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ListOpportunityFromEngagementTaskSummary> m_taskSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_taskSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
