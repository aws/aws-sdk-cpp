/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/MaintenanceWindowExecutionTaskIdentity.h>
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
  class DescribeMaintenanceWindowExecutionTasksResult
  {
  public:
    AWS_SSM_API DescribeMaintenanceWindowExecutionTasksResult();
    AWS_SSM_API DescribeMaintenanceWindowExecutionTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeMaintenanceWindowExecutionTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the task executions.</p>
     */
    inline const Aws::Vector<MaintenanceWindowExecutionTaskIdentity>& GetWindowExecutionTaskIdentities() const{ return m_windowExecutionTaskIdentities; }
    inline void SetWindowExecutionTaskIdentities(const Aws::Vector<MaintenanceWindowExecutionTaskIdentity>& value) { m_windowExecutionTaskIdentities = value; }
    inline void SetWindowExecutionTaskIdentities(Aws::Vector<MaintenanceWindowExecutionTaskIdentity>&& value) { m_windowExecutionTaskIdentities = std::move(value); }
    inline DescribeMaintenanceWindowExecutionTasksResult& WithWindowExecutionTaskIdentities(const Aws::Vector<MaintenanceWindowExecutionTaskIdentity>& value) { SetWindowExecutionTaskIdentities(value); return *this;}
    inline DescribeMaintenanceWindowExecutionTasksResult& WithWindowExecutionTaskIdentities(Aws::Vector<MaintenanceWindowExecutionTaskIdentity>&& value) { SetWindowExecutionTaskIdentities(std::move(value)); return *this;}
    inline DescribeMaintenanceWindowExecutionTasksResult& AddWindowExecutionTaskIdentities(const MaintenanceWindowExecutionTaskIdentity& value) { m_windowExecutionTaskIdentities.push_back(value); return *this; }
    inline DescribeMaintenanceWindowExecutionTasksResult& AddWindowExecutionTaskIdentities(MaintenanceWindowExecutionTaskIdentity&& value) { m_windowExecutionTaskIdentities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeMaintenanceWindowExecutionTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeMaintenanceWindowExecutionTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeMaintenanceWindowExecutionTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeMaintenanceWindowExecutionTasksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeMaintenanceWindowExecutionTasksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeMaintenanceWindowExecutionTasksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MaintenanceWindowExecutionTaskIdentity> m_windowExecutionTaskIdentities;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
