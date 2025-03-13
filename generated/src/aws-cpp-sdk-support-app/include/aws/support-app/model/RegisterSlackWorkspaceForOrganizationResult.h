/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportApp_EXPORTS.h>
#include <aws/support-app/model/AccountType.h>
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
namespace SupportApp
{
namespace Model
{
  class RegisterSlackWorkspaceForOrganizationResult
  {
  public:
    AWS_SUPPORTAPP_API RegisterSlackWorkspaceForOrganizationResult() = default;
    AWS_SUPPORTAPP_API RegisterSlackWorkspaceForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORTAPP_API RegisterSlackWorkspaceForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Whether the Amazon Web Services account is a management or member account
     * that's part of an organization in Organizations.</p>
     */
    inline AccountType GetAccountType() const { return m_accountType; }
    inline void SetAccountType(AccountType value) { m_accountTypeHasBeenSet = true; m_accountType = value; }
    inline RegisterSlackWorkspaceForOrganizationResult& WithAccountType(AccountType value) { SetAccountType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline const Aws::String& GetTeamId() const { return m_teamId; }
    template<typename TeamIdT = Aws::String>
    void SetTeamId(TeamIdT&& value) { m_teamIdHasBeenSet = true; m_teamId = std::forward<TeamIdT>(value); }
    template<typename TeamIdT = Aws::String>
    RegisterSlackWorkspaceForOrganizationResult& WithTeamId(TeamIdT&& value) { SetTeamId(std::forward<TeamIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Slack workspace.</p>
     */
    inline const Aws::String& GetTeamName() const { return m_teamName; }
    template<typename TeamNameT = Aws::String>
    void SetTeamName(TeamNameT&& value) { m_teamNameHasBeenSet = true; m_teamName = std::forward<TeamNameT>(value); }
    template<typename TeamNameT = Aws::String>
    RegisterSlackWorkspaceForOrganizationResult& WithTeamName(TeamNameT&& value) { SetTeamName(std::forward<TeamNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RegisterSlackWorkspaceForOrganizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AccountType m_accountType{AccountType::NOT_SET};
    bool m_accountTypeHasBeenSet = false;

    Aws::String m_teamId;
    bool m_teamIdHasBeenSet = false;

    Aws::String m_teamName;
    bool m_teamNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SupportApp
} // namespace Aws
