/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/MaintenanceWindowExecution.h>
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
  class DescribeMaintenanceWindowExecutionsResult
  {
  public:
    AWS_SSM_API DescribeMaintenanceWindowExecutionsResult();
    AWS_SSM_API DescribeMaintenanceWindowExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeMaintenanceWindowExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the maintenance window executions.</p>
     */
    inline const Aws::Vector<MaintenanceWindowExecution>& GetWindowExecutions() const{ return m_windowExecutions; }
    inline void SetWindowExecutions(const Aws::Vector<MaintenanceWindowExecution>& value) { m_windowExecutions = value; }
    inline void SetWindowExecutions(Aws::Vector<MaintenanceWindowExecution>&& value) { m_windowExecutions = std::move(value); }
    inline DescribeMaintenanceWindowExecutionsResult& WithWindowExecutions(const Aws::Vector<MaintenanceWindowExecution>& value) { SetWindowExecutions(value); return *this;}
    inline DescribeMaintenanceWindowExecutionsResult& WithWindowExecutions(Aws::Vector<MaintenanceWindowExecution>&& value) { SetWindowExecutions(std::move(value)); return *this;}
    inline DescribeMaintenanceWindowExecutionsResult& AddWindowExecutions(const MaintenanceWindowExecution& value) { m_windowExecutions.push_back(value); return *this; }
    inline DescribeMaintenanceWindowExecutionsResult& AddWindowExecutions(MaintenanceWindowExecution&& value) { m_windowExecutions.push_back(std::move(value)); return *this; }
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
    inline DescribeMaintenanceWindowExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeMaintenanceWindowExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeMaintenanceWindowExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeMaintenanceWindowExecutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeMaintenanceWindowExecutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeMaintenanceWindowExecutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MaintenanceWindowExecution> m_windowExecutions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
