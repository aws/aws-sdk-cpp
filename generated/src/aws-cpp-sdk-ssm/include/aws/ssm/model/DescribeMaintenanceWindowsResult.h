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
    AWS_SSM_API DescribeMaintenanceWindowsResult();
    AWS_SSM_API DescribeMaintenanceWindowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeMaintenanceWindowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the maintenance windows.</p>
     */
    inline const Aws::Vector<MaintenanceWindowIdentity>& GetWindowIdentities() const{ return m_windowIdentities; }
    inline void SetWindowIdentities(const Aws::Vector<MaintenanceWindowIdentity>& value) { m_windowIdentities = value; }
    inline void SetWindowIdentities(Aws::Vector<MaintenanceWindowIdentity>&& value) { m_windowIdentities = std::move(value); }
    inline DescribeMaintenanceWindowsResult& WithWindowIdentities(const Aws::Vector<MaintenanceWindowIdentity>& value) { SetWindowIdentities(value); return *this;}
    inline DescribeMaintenanceWindowsResult& WithWindowIdentities(Aws::Vector<MaintenanceWindowIdentity>&& value) { SetWindowIdentities(std::move(value)); return *this;}
    inline DescribeMaintenanceWindowsResult& AddWindowIdentities(const MaintenanceWindowIdentity& value) { m_windowIdentities.push_back(value); return *this; }
    inline DescribeMaintenanceWindowsResult& AddWindowIdentities(MaintenanceWindowIdentity&& value) { m_windowIdentities.push_back(std::move(value)); return *this; }
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
    inline DescribeMaintenanceWindowsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeMaintenanceWindowsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeMaintenanceWindowsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeMaintenanceWindowsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeMaintenanceWindowsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeMaintenanceWindowsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MaintenanceWindowIdentity> m_windowIdentities;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
