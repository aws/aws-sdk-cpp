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
    AWS_SUPPORTAPP_API RegisterSlackWorkspaceForOrganizationResult();
    AWS_SUPPORTAPP_API RegisterSlackWorkspaceForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORTAPP_API RegisterSlackWorkspaceForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Whether the Amazon Web Services account is a management or member account
     * that's part of an organization in Organizations.</p>
     */
    inline const AccountType& GetAccountType() const{ return m_accountType; }

    /**
     * <p>Whether the Amazon Web Services account is a management or member account
     * that's part of an organization in Organizations.</p>
     */
    inline void SetAccountType(const AccountType& value) { m_accountType = value; }

    /**
     * <p>Whether the Amazon Web Services account is a management or member account
     * that's part of an organization in Organizations.</p>
     */
    inline void SetAccountType(AccountType&& value) { m_accountType = std::move(value); }

    /**
     * <p>Whether the Amazon Web Services account is a management or member account
     * that's part of an organization in Organizations.</p>
     */
    inline RegisterSlackWorkspaceForOrganizationResult& WithAccountType(const AccountType& value) { SetAccountType(value); return *this;}

    /**
     * <p>Whether the Amazon Web Services account is a management or member account
     * that's part of an organization in Organizations.</p>
     */
    inline RegisterSlackWorkspaceForOrganizationResult& WithAccountType(AccountType&& value) { SetAccountType(std::move(value)); return *this;}


    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline const Aws::String& GetTeamId() const{ return m_teamId; }

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline void SetTeamId(const Aws::String& value) { m_teamId = value; }

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline void SetTeamId(Aws::String&& value) { m_teamId = std::move(value); }

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline void SetTeamId(const char* value) { m_teamId.assign(value); }

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline RegisterSlackWorkspaceForOrganizationResult& WithTeamId(const Aws::String& value) { SetTeamId(value); return *this;}

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline RegisterSlackWorkspaceForOrganizationResult& WithTeamId(Aws::String&& value) { SetTeamId(std::move(value)); return *this;}

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline RegisterSlackWorkspaceForOrganizationResult& WithTeamId(const char* value) { SetTeamId(value); return *this;}


    /**
     * <p>The name of the Slack workspace.</p>
     */
    inline const Aws::String& GetTeamName() const{ return m_teamName; }

    /**
     * <p>The name of the Slack workspace.</p>
     */
    inline void SetTeamName(const Aws::String& value) { m_teamName = value; }

    /**
     * <p>The name of the Slack workspace.</p>
     */
    inline void SetTeamName(Aws::String&& value) { m_teamName = std::move(value); }

    /**
     * <p>The name of the Slack workspace.</p>
     */
    inline void SetTeamName(const char* value) { m_teamName.assign(value); }

    /**
     * <p>The name of the Slack workspace.</p>
     */
    inline RegisterSlackWorkspaceForOrganizationResult& WithTeamName(const Aws::String& value) { SetTeamName(value); return *this;}

    /**
     * <p>The name of the Slack workspace.</p>
     */
    inline RegisterSlackWorkspaceForOrganizationResult& WithTeamName(Aws::String&& value) { SetTeamName(std::move(value)); return *this;}

    /**
     * <p>The name of the Slack workspace.</p>
     */
    inline RegisterSlackWorkspaceForOrganizationResult& WithTeamName(const char* value) { SetTeamName(value); return *this;}

  private:

    AccountType m_accountType;

    Aws::String m_teamId;

    Aws::String m_teamName;
  };

} // namespace Model
} // namespace SupportApp
} // namespace Aws
