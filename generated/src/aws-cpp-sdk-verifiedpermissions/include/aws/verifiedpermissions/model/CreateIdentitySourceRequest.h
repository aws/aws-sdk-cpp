/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/VerifiedPermissionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/Configuration.h>
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
  class CreateIdentitySourceRequest : public VerifiedPermissionsRequest
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API CreateIdentitySourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIdentitySource"; }

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
    inline CreateIdentitySourceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

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
    inline CreateIdentitySourceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

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
    inline CreateIdentitySourceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Specifies the ID of the policy store in which you want to store this identity
     * source. Only policies and requests made using this policy store can reference
     * identities from the identity provider configured in the new identity source.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }

    /**
     * <p>Specifies the ID of the policy store in which you want to store this identity
     * source. Only policies and requests made using this policy store can reference
     * identities from the identity provider configured in the new identity source.</p>
     */
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }

    /**
     * <p>Specifies the ID of the policy store in which you want to store this identity
     * source. Only policies and requests made using this policy store can reference
     * identities from the identity provider configured in the new identity source.</p>
     */
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = value; }

    /**
     * <p>Specifies the ID of the policy store in which you want to store this identity
     * source. Only policies and requests made using this policy store can reference
     * identities from the identity provider configured in the new identity source.</p>
     */
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::move(value); }

    /**
     * <p>Specifies the ID of the policy store in which you want to store this identity
     * source. Only policies and requests made using this policy store can reference
     * identities from the identity provider configured in the new identity source.</p>
     */
    inline void SetPolicyStoreId(const char* value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId.assign(value); }

    /**
     * <p>Specifies the ID of the policy store in which you want to store this identity
     * source. Only policies and requests made using this policy store can reference
     * identities from the identity provider configured in the new identity source.</p>
     */
    inline CreateIdentitySourceRequest& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}

    /**
     * <p>Specifies the ID of the policy store in which you want to store this identity
     * source. Only policies and requests made using this policy store can reference
     * identities from the identity provider configured in the new identity source.</p>
     */
    inline CreateIdentitySourceRequest& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the policy store in which you want to store this identity
     * source. Only policies and requests made using this policy store can reference
     * identities from the identity provider configured in the new identity source.</p>
     */
    inline CreateIdentitySourceRequest& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}


    /**
     * <p>Specifies the details required to communicate with the identity provider
     * (IdP) associated with this identity source.</p>  <p>At this time, the only
     * valid member of this structure is a Amazon Cognito user pool configuration.</p>
     * <p>You must specify a <code>UserPoolArn</code>, and optionally, a
     * <code>ClientId</code>.</p> 
     */
    inline const Configuration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Specifies the details required to communicate with the identity provider
     * (IdP) associated with this identity source.</p>  <p>At this time, the only
     * valid member of this structure is a Amazon Cognito user pool configuration.</p>
     * <p>You must specify a <code>UserPoolArn</code>, and optionally, a
     * <code>ClientId</code>.</p> 
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>Specifies the details required to communicate with the identity provider
     * (IdP) associated with this identity source.</p>  <p>At this time, the only
     * valid member of this structure is a Amazon Cognito user pool configuration.</p>
     * <p>You must specify a <code>UserPoolArn</code>, and optionally, a
     * <code>ClientId</code>.</p> 
     */
    inline void SetConfiguration(const Configuration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>Specifies the details required to communicate with the identity provider
     * (IdP) associated with this identity source.</p>  <p>At this time, the only
     * valid member of this structure is a Amazon Cognito user pool configuration.</p>
     * <p>You must specify a <code>UserPoolArn</code>, and optionally, a
     * <code>ClientId</code>.</p> 
     */
    inline void SetConfiguration(Configuration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>Specifies the details required to communicate with the identity provider
     * (IdP) associated with this identity source.</p>  <p>At this time, the only
     * valid member of this structure is a Amazon Cognito user pool configuration.</p>
     * <p>You must specify a <code>UserPoolArn</code>, and optionally, a
     * <code>ClientId</code>.</p> 
     */
    inline CreateIdentitySourceRequest& WithConfiguration(const Configuration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Specifies the details required to communicate with the identity provider
     * (IdP) associated with this identity source.</p>  <p>At this time, the only
     * valid member of this structure is a Amazon Cognito user pool configuration.</p>
     * <p>You must specify a <code>UserPoolArn</code>, and optionally, a
     * <code>ClientId</code>.</p> 
     */
    inline CreateIdentitySourceRequest& WithConfiguration(Configuration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specifies the namespace and data type of the principals generated for
     * identities authenticated by the new identity source.</p>
     */
    inline const Aws::String& GetPrincipalEntityType() const{ return m_principalEntityType; }

    /**
     * <p>Specifies the namespace and data type of the principals generated for
     * identities authenticated by the new identity source.</p>
     */
    inline bool PrincipalEntityTypeHasBeenSet() const { return m_principalEntityTypeHasBeenSet; }

    /**
     * <p>Specifies the namespace and data type of the principals generated for
     * identities authenticated by the new identity source.</p>
     */
    inline void SetPrincipalEntityType(const Aws::String& value) { m_principalEntityTypeHasBeenSet = true; m_principalEntityType = value; }

    /**
     * <p>Specifies the namespace and data type of the principals generated for
     * identities authenticated by the new identity source.</p>
     */
    inline void SetPrincipalEntityType(Aws::String&& value) { m_principalEntityTypeHasBeenSet = true; m_principalEntityType = std::move(value); }

    /**
     * <p>Specifies the namespace and data type of the principals generated for
     * identities authenticated by the new identity source.</p>
     */
    inline void SetPrincipalEntityType(const char* value) { m_principalEntityTypeHasBeenSet = true; m_principalEntityType.assign(value); }

    /**
     * <p>Specifies the namespace and data type of the principals generated for
     * identities authenticated by the new identity source.</p>
     */
    inline CreateIdentitySourceRequest& WithPrincipalEntityType(const Aws::String& value) { SetPrincipalEntityType(value); return *this;}

    /**
     * <p>Specifies the namespace and data type of the principals generated for
     * identities authenticated by the new identity source.</p>
     */
    inline CreateIdentitySourceRequest& WithPrincipalEntityType(Aws::String&& value) { SetPrincipalEntityType(std::move(value)); return *this;}

    /**
     * <p>Specifies the namespace and data type of the principals generated for
     * identities authenticated by the new identity source.</p>
     */
    inline CreateIdentitySourceRequest& WithPrincipalEntityType(const char* value) { SetPrincipalEntityType(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    Configuration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_principalEntityType;
    bool m_principalEntityTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
