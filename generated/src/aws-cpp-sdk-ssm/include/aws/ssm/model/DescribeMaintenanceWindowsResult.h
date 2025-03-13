/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/MaintenanceWindowIdentity.h>
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
  class DescribeMaintenanceWindowsResult
  {
  public:
    AWS_SSM_API DescribeMaintenanceWindowsResult() = default;
    AWS_SSM_API DescribeMaintenanceWindowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeMaintenanceWindowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the maintenance windows.</p>
     */
    inline const Aws::Vector<MaintenanceWindowIdentity>& GetWindowIdentities() const { return m_windowIdentities; }
    template<typename WindowIdentitiesT = Aws::Vector<MaintenanceWindowIdentity>>
    void SetWindowIdentities(WindowIdentitiesT&& value) { m_windowIdentitiesHasBeenSet = true; m_windowIdentities = std::forward<WindowIdentitiesT>(value); }
    template<typename WindowIdentitiesT = Aws::Vector<MaintenanceWindowIdentity>>
    DescribeMaintenanceWindowsResult& WithWindowIdentities(WindowIdentitiesT&& value) { SetWindowIdentities(std::forward<WindowIdentitiesT>(value)); return *this;}
    template<typename WindowIdentitiesT = MaintenanceWindowIdentity>
    DescribeMaintenanceWindowsResult& AddWindowIdentities(WindowIdentitiesT&& value) { m_windowIdentitiesHasBeenSet = true; m_windowIdentities.emplace_back(std::forward<WindowIdentitiesT>(value)); return *this; }
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
    DescribeMaintenanceWindowsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMaintenanceWindowsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MaintenanceWindowIdentity> m_windowIdentities;
    bool m_windowIdentitiesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
