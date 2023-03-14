/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/MaintenanceWindowTask.h>
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
namespace SSM
{
namespace Model
{
  class DescribeMaintenanceWindowTasksResult
  {
  public:
    AWS_SSM_API DescribeMaintenanceWindowTasksResult();
    AWS_SSM_API DescribeMaintenanceWindowTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeMaintenanceWindowTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the tasks in the maintenance window.</p>
     */
    inline const Aws::Vector<MaintenanceWindowTask>& GetTasks() const{ return m_tasks; }

    /**
     * <p>Information about the tasks in the maintenance window.</p>
     */
    inline void SetTasks(const Aws::Vector<MaintenanceWindowTask>& value) { m_tasks = value; }

    /**
     * <p>Information about the tasks in the maintenance window.</p>
     */
    inline void SetTasks(Aws::Vector<MaintenanceWindowTask>&& value) { m_tasks = std::move(value); }

    /**
     * <p>Information about the tasks in the maintenance window.</p>
     */
    inline DescribeMaintenanceWindowTasksResult& WithTasks(const Aws::Vector<MaintenanceWindowTask>& value) { SetTasks(value); return *this;}

    /**
     * <p>Information about the tasks in the maintenance window.</p>
     */
    inline DescribeMaintenanceWindowTasksResult& WithTasks(Aws::Vector<MaintenanceWindowTask>&& value) { SetTasks(std::move(value)); return *this;}

    /**
     * <p>Information about the tasks in the maintenance window.</p>
     */
    inline DescribeMaintenanceWindowTasksResult& AddTasks(const MaintenanceWindowTask& value) { m_tasks.push_back(value); return *this; }

    /**
     * <p>Information about the tasks in the maintenance window.</p>
     */
    inline DescribeMaintenanceWindowTasksResult& AddTasks(MaintenanceWindowTask&& value) { m_tasks.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeMaintenanceWindowTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeMaintenanceWindowTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeMaintenanceWindowTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeMaintenanceWindowTasksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeMaintenanceWindowTasksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeMaintenanceWindowTasksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<MaintenanceWindowTask> m_tasks;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
