/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/ListEngagementFromOpportunityTaskSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PartnerCentralSelling
{
namespace Model
{
  class ListEngagementFromOpportunityTasksResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListEngagementFromOpportunityTasksResult() = default;
    AWS_PARTNERCENTRALSELLING_API ListEngagementFromOpportunityTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API ListEngagementFromOpportunityTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> TaskSummaries An array of TaskSummary objects containing details about each
     * task. </p>
     */
    inline const Aws::Vector<ListEngagementFromOpportunityTaskSummary>& GetTaskSummaries() const { return m_taskSummaries; }
    template<typename TaskSummariesT = Aws::Vector<ListEngagementFromOpportunityTaskSummary>>
    void SetTaskSummaries(TaskSummariesT&& value) { m_taskSummariesHasBeenSet = true; m_taskSummaries = std::forward<TaskSummariesT>(value); }
    template<typename TaskSummariesT = Aws::Vector<ListEngagementFromOpportunityTaskSummary>>
    ListEngagementFromOpportunityTasksResult& WithTaskSummaries(TaskSummariesT&& value) { SetTaskSummaries(std::forward<TaskSummariesT>(value)); return *this;}
    template<typename TaskSummariesT = ListEngagementFromOpportunityTaskSummary>
    ListEngagementFromOpportunityTasksResult& AddTaskSummaries(TaskSummariesT&& value) { m_taskSummariesHasBeenSet = true; m_taskSummaries.emplace_back(std::forward<TaskSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token used for pagination to retrieve the next page of results. If there
     * are more results available, this field will contain a token that can be used in
     * a subsequent API call to retrieve the next page. If there are no more results,
     * this field will be null or an empty string. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEngagementFromOpportunityTasksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEngagementFromOpportunityTasksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ListEngagementFromOpportunityTaskSummary> m_taskSummaries;
    bool m_taskSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
