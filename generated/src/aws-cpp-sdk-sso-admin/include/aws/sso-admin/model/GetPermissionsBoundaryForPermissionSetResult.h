/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/PermissionsBoundary.h>
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
namespace SSOAdmin
{
namespace Model
{
  class GetPermissionsBoundaryForPermissionSetResult
  {
  public:
    AWS_SSOADMIN_API GetPermissionsBoundaryForPermissionSetResult();
    AWS_SSOADMIN_API GetPermissionsBoundaryForPermissionSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API GetPermissionsBoundaryForPermissionSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The permissions boundary attached to the specified permission set.</p>
     */
    inline const PermissionsBoundary& GetPermissionsBoundary() const{ return m_permissionsBoundary; }

    /**
     * <p>The permissions boundary attached to the specified permission set.</p>
     */
    inline void SetPermissionsBoundary(const PermissionsBoundary& value) { m_permissionsBoundary = value; }

    /**
     * <p>The permissions boundary attached to the specified permission set.</p>
     */
    inline void SetPermissionsBoundary(PermissionsBoundary&& value) { m_permissionsBoundary = std::move(value); }

    /**
     * <p>The permissions boundary attached to the specified permission set.</p>
     */
    inline GetPermissionsBoundaryForPermissionSetResult& WithPermissionsBoundary(const PermissionsBoundary& value) { SetPermissionsBoundary(value); return *this;}

    /**
     * <p>The permissions boundary attached to the specified permission set.</p>
     */
    inline GetPermissionsBoundaryForPermissionSetResult& WithPermissionsBoundary(PermissionsBoundary&& value) { SetPermissionsBoundary(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPermissionsBoundaryForPermissionSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPermissionsBoundaryForPermissionSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPermissionsBoundaryForPermissionSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PermissionsBoundary m_permissionsBoundary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
