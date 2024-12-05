/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_PARTNERCENTRALSELLING_API ListEngagementFromOpportunityTasksResult();
    AWS_PARTNERCENTRALSELLING_API ListEngagementFromOpportunityTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API ListEngagementFromOpportunityTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A token used for pagination to retrieve the next page of results. If there
     * are more results available, this field will contain a token that can be used in
     * a subsequent API call to retrieve the next page. If there are no more results,
     * this field will be null or an empty string. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEngagementFromOpportunityTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEngagementFromOpportunityTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEngagementFromOpportunityTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> TaskSummaries An array of TaskSummary objects containing details about each
     * task. </p>
     */
    inline const Aws::Vector<ListEngagementFromOpportunityTaskSummary>& GetTaskSummaries() const{ return m_taskSummaries; }
    inline void SetTaskSummaries(const Aws::Vector<ListEngagementFromOpportunityTaskSummary>& value) { m_taskSummaries = value; }
    inline void SetTaskSummaries(Aws::Vector<ListEngagementFromOpportunityTaskSummary>&& value) { m_taskSummaries = std::move(value); }
    inline ListEngagementFromOpportunityTasksResult& WithTaskSummaries(const Aws::Vector<ListEngagementFromOpportunityTaskSummary>& value) { SetTaskSummaries(value); return *this;}
    inline ListEngagementFromOpportunityTasksResult& WithTaskSummaries(Aws::Vector<ListEngagementFromOpportunityTaskSummary>&& value) { SetTaskSummaries(std::move(value)); return *this;}
    inline ListEngagementFromOpportunityTasksResult& AddTaskSummaries(const ListEngagementFromOpportunityTaskSummary& value) { m_taskSummaries.push_back(value); return *this; }
    inline ListEngagementFromOpportunityTasksResult& AddTaskSummaries(ListEngagementFromOpportunityTaskSummary&& value) { m_taskSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEngagementFromOpportunityTasksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEngagementFromOpportunityTasksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEngagementFromOpportunityTasksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ListEngagementFromOpportunityTaskSummary> m_taskSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
