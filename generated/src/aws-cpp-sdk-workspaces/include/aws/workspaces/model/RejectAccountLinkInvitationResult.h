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
  class RejectAccountLinkInvitationResult
  {
  public:
    AWS_WORKSPACES_API RejectAccountLinkInvitationResult() = default;
    AWS_WORKSPACES_API RejectAccountLinkInvitationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API RejectAccountLinkInvitationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the account link.</p>
     */
    inline const AccountLink& GetAccountLink() const { return m_accountLink; }
    template<typename AccountLinkT = AccountLink>
    void SetAccountLink(AccountLinkT&& value) { m_accountLinkHasBeenSet = true; m_accountLink = std::forward<AccountLinkT>(value); }
    template<typename AccountLinkT = AccountLink>
    RejectAccountLinkInvitationResult& WithAccountLink(AccountLinkT&& value) { SetAccountLink(std::forward<AccountLinkT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RejectAccountLinkInvitationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
