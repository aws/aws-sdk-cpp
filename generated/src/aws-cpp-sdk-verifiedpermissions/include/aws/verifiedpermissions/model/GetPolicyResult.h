/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/PolicyType.h>
#include <aws/verifiedpermissions/model/EntityIdentifier.h>
#include <aws/verifiedpermissions/model/PolicyDefinitionDetail.h>
#include <aws/core/utils/DateTime.h>
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
  class GetPolicyResult
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API GetPolicyResult();
    AWS_VERIFIEDPERMISSIONS_API GetPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VERIFIEDPERMISSIONS_API GetPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the policy store that contains the policy that you want information
     * about.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }

    /**
     * <p>The ID of the policy store that contains the policy that you want information
     * about.</p>
     */
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreId = value; }

    /**
     * <p>The ID of the policy store that contains the policy that you want information
     * about.</p>
     */
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreId = std::move(value); }

    /**
     * <p>The ID of the policy store that contains the policy that you want information
     * about.</p>
     */
    inline void SetPolicyStoreId(const char* value) { m_policyStoreId.assign(value); }

    /**
     * <p>The ID of the policy store that contains the policy that you want information
     * about.</p>
     */
    inline GetPolicyResult& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}

    /**
     * <p>The ID of the policy store that contains the policy that you want information
     * about.</p>
     */
    inline GetPolicyResult& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}

    /**
     * <p>The ID of the policy store that contains the policy that you want information
     * about.</p>
     */
    inline GetPolicyResult& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}


    /**
     * <p>The unique ID of the policy that you want information about.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The unique ID of the policy that you want information about.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyId = value; }

    /**
     * <p>The unique ID of the policy that you want information about.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyId = std::move(value); }

    /**
     * <p>The unique ID of the policy that you want information about.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyId.assign(value); }

    /**
     * <p>The unique ID of the policy that you want information about.</p>
     */
    inline GetPolicyResult& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The unique ID of the policy that you want information about.</p>
     */
    inline GetPolicyResult& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the policy that you want information about.</p>
     */
    inline GetPolicyResult& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>The type of the policy.</p>
     */
    inline const PolicyType& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>The type of the policy.</p>
     */
    inline void SetPolicyType(const PolicyType& value) { m_policyType = value; }

    /**
     * <p>The type of the policy.</p>
     */
    inline void SetPolicyType(PolicyType&& value) { m_policyType = std::move(value); }

    /**
     * <p>The type of the policy.</p>
     */
    inline GetPolicyResult& WithPolicyType(const PolicyType& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The type of the policy.</p>
     */
    inline GetPolicyResult& WithPolicyType(PolicyType&& value) { SetPolicyType(std::move(value)); return *this;}


    /**
     * <p>The principal specified in the policy's scope. This element isn't included in
     * the response when <code>Principal</code> isn't present in the policy
     * content.</p>
     */
    inline const EntityIdentifier& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The principal specified in the policy's scope. This element isn't included in
     * the response when <code>Principal</code> isn't present in the policy
     * content.</p>
     */
    inline void SetPrincipal(const EntityIdentifier& value) { m_principal = value; }

    /**
     * <p>The principal specified in the policy's scope. This element isn't included in
     * the response when <code>Principal</code> isn't present in the policy
     * content.</p>
     */
    inline void SetPrincipal(EntityIdentifier&& value) { m_principal = std::move(value); }

    /**
     * <p>The principal specified in the policy's scope. This element isn't included in
     * the response when <code>Principal</code> isn't present in the policy
     * content.</p>
     */
    inline GetPolicyResult& WithPrincipal(const EntityIdentifier& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The principal specified in the policy's scope. This element isn't included in
     * the response when <code>Principal</code> isn't present in the policy
     * content.</p>
     */
    inline GetPolicyResult& WithPrincipal(EntityIdentifier&& value) { SetPrincipal(std::move(value)); return *this;}


    /**
     * <p>The resource specified in the policy's scope. This element isn't included in
     * the response when <code>Resource</code> isn't present in the policy content.</p>
     */
    inline const EntityIdentifier& GetResource() const{ return m_resource; }

    /**
     * <p>The resource specified in the policy's scope. This element isn't included in
     * the response when <code>Resource</code> isn't present in the policy content.</p>
     */
    inline void SetResource(const EntityIdentifier& value) { m_resource = value; }

    /**
     * <p>The resource specified in the policy's scope. This element isn't included in
     * the response when <code>Resource</code> isn't present in the policy content.</p>
     */
    inline void SetResource(EntityIdentifier&& value) { m_resource = std::move(value); }

    /**
     * <p>The resource specified in the policy's scope. This element isn't included in
     * the response when <code>Resource</code> isn't present in the policy content.</p>
     */
    inline GetPolicyResult& WithResource(const EntityIdentifier& value) { SetResource(value); return *this;}

    /**
     * <p>The resource specified in the policy's scope. This element isn't included in
     * the response when <code>Resource</code> isn't present in the policy content.</p>
     */
    inline GetPolicyResult& WithResource(EntityIdentifier&& value) { SetResource(std::move(value)); return *this;}


    /**
     * <p>The definition of the requested policy.</p>
     */
    inline const PolicyDefinitionDetail& GetDefinition() const{ return m_definition; }

    /**
     * <p>The definition of the requested policy.</p>
     */
    inline void SetDefinition(const PolicyDefinitionDetail& value) { m_definition = value; }

    /**
     * <p>The definition of the requested policy.</p>
     */
    inline void SetDefinition(PolicyDefinitionDetail&& value) { m_definition = std::move(value); }

    /**
     * <p>The definition of the requested policy.</p>
     */
    inline GetPolicyResult& WithDefinition(const PolicyDefinitionDetail& value) { SetDefinition(value); return *this;}

    /**
     * <p>The definition of the requested policy.</p>
     */
    inline GetPolicyResult& WithDefinition(PolicyDefinitionDetail&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * <p>The date and time that the policy was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date and time that the policy was originally created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date and time that the policy was originally created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The date and time that the policy was originally created.</p>
     */
    inline GetPolicyResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date and time that the policy was originally created.</p>
     */
    inline GetPolicyResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The date and time that the policy was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>The date and time that the policy was last updated.</p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }

    /**
     * <p>The date and time that the policy was last updated.</p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }

    /**
     * <p>The date and time that the policy was last updated.</p>
     */
    inline GetPolicyResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>The date and time that the policy was last updated.</p>
     */
    inline GetPolicyResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_policyStoreId;

    Aws::String m_policyId;

    PolicyType m_policyType;

    EntityIdentifier m_principal;

    EntityIdentifier m_resource;

    PolicyDefinitionDetail m_definition;

    Aws::Utils::DateTime m_createdDate;

    Aws::Utils::DateTime m_lastUpdatedDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
