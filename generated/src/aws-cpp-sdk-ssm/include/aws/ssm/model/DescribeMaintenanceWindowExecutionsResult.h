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
    AWS_SSM_API DescribeMaintenanceWindowExecutionsResult() = default;
    AWS_SSM_API DescribeMaintenanceWindowExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeMaintenanceWindowExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the maintenance window executions.</p>
     */
    inline const Aws::Vector<MaintenanceWindowExecution>& GetWindowExecutions() const { return m_windowExecutions; }
    template<typename WindowExecutionsT = Aws::Vector<MaintenanceWindowExecution>>
    void SetWindowExecutions(WindowExecutionsT&& value) { m_windowExecutionsHasBeenSet = true; m_windowExecutions = std::forward<WindowExecutionsT>(value); }
    template<typename WindowExecutionsT = Aws::Vector<MaintenanceWindowExecution>>
    DescribeMaintenanceWindowExecutionsResult& WithWindowExecutions(WindowExecutionsT&& value) { SetWindowExecutions(std::forward<WindowExecutionsT>(value)); return *this;}
    template<typename WindowExecutionsT = MaintenanceWindowExecution>
    DescribeMaintenanceWindowExecutionsResult& AddWindowExecutions(WindowExecutionsT&& value) { m_windowExecutionsHasBeenSet = true; m_windowExecutions.emplace_back(std::forward<WindowExecutionsT>(value)); return *this; }
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
    DescribeMaintenanceWindowExecutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMaintenanceWindowExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MaintenanceWindowExecution> m_windowExecutions;
    bool m_windowExecutionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
