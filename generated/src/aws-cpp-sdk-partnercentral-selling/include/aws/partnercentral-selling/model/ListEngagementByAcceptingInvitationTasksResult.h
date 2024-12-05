/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/ListEngagementByAcceptingInvitationTaskSummary.h>
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
  class ListEngagementByAcceptingInvitationTasksResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListEngagementByAcceptingInvitationTasksResult();
    AWS_PARTNERCENTRALSELLING_API ListEngagementByAcceptingInvitationTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API ListEngagementByAcceptingInvitationTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A token used for pagination to retrieve the next page of results.If there
     * are more results available, this field will contain a token that can be used in
     * a subsequent API call to retrieve the next page. If there are no more results,
     * this field will be null or an empty string. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEngagementByAcceptingInvitationTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEngagementByAcceptingInvitationTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEngagementByAcceptingInvitationTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of <code>EngagementByAcceptingInvitationTaskSummary</code> objects,
     * each representing a task that matches the specified filters. The array may be
     * empty if no tasks match the criteria. </p>
     */
    inline const Aws::Vector<ListEngagementByAcceptingInvitationTaskSummary>& GetTaskSummaries() const{ return m_taskSummaries; }
    inline void SetTaskSummaries(const Aws::Vector<ListEngagementByAcceptingInvitationTaskSummary>& value) { m_taskSummaries = value; }
    inline void SetTaskSummaries(Aws::Vector<ListEngagementByAcceptingInvitationTaskSummary>&& value) { m_taskSummaries = std::move(value); }
    inline ListEngagementByAcceptingInvitationTasksResult& WithTaskSummaries(const Aws::Vector<ListEngagementByAcceptingInvitationTaskSummary>& value) { SetTaskSummaries(value); return *this;}
    inline ListEngagementByAcceptingInvitationTasksResult& WithTaskSummaries(Aws::Vector<ListEngagementByAcceptingInvitationTaskSummary>&& value) { SetTaskSummaries(std::move(value)); return *this;}
    inline ListEngagementByAcceptingInvitationTasksResult& AddTaskSummaries(const ListEngagementByAcceptingInvitationTaskSummary& value) { m_taskSummaries.push_back(value); return *this; }
    inline ListEngagementByAcceptingInvitationTasksResult& AddTaskSummaries(ListEngagementByAcceptingInvitationTaskSummary&& value) { m_taskSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEngagementByAcceptingInvitationTasksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEngagementByAcceptingInvitationTasksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEngagementByAcceptingInvitationTasksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ListEngagementByAcceptingInvitationTaskSummary> m_taskSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
