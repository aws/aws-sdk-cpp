/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/MaintenanceWindowExecutionTaskInvocationIdentity.h>
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
  class DescribeMaintenanceWindowExecutionTaskInvocationsResult
  {
  public:
    AWS_SSM_API DescribeMaintenanceWindowExecutionTaskInvocationsResult() = default;
    AWS_SSM_API DescribeMaintenanceWindowExecutionTaskInvocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeMaintenanceWindowExecutionTaskInvocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the task invocation results per invocation.</p>
     */
    inline const Aws::Vector<MaintenanceWindowExecutionTaskInvocationIdentity>& GetWindowExecutionTaskInvocationIdentities() const { return m_windowExecutionTaskInvocationIdentities; }
    template<typename WindowExecutionTaskInvocationIdentitiesT = Aws::Vector<MaintenanceWindowExecutionTaskInvocationIdentity>>
    void SetWindowExecutionTaskInvocationIdentities(WindowExecutionTaskInvocationIdentitiesT&& value) { m_windowExecutionTaskInvocationIdentitiesHasBeenSet = true; m_windowExecutionTaskInvocationIdentities = std::forward<WindowExecutionTaskInvocationIdentitiesT>(value); }
    template<typename WindowExecutionTaskInvocationIdentitiesT = Aws::Vector<MaintenanceWindowExecutionTaskInvocationIdentity>>
    DescribeMaintenanceWindowExecutionTaskInvocationsResult& WithWindowExecutionTaskInvocationIdentities(WindowExecutionTaskInvocationIdentitiesT&& value) { SetWindowExecutionTaskInvocationIdentities(std::forward<WindowExecutionTaskInvocationIdentitiesT>(value)); return *this;}
    template<typename WindowExecutionTaskInvocationIdentitiesT = MaintenanceWindowExecutionTaskInvocationIdentity>
    DescribeMaintenanceWindowExecutionTaskInvocationsResult& AddWindowExecutionTaskInvocationIdentities(WindowExecutionTaskInvocationIdentitiesT&& value) { m_windowExecutionTaskInvocationIdentitiesHasBeenSet = true; m_windowExecutionTaskInvocationIdentities.emplace_back(std::forward<WindowExecutionTaskInvocationIdentitiesT>(value)); return *this; }
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
    DescribeMaintenanceWindowExecutionTaskInvocationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMaintenanceWindowExecutionTaskInvocationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MaintenanceWindowExecutionTaskInvocationIdentity> m_windowExecutionTaskInvocationIdentities;
    bool m_windowExecutionTaskInvocationIdentitiesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
