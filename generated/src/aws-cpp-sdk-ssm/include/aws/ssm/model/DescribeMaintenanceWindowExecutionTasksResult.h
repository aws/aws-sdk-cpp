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
    AWS_SSM_API DescribeMaintenanceWindowExecutionTasksResult() = default;
    AWS_SSM_API DescribeMaintenanceWindowExecutionTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeMaintenanceWindowExecutionTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the task executions.</p>
     */
    inline const Aws::Vector<MaintenanceWindowExecutionTaskIdentity>& GetWindowExecutionTaskIdentities() const { return m_windowExecutionTaskIdentities; }
    template<typename WindowExecutionTaskIdentitiesT = Aws::Vector<MaintenanceWindowExecutionTaskIdentity>>
    void SetWindowExecutionTaskIdentities(WindowExecutionTaskIdentitiesT&& value) { m_windowExecutionTaskIdentitiesHasBeenSet = true; m_windowExecutionTaskIdentities = std::forward<WindowExecutionTaskIdentitiesT>(value); }
    template<typename WindowExecutionTaskIdentitiesT = Aws::Vector<MaintenanceWindowExecutionTaskIdentity>>
    DescribeMaintenanceWindowExecutionTasksResult& WithWindowExecutionTaskIdentities(WindowExecutionTaskIdentitiesT&& value) { SetWindowExecutionTaskIdentities(std::forward<WindowExecutionTaskIdentitiesT>(value)); return *this;}
    template<typename WindowExecutionTaskIdentitiesT = MaintenanceWindowExecutionTaskIdentity>
    DescribeMaintenanceWindowExecutionTasksResult& AddWindowExecutionTaskIdentities(WindowExecutionTaskIdentitiesT&& value) { m_windowExecutionTaskIdentitiesHasBeenSet = true; m_windowExecutionTaskIdentities.emplace_back(std::forward<WindowExecutionTaskIdentitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeMaintenanceWindowExecutionTasksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMaintenanceWindowExecutionTasksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MaintenanceWindowExecutionTaskIdentity> m_windowExecutionTaskIdentities;
    bool m_windowExecutionTaskIdentitiesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
