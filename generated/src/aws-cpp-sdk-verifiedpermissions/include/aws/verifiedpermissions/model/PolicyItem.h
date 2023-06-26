/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/PolicyType.h>
#include <aws/verifiedpermissions/model/EntityIdentifier.h>
#include <aws/verifiedpermissions/model/PolicyDefinitionItem.h>
#include <aws/core/utils/DateTime.h>
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
namespace VerifiedPermissions
{
namespace Model
{

  /**
   * <p>Contains information about a policy.</p> <p>This data type is used as a
   * response parameter for the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ListPolicies.html">ListPolicies</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/PolicyItem">AWS
   * API Reference</a></p>
   */
  class PolicyItem
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API PolicyItem();
    AWS_VERIFIEDPERMISSIONS_API PolicyItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API PolicyItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the PolicyStore where the policy you want information about
     * is stored.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }

    /**
     * <p>The identifier of the PolicyStore where the policy you want information about
     * is stored.</p>
     */
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }

    /**
     * <p>The identifier of the PolicyStore where the policy you want information about
     * is stored.</p>
     */
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = value; }

    /**
     * <p>The identifier of the PolicyStore where the policy you want information about
     * is stored.</p>
     */
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::move(value); }

    /**
     * <p>The identifier of the PolicyStore where the policy you want information about
     * is stored.</p>
     */
    inline void SetPolicyStoreId(const char* value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId.assign(value); }

    /**
     * <p>The identifier of the PolicyStore where the policy you want information about
     * is stored.</p>
     */
    inline PolicyItem& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}

    /**
     * <p>The identifier of the PolicyStore where the policy you want information about
     * is stored.</p>
     */
    inline PolicyItem& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the PolicyStore where the policy you want information about
     * is stored.</p>
     */
    inline PolicyItem& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}


    /**
     * <p>The identifier of the policy you want information about.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The identifier of the policy you want information about.</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>The identifier of the policy you want information about.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The identifier of the policy you want information about.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>The identifier of the policy you want information about.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The identifier of the policy you want information about.</p>
     */
    inline PolicyItem& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The identifier of the policy you want information about.</p>
     */
    inline PolicyItem& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the policy you want information about.</p>
     */
    inline PolicyItem& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>The type of the policy. This is one of the following values:</p> <ul> <li>
     * <p> <code>static</code> </p> </li> <li> <p> <code>templateLinked</code> </p>
     * </li> </ul>
     */
    inline const PolicyType& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>The type of the policy. This is one of the following values:</p> <ul> <li>
     * <p> <code>static</code> </p> </li> <li> <p> <code>templateLinked</code> </p>
     * </li> </ul>
     */
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }

    /**
     * <p>The type of the policy. This is one of the following values:</p> <ul> <li>
     * <p> <code>static</code> </p> </li> <li> <p> <code>templateLinked</code> </p>
     * </li> </ul>
     */
    inline void SetPolicyType(const PolicyType& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>The type of the policy. This is one of the following values:</p> <ul> <li>
     * <p> <code>static</code> </p> </li> <li> <p> <code>templateLinked</code> </p>
     * </li> </ul>
     */
    inline void SetPolicyType(PolicyType&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }

    /**
     * <p>The type of the policy. This is one of the following values:</p> <ul> <li>
     * <p> <code>static</code> </p> </li> <li> <p> <code>templateLinked</code> </p>
     * </li> </ul>
     */
    inline PolicyItem& WithPolicyType(const PolicyType& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The type of the policy. This is one of the following values:</p> <ul> <li>
     * <p> <code>static</code> </p> </li> <li> <p> <code>templateLinked</code> </p>
     * </li> </ul>
     */
    inline PolicyItem& WithPolicyType(PolicyType&& value) { SetPolicyType(std::move(value)); return *this;}


    /**
     * <p>The principal associated with the policy.</p>
     */
    inline const EntityIdentifier& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The principal associated with the policy.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>The principal associated with the policy.</p>
     */
    inline void SetPrincipal(const EntityIdentifier& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The principal associated with the policy.</p>
     */
    inline void SetPrincipal(EntityIdentifier&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The principal associated with the policy.</p>
     */
    inline PolicyItem& WithPrincipal(const EntityIdentifier& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The principal associated with the policy.</p>
     */
    inline PolicyItem& WithPrincipal(EntityIdentifier&& value) { SetPrincipal(std::move(value)); return *this;}


    /**
     * <p>The resource associated with the policy.</p>
     */
    inline const EntityIdentifier& GetResource() const{ return m_resource; }

    /**
     * <p>The resource associated with the policy.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The resource associated with the policy.</p>
     */
    inline void SetResource(const EntityIdentifier& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The resource associated with the policy.</p>
     */
    inline void SetResource(EntityIdentifier&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The resource associated with the policy.</p>
     */
    inline PolicyItem& WithResource(const EntityIdentifier& value) { SetResource(value); return *this;}

    /**
     * <p>The resource associated with the policy.</p>
     */
    inline PolicyItem& WithResource(EntityIdentifier&& value) { SetResource(std::move(value)); return *this;}


    /**
     * <p>The policy definition of an item in the list of policies returned.</p>
     */
    inline const PolicyDefinitionItem& GetDefinition() const{ return m_definition; }

    /**
     * <p>The policy definition of an item in the list of policies returned.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>The policy definition of an item in the list of policies returned.</p>
     */
    inline void SetDefinition(const PolicyDefinitionItem& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The policy definition of an item in the list of policies returned.</p>
     */
    inline void SetDefinition(PolicyDefinitionItem&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The policy definition of an item in the list of policies returned.</p>
     */
    inline PolicyItem& WithDefinition(const PolicyDefinitionItem& value) { SetDefinition(value); return *this;}

    /**
     * <p>The policy definition of an item in the list of policies returned.</p>
     */
    inline PolicyItem& WithDefinition(PolicyDefinitionItem&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * <p>The date and time the policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date and time the policy was created.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The date and time the policy was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date and time the policy was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The date and time the policy was created.</p>
     */
    inline PolicyItem& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date and time the policy was created.</p>
     */
    inline PolicyItem& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The date and time the policy was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>The date and time the policy was most recently updated.</p>
     */
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }

    /**
     * <p>The date and time the policy was most recently updated.</p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = value; }

    /**
     * <p>The date and time the policy was most recently updated.</p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::move(value); }

    /**
     * <p>The date and time the policy was most recently updated.</p>
     */
    inline PolicyItem& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>The date and time the policy was most recently updated.</p>
     */
    inline PolicyItem& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}

  private:

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    PolicyType m_policyType;
    bool m_policyTypeHasBeenSet = false;

    EntityIdentifier m_principal;
    bool m_principalHasBeenSet = false;

    EntityIdentifier m_resource;
    bool m_resourceHasBeenSet = false;

    PolicyDefinitionItem m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate;
    bool m_lastUpdatedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
