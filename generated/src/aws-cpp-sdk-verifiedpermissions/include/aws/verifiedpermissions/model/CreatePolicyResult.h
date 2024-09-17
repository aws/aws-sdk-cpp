/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/PolicyType.h>
#include <aws/verifiedpermissions/model/EntityIdentifier.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/verifiedpermissions/model/PolicyEffect.h>
#include <aws/verifiedpermissions/model/ActionIdentifier.h>
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
namespace VerifiedPermissions
{
namespace Model
{
  class CreatePolicyResult
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API CreatePolicyResult();
    AWS_VERIFIEDPERMISSIONS_API CreatePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VERIFIEDPERMISSIONS_API CreatePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the policy store that contains the new policy.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreId = value; }
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreId = std::move(value); }
    inline void SetPolicyStoreId(const char* value) { m_policyStoreId.assign(value); }
    inline CreatePolicyResult& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}
    inline CreatePolicyResult& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}
    inline CreatePolicyResult& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the new policy.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }
    inline void SetPolicyId(const Aws::String& value) { m_policyId = value; }
    inline void SetPolicyId(Aws::String&& value) { m_policyId = std::move(value); }
    inline void SetPolicyId(const char* value) { m_policyId.assign(value); }
    inline CreatePolicyResult& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}
    inline CreatePolicyResult& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}
    inline CreatePolicyResult& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy type of the new policy.</p>
     */
    inline const PolicyType& GetPolicyType() const{ return m_policyType; }
    inline void SetPolicyType(const PolicyType& value) { m_policyType = value; }
    inline void SetPolicyType(PolicyType&& value) { m_policyType = std::move(value); }
    inline CreatePolicyResult& WithPolicyType(const PolicyType& value) { SetPolicyType(value); return *this;}
    inline CreatePolicyResult& WithPolicyType(PolicyType&& value) { SetPolicyType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal specified in the new policy's scope. This response element
     * isn't present when <code>principal</code> isn't specified in the policy
     * content.</p>
     */
    inline const EntityIdentifier& GetPrincipal() const{ return m_principal; }
    inline void SetPrincipal(const EntityIdentifier& value) { m_principal = value; }
    inline void SetPrincipal(EntityIdentifier&& value) { m_principal = std::move(value); }
    inline CreatePolicyResult& WithPrincipal(const EntityIdentifier& value) { SetPrincipal(value); return *this;}
    inline CreatePolicyResult& WithPrincipal(EntityIdentifier&& value) { SetPrincipal(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource specified in the new policy's scope. This response element isn't
     * present when the <code>resource</code> isn't specified in the policy
     * content.</p>
     */
    inline const EntityIdentifier& GetResource() const{ return m_resource; }
    inline void SetResource(const EntityIdentifier& value) { m_resource = value; }
    inline void SetResource(EntityIdentifier&& value) { m_resource = std::move(value); }
    inline CreatePolicyResult& WithResource(const EntityIdentifier& value) { SetResource(value); return *this;}
    inline CreatePolicyResult& WithResource(EntityIdentifier&& value) { SetResource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that a policy permits or forbids. For example, <code>{"actions":
     * [{"actionId": "ViewPhoto", "actionType": "PhotoFlash::Action"}, {"entityID":
     * "SharePhoto", "entityType": "PhotoFlash::Action"}]}</code>.</p>
     */
    inline const Aws::Vector<ActionIdentifier>& GetActions() const{ return m_actions; }
    inline void SetActions(const Aws::Vector<ActionIdentifier>& value) { m_actions = value; }
    inline void SetActions(Aws::Vector<ActionIdentifier>&& value) { m_actions = std::move(value); }
    inline CreatePolicyResult& WithActions(const Aws::Vector<ActionIdentifier>& value) { SetActions(value); return *this;}
    inline CreatePolicyResult& WithActions(Aws::Vector<ActionIdentifier>&& value) { SetActions(std::move(value)); return *this;}
    inline CreatePolicyResult& AddActions(const ActionIdentifier& value) { m_actions.push_back(value); return *this; }
    inline CreatePolicyResult& AddActions(ActionIdentifier&& value) { m_actions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time the policy was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }
    inline CreatePolicyResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline CreatePolicyResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the policy was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }
    inline CreatePolicyResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}
    inline CreatePolicyResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effect of the decision that a policy returns to an authorization request.
     * For example, <code>"effect": "Permit"</code>.</p>
     */
    inline const PolicyEffect& GetEffect() const{ return m_effect; }
    inline void SetEffect(const PolicyEffect& value) { m_effect = value; }
    inline void SetEffect(PolicyEffect&& value) { m_effect = std::move(value); }
    inline CreatePolicyResult& WithEffect(const PolicyEffect& value) { SetEffect(value); return *this;}
    inline CreatePolicyResult& WithEffect(PolicyEffect&& value) { SetEffect(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreatePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreatePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreatePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_policyStoreId;

    Aws::String m_policyId;

    PolicyType m_policyType;

    EntityIdentifier m_principal;

    EntityIdentifier m_resource;

    Aws::Vector<ActionIdentifier> m_actions;

    Aws::Utils::DateTime m_createdDate;

    Aws::Utils::DateTime m_lastUpdatedDate;

    PolicyEffect m_effect;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
