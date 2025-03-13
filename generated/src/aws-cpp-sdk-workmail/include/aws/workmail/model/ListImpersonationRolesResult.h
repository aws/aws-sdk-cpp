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
    AWS_WORKMAIL_API ListImpersonationRolesResult() = default;
    AWS_WORKMAIL_API ListImpersonationRolesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API ListImpersonationRolesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of impersonation roles under the given WorkMail organization.</p>
     */
    inline const Aws::Vector<ImpersonationRole>& GetRoles() const { return m_roles; }
    template<typename RolesT = Aws::Vector<ImpersonationRole>>
    void SetRoles(RolesT&& value) { m_rolesHasBeenSet = true; m_roles = std::forward<RolesT>(value); }
    template<typename RolesT = Aws::Vector<ImpersonationRole>>
    ListImpersonationRolesResult& WithRoles(RolesT&& value) { SetRoles(std::forward<RolesT>(value)); return *this;}
    template<typename RolesT = ImpersonationRole>
    ListImpersonationRolesResult& AddRoles(RolesT&& value) { m_rolesHasBeenSet = true; m_roles.emplace_back(std::forward<RolesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next page of results. The value is
     * <code>null</code> when there are no results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListImpersonationRolesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListImpersonationRolesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ImpersonationRole> m_roles;
    bool m_rolesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
