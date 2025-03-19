/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/UserAlias.h>
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
namespace QBusiness
{
namespace Model
{
  class GetUserResult
  {
  public:
    AWS_QBUSINESS_API GetUserResult() = default;
    AWS_QBUSINESS_API GetUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API GetUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of user aliases attached to a user.</p>
     */
    inline const Aws::Vector<UserAlias>& GetUserAliases() const { return m_userAliases; }
    template<typename UserAliasesT = Aws::Vector<UserAlias>>
    void SetUserAliases(UserAliasesT&& value) { m_userAliasesHasBeenSet = true; m_userAliases = std::forward<UserAliasesT>(value); }
    template<typename UserAliasesT = Aws::Vector<UserAlias>>
    GetUserResult& WithUserAliases(UserAliasesT&& value) { SetUserAliases(std::forward<UserAliasesT>(value)); return *this;}
    template<typename UserAliasesT = UserAlias>
    GetUserResult& AddUserAliases(UserAliasesT&& value) { m_userAliasesHasBeenSet = true; m_userAliases.emplace_back(std::forward<UserAliasesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetUserResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UserAlias> m_userAliases;
    bool m_userAliasesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
