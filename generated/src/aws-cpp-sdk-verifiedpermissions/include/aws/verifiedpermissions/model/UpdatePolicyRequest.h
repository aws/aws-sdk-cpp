/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/VerifiedPermissionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/UpdatePolicyDefinition.h>
#include <utility>

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

  /**
   */
  class UpdatePolicyRequest : public VerifiedPermissionsRequest
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API UpdatePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePolicy"; }

    AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

    AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the ID of the policy store that contains the policy that you want
     * to update.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }

    /**
     * <p>Specifies the ID of the policy store that contains the policy that you want
     * to update.</p>
     */
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }

    /**
     * <p>Specifies the ID of the policy store that contains the policy that you want
     * to update.</p>
     */
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = value; }

    /**
     * <p>Specifies the ID of the policy store that contains the policy that you want
     * to update.</p>
     */
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::move(value); }

    /**
     * <p>Specifies the ID of the policy store that contains the policy that you want
     * to update.</p>
     */
    inline void SetPolicyStoreId(const char* value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId.assign(value); }

    /**
     * <p>Specifies the ID of the policy store that contains the policy that you want
     * to update.</p>
     */
    inline UpdatePolicyRequest& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}

    /**
     * <p>Specifies the ID of the policy store that contains the policy that you want
     * to update.</p>
     */
    inline UpdatePolicyRequest& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the policy store that contains the policy that you want
     * to update.</p>
     */
    inline UpdatePolicyRequest& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}


    /**
     * <p>Specifies the ID of the policy that you want to update. To find this value,
     * you can use <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ListPolicies.html">ListPolicies</a>.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>Specifies the ID of the policy that you want to update. To find this value,
     * you can use <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ListPolicies.html">ListPolicies</a>.</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>Specifies the ID of the policy that you want to update. To find this value,
     * you can use <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ListPolicies.html">ListPolicies</a>.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>Specifies the ID of the policy that you want to update. To find this value,
     * you can use <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ListPolicies.html">ListPolicies</a>.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>Specifies the ID of the policy that you want to update. To find this value,
     * you can use <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ListPolicies.html">ListPolicies</a>.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>Specifies the ID of the policy that you want to update. To find this value,
     * you can use <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ListPolicies.html">ListPolicies</a>.</p>
     */
    inline UpdatePolicyRequest& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>Specifies the ID of the policy that you want to update. To find this value,
     * you can use <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ListPolicies.html">ListPolicies</a>.</p>
     */
    inline UpdatePolicyRequest& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the policy that you want to update. To find this value,
     * you can use <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ListPolicies.html">ListPolicies</a>.</p>
     */
    inline UpdatePolicyRequest& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>Specifies the updated policy content that you want to replace on the
     * specified policy. The content must be valid Cedar policy language text.</p>
     * <p>You can change only the following elements from the policy definition:</p>
     * <ul> <li> <p>The <code>action</code> referenced by the policy.</p> </li> <li>
     * <p>Any conditional clauses, such as <code>when</code> or <code>unless</code>
     * clauses.</p> </li> </ul> <p>You <b>can't</b> change the following elements:</p>
     * <ul> <li> <p>Changing from <code>static</code> to
     * <code>templateLinked</code>.</p> </li> <li> <p>Changing the effect of the policy
     * from <code>permit</code> or <code>forbid</code>.</p> </li> <li> <p>The
     * <code>principal</code> referenced by the policy.</p> </li> <li> <p>The
     * <code>resource</code> referenced by the policy.</p> </li> </ul>
     */
    inline const UpdatePolicyDefinition& GetDefinition() const{ return m_definition; }

    /**
     * <p>Specifies the updated policy content that you want to replace on the
     * specified policy. The content must be valid Cedar policy language text.</p>
     * <p>You can change only the following elements from the policy definition:</p>
     * <ul> <li> <p>The <code>action</code> referenced by the policy.</p> </li> <li>
     * <p>Any conditional clauses, such as <code>when</code> or <code>unless</code>
     * clauses.</p> </li> </ul> <p>You <b>can't</b> change the following elements:</p>
     * <ul> <li> <p>Changing from <code>static</code> to
     * <code>templateLinked</code>.</p> </li> <li> <p>Changing the effect of the policy
     * from <code>permit</code> or <code>forbid</code>.</p> </li> <li> <p>The
     * <code>principal</code> referenced by the policy.</p> </li> <li> <p>The
     * <code>resource</code> referenced by the policy.</p> </li> </ul>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>Specifies the updated policy content that you want to replace on the
     * specified policy. The content must be valid Cedar policy language text.</p>
     * <p>You can change only the following elements from the policy definition:</p>
     * <ul> <li> <p>The <code>action</code> referenced by the policy.</p> </li> <li>
     * <p>Any conditional clauses, such as <code>when</code> or <code>unless</code>
     * clauses.</p> </li> </ul> <p>You <b>can't</b> change the following elements:</p>
     * <ul> <li> <p>Changing from <code>static</code> to
     * <code>templateLinked</code>.</p> </li> <li> <p>Changing the effect of the policy
     * from <code>permit</code> or <code>forbid</code>.</p> </li> <li> <p>The
     * <code>principal</code> referenced by the policy.</p> </li> <li> <p>The
     * <code>resource</code> referenced by the policy.</p> </li> </ul>
     */
    inline void SetDefinition(const UpdatePolicyDefinition& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>Specifies the updated policy content that you want to replace on the
     * specified policy. The content must be valid Cedar policy language text.</p>
     * <p>You can change only the following elements from the policy definition:</p>
     * <ul> <li> <p>The <code>action</code> referenced by the policy.</p> </li> <li>
     * <p>Any conditional clauses, such as <code>when</code> or <code>unless</code>
     * clauses.</p> </li> </ul> <p>You <b>can't</b> change the following elements:</p>
     * <ul> <li> <p>Changing from <code>static</code> to
     * <code>templateLinked</code>.</p> </li> <li> <p>Changing the effect of the policy
     * from <code>permit</code> or <code>forbid</code>.</p> </li> <li> <p>The
     * <code>principal</code> referenced by the policy.</p> </li> <li> <p>The
     * <code>resource</code> referenced by the policy.</p> </li> </ul>
     */
    inline void SetDefinition(UpdatePolicyDefinition&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>Specifies the updated policy content that you want to replace on the
     * specified policy. The content must be valid Cedar policy language text.</p>
     * <p>You can change only the following elements from the policy definition:</p>
     * <ul> <li> <p>The <code>action</code> referenced by the policy.</p> </li> <li>
     * <p>Any conditional clauses, such as <code>when</code> or <code>unless</code>
     * clauses.</p> </li> </ul> <p>You <b>can't</b> change the following elements:</p>
     * <ul> <li> <p>Changing from <code>static</code> to
     * <code>templateLinked</code>.</p> </li> <li> <p>Changing the effect of the policy
     * from <code>permit</code> or <code>forbid</code>.</p> </li> <li> <p>The
     * <code>principal</code> referenced by the policy.</p> </li> <li> <p>The
     * <code>resource</code> referenced by the policy.</p> </li> </ul>
     */
    inline UpdatePolicyRequest& WithDefinition(const UpdatePolicyDefinition& value) { SetDefinition(value); return *this;}

    /**
     * <p>Specifies the updated policy content that you want to replace on the
     * specified policy. The content must be valid Cedar policy language text.</p>
     * <p>You can change only the following elements from the policy definition:</p>
     * <ul> <li> <p>The <code>action</code> referenced by the policy.</p> </li> <li>
     * <p>Any conditional clauses, such as <code>when</code> or <code>unless</code>
     * clauses.</p> </li> </ul> <p>You <b>can't</b> change the following elements:</p>
     * <ul> <li> <p>Changing from <code>static</code> to
     * <code>templateLinked</code>.</p> </li> <li> <p>Changing the effect of the policy
     * from <code>permit</code> or <code>forbid</code>.</p> </li> <li> <p>The
     * <code>principal</code> referenced by the policy.</p> </li> <li> <p>The
     * <code>resource</code> referenced by the policy.</p> </li> </ul>
     */
    inline UpdatePolicyRequest& WithDefinition(UpdatePolicyDefinition&& value) { SetDefinition(std::move(value)); return *this;}

  private:

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    UpdatePolicyDefinition m_definition;
    bool m_definitionHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
