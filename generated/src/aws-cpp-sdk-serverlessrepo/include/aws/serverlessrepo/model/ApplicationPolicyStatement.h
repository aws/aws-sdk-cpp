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
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API ApplicationPolicyStatement() = default;
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
    inline const Aws::Vector<Aws::String>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<Aws::String>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<Aws::String>>
    ApplicationPolicyStatement& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = Aws::String>
    ApplicationPolicyStatement& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of PrinciplalOrgIDs, which corresponds to AWS IAM <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_condition-keys.html#principal-org-id">aws:PrincipalOrgID</a>
     * global condition key.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrincipalOrgIDs() const { return m_principalOrgIDs; }
    inline bool PrincipalOrgIDsHasBeenSet() const { return m_principalOrgIDsHasBeenSet; }
    template<typename PrincipalOrgIDsT = Aws::Vector<Aws::String>>
    void SetPrincipalOrgIDs(PrincipalOrgIDsT&& value) { m_principalOrgIDsHasBeenSet = true; m_principalOrgIDs = std::forward<PrincipalOrgIDsT>(value); }
    template<typename PrincipalOrgIDsT = Aws::Vector<Aws::String>>
    ApplicationPolicyStatement& WithPrincipalOrgIDs(PrincipalOrgIDsT&& value) { SetPrincipalOrgIDs(std::forward<PrincipalOrgIDsT>(value)); return *this;}
    template<typename PrincipalOrgIDsT = Aws::String>
    ApplicationPolicyStatement& AddPrincipalOrgIDs(PrincipalOrgIDsT&& value) { m_principalOrgIDsHasBeenSet = true; m_principalOrgIDs.emplace_back(std::forward<PrincipalOrgIDsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of AWS account IDs, or * to make the application public.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrincipals() const { return m_principals; }
    inline bool PrincipalsHasBeenSet() const { return m_principalsHasBeenSet; }
    template<typename PrincipalsT = Aws::Vector<Aws::String>>
    void SetPrincipals(PrincipalsT&& value) { m_principalsHasBeenSet = true; m_principals = std::forward<PrincipalsT>(value); }
    template<typename PrincipalsT = Aws::Vector<Aws::String>>
    ApplicationPolicyStatement& WithPrincipals(PrincipalsT&& value) { SetPrincipals(std::forward<PrincipalsT>(value)); return *this;}
    template<typename PrincipalsT = Aws::String>
    ApplicationPolicyStatement& AddPrincipals(PrincipalsT&& value) { m_principalsHasBeenSet = true; m_principals.emplace_back(std::forward<PrincipalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique ID for the statement.</p>
     */
    inline const Aws::String& GetStatementId() const { return m_statementId; }
    inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }
    template<typename StatementIdT = Aws::String>
    void SetStatementId(StatementIdT&& value) { m_statementIdHasBeenSet = true; m_statementId = std::forward<StatementIdT>(value); }
    template<typename StatementIdT = Aws::String>
    ApplicationPolicyStatement& WithStatementId(StatementIdT&& value) { SetStatementId(std::forward<StatementIdT>(value)); return *this;}
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
