/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/OpenSearchServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/AccessPolicyType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

  /**
   */
  class UpdateAccessPolicyRequest : public OpenSearchServerlessRequest
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API UpdateAccessPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccessPolicy"; }

    AWS_OPENSEARCHSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline UpdateAccessPolicyRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline UpdateAccessPolicyRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline UpdateAccessPolicyRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>A description of the policy. Typically used to store information about the
     * permissions defined in the policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the policy. Typically used to store information about the
     * permissions defined in the policy.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the policy. Typically used to store information about the
     * permissions defined in the policy.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the policy. Typically used to store information about the
     * permissions defined in the policy.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the policy. Typically used to store information about the
     * permissions defined in the policy.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the policy. Typically used to store information about the
     * permissions defined in the policy.</p>
     */
    inline UpdateAccessPolicyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the policy. Typically used to store information about the
     * permissions defined in the policy.</p>
     */
    inline UpdateAccessPolicyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the policy. Typically used to store information about the
     * permissions defined in the policy.</p>
     */
    inline UpdateAccessPolicyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the policy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the policy.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the policy.</p>
     */
    inline UpdateAccessPolicyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline UpdateAccessPolicyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline UpdateAccessPolicyRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The JSON policy document to use as the content for the policy.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The JSON policy document to use as the content for the policy.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The JSON policy document to use as the content for the policy.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The JSON policy document to use as the content for the policy.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The JSON policy document to use as the content for the policy.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The JSON policy document to use as the content for the policy.</p>
     */
    inline UpdateAccessPolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The JSON policy document to use as the content for the policy.</p>
     */
    inline UpdateAccessPolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The JSON policy document to use as the content for the policy.</p>
     */
    inline UpdateAccessPolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>The version of the policy being updated.</p>
     */
    inline const Aws::String& GetPolicyVersion() const{ return m_policyVersion; }

    /**
     * <p>The version of the policy being updated.</p>
     */
    inline bool PolicyVersionHasBeenSet() const { return m_policyVersionHasBeenSet; }

    /**
     * <p>The version of the policy being updated.</p>
     */
    inline void SetPolicyVersion(const Aws::String& value) { m_policyVersionHasBeenSet = true; m_policyVersion = value; }

    /**
     * <p>The version of the policy being updated.</p>
     */
    inline void SetPolicyVersion(Aws::String&& value) { m_policyVersionHasBeenSet = true; m_policyVersion = std::move(value); }

    /**
     * <p>The version of the policy being updated.</p>
     */
    inline void SetPolicyVersion(const char* value) { m_policyVersionHasBeenSet = true; m_policyVersion.assign(value); }

    /**
     * <p>The version of the policy being updated.</p>
     */
    inline UpdateAccessPolicyRequest& WithPolicyVersion(const Aws::String& value) { SetPolicyVersion(value); return *this;}

    /**
     * <p>The version of the policy being updated.</p>
     */
    inline UpdateAccessPolicyRequest& WithPolicyVersion(Aws::String&& value) { SetPolicyVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the policy being updated.</p>
     */
    inline UpdateAccessPolicyRequest& WithPolicyVersion(const char* value) { SetPolicyVersion(value); return *this;}


    /**
     * <p>The type of policy.</p>
     */
    inline const AccessPolicyType& GetType() const{ return m_type; }

    /**
     * <p>The type of policy.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of policy.</p>
     */
    inline void SetType(const AccessPolicyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of policy.</p>
     */
    inline void SetType(AccessPolicyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of policy.</p>
     */
    inline UpdateAccessPolicyRequest& WithType(const AccessPolicyType& value) { SetType(value); return *this;}

    /**
     * <p>The type of policy.</p>
     */
    inline UpdateAccessPolicyRequest& WithType(AccessPolicyType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    Aws::String m_policyVersion;
    bool m_policyVersionHasBeenSet = false;

    AccessPolicyType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
