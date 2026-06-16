/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/ProspectingTaskSummary.h>

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
/**
 * <p>Represents the response structure containing a paginated list of prospecting
 * task summaries matching the request filters. Indicates through
 * <code>NextToken</code> when additional results are available.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ListProspectingFromEngagementTasksResponse">AWS
 * API Reference</a></p>
 */
class ListProspectingFromEngagementTasksResult {
 public:
  AWS_PARTNERCENTRALSELLING_API ListProspectingFromEngagementTasksResult() = default;
  AWS_PARTNERCENTRALSELLING_API ListProspectingFromEngagementTasksResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALSELLING_API ListProspectingFromEngagementTasksResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A pagination token used to retrieve the next page of results. If this field
   * is present, pass its value as <code>NextToken</code> in the next call. If absent
   * or empty, there are no further pages.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListProspectingFromEngagementTasksResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Prospecting task summaries matching the specified filters. Each summary
   * includes the task identifier, name, status counters, and timing information. If
   * no tasks match the filter criteria, the list is empty.</p>
   */
  inline const Aws::Vector<ProspectingTaskSummary>& GetTaskSummaries() const { return m_taskSummaries; }
  template <typename TaskSummariesT = Aws::Vector<ProspectingTaskSummary>>
  void SetTaskSummaries(TaskSummariesT&& value) {
    m_taskSummariesHasBeenSet = true;
    m_taskSummaries = std::forward<TaskSummariesT>(value);
  }
  template <typename TaskSummariesT = Aws::Vector<ProspectingTaskSummary>>
  ListProspectingFromEngagementTasksResult& WithTaskSummaries(TaskSummariesT&& value) {
    SetTaskSummaries(std::forward<TaskSummariesT>(value));
    return *this;
  }
  template <typename TaskSummariesT = ProspectingTaskSummary>
  ListProspectingFromEngagementTasksResult& AddTaskSummaries(TaskSummariesT&& value) {
    m_taskSummariesHasBeenSet = true;
    m_taskSummaries.emplace_back(std::forward<TaskSummariesT>(value));
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
  ListProspectingFromEngagementTasksResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<ProspectingTaskSummary> m_taskSummaries;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_taskSummariesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
