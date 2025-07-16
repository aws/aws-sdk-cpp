/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/ExecutionStatus.h>
#include <aws/states/model/ExecutionRedriveFilter.h>
#include <utility>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class ListExecutionsRequest : public SFNRequest
  {
  public:
    AWS_SFN_API ListExecutionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListExecutions"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the state machine whose executions is
     * listed.</p> <p>You can specify either a <code>mapRunArn</code> or a
     * <code>stateMachineArn</code>, but not both.</p> <p>You can also return a list of
     * executions associated with a specific <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-state-machine-alias.html">alias</a>
     * or <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-state-machine-version.html">version</a>,
     * by specifying an alias ARN or a version ARN in the <code>stateMachineArn</code>
     * parameter.</p>
     */
    inline const Aws::String& GetStateMachineArn() const { return m_stateMachineArn; }
    inline bool StateMachineArnHasBeenSet() const { return m_stateMachineArnHasBeenSet; }
    template<typename StateMachineArnT = Aws::String>
    void SetStateMachineArn(StateMachineArnT&& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = std::forward<StateMachineArnT>(value); }
    template<typename StateMachineArnT = Aws::String>
    ListExecutionsRequest& WithStateMachineArn(StateMachineArnT&& value) { SetStateMachineArn(std::forward<StateMachineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, only list the executions whose current execution status matches
     * the given filter.</p> <p>If you provide a <code>PENDING_REDRIVE</code>
     * statusFilter, you must specify <code>mapRunArn</code>. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/redrive-map-run.html#redrive-child-workflow-behavior">Child
     * workflow execution redrive behaviour</a> in the <i>Step Functions Developer
     * Guide</i>. </p> <p>If you provide a stateMachineArn and a
     * <code>PENDING_REDRIVE</code> statusFilter, the API returns a validation
     * exception.</p>
     */
    inline ExecutionStatus GetStatusFilter() const { return m_statusFilter; }
    inline bool StatusFilterHasBeenSet() const { return m_statusFilterHasBeenSet; }
    inline void SetStatusFilter(ExecutionStatus value) { m_statusFilterHasBeenSet = true; m_statusFilter = value; }
    inline ListExecutionsRequest& WithStatusFilter(ExecutionStatus value) { SetStatusFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results that are returned per call. You can use
     * <code>nextToken</code> to obtain further pages of results. The default is 100
     * and the maximum allowed page size is 1000. A value of 0 uses the default.</p>
     * <p>This is only an upper limit. The actual number of results returned per call
     * might be fewer than the specified maximum.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListExecutionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken</i>
     * error.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListExecutionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Map Run that started the child workflow
     * executions. If the <code>mapRunArn</code> field is specified, a list of all of
     * the child workflow executions started by a Map Run is returned. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-examine-map-run.html">Examining
     * Map Run</a> in the <i>Step Functions Developer Guide</i>.</p> <p>You can specify
     * either a <code>mapRunArn</code> or a <code>stateMachineArn</code>, but not
     * both.</p>
     */
    inline const Aws::String& GetMapRunArn() const { return m_mapRunArn; }
    inline bool MapRunArnHasBeenSet() const { return m_mapRunArnHasBeenSet; }
    template<typename MapRunArnT = Aws::String>
    void SetMapRunArn(MapRunArnT&& value) { m_mapRunArnHasBeenSet = true; m_mapRunArn = std::forward<MapRunArnT>(value); }
    template<typename MapRunArnT = Aws::String>
    ListExecutionsRequest& WithMapRunArn(MapRunArnT&& value) { SetMapRunArn(std::forward<MapRunArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets a filter to list executions based on whether or not they have been
     * redriven.</p> <p>For a Distributed Map, <code>redriveFilter</code> sets a filter
     * to list child workflow executions based on whether or not they have been
     * redriven.</p> <p>If you do not provide a <code>redriveFilter</code>, Step
     * Functions returns a list of both redriven and non-redriven executions.</p> <p>If
     * you provide a state machine ARN in <code>redriveFilter</code>, the API returns a
     * validation exception.</p>
     */
    inline ExecutionRedriveFilter GetRedriveFilter() const { return m_redriveFilter; }
    inline bool RedriveFilterHasBeenSet() const { return m_redriveFilterHasBeenSet; }
    inline void SetRedriveFilter(ExecutionRedriveFilter value) { m_redriveFilterHasBeenSet = true; m_redriveFilter = value; }
    inline ListExecutionsRequest& WithRedriveFilter(ExecutionRedriveFilter value) { SetRedriveFilter(value); return *this;}
    ///@}
  private:

    Aws::String m_stateMachineArn;
    bool m_stateMachineArnHasBeenSet = false;

    ExecutionStatus m_statusFilter{ExecutionStatus::NOT_SET};
    bool m_statusFilterHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_mapRunArn;
    bool m_mapRunArnHasBeenSet = false;

    ExecutionRedriveFilter m_redriveFilter{ExecutionRedriveFilter::NOT_SET};
    bool m_redriveFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
