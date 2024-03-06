/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/VerifiedPermissionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

  /**
   */
  class CreatePolicyTemplateRequest : public VerifiedPermissionsRequest
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API CreatePolicyTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePolicyTemplate"; }

    AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

    AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies a unique, case-sensitive ID that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value.</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>ConflictException</code> error.</p> <p>Verified Permissions recognizes a
     * <code>ClientToken</code> for eight hours. After eight hours, the next request
     * with the same parameters performs the operation again regardless of the value of
     * <code>ClientToken</code>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Specifies a unique, case-sensitive ID that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value.</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>ConflictException</code> error.</p> <p>Verified Permissions recognizes a
     * <code>ClientToken</code> for eight hours. After eight hours, the next request
     * with the same parameters performs the operation again regardless of the value of
     * <code>ClientToken</code>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Specifies a unique, case-sensitive ID that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value.</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>ConflictException</code> error.</p> <p>Verified Permissions recognizes a
     * <code>ClientToken</code> for eight hours. After eight hours, the next request
     * with the same parameters performs the operation again regardless of the value of
     * <code>ClientToken</code>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Specifies a unique, case-sensitive ID that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value.</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>ConflictException</code> error.</p> <p>Verified Permissions recognizes a
     * <code>ClientToken</code> for eight hours. After eight hours, the next request
     * with the same parameters performs the operation again regardless of the value of
     * <code>ClientToken</code>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Specifies a unique, case-sensitive ID that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value.</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>ConflictException</code> error.</p> <p>Verified Permissions recognizes a
     * <code>ClientToken</code> for eight hours. After eight hours, the next request
     * with the same parameters performs the operation again regardless of the value of
     * <code>ClientToken</code>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Specifies a unique, case-sensitive ID that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value.</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>ConflictException</code> error.</p> <p>Verified Permissions recognizes a
     * <code>ClientToken</code> for eight hours. After eight hours, the next request
     * with the same parameters performs the operation again regardless of the value of
     * <code>ClientToken</code>.</p>
     */
    inline CreatePolicyTemplateRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Specifies a unique, case-sensitive ID that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value.</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>ConflictException</code> error.</p> <p>Verified Permissions recognizes a
     * <code>ClientToken</code> for eight hours. After eight hours, the next request
     * with the same parameters performs the operation again regardless of the value of
     * <code>ClientToken</code>.</p>
     */
    inline CreatePolicyTemplateRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Specifies a unique, case-sensitive ID that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value.</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>ConflictException</code> error.</p> <p>Verified Permissions recognizes a
     * <code>ClientToken</code> for eight hours. After eight hours, the next request
     * with the same parameters performs the operation again regardless of the value of
     * <code>ClientToken</code>.</p>
     */
    inline CreatePolicyTemplateRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The ID of the policy store in which to create the policy template.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }

    /**
     * <p>The ID of the policy store in which to create the policy template.</p>
     */
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }

    /**
     * <p>The ID of the policy store in which to create the policy template.</p>
     */
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = value; }

    /**
     * <p>The ID of the policy store in which to create the policy template.</p>
     */
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::move(value); }

    /**
     * <p>The ID of the policy store in which to create the policy template.</p>
     */
    inline void SetPolicyStoreId(const char* value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId.assign(value); }

    /**
     * <p>The ID of the policy store in which to create the policy template.</p>
     */
    inline CreatePolicyTemplateRequest& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}

    /**
     * <p>The ID of the policy store in which to create the policy template.</p>
     */
    inline CreatePolicyTemplateRequest& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}

    /**
     * <p>The ID of the policy store in which to create the policy template.</p>
     */
    inline CreatePolicyTemplateRequest& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}


    /**
     * <p>Specifies a description for the policy template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Specifies a description for the policy template.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Specifies a description for the policy template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Specifies a description for the policy template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Specifies a description for the policy template.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Specifies a description for the policy template.</p>
     */
    inline CreatePolicyTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Specifies a description for the policy template.</p>
     */
    inline CreatePolicyTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Specifies a description for the policy template.</p>
     */
    inline CreatePolicyTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies the content that you want to use for the new policy template,
     * written in the Cedar policy language.</p>
     */
    inline const Aws::String& GetStatement() const{ return m_statement; }

    /**
     * <p>Specifies the content that you want to use for the new policy template,
     * written in the Cedar policy language.</p>
     */
    inline bool StatementHasBeenSet() const { return m_statementHasBeenSet; }

    /**
     * <p>Specifies the content that you want to use for the new policy template,
     * written in the Cedar policy language.</p>
     */
    inline void SetStatement(const Aws::String& value) { m_statementHasBeenSet = true; m_statement = value; }

    /**
     * <p>Specifies the content that you want to use for the new policy template,
     * written in the Cedar policy language.</p>
     */
    inline void SetStatement(Aws::String&& value) { m_statementHasBeenSet = true; m_statement = std::move(value); }

    /**
     * <p>Specifies the content that you want to use for the new policy template,
     * written in the Cedar policy language.</p>
     */
    inline void SetStatement(const char* value) { m_statementHasBeenSet = true; m_statement.assign(value); }

    /**
     * <p>Specifies the content that you want to use for the new policy template,
     * written in the Cedar policy language.</p>
     */
    inline CreatePolicyTemplateRequest& WithStatement(const Aws::String& value) { SetStatement(value); return *this;}

    /**
     * <p>Specifies the content that you want to use for the new policy template,
     * written in the Cedar policy language.</p>
     */
    inline CreatePolicyTemplateRequest& WithStatement(Aws::String&& value) { SetStatement(std::move(value)); return *this;}

    /**
     * <p>Specifies the content that you want to use for the new policy template,
     * written in the Cedar policy language.</p>
     */
    inline CreatePolicyTemplateRequest& WithStatement(const char* value) { SetStatement(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_statement;
    bool m_statementHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
