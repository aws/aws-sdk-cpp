﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class GetCredentialsResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API GetCredentialsResult();
    AWS_REDSHIFTSERVERLESS_API GetCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API GetCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A temporary password that authorizes the user name returned by
     * <code>DbUser</code> to log on to the database <code>DbName</code>.</p>
     */
    inline const Aws::String& GetDbPassword() const{ return m_dbPassword; }
    inline void SetDbPassword(const Aws::String& value) { m_dbPassword = value; }
    inline void SetDbPassword(Aws::String&& value) { m_dbPassword = std::move(value); }
    inline void SetDbPassword(const char* value) { m_dbPassword.assign(value); }
    inline GetCredentialsResult& WithDbPassword(const Aws::String& value) { SetDbPassword(value); return *this;}
    inline GetCredentialsResult& WithDbPassword(Aws::String&& value) { SetDbPassword(std::move(value)); return *this;}
    inline GetCredentialsResult& WithDbPassword(const char* value) { SetDbPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A database user name that is authorized to log on to the database
     * <code>DbName</code> using the password <code>DbPassword</code>. If the specified
     * <code>DbUser</code> exists in the database, the new user name has the same
     * database privileges as the the user named in <code>DbUser</code>. By default,
     * the user is added to PUBLIC.</p>
     */
    inline const Aws::String& GetDbUser() const{ return m_dbUser; }
    inline void SetDbUser(const Aws::String& value) { m_dbUser = value; }
    inline void SetDbUser(Aws::String&& value) { m_dbUser = std::move(value); }
    inline void SetDbUser(const char* value) { m_dbUser.assign(value); }
    inline GetCredentialsResult& WithDbUser(const Aws::String& value) { SetDbUser(value); return *this;}
    inline GetCredentialsResult& WithDbUser(Aws::String&& value) { SetDbUser(std::move(value)); return *this;}
    inline GetCredentialsResult& WithDbUser(const char* value) { SetDbUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the password in <code>DbPassword</code> expires.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const{ return m_expiration; }
    inline void SetExpiration(const Aws::Utils::DateTime& value) { m_expiration = value; }
    inline void SetExpiration(Aws::Utils::DateTime&& value) { m_expiration = std::move(value); }
    inline GetCredentialsResult& WithExpiration(const Aws::Utils::DateTime& value) { SetExpiration(value); return *this;}
    inline GetCredentialsResult& WithExpiration(Aws::Utils::DateTime&& value) { SetExpiration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of when the <code>DbUser</code> and <code>DbPassword</code>
     * authorization refreshes.</p>
     */
    inline const Aws::Utils::DateTime& GetNextRefreshTime() const{ return m_nextRefreshTime; }
    inline void SetNextRefreshTime(const Aws::Utils::DateTime& value) { m_nextRefreshTime = value; }
    inline void SetNextRefreshTime(Aws::Utils::DateTime&& value) { m_nextRefreshTime = std::move(value); }
    inline GetCredentialsResult& WithNextRefreshTime(const Aws::Utils::DateTime& value) { SetNextRefreshTime(value); return *this;}
    inline GetCredentialsResult& WithNextRefreshTime(Aws::Utils::DateTime&& value) { SetNextRefreshTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCredentialsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCredentialsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCredentialsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_dbPassword;

    Aws::String m_dbUser;

    Aws::Utils::DateTime m_expiration;

    Aws::Utils::DateTime m_nextRefreshTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
