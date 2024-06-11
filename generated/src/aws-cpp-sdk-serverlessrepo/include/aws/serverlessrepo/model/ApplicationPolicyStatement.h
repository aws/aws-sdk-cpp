/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   * <p>Policy statement applied to the application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ApplicationPolicyStatement">AWS
   * API Reference</a></p>
   */
  class ApplicationPolicyStatement
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API ApplicationPolicyStatement();
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API ApplicationPolicyStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API ApplicationPolicyStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For the list of actions supported for this operation, see <a
     * href="https://docs.aws.amazon.com/serverlessrepo/latest/devguide/access-control-resource-based.html#application-permissions">Application
     * 
 Permissions</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<Aws::String>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<Aws::String>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline ApplicationPolicyStatement& WithActions(const Aws::Vector<Aws::String>& value) { SetActions(value); return *this;}
    inline ApplicationPolicyStatement& WithActions(Aws::Vector<Aws::String>&& value) { SetActions(std::move(value)); return *this;}
    inline ApplicationPolicyStatement& AddActions(const Aws::String& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline ApplicationPolicyStatement& AddActions(Aws::String&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    inline ApplicationPolicyStatement& AddActions(const char* value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of PrinciplalOrgIDs, which corresponds to AWS IAM <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_condition-keys.html#principal-org-id">aws:PrincipalOrgID</a>
     * global condition key.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrincipalOrgIDs() const{ return m_principalOrgIDs; }
    inline bool PrincipalOrgIDsHasBeenSet() const { return m_principalOrgIDsHasBeenSet; }
    inline void SetPrincipalOrgIDs(const Aws::Vector<Aws::String>& value) { m_principalOrgIDsHasBeenSet = true; m_principalOrgIDs = value; }
    inline void SetPrincipalOrgIDs(Aws::Vector<Aws::String>&& value) { m_principalOrgIDsHasBeenSet = true; m_principalOrgIDs = std::move(value); }
    inline ApplicationPolicyStatement& WithPrincipalOrgIDs(const Aws::Vector<Aws::String>& value) { SetPrincipalOrgIDs(value); return *this;}
    inline ApplicationPolicyStatement& WithPrincipalOrgIDs(Aws::Vector<Aws::String>&& value) { SetPrincipalOrgIDs(std::move(value)); return *this;}
    inline ApplicationPolicyStatement& AddPrincipalOrgIDs(const Aws::String& value) { m_principalOrgIDsHasBeenSet = true; m_principalOrgIDs.push_back(value); return *this; }
    inline ApplicationPolicyStatement& AddPrincipalOrgIDs(Aws::String&& value) { m_principalOrgIDsHasBeenSet = true; m_principalOrgIDs.push_back(std::move(value)); return *this; }
    inline ApplicationPolicyStatement& AddPrincipalOrgIDs(const char* value) { m_principalOrgIDsHasBeenSet = true; m_principalOrgIDs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of AWS account IDs, or * to make the application public.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrincipals() const{ return m_principals; }
    inline bool PrincipalsHasBeenSet() const { return m_principalsHasBeenSet; }
    inline void SetPrincipals(const Aws::Vector<Aws::String>& value) { m_principalsHasBeenSet = true; m_principals = value; }
    inline void SetPrincipals(Aws::Vector<Aws::String>&& value) { m_principalsHasBeenSet = true; m_principals = std::move(value); }
    inline ApplicationPolicyStatement& WithPrincipals(const Aws::Vector<Aws::String>& value) { SetPrincipals(value); return *this;}
    inline ApplicationPolicyStatement& WithPrincipals(Aws::Vector<Aws::String>&& value) { SetPrincipals(std::move(value)); return *this;}
    inline ApplicationPolicyStatement& AddPrincipals(const Aws::String& value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }
    inline ApplicationPolicyStatement& AddPrincipals(Aws::String&& value) { m_principalsHasBeenSet = true; m_principals.push_back(std::move(value)); return *this; }
    inline ApplicationPolicyStatement& AddPrincipals(const char* value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique ID for the statement.</p>
     */
    inline const Aws::String& GetStatementId() const{ return m_statementId; }
    inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }
    inline void SetStatementId(const Aws::String& value) { m_statementIdHasBeenSet = true; m_statementId = value; }
    inline void SetStatementId(Aws::String&& value) { m_statementIdHasBeenSet = true; m_statementId = std::move(value); }
    inline void SetStatementId(const char* value) { m_statementIdHasBeenSet = true; m_statementId.assign(value); }
    inline ApplicationPolicyStatement& WithStatementId(const Aws::String& value) { SetStatementId(value); return *this;}
    inline ApplicationPolicyStatement& WithStatementId(Aws::String&& value) { SetStatementId(std::move(value)); return *this;}
    inline ApplicationPolicyStatement& WithStatementId(const char* value) { SetStatementId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_principalOrgIDs;
    bool m_principalOrgIDsHasBeenSet = false;

    Aws::Vector<Aws::String> m_principals;
    bool m_principalsHasBeenSet = false;

    Aws::String m_statementId;
    bool m_statementIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
