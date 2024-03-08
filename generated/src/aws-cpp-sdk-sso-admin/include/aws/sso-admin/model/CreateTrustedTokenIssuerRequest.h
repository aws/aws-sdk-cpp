/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sso-admin/model/TrustedTokenIssuerConfiguration.h>
#include <aws/sso-admin/model/TrustedTokenIssuerType.h>
#include <aws/sso-admin/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class CreateTrustedTokenIssuerRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API CreateTrustedTokenIssuerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrustedTokenIssuer"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * <code>IdempotentParameterMismatch</code> error.</p>
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
     * <code>IdempotentParameterMismatch</code> error.</p>
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
     * <code>IdempotentParameterMismatch</code> error.</p>
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
     * <code>IdempotentParameterMismatch</code> error.</p>
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
     * <code>IdempotentParameterMismatch</code> error.</p>
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
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline CreateTrustedTokenIssuerRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

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
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline CreateTrustedTokenIssuerRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

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
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline CreateTrustedTokenIssuerRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Specifies the ARN of the instance of IAM Identity Center to contain the new
     * trusted token issuer configuration.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }

    /**
     * <p>Specifies the ARN of the instance of IAM Identity Center to contain the new
     * trusted token issuer configuration.</p>
     */
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }

    /**
     * <p>Specifies the ARN of the instance of IAM Identity Center to contain the new
     * trusted token issuer configuration.</p>
     */
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }

    /**
     * <p>Specifies the ARN of the instance of IAM Identity Center to contain the new
     * trusted token issuer configuration.</p>
     */
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }

    /**
     * <p>Specifies the ARN of the instance of IAM Identity Center to contain the new
     * trusted token issuer configuration.</p>
     */
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }

    /**
     * <p>Specifies the ARN of the instance of IAM Identity Center to contain the new
     * trusted token issuer configuration.</p>
     */
    inline CreateTrustedTokenIssuerRequest& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}

    /**
     * <p>Specifies the ARN of the instance of IAM Identity Center to contain the new
     * trusted token issuer configuration.</p>
     */
    inline CreateTrustedTokenIssuerRequest& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the instance of IAM Identity Center to contain the new
     * trusted token issuer configuration.</p>
     */
    inline CreateTrustedTokenIssuerRequest& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}


    /**
     * <p>Specifies the name of the new trusted token issuer configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Specifies the name of the new trusted token issuer configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specifies the name of the new trusted token issuer configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies the name of the new trusted token issuer configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specifies the name of the new trusted token issuer configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Specifies the name of the new trusted token issuer configuration.</p>
     */
    inline CreateTrustedTokenIssuerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Specifies the name of the new trusted token issuer configuration.</p>
     */
    inline CreateTrustedTokenIssuerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the new trusted token issuer configuration.</p>
     */
    inline CreateTrustedTokenIssuerRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies tags to be attached to the new trusted token issuer
     * configuration.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies tags to be attached to the new trusted token issuer
     * configuration.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies tags to be attached to the new trusted token issuer
     * configuration.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies tags to be attached to the new trusted token issuer
     * configuration.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies tags to be attached to the new trusted token issuer
     * configuration.</p>
     */
    inline CreateTrustedTokenIssuerRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies tags to be attached to the new trusted token issuer
     * configuration.</p>
     */
    inline CreateTrustedTokenIssuerRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies tags to be attached to the new trusted token issuer
     * configuration.</p>
     */
    inline CreateTrustedTokenIssuerRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies tags to be attached to the new trusted token issuer
     * configuration.</p>
     */
    inline CreateTrustedTokenIssuerRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies settings that apply to the new trusted token issuer configuration.
     * The settings that are available depend on what
     * <code>TrustedTokenIssuerType</code> you specify.</p>
     */
    inline const TrustedTokenIssuerConfiguration& GetTrustedTokenIssuerConfiguration() const{ return m_trustedTokenIssuerConfiguration; }

    /**
     * <p>Specifies settings that apply to the new trusted token issuer configuration.
     * The settings that are available depend on what
     * <code>TrustedTokenIssuerType</code> you specify.</p>
     */
    inline bool TrustedTokenIssuerConfigurationHasBeenSet() const { return m_trustedTokenIssuerConfigurationHasBeenSet; }

    /**
     * <p>Specifies settings that apply to the new trusted token issuer configuration.
     * The settings that are available depend on what
     * <code>TrustedTokenIssuerType</code> you specify.</p>
     */
    inline void SetTrustedTokenIssuerConfiguration(const TrustedTokenIssuerConfiguration& value) { m_trustedTokenIssuerConfigurationHasBeenSet = true; m_trustedTokenIssuerConfiguration = value; }

    /**
     * <p>Specifies settings that apply to the new trusted token issuer configuration.
     * The settings that are available depend on what
     * <code>TrustedTokenIssuerType</code> you specify.</p>
     */
    inline void SetTrustedTokenIssuerConfiguration(TrustedTokenIssuerConfiguration&& value) { m_trustedTokenIssuerConfigurationHasBeenSet = true; m_trustedTokenIssuerConfiguration = std::move(value); }

    /**
     * <p>Specifies settings that apply to the new trusted token issuer configuration.
     * The settings that are available depend on what
     * <code>TrustedTokenIssuerType</code> you specify.</p>
     */
    inline CreateTrustedTokenIssuerRequest& WithTrustedTokenIssuerConfiguration(const TrustedTokenIssuerConfiguration& value) { SetTrustedTokenIssuerConfiguration(value); return *this;}

    /**
     * <p>Specifies settings that apply to the new trusted token issuer configuration.
     * The settings that are available depend on what
     * <code>TrustedTokenIssuerType</code> you specify.</p>
     */
    inline CreateTrustedTokenIssuerRequest& WithTrustedTokenIssuerConfiguration(TrustedTokenIssuerConfiguration&& value) { SetTrustedTokenIssuerConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specifies the type of the new trusted token issuer.</p>
     */
    inline const TrustedTokenIssuerType& GetTrustedTokenIssuerType() const{ return m_trustedTokenIssuerType; }

    /**
     * <p>Specifies the type of the new trusted token issuer.</p>
     */
    inline bool TrustedTokenIssuerTypeHasBeenSet() const { return m_trustedTokenIssuerTypeHasBeenSet; }

    /**
     * <p>Specifies the type of the new trusted token issuer.</p>
     */
    inline void SetTrustedTokenIssuerType(const TrustedTokenIssuerType& value) { m_trustedTokenIssuerTypeHasBeenSet = true; m_trustedTokenIssuerType = value; }

    /**
     * <p>Specifies the type of the new trusted token issuer.</p>
     */
    inline void SetTrustedTokenIssuerType(TrustedTokenIssuerType&& value) { m_trustedTokenIssuerTypeHasBeenSet = true; m_trustedTokenIssuerType = std::move(value); }

    /**
     * <p>Specifies the type of the new trusted token issuer.</p>
     */
    inline CreateTrustedTokenIssuerRequest& WithTrustedTokenIssuerType(const TrustedTokenIssuerType& value) { SetTrustedTokenIssuerType(value); return *this;}

    /**
     * <p>Specifies the type of the new trusted token issuer.</p>
     */
    inline CreateTrustedTokenIssuerRequest& WithTrustedTokenIssuerType(TrustedTokenIssuerType&& value) { SetTrustedTokenIssuerType(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    TrustedTokenIssuerConfiguration m_trustedTokenIssuerConfiguration;
    bool m_trustedTokenIssuerConfigurationHasBeenSet = false;

    TrustedTokenIssuerType m_trustedTokenIssuerType;
    bool m_trustedTokenIssuerTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
