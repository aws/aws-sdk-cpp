/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/snow-device-management/SnowDeviceManagementRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snow-device-management/model/TaskState.h>
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
  class ListTasksRequest : public SnowDeviceManagementRequest
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API ListTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTasks"; }

    AWS_SNOWDEVICEMANAGEMENT_API Aws::String SerializePayload() const override;

    AWS_SNOWDEVICEMANAGEMENT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of tasks per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of tasks per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of tasks per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of tasks per page.</p>
     */
    inline ListTasksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListTasksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token to continue to the next page of tasks.</p>
     */
    inline ListTasksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token to continue to the next page of tasks.</p>
     */
    inline ListTasksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A structure used to filter the list of tasks.</p>
     */
    inline const TaskState& GetState() const{ return m_state; }

    /**
     * <p>A structure used to filter the list of tasks.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>A structure used to filter the list of tasks.</p>
     */
    inline void SetState(const TaskState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>A structure used to filter the list of tasks.</p>
     */
    inline void SetState(TaskState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>A structure used to filter the list of tasks.</p>
     */
    inline ListTasksRequest& WithState(const TaskState& value) { SetState(value); return *this;}

    /**
     * <p>A structure used to filter the list of tasks.</p>
     */
    inline ListTasksRequest& WithState(TaskState&& value) { SetState(std::move(value)); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    TaskState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
