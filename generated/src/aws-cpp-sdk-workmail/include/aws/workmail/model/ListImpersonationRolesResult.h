/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/ImpersonationRole.h>
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
  class ListImpersonationRolesResult
  {
  public:
    AWS_WORKMAIL_API ListImpersonationRolesResult();
    AWS_WORKMAIL_API ListImpersonationRolesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API ListImpersonationRolesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of impersonation roles under the given WorkMail organization.</p>
     */
    inline const Aws::Vector<ImpersonationRole>& GetRoles() const{ return m_roles; }

    /**
     * <p>The list of impersonation roles under the given WorkMail organization.</p>
     */
    inline void SetRoles(const Aws::Vector<ImpersonationRole>& value) { m_roles = value; }

    /**
     * <p>The list of impersonation roles under the given WorkMail organization.</p>
     */
    inline void SetRoles(Aws::Vector<ImpersonationRole>&& value) { m_roles = std::move(value); }

    /**
     * <p>The list of impersonation roles under the given WorkMail organization.</p>
     */
    inline ListImpersonationRolesResult& WithRoles(const Aws::Vector<ImpersonationRole>& value) { SetRoles(value); return *this;}

    /**
     * <p>The list of impersonation roles under the given WorkMail organization.</p>
     */
    inline ListImpersonationRolesResult& WithRoles(Aws::Vector<ImpersonationRole>&& value) { SetRoles(std::move(value)); return *this;}

    /**
     * <p>The list of impersonation roles under the given WorkMail organization.</p>
     */
    inline ListImpersonationRolesResult& AddRoles(const ImpersonationRole& value) { m_roles.push_back(value); return *this; }

    /**
     * <p>The list of impersonation roles under the given WorkMail organization.</p>
     */
    inline ListImpersonationRolesResult& AddRoles(ImpersonationRole&& value) { m_roles.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to retrieve the next page of results. The value is
     * <code>null</code> when there are no results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next page of results. The value is
     * <code>null</code> when there are no results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to retrieve the next page of results. The value is
     * <code>null</code> when there are no results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next page of results. The value is
     * <code>null</code> when there are no results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next page of results. The value is
     * <code>null</code> when there are no results to return.</p>
     */
    inline ListImpersonationRolesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next page of results. The value is
     * <code>null</code> when there are no results to return.</p>
     */
    inline ListImpersonationRolesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next page of results. The value is
     * <code>null</code> when there are no results to return.</p>
     */
    inline ListImpersonationRolesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ImpersonationRole> m_roles;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
