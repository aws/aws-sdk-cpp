/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso/SSO_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sso/model/RoleInfo.h>
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
namespace SSO
{
namespace Model
{
  class ListAccountRolesResult
  {
  public:
    AWS_SSO_API ListAccountRolesResult() = default;
    AWS_SSO_API ListAccountRolesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSO_API ListAccountRolesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The page token client that is used to retrieve the list of accounts.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAccountRolesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A paginated response with the list of roles and the next token if more
     * results are available.</p>
     */
    inline const Aws::Vector<RoleInfo>& GetRoleList() const { return m_roleList; }
    template<typename RoleListT = Aws::Vector<RoleInfo>>
    void SetRoleList(RoleListT&& value) { m_roleListHasBeenSet = true; m_roleList = std::forward<RoleListT>(value); }
    template<typename RoleListT = Aws::Vector<RoleInfo>>
    ListAccountRolesResult& WithRoleList(RoleListT&& value) { SetRoleList(std::forward<RoleListT>(value)); return *this;}
    template<typename RoleListT = RoleInfo>
    ListAccountRolesResult& AddRoleList(RoleListT&& value) { m_roleListHasBeenSet = true; m_roleList.emplace_back(std::forward<RoleListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAccountRolesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RoleInfo> m_roleList;
    bool m_roleListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSO
} // namespace Aws
