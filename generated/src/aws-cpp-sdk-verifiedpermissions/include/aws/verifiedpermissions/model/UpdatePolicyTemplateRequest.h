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
    AWS_VERIFIEDPERMISSIONS_API UpdatePolicyTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePolicyTemplate"; }

    AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

    AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the ID of the policy store that contains the policy template that
     * you want to update.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }

    /**
     * <p>Specifies the ID of the policy store that contains the policy template that
     * you want to update.</p>
     */
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }

    /**
     * <p>Specifies the ID of the policy store that contains the policy template that
     * you want to update.</p>
     */
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = value; }

    /**
     * <p>Specifies the ID of the policy store that contains the policy template that
     * you want to update.</p>
     */
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::move(value); }

    /**
     * <p>Specifies the ID of the policy store that contains the policy template that
     * you want to update.</p>
     */
    inline void SetPolicyStoreId(const char* value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId.assign(value); }

    /**
     * <p>Specifies the ID of the policy store that contains the policy template that
     * you want to update.</p>
     */
    inline UpdatePolicyTemplateRequest& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}

    /**
     * <p>Specifies the ID of the policy store that contains the policy template that
     * you want to update.</p>
     */
    inline UpdatePolicyTemplateRequest& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the policy store that contains the policy template that
     * you want to update.</p>
     */
    inline UpdatePolicyTemplateRequest& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}


    /**
     * <p>Specifies the ID of the policy template that you want to update.</p>
     */
    inline const Aws::String& GetPolicyTemplateId() const{ return m_policyTemplateId; }

    /**
     * <p>Specifies the ID of the policy template that you want to update.</p>
     */
    inline bool PolicyTemplateIdHasBeenSet() const { return m_policyTemplateIdHasBeenSet; }

    /**
     * <p>Specifies the ID of the policy template that you want to update.</p>
     */
    inline void SetPolicyTemplateId(const Aws::String& value) { m_policyTemplateIdHasBeenSet = true; m_policyTemplateId = value; }

    /**
     * <p>Specifies the ID of the policy template that you want to update.</p>
     */
    inline void SetPolicyTemplateId(Aws::String&& value) { m_policyTemplateIdHasBeenSet = true; m_policyTemplateId = std::move(value); }

    /**
     * <p>Specifies the ID of the policy template that you want to update.</p>
     */
    inline void SetPolicyTemplateId(const char* value) { m_policyTemplateIdHasBeenSet = true; m_policyTemplateId.assign(value); }

    /**
     * <p>Specifies the ID of the policy template that you want to update.</p>
     */
    inline UpdatePolicyTemplateRequest& WithPolicyTemplateId(const Aws::String& value) { SetPolicyTemplateId(value); return *this;}

    /**
     * <p>Specifies the ID of the policy template that you want to update.</p>
     */
    inline UpdatePolicyTemplateRequest& WithPolicyTemplateId(Aws::String&& value) { SetPolicyTemplateId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the policy template that you want to update.</p>
     */
    inline UpdatePolicyTemplateRequest& WithPolicyTemplateId(const char* value) { SetPolicyTemplateId(value); return *this;}


    /**
     * <p>Specifies a new description to apply to the policy template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Specifies a new description to apply to the policy template.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Specifies a new description to apply to the policy template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Specifies a new description to apply to the policy template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Specifies a new description to apply to the policy template.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Specifies a new description to apply to the policy template.</p>
     */
    inline UpdatePolicyTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Specifies a new description to apply to the policy template.</p>
     */
    inline UpdatePolicyTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Specifies a new description to apply to the policy template.</p>
     */
    inline UpdatePolicyTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline const Aws::String& GetStatement() const{ return m_statement; }

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
    inline bool StatementHasBeenSet() const { return m_statementHasBeenSet; }

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
    inline void SetStatement(const Aws::String& value) { m_statementHasBeenSet = true; m_statement = value; }

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
    inline void SetStatement(Aws::String&& value) { m_statementHasBeenSet = true; m_statement = std::move(value); }

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
    inline void SetStatement(const char* value) { m_statementHasBeenSet = true; m_statement.assign(value); }

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
    inline UpdatePolicyTemplateRequest& WithStatement(const Aws::String& value) { SetStatement(value); return *this;}

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
    inline UpdatePolicyTemplateRequest& WithStatement(Aws::String&& value) { SetStatement(std::move(value)); return *this;}

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
    inline UpdatePolicyTemplateRequest& WithStatement(const char* value) { SetStatement(value); return *this;}

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
