﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class PutResourcePolicyRequest : public XRayRequest
  {
  public:
    AWS_XRAY_API PutResourcePolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the resource policy. Must be unique within a specific Amazon Web
     * Services account.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    PutResourcePolicyRequest& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource policy document, which can be up to 5kb in size.</p>
     */
    inline const Aws::String& GetPolicyDocument() const { return m_policyDocument; }
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }
    template<typename PolicyDocumentT = Aws::String>
    void SetPolicyDocument(PolicyDocumentT&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::forward<PolicyDocumentT>(value); }
    template<typename PolicyDocumentT = Aws::String>
    PutResourcePolicyRequest& WithPolicyDocument(PolicyDocumentT&& value) { SetPolicyDocument(std::forward<PolicyDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a specific policy revision, to ensure an atomic create operation.
     * By default the resource policy is created if it does not exist, or updated with
     * an incremented revision id. The revision id is unique to each policy in the
     * account.</p> <p>If the policy revision id does not match the latest revision id,
     * the operation will fail with an <code>InvalidPolicyRevisionIdException</code>
     * exception. You can also provide a <code>PolicyRevisionId</code> of 0. In this
     * case, the operation will fail with an
     * <code>InvalidPolicyRevisionIdException</code> exception if a resource policy
     * with the same name already exists. </p>
     */
    inline const Aws::String& GetPolicyRevisionId() const { return m_policyRevisionId; }
    inline bool PolicyRevisionIdHasBeenSet() const { return m_policyRevisionIdHasBeenSet; }
    template<typename PolicyRevisionIdT = Aws::String>
    void SetPolicyRevisionId(PolicyRevisionIdT&& value) { m_policyRevisionIdHasBeenSet = true; m_policyRevisionId = std::forward<PolicyRevisionIdT>(value); }
    template<typename PolicyRevisionIdT = Aws::String>
    PutResourcePolicyRequest& WithPolicyRevisionId(PolicyRevisionIdT&& value) { SetPolicyRevisionId(std::forward<PolicyRevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag to indicate whether to bypass the resource policy lockout safety
     * check.</p>  <p>Setting this value to true increases the risk that the
     * policy becomes unmanageable. Do not set this value to true indiscriminately.</p>
     *  <p>Use this parameter only when you include a policy in the request
     * and you intend to prevent the principal that is making the request from making a
     * subsequent <code>PutResourcePolicy</code> request.</p> <p>The default value is
     * false.</p>
     */
    inline bool GetBypassPolicyLockoutCheck() const { return m_bypassPolicyLockoutCheck; }
    inline bool BypassPolicyLockoutCheckHasBeenSet() const { return m_bypassPolicyLockoutCheckHasBeenSet; }
    inline void SetBypassPolicyLockoutCheck(bool value) { m_bypassPolicyLockoutCheckHasBeenSet = true; m_bypassPolicyLockoutCheck = value; }
    inline PutResourcePolicyRequest& WithBypassPolicyLockoutCheck(bool value) { SetBypassPolicyLockoutCheck(value); return *this;}
    ///@}
  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    Aws::String m_policyRevisionId;
    bool m_policyRevisionIdHasBeenSet = false;

    bool m_bypassPolicyLockoutCheck{false};
    bool m_bypassPolicyLockoutCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
