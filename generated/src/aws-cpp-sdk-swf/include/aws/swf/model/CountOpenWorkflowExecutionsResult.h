/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains the count of workflow executions returned from
   * <a>CountOpenWorkflowExecutions</a> or <a>CountClosedWorkflowExecutions</a>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowExecutionCount">AWS
   * API Reference</a></p>
   */
  class CountOpenWorkflowExecutionsResult
  {
  public:
    AWS_SWF_API CountOpenWorkflowExecutionsResult();
    AWS_SWF_API CountOpenWorkflowExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SWF_API CountOpenWorkflowExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of workflow executions.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of workflow executions.</p>
     */
    inline void SetCount(int value) { m_count = value; }

    /**
     * <p>The number of workflow executions.</p>
     */
    inline CountOpenWorkflowExecutionsResult& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>If set to true, indicates that the actual count was more than the maximum
     * supported by this API and the count returned is the truncated value.</p>
     */
    inline bool GetTruncated() const{ return m_truncated; }

    /**
     * <p>If set to true, indicates that the actual count was more than the maximum
     * supported by this API and the count returned is the truncated value.</p>
     */
    inline void SetTruncated(bool value) { m_truncated = value; }

    /**
     * <p>If set to true, indicates that the actual count was more than the maximum
     * supported by this API and the count returned is the truncated value.</p>
     */
    inline CountOpenWorkflowExecutionsResult& WithTruncated(bool value) { SetTruncated(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CountOpenWorkflowExecutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CountOpenWorkflowExecutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CountOpenWorkflowExecutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_count;

    bool m_truncated;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
