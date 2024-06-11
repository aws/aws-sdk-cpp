﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/WorkflowExecutionInfo.h>
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
   * <p>Contains a paginated list of information about workflow
   * executions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowExecutionInfos">AWS
   * API Reference</a></p>
   */
  class ListClosedWorkflowExecutionsResult
  {
  public:
    AWS_SWF_API ListClosedWorkflowExecutionsResult();
    AWS_SWF_API ListClosedWorkflowExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SWF_API ListClosedWorkflowExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of workflow information structures.</p>
     */
    inline const Aws::Vector<WorkflowExecutionInfo>& GetExecutionInfos() const{ return m_executionInfos; }
    inline void SetExecutionInfos(const Aws::Vector<WorkflowExecutionInfo>& value) { m_executionInfos = value; }
    inline void SetExecutionInfos(Aws::Vector<WorkflowExecutionInfo>&& value) { m_executionInfos = std::move(value); }
    inline ListClosedWorkflowExecutionsResult& WithExecutionInfos(const Aws::Vector<WorkflowExecutionInfo>& value) { SetExecutionInfos(value); return *this;}
    inline ListClosedWorkflowExecutionsResult& WithExecutionInfos(Aws::Vector<WorkflowExecutionInfo>&& value) { SetExecutionInfos(std::move(value)); return *this;}
    inline ListClosedWorkflowExecutionsResult& AddExecutionInfos(const WorkflowExecutionInfo& value) { m_executionInfos.push_back(value); return *this; }
    inline ListClosedWorkflowExecutionsResult& AddExecutionInfos(WorkflowExecutionInfo&& value) { m_executionInfos.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline ListClosedWorkflowExecutionsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline ListClosedWorkflowExecutionsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline ListClosedWorkflowExecutionsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListClosedWorkflowExecutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListClosedWorkflowExecutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListClosedWorkflowExecutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<WorkflowExecutionInfo> m_executionInfos;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
