/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/ScheduledAction.h>
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
namespace OpenSearchService
{
namespace Model
{
  class ListScheduledActionsResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API ListScheduledActionsResult();
    AWS_OPENSEARCHSERVICE_API ListScheduledActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API ListScheduledActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of actions that are scheduled for the domain.</p>
     */
    inline const Aws::Vector<ScheduledAction>& GetScheduledActions() const{ return m_scheduledActions; }

    /**
     * <p>A list of actions that are scheduled for the domain.</p>
     */
    inline void SetScheduledActions(const Aws::Vector<ScheduledAction>& value) { m_scheduledActions = value; }

    /**
     * <p>A list of actions that are scheduled for the domain.</p>
     */
    inline void SetScheduledActions(Aws::Vector<ScheduledAction>&& value) { m_scheduledActions = std::move(value); }

    /**
     * <p>A list of actions that are scheduled for the domain.</p>
     */
    inline ListScheduledActionsResult& WithScheduledActions(const Aws::Vector<ScheduledAction>& value) { SetScheduledActions(value); return *this;}

    /**
     * <p>A list of actions that are scheduled for the domain.</p>
     */
    inline ListScheduledActionsResult& WithScheduledActions(Aws::Vector<ScheduledAction>&& value) { SetScheduledActions(std::move(value)); return *this;}

    /**
     * <p>A list of actions that are scheduled for the domain.</p>
     */
    inline ListScheduledActionsResult& AddScheduledActions(const ScheduledAction& value) { m_scheduledActions.push_back(value); return *this; }

    /**
     * <p>A list of actions that are scheduled for the domain.</p>
     */
    inline ListScheduledActionsResult& AddScheduledActions(ScheduledAction&& value) { m_scheduledActions.push_back(std::move(value)); return *this; }


    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Send the request again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Send the request again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Send the request again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Send the request again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Send the request again using the returned token to retrieve the next page.</p>
     */
    inline ListScheduledActionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Send the request again using the returned token to retrieve the next page.</p>
     */
    inline ListScheduledActionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Send the request again using the returned token to retrieve the next page.</p>
     */
    inline ListScheduledActionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListScheduledActionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListScheduledActionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListScheduledActionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ScheduledAction> m_scheduledActions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
