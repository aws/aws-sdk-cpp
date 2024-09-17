/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/StepExecutionFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class DescribeAutomationStepExecutionsRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DescribeAutomationStepExecutionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAutomationStepExecutions"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Automation execution ID for which you want step execution
     * descriptions.</p>
     */
    inline const Aws::String& GetAutomationExecutionId() const{ return m_automationExecutionId; }
    inline bool AutomationExecutionIdHasBeenSet() const { return m_automationExecutionIdHasBeenSet; }
    inline void SetAutomationExecutionId(const Aws::String& value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId = value; }
    inline void SetAutomationExecutionId(Aws::String&& value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId = std::move(value); }
    inline void SetAutomationExecutionId(const char* value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId.assign(value); }
    inline DescribeAutomationStepExecutionsRequest& WithAutomationExecutionId(const Aws::String& value) { SetAutomationExecutionId(value); return *this;}
    inline DescribeAutomationStepExecutionsRequest& WithAutomationExecutionId(Aws::String&& value) { SetAutomationExecutionId(std::move(value)); return *this;}
    inline DescribeAutomationStepExecutionsRequest& WithAutomationExecutionId(const char* value) { SetAutomationExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more filters to limit the number of step executions returned by the
     * request.</p>
     */
    inline const Aws::Vector<StepExecutionFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<StepExecutionFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<StepExecutionFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeAutomationStepExecutionsRequest& WithFilters(const Aws::Vector<StepExecutionFilter>& value) { SetFilters(value); return *this;}
    inline DescribeAutomationStepExecutionsRequest& WithFilters(Aws::Vector<StepExecutionFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeAutomationStepExecutionsRequest& AddFilters(const StepExecutionFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeAutomationStepExecutionsRequest& AddFilters(StepExecutionFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeAutomationStepExecutionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeAutomationStepExecutionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeAutomationStepExecutionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeAutomationStepExecutionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to list step executions in reverse order by start time. The
     * default value is 'false'.</p>
     */
    inline bool GetReverseOrder() const{ return m_reverseOrder; }
    inline bool ReverseOrderHasBeenSet() const { return m_reverseOrderHasBeenSet; }
    inline void SetReverseOrder(bool value) { m_reverseOrderHasBeenSet = true; m_reverseOrder = value; }
    inline DescribeAutomationStepExecutionsRequest& WithReverseOrder(bool value) { SetReverseOrder(value); return *this;}
    ///@}
  private:

    Aws::String m_automationExecutionId;
    bool m_automationExecutionIdHasBeenSet = false;

    Aws::Vector<StepExecutionFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    bool m_reverseOrder;
    bool m_reverseOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
