/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/MaintenanceWindowTarget.h>
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
  class DescribeMaintenanceWindowTargetsResult
  {
  public:
    AWS_SSM_API DescribeMaintenanceWindowTargetsResult();
    AWS_SSM_API DescribeMaintenanceWindowTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeMaintenanceWindowTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the targets in the maintenance window.</p>
     */
    inline const Aws::Vector<MaintenanceWindowTarget>& GetTargets() const{ return m_targets; }
    inline void SetTargets(const Aws::Vector<MaintenanceWindowTarget>& value) { m_targets = value; }
    inline void SetTargets(Aws::Vector<MaintenanceWindowTarget>&& value) { m_targets = std::move(value); }
    inline DescribeMaintenanceWindowTargetsResult& WithTargets(const Aws::Vector<MaintenanceWindowTarget>& value) { SetTargets(value); return *this;}
    inline DescribeMaintenanceWindowTargetsResult& WithTargets(Aws::Vector<MaintenanceWindowTarget>&& value) { SetTargets(std::move(value)); return *this;}
    inline DescribeMaintenanceWindowTargetsResult& AddTargets(const MaintenanceWindowTarget& value) { m_targets.push_back(value); return *this; }
    inline DescribeMaintenanceWindowTargetsResult& AddTargets(MaintenanceWindowTarget&& value) { m_targets.push_back(std::move(value)); return *this; }
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
    inline DescribeMaintenanceWindowTargetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeMaintenanceWindowTargetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeMaintenanceWindowTargetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeMaintenanceWindowTargetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeMaintenanceWindowTargetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeMaintenanceWindowTargetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MaintenanceWindowTarget> m_targets;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
