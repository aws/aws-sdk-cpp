/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/MaintenanceWindowIdentityForTarget.h>
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
  class DescribeMaintenanceWindowsForTargetResult
  {
  public:
    AWS_SSM_API DescribeMaintenanceWindowsForTargetResult();
    AWS_SSM_API DescribeMaintenanceWindowsForTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeMaintenanceWindowsForTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the maintenance window targets and tasks a managed node is
     * associated with.</p>
     */
    inline const Aws::Vector<MaintenanceWindowIdentityForTarget>& GetWindowIdentities() const{ return m_windowIdentities; }
    inline void SetWindowIdentities(const Aws::Vector<MaintenanceWindowIdentityForTarget>& value) { m_windowIdentities = value; }
    inline void SetWindowIdentities(Aws::Vector<MaintenanceWindowIdentityForTarget>&& value) { m_windowIdentities = std::move(value); }
    inline DescribeMaintenanceWindowsForTargetResult& WithWindowIdentities(const Aws::Vector<MaintenanceWindowIdentityForTarget>& value) { SetWindowIdentities(value); return *this;}
    inline DescribeMaintenanceWindowsForTargetResult& WithWindowIdentities(Aws::Vector<MaintenanceWindowIdentityForTarget>&& value) { SetWindowIdentities(std::move(value)); return *this;}
    inline DescribeMaintenanceWindowsForTargetResult& AddWindowIdentities(const MaintenanceWindowIdentityForTarget& value) { m_windowIdentities.push_back(value); return *this; }
    inline DescribeMaintenanceWindowsForTargetResult& AddWindowIdentities(MaintenanceWindowIdentityForTarget&& value) { m_windowIdentities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeMaintenanceWindowsForTargetResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeMaintenanceWindowsForTargetResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeMaintenanceWindowsForTargetResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeMaintenanceWindowsForTargetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeMaintenanceWindowsForTargetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeMaintenanceWindowsForTargetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MaintenanceWindowIdentityForTarget> m_windowIdentities;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
