/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/AccountLink.h>
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
namespace WorkSpaces
{
namespace Model
{
  class GetAccountLinkResult
  {
  public:
    AWS_WORKSPACES_API GetAccountLinkResult() = default;
    AWS_WORKSPACES_API GetAccountLinkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API GetAccountLinkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The account link of the account link to retrieve.</p>
     */
    inline const AccountLink& GetAccountLink() const { return m_accountLink; }
    template<typename AccountLinkT = AccountLink>
    void SetAccountLink(AccountLinkT&& value) { m_accountLinkHasBeenSet = true; m_accountLink = std::forward<AccountLinkT>(value); }
    template<typename AccountLinkT = AccountLink>
    GetAccountLinkResult& WithAccountLink(AccountLinkT&& value) { SetAccountLink(std::forward<AccountLinkT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAccountLinkResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AccountLink m_accountLink;
    bool m_accountLinkHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
