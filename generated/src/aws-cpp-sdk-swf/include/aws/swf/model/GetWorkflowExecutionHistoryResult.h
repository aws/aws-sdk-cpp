/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/HistoryEvent.h>
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
namespace SWF
{
namespace Model
{
  /**
   * <p>Paginated representation of a workflow history for a workflow execution. This
   * is the up to date, complete and authoritative record of the events related to
   * all tasks and events in the life of the workflow execution.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/History">AWS API
   * Reference</a></p>
   */
  class GetWorkflowExecutionHistoryResult
  {
  public:
    AWS_SWF_API GetWorkflowExecutionHistoryResult();
    AWS_SWF_API GetWorkflowExecutionHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SWF_API GetWorkflowExecutionHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of history events.</p>
     */
    inline const Aws::Vector<HistoryEvent>& GetEvents() const{ return m_events; }

    /**
     * <p>The list of history events.</p>
     */
    inline void SetEvents(const Aws::Vector<HistoryEvent>& value) { m_events = value; }

    /**
     * <p>The list of history events.</p>
     */
    inline void SetEvents(Aws::Vector<HistoryEvent>&& value) { m_events = std::move(value); }

    /**
     * <p>The list of history events.</p>
     */
    inline GetWorkflowExecutionHistoryResult& WithEvents(const Aws::Vector<HistoryEvent>& value) { SetEvents(value); return *this;}

    /**
     * <p>The list of history events.</p>
     */
    inline GetWorkflowExecutionHistoryResult& WithEvents(Aws::Vector<HistoryEvent>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>The list of history events.</p>
     */
    inline GetWorkflowExecutionHistoryResult& AddEvents(const HistoryEvent& value) { m_events.push_back(value); return *this; }

    /**
     * <p>The list of history events.</p>
     */
    inline GetWorkflowExecutionHistoryResult& AddEvents(HistoryEvent&& value) { m_events.push_back(std::move(value)); return *this; }


    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline GetWorkflowExecutionHistoryResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline GetWorkflowExecutionHistoryResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline GetWorkflowExecutionHistoryResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<HistoryEvent> m_events;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
