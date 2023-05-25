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
  class AssumeImpersonationRoleResult
  {
  public:
    AWS_WORKMAIL_API AssumeImpersonationRoleResult();
    AWS_WORKMAIL_API AssumeImpersonationRoleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API AssumeImpersonationRoleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The authentication token for the impersonation role.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>The authentication token for the impersonation role.</p>
     */
    inline void SetToken(const Aws::String& value) { m_token = value; }

    /**
     * <p>The authentication token for the impersonation role.</p>
     */
    inline void SetToken(Aws::String&& value) { m_token = std::move(value); }

    /**
     * <p>The authentication token for the impersonation role.</p>
     */
    inline void SetToken(const char* value) { m_token.assign(value); }

    /**
     * <p>The authentication token for the impersonation role.</p>
     */
    inline AssumeImpersonationRoleResult& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>The authentication token for the impersonation role.</p>
     */
    inline AssumeImpersonationRoleResult& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * <p>The authentication token for the impersonation role.</p>
     */
    inline AssumeImpersonationRoleResult& WithToken(const char* value) { SetToken(value); return *this;}


    /**
     * <p>The authentication token's validity, in seconds.</p>
     */
    inline long long GetExpiresIn() const{ return m_expiresIn; }

    /**
     * <p>The authentication token's validity, in seconds.</p>
     */
    inline void SetExpiresIn(long long value) { m_expiresIn = value; }

    /**
     * <p>The authentication token's validity, in seconds.</p>
     */
    inline AssumeImpersonationRoleResult& WithExpiresIn(long long value) { SetExpiresIn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AssumeImpersonationRoleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AssumeImpersonationRoleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AssumeImpersonationRoleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_token;

    long long m_expiresIn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
