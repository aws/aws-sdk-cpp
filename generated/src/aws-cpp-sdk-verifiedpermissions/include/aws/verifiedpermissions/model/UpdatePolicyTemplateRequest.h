/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/VerifiedPermissionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

  /**
   */
  class UpdatePolicyTemplateRequest : public VerifiedPermissionsRequest
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API UpdatePolicyTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePolicyTemplate"; }

    AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

    AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ID of the policy store that contains the policy template that
     * you want to update.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const { return m_policyStoreId; }
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }
    template<typename PolicyStoreIdT = Aws::String>
    void SetPolicyStoreId(PolicyStoreIdT&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::forward<PolicyStoreIdT>(value); }
    template<typename PolicyStoreIdT = Aws::String>
    UpdatePolicyTemplateRequest& WithPolicyStoreId(PolicyStoreIdT&& value) { SetPolicyStoreId(std::forward<PolicyStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ID of the policy template that you want to update.</p>
     */
    inline const Aws::String& GetPolicyTemplateId() const { return m_policyTemplateId; }
    inline bool PolicyTemplateIdHasBeenSet() const { return m_policyTemplateIdHasBeenSet; }
    template<typename PolicyTemplateIdT = Aws::String>
    void SetPolicyTemplateId(PolicyTemplateIdT&& value) { m_policyTemplateIdHasBeenSet = true; m_policyTemplateId = std::forward<PolicyTemplateIdT>(value); }
    template<typename PolicyTemplateIdT = Aws::String>
    UpdatePolicyTemplateRequest& WithPolicyTemplateId(PolicyTemplateIdT&& value) { SetPolicyTemplateId(std::forward<PolicyTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a new description to apply to the policy template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdatePolicyTemplateRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies new statement content written in Cedar policy language to replace
     * the current body of the policy template.</p> <p>You can change only the
     * following elements of the policy body:</p> <ul> <li> <p>The <code>action</code>
     * referenced by the policy template.</p> </li> <li> <p>Any conditional clauses,
     * such as <code>when</code> or <code>unless</code> clauses.</p> </li> </ul> <p>You
     * <b>can't</b> change the following elements:</p> <ul> <li> <p>The effect
     * (<code>permit</code> or <code>forbid</code>) of the policy template.</p> </li>
     * <li> <p>The <code>principal</code> referenced by the policy template.</p> </li>
     * <li> <p>The <code>resource</code> referenced by the policy template.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetStatement() const { return m_statement; }
    inline bool StatementHasBeenSet() const { return m_statementHasBeenSet; }
    template<typename StatementT = Aws::String>
    void SetStatement(StatementT&& value) { m_statementHasBeenSet = true; m_statement = std::forward<StatementT>(value); }
    template<typename StatementT = Aws::String>
    UpdatePolicyTemplateRequest& WithStatement(StatementT&& value) { SetStatement(std::forward<StatementT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    Aws::String m_policyTemplateId;
    bool m_policyTemplateIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_statement;
    bool m_statementHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
