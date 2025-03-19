/**
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
    AWS_REDSHIFTSERVERLESS_API GetCredentialsResult() = default;
    AWS_REDSHIFTSERVERLESS_API GetCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API GetCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A temporary password that authorizes the user name returned by
     * <code>DbUser</code> to log on to the database <code>DbName</code>.</p>
     */
    inline const Aws::String& GetDbPassword() const { return m_dbPassword; }
    template<typename DbPasswordT = Aws::String>
    void SetDbPassword(DbPasswordT&& value) { m_dbPasswordHasBeenSet = true; m_dbPassword = std::forward<DbPasswordT>(value); }
    template<typename DbPasswordT = Aws::String>
    GetCredentialsResult& WithDbPassword(DbPasswordT&& value) { SetDbPassword(std::forward<DbPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A database user name that is authorized to log on to the database
     * <code>DbName</code> using the password <code>DbPassword</code>. If the specified
     * <code>DbUser</code> exists in the database, the new user name has the same
     * database privileges as the the user named in <code>DbUser</code>. By default,
     * the user is added to PUBLIC.</p>
     */
    inline const Aws::String& GetDbUser() const { return m_dbUser; }
    template<typename DbUserT = Aws::String>
    void SetDbUser(DbUserT&& value) { m_dbUserHasBeenSet = true; m_dbUser = std::forward<DbUserT>(value); }
    template<typename DbUserT = Aws::String>
    GetCredentialsResult& WithDbUser(DbUserT&& value) { SetDbUser(std::forward<DbUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the password in <code>DbPassword</code> expires.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const { return m_expiration; }
    template<typename ExpirationT = Aws::Utils::DateTime>
    void SetExpiration(ExpirationT&& value) { m_expirationHasBeenSet = true; m_expiration = std::forward<ExpirationT>(value); }
    template<typename ExpirationT = Aws::Utils::DateTime>
    GetCredentialsResult& WithExpiration(ExpirationT&& value) { SetExpiration(std::forward<ExpirationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of when the <code>DbUser</code> and <code>DbPassword</code>
     * authorization refreshes.</p>
     */
    inline const Aws::Utils::DateTime& GetNextRefreshTime() const { return m_nextRefreshTime; }
    template<typename NextRefreshTimeT = Aws::Utils::DateTime>
    void SetNextRefreshTime(NextRefreshTimeT&& value) { m_nextRefreshTimeHasBeenSet = true; m_nextRefreshTime = std::forward<NextRefreshTimeT>(value); }
    template<typename NextRefreshTimeT = Aws::Utils::DateTime>
    GetCredentialsResult& WithNextRefreshTime(NextRefreshTimeT&& value) { SetNextRefreshTime(std::forward<NextRefreshTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCredentialsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dbPassword;
    bool m_dbPasswordHasBeenSet = false;

    Aws::String m_dbUser;
    bool m_dbUserHasBeenSet = false;

    Aws::Utils::DateTime m_expiration{};
    bool m_expirationHasBeenSet = false;

    Aws::Utils::DateTime m_nextRefreshTime{};
    bool m_nextRefreshTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
