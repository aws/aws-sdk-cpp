/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
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
namespace WorkMail
{
namespace Model
{
  class CreateImpersonationRoleResult
  {
  public:
    AWS_WORKMAIL_API CreateImpersonationRoleResult();
    AWS_WORKMAIL_API CreateImpersonationRoleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API CreateImpersonationRoleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The new impersonation role ID.</p>
     */
    inline const Aws::String& GetImpersonationRoleId() const{ return m_impersonationRoleId; }

    /**
     * <p>The new impersonation role ID.</p>
     */
    inline void SetImpersonationRoleId(const Aws::String& value) { m_impersonationRoleId = value; }

    /**
     * <p>The new impersonation role ID.</p>
     */
    inline void SetImpersonationRoleId(Aws::String&& value) { m_impersonationRoleId = std::move(value); }

    /**
     * <p>The new impersonation role ID.</p>
     */
    inline void SetImpersonationRoleId(const char* value) { m_impersonationRoleId.assign(value); }

    /**
     * <p>The new impersonation role ID.</p>
     */
    inline CreateImpersonationRoleResult& WithImpersonationRoleId(const Aws::String& value) { SetImpersonationRoleId(value); return *this;}

    /**
     * <p>The new impersonation role ID.</p>
     */
    inline CreateImpersonationRoleResult& WithImpersonationRoleId(Aws::String&& value) { SetImpersonationRoleId(std::move(value)); return *this;}

    /**
     * <p>The new impersonation role ID.</p>
     */
    inline CreateImpersonationRoleResult& WithImpersonationRoleId(const char* value) { SetImpersonationRoleId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateImpersonationRoleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateImpersonationRoleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateImpersonationRoleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_impersonationRoleId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
