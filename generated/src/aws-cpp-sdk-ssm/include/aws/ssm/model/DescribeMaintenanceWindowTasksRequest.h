/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/MaintenanceWindowFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class DescribeMaintenanceWindowTasksRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DescribeMaintenanceWindowTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeMaintenanceWindowTasks"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the maintenance window whose tasks should be retrieved.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }
    inline DescribeMaintenanceWindowTasksRequest& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}
    inline DescribeMaintenanceWindowTasksRequest& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}
    inline DescribeMaintenanceWindowTasksRequest& WithWindowId(const char* value) { SetWindowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional filters used to narrow down the scope of the returned tasks. The
     * supported filter keys are <code>WindowTaskId</code>, <code>TaskArn</code>,
     * <code>Priority</code>, and <code>TaskType</code>.</p>
     */
    inline const Aws::Vector<MaintenanceWindowFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<MaintenanceWindowFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<MaintenanceWindowFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeMaintenanceWindowTasksRequest& WithFilters(const Aws::Vector<MaintenanceWindowFilter>& value) { SetFilters(value); return *this;}
    inline DescribeMaintenanceWindowTasksRequest& WithFilters(Aws::Vector<MaintenanceWindowFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeMaintenanceWindowTasksRequest& AddFilters(const MaintenanceWindowFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeMaintenanceWindowTasksRequest& AddFilters(MaintenanceWindowFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
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
    inline DescribeMaintenanceWindowTasksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    inline DescribeMaintenanceWindowTasksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeMaintenanceWindowTasksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeMaintenanceWindowTasksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet = false;

    Aws::Vector<MaintenanceWindowFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
