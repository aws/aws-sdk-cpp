/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/WorkflowExecutionInfo.h>
#include <aws/swf/model/WorkflowExecutionConfiguration.h>
#include <aws/swf/model/WorkflowExecutionOpenCounts.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Contains details about a workflow execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowExecutionDetail">AWS
   * API Reference</a></p>
   */
  class DescribeWorkflowExecutionResult
  {
  public:
    AWS_SWF_API DescribeWorkflowExecutionResult() = default;
    AWS_SWF_API DescribeWorkflowExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SWF_API DescribeWorkflowExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the workflow execution.</p>
     */
    inline const WorkflowExecutionInfo& GetExecutionInfo() const { return m_executionInfo; }
    template<typename ExecutionInfoT = WorkflowExecutionInfo>
    void SetExecutionInfo(ExecutionInfoT&& value) { m_executionInfoHasBeenSet = true; m_executionInfo = std::forward<ExecutionInfoT>(value); }
    template<typename ExecutionInfoT = WorkflowExecutionInfo>
    DescribeWorkflowExecutionResult& WithExecutionInfo(ExecutionInfoT&& value) { SetExecutionInfo(std::forward<ExecutionInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for this workflow execution including timeout
     * values, tasklist etc.</p>
     */
    inline const WorkflowExecutionConfiguration& GetExecutionConfiguration() const { return m_executionConfiguration; }
    template<typename ExecutionConfigurationT = WorkflowExecutionConfiguration>
    void SetExecutionConfiguration(ExecutionConfigurationT&& value) { m_executionConfigurationHasBeenSet = true; m_executionConfiguration = std::forward<ExecutionConfigurationT>(value); }
    template<typename ExecutionConfigurationT = WorkflowExecutionConfiguration>
    DescribeWorkflowExecutionResult& WithExecutionConfiguration(ExecutionConfigurationT&& value) { SetExecutionConfiguration(std::forward<ExecutionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tasks for this workflow execution. This includes open and
     * closed tasks of all types.</p>
     */
    inline const WorkflowExecutionOpenCounts& GetOpenCounts() const { return m_openCounts; }
    template<typename OpenCountsT = WorkflowExecutionOpenCounts>
    void SetOpenCounts(OpenCountsT&& value) { m_openCountsHasBeenSet = true; m_openCounts = std::forward<OpenCountsT>(value); }
    template<typename OpenCountsT = WorkflowExecutionOpenCounts>
    DescribeWorkflowExecutionResult& WithOpenCounts(OpenCountsT&& value) { SetOpenCounts(std::forward<OpenCountsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the last activity task was scheduled for this workflow
     * execution. You can use this information to determine if the workflow has not
     * made progress for an unusually long period of time and might require a
     * corrective action.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestActivityTaskTimestamp() const { return m_latestActivityTaskTimestamp; }
    template<typename LatestActivityTaskTimestampT = Aws::Utils::DateTime>
    void SetLatestActivityTaskTimestamp(LatestActivityTaskTimestampT&& value) { m_latestActivityTaskTimestampHasBeenSet = true; m_latestActivityTaskTimestamp = std::forward<LatestActivityTaskTimestampT>(value); }
    template<typename LatestActivityTaskTimestampT = Aws::Utils::DateTime>
    DescribeWorkflowExecutionResult& WithLatestActivityTaskTimestamp(LatestActivityTaskTimestampT&& value) { SetLatestActivityTaskTimestamp(std::forward<LatestActivityTaskTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest executionContext provided by the decider for this workflow
     * execution. A decider can provide an executionContext (a free-form string) when
     * closing a decision task using <a>RespondDecisionTaskCompleted</a>.</p>
     */
    inline const Aws::String& GetLatestExecutionContext() const { return m_latestExecutionContext; }
    template<typename LatestExecutionContextT = Aws::String>
    void SetLatestExecutionContext(LatestExecutionContextT&& value) { m_latestExecutionContextHasBeenSet = true; m_latestExecutionContext = std::forward<LatestExecutionContextT>(value); }
    template<typename LatestExecutionContextT = Aws::String>
    DescribeWorkflowExecutionResult& WithLatestExecutionContext(LatestExecutionContextT&& value) { SetLatestExecutionContext(std::forward<LatestExecutionContextT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeWorkflowExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    WorkflowExecutionInfo m_executionInfo;
    bool m_executionInfoHasBeenSet = false;

    WorkflowExecutionConfiguration m_executionConfiguration;
    bool m_executionConfigurationHasBeenSet = false;

    WorkflowExecutionOpenCounts m_openCounts;
    bool m_openCountsHasBeenSet = false;

    Aws::Utils::DateTime m_latestActivityTaskTimestamp{};
    bool m_latestActivityTaskTimestampHasBeenSet = false;

    Aws::String m_latestExecutionContext;
    bool m_latestExecutionContextHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
