﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/Permission.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribePermissions</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribePermissionsResult">AWS
   * API Reference</a></p>
   */
  class DescribePermissionsResult
  {
  public:
    AWS_OPSWORKS_API DescribePermissionsResult();
    AWS_OPSWORKS_API DescribePermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribePermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>Permission</code> objects that describe the stack
     * permissions.</p> <ul> <li> <p>If the request object contains only a stack ID,
     * the array contains a <code>Permission</code> object with permissions for each of
     * the stack IAM ARNs.</p> </li> <li> <p>If the request object contains only an IAM
     * ARN, the array contains a <code>Permission</code> object with permissions for
     * each of the user's stack IDs.</p> </li> <li> <p>If the request contains a stack
     * ID and an IAM ARN, the array contains a single <code>Permission</code> object
     * with permissions for the specified stack and IAM ARN.</p> </li> </ul>
     */
    inline const Aws::Vector<Permission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>An array of <code>Permission</code> objects that describe the stack
     * permissions.</p> <ul> <li> <p>If the request object contains only a stack ID,
     * the array contains a <code>Permission</code> object with permissions for each of
     * the stack IAM ARNs.</p> </li> <li> <p>If the request object contains only an IAM
     * ARN, the array contains a <code>Permission</code> object with permissions for
     * each of the user's stack IDs.</p> </li> <li> <p>If the request contains a stack
     * ID and an IAM ARN, the array contains a single <code>Permission</code> object
     * with permissions for the specified stack and IAM ARN.</p> </li> </ul>
     */
    inline void SetPermissions(const Aws::Vector<Permission>& value) { m_permissions = value; }

    /**
     * <p>An array of <code>Permission</code> objects that describe the stack
     * permissions.</p> <ul> <li> <p>If the request object contains only a stack ID,
     * the array contains a <code>Permission</code> object with permissions for each of
     * the stack IAM ARNs.</p> </li> <li> <p>If the request object contains only an IAM
     * ARN, the array contains a <code>Permission</code> object with permissions for
     * each of the user's stack IDs.</p> </li> <li> <p>If the request contains a stack
     * ID and an IAM ARN, the array contains a single <code>Permission</code> object
     * with permissions for the specified stack and IAM ARN.</p> </li> </ul>
     */
    inline void SetPermissions(Aws::Vector<Permission>&& value) { m_permissions = std::move(value); }

    /**
     * <p>An array of <code>Permission</code> objects that describe the stack
     * permissions.</p> <ul> <li> <p>If the request object contains only a stack ID,
     * the array contains a <code>Permission</code> object with permissions for each of
     * the stack IAM ARNs.</p> </li> <li> <p>If the request object contains only an IAM
     * ARN, the array contains a <code>Permission</code> object with permissions for
     * each of the user's stack IDs.</p> </li> <li> <p>If the request contains a stack
     * ID and an IAM ARN, the array contains a single <code>Permission</code> object
     * with permissions for the specified stack and IAM ARN.</p> </li> </ul>
     */
    inline DescribePermissionsResult& WithPermissions(const Aws::Vector<Permission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>An array of <code>Permission</code> objects that describe the stack
     * permissions.</p> <ul> <li> <p>If the request object contains only a stack ID,
     * the array contains a <code>Permission</code> object with permissions for each of
     * the stack IAM ARNs.</p> </li> <li> <p>If the request object contains only an IAM
     * ARN, the array contains a <code>Permission</code> object with permissions for
     * each of the user's stack IDs.</p> </li> <li> <p>If the request contains a stack
     * ID and an IAM ARN, the array contains a single <code>Permission</code> object
     * with permissions for the specified stack and IAM ARN.</p> </li> </ul>
     */
    inline DescribePermissionsResult& WithPermissions(Aws::Vector<Permission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Permission</code> objects that describe the stack
     * permissions.</p> <ul> <li> <p>If the request object contains only a stack ID,
     * the array contains a <code>Permission</code> object with permissions for each of
     * the stack IAM ARNs.</p> </li> <li> <p>If the request object contains only an IAM
     * ARN, the array contains a <code>Permission</code> object with permissions for
     * each of the user's stack IDs.</p> </li> <li> <p>If the request contains a stack
     * ID and an IAM ARN, the array contains a single <code>Permission</code> object
     * with permissions for the specified stack and IAM ARN.</p> </li> </ul>
     */
    inline DescribePermissionsResult& AddPermissions(const Permission& value) { m_permissions.push_back(value); return *this; }

    /**
     * <p>An array of <code>Permission</code> objects that describe the stack
     * permissions.</p> <ul> <li> <p>If the request object contains only a stack ID,
     * the array contains a <code>Permission</code> object with permissions for each of
     * the stack IAM ARNs.</p> </li> <li> <p>If the request object contains only an IAM
     * ARN, the array contains a <code>Permission</code> object with permissions for
     * each of the user's stack IDs.</p> </li> <li> <p>If the request contains a stack
     * ID and an IAM ARN, the array contains a single <code>Permission</code> object
     * with permissions for the specified stack and IAM ARN.</p> </li> </ul>
     */
    inline DescribePermissionsResult& AddPermissions(Permission&& value) { m_permissions.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribePermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribePermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribePermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Permission> m_permissions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
