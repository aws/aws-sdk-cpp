/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/snow-device-management/SnowDeviceManagementRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snow-device-management/model/ExecutionState.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SnowDeviceManagement
{
namespace Model
{

  /**
   */
  class ListExecutionsRequest : public SnowDeviceManagementRequest
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API ListExecutionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListExecutions"; }

    AWS_SNOWDEVICEMANAGEMENT_API Aws::String SerializePayload() const override;

    AWS_SNOWDEVICEMANAGEMENT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of tasks to list per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of tasks to list per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of tasks to list per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of tasks to list per page.</p>
     */
    inline ListExecutionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A pagination token to continue to the next page of tasks.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token to continue to the next page of tasks.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A pagination token to continue to the next page of tasks.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A pagination token to continue to the next page of tasks.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A pagination token to continue to the next page of tasks.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A pagination token to continue to the next page of tasks.</p>
     */
    inline ListExecutionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token to continue to the next page of tasks.</p>
     */
    inline ListExecutionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token to continue to the next page of tasks.</p>
     */
    inline ListExecutionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A structure used to filter the tasks by their current state.</p>
     */
    inline const ExecutionState& GetState() const{ return m_state; }

    /**
     * <p>A structure used to filter the tasks by their current state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>A structure used to filter the tasks by their current state.</p>
     */
    inline void SetState(const ExecutionState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>A structure used to filter the tasks by their current state.</p>
     */
    inline void SetState(ExecutionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>A structure used to filter the tasks by their current state.</p>
     */
    inline ListExecutionsRequest& WithState(const ExecutionState& value) { SetState(value); return *this;}

    /**
     * <p>A structure used to filter the tasks by their current state.</p>
     */
    inline ListExecutionsRequest& WithState(ExecutionState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The ID of the task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The ID of the task.</p>
     */
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }

    /**
     * <p>The ID of the task.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>The ID of the task.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p>The ID of the task.</p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p>The ID of the task.</p>
     */
    inline ListExecutionsRequest& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The ID of the task.</p>
     */
    inline ListExecutionsRequest& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the task.</p>
     */
    inline ListExecutionsRequest& WithTaskId(const char* value) { SetTaskId(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ExecutionState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
