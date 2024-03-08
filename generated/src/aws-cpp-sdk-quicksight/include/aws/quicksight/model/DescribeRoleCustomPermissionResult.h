/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QuickSight
{
namespace Model
{
  class DescribeRoleCustomPermissionResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeRoleCustomPermissionResult();
    AWS_QUICKSIGHT_API DescribeRoleCustomPermissionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeRoleCustomPermissionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the custom permission that is described.</p>
     */
    inline const Aws::String& GetCustomPermissionsName() const{ return m_customPermissionsName; }

    /**
     * <p>The name of the custom permission that is described.</p>
     */
    inline void SetCustomPermissionsName(const Aws::String& value) { m_customPermissionsName = value; }

    /**
     * <p>The name of the custom permission that is described.</p>
     */
    inline void SetCustomPermissionsName(Aws::String&& value) { m_customPermissionsName = std::move(value); }

    /**
     * <p>The name of the custom permission that is described.</p>
     */
    inline void SetCustomPermissionsName(const char* value) { m_customPermissionsName.assign(value); }

    /**
     * <p>The name of the custom permission that is described.</p>
     */
    inline DescribeRoleCustomPermissionResult& WithCustomPermissionsName(const Aws::String& value) { SetCustomPermissionsName(value); return *this;}

    /**
     * <p>The name of the custom permission that is described.</p>
     */
    inline DescribeRoleCustomPermissionResult& WithCustomPermissionsName(Aws::String&& value) { SetCustomPermissionsName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom permission that is described.</p>
     */
    inline DescribeRoleCustomPermissionResult& WithCustomPermissionsName(const char* value) { SetCustomPermissionsName(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeRoleCustomPermissionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeRoleCustomPermissionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeRoleCustomPermissionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline DescribeRoleCustomPermissionResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::String m_customPermissionsName;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
