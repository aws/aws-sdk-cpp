/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListMonitoringAlertsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListMonitoringAlertsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMonitoringAlerts"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleName() const{ return m_monitoringScheduleName; }

    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline bool MonitoringScheduleNameHasBeenSet() const { return m_monitoringScheduleNameHasBeenSet; }

    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleName(const Aws::String& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = value; }

    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleName(Aws::String&& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = std::move(value); }

    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleName(const char* value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName.assign(value); }

    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline ListMonitoringAlertsRequest& WithMonitoringScheduleName(const Aws::String& value) { SetMonitoringScheduleName(value); return *this;}

    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline ListMonitoringAlertsRequest& WithMonitoringScheduleName(Aws::String&& value) { SetMonitoringScheduleName(std::move(value)); return *this;}

    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline ListMonitoringAlertsRequest& WithMonitoringScheduleName(const char* value) { SetMonitoringScheduleName(value); return *this;}


    /**
     * <p>If the result of the previous <code>ListMonitoringAlerts</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of alerts in the history, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of the previous <code>ListMonitoringAlerts</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of alerts in the history, use the token in the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the result of the previous <code>ListMonitoringAlerts</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of alerts in the history, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the result of the previous <code>ListMonitoringAlerts</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of alerts in the history, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the result of the previous <code>ListMonitoringAlerts</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of alerts in the history, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the result of the previous <code>ListMonitoringAlerts</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of alerts in the history, use the token in the next request.</p>
     */
    inline ListMonitoringAlertsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of the previous <code>ListMonitoringAlerts</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of alerts in the history, use the token in the next request.</p>
     */
    inline ListMonitoringAlertsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of the previous <code>ListMonitoringAlerts</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of alerts in the history, use the token in the next request.</p>
     */
    inline ListMonitoringAlertsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to display. The default is 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to display. The default is 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to display. The default is 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to display. The default is 100.</p>
     */
    inline ListMonitoringAlertsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_monitoringScheduleName;
    bool m_monitoringScheduleNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
