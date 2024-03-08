/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/JwksRetrievalOption.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>A structure that describes configuration settings for a trusted token issuer
   * that supports OpenID Connect (OIDC) and JSON Web Tokens (JWTs).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/OidcJwtConfiguration">AWS
   * API Reference</a></p>
   */
  class OidcJwtConfiguration
  {
  public:
    AWS_SSOADMIN_API OidcJwtConfiguration();
    AWS_SSOADMIN_API OidcJwtConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API OidcJwtConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path of the source attribute in the JWT from the trusted token issuer.
     * The attribute mapped by this JMESPath expression is compared against the
     * attribute mapped by <code>IdentityStoreAttributePath</code> when a trusted token
     * issuer token is exchanged for an IAM Identity Center token.</p>
     */
    inline const Aws::String& GetClaimAttributePath() const{ return m_claimAttributePath; }

    /**
     * <p>The path of the source attribute in the JWT from the trusted token issuer.
     * The attribute mapped by this JMESPath expression is compared against the
     * attribute mapped by <code>IdentityStoreAttributePath</code> when a trusted token
     * issuer token is exchanged for an IAM Identity Center token.</p>
     */
    inline bool ClaimAttributePathHasBeenSet() const { return m_claimAttributePathHasBeenSet; }

    /**
     * <p>The path of the source attribute in the JWT from the trusted token issuer.
     * The attribute mapped by this JMESPath expression is compared against the
     * attribute mapped by <code>IdentityStoreAttributePath</code> when a trusted token
     * issuer token is exchanged for an IAM Identity Center token.</p>
     */
    inline void SetClaimAttributePath(const Aws::String& value) { m_claimAttributePathHasBeenSet = true; m_claimAttributePath = value; }

    /**
     * <p>The path of the source attribute in the JWT from the trusted token issuer.
     * The attribute mapped by this JMESPath expression is compared against the
     * attribute mapped by <code>IdentityStoreAttributePath</code> when a trusted token
     * issuer token is exchanged for an IAM Identity Center token.</p>
     */
    inline void SetClaimAttributePath(Aws::String&& value) { m_claimAttributePathHasBeenSet = true; m_claimAttributePath = std::move(value); }

    /**
     * <p>The path of the source attribute in the JWT from the trusted token issuer.
     * The attribute mapped by this JMESPath expression is compared against the
     * attribute mapped by <code>IdentityStoreAttributePath</code> when a trusted token
     * issuer token is exchanged for an IAM Identity Center token.</p>
     */
    inline void SetClaimAttributePath(const char* value) { m_claimAttributePathHasBeenSet = true; m_claimAttributePath.assign(value); }

    /**
     * <p>The path of the source attribute in the JWT from the trusted token issuer.
     * The attribute mapped by this JMESPath expression is compared against the
     * attribute mapped by <code>IdentityStoreAttributePath</code> when a trusted token
     * issuer token is exchanged for an IAM Identity Center token.</p>
     */
    inline OidcJwtConfiguration& WithClaimAttributePath(const Aws::String& value) { SetClaimAttributePath(value); return *this;}

    /**
     * <p>The path of the source attribute in the JWT from the trusted token issuer.
     * The attribute mapped by this JMESPath expression is compared against the
     * attribute mapped by <code>IdentityStoreAttributePath</code> when a trusted token
     * issuer token is exchanged for an IAM Identity Center token.</p>
     */
    inline OidcJwtConfiguration& WithClaimAttributePath(Aws::String&& value) { SetClaimAttributePath(std::move(value)); return *this;}

    /**
     * <p>The path of the source attribute in the JWT from the trusted token issuer.
     * The attribute mapped by this JMESPath expression is compared against the
     * attribute mapped by <code>IdentityStoreAttributePath</code> when a trusted token
     * issuer token is exchanged for an IAM Identity Center token.</p>
     */
    inline OidcJwtConfiguration& WithClaimAttributePath(const char* value) { SetClaimAttributePath(value); return *this;}


    /**
     * <p>The path of the destination attribute in a JWT from IAM Identity Center. The
     * attribute mapped by this JMESPath expression is compared against the attribute
     * mapped by <code>ClaimAttributePath</code> when a trusted token issuer token is
     * exchanged for an IAM Identity Center token. </p>
     */
    inline const Aws::String& GetIdentityStoreAttributePath() const{ return m_identityStoreAttributePath; }

    /**
     * <p>The path of the destination attribute in a JWT from IAM Identity Center. The
     * attribute mapped by this JMESPath expression is compared against the attribute
     * mapped by <code>ClaimAttributePath</code> when a trusted token issuer token is
     * exchanged for an IAM Identity Center token. </p>
     */
    inline bool IdentityStoreAttributePathHasBeenSet() const { return m_identityStoreAttributePathHasBeenSet; }

    /**
     * <p>The path of the destination attribute in a JWT from IAM Identity Center. The
     * attribute mapped by this JMESPath expression is compared against the attribute
     * mapped by <code>ClaimAttributePath</code> when a trusted token issuer token is
     * exchanged for an IAM Identity Center token. </p>
     */
    inline void SetIdentityStoreAttributePath(const Aws::String& value) { m_identityStoreAttributePathHasBeenSet = true; m_identityStoreAttributePath = value; }

    /**
     * <p>The path of the destination attribute in a JWT from IAM Identity Center. The
     * attribute mapped by this JMESPath expression is compared against the attribute
     * mapped by <code>ClaimAttributePath</code> when a trusted token issuer token is
     * exchanged for an IAM Identity Center token. </p>
     */
    inline void SetIdentityStoreAttributePath(Aws::String&& value) { m_identityStoreAttributePathHasBeenSet = true; m_identityStoreAttributePath = std::move(value); }

    /**
     * <p>The path of the destination attribute in a JWT from IAM Identity Center. The
     * attribute mapped by this JMESPath expression is compared against the attribute
     * mapped by <code>ClaimAttributePath</code> when a trusted token issuer token is
     * exchanged for an IAM Identity Center token. </p>
     */
    inline void SetIdentityStoreAttributePath(const char* value) { m_identityStoreAttributePathHasBeenSet = true; m_identityStoreAttributePath.assign(value); }

    /**
     * <p>The path of the destination attribute in a JWT from IAM Identity Center. The
     * attribute mapped by this JMESPath expression is compared against the attribute
     * mapped by <code>ClaimAttributePath</code> when a trusted token issuer token is
     * exchanged for an IAM Identity Center token. </p>
     */
    inline OidcJwtConfiguration& WithIdentityStoreAttributePath(const Aws::String& value) { SetIdentityStoreAttributePath(value); return *this;}

    /**
     * <p>The path of the destination attribute in a JWT from IAM Identity Center. The
     * attribute mapped by this JMESPath expression is compared against the attribute
     * mapped by <code>ClaimAttributePath</code> when a trusted token issuer token is
     * exchanged for an IAM Identity Center token. </p>
     */
    inline OidcJwtConfiguration& WithIdentityStoreAttributePath(Aws::String&& value) { SetIdentityStoreAttributePath(std::move(value)); return *this;}

    /**
     * <p>The path of the destination attribute in a JWT from IAM Identity Center. The
     * attribute mapped by this JMESPath expression is compared against the attribute
     * mapped by <code>ClaimAttributePath</code> when a trusted token issuer token is
     * exchanged for an IAM Identity Center token. </p>
     */
    inline OidcJwtConfiguration& WithIdentityStoreAttributePath(const char* value) { SetIdentityStoreAttributePath(value); return *this;}


    /**
     * <p>The URL that IAM Identity Center uses for OpenID Discovery. OpenID Discovery
     * is used to obtain the information required to verify the tokens that the trusted
     * token issuer generates.</p>
     */
    inline const Aws::String& GetIssuerUrl() const{ return m_issuerUrl; }

    /**
     * <p>The URL that IAM Identity Center uses for OpenID Discovery. OpenID Discovery
     * is used to obtain the information required to verify the tokens that the trusted
     * token issuer generates.</p>
     */
    inline bool IssuerUrlHasBeenSet() const { return m_issuerUrlHasBeenSet; }

    /**
     * <p>The URL that IAM Identity Center uses for OpenID Discovery. OpenID Discovery
     * is used to obtain the information required to verify the tokens that the trusted
     * token issuer generates.</p>
     */
    inline void SetIssuerUrl(const Aws::String& value) { m_issuerUrlHasBeenSet = true; m_issuerUrl = value; }

    /**
     * <p>The URL that IAM Identity Center uses for OpenID Discovery. OpenID Discovery
     * is used to obtain the information required to verify the tokens that the trusted
     * token issuer generates.</p>
     */
    inline void SetIssuerUrl(Aws::String&& value) { m_issuerUrlHasBeenSet = true; m_issuerUrl = std::move(value); }

    /**
     * <p>The URL that IAM Identity Center uses for OpenID Discovery. OpenID Discovery
     * is used to obtain the information required to verify the tokens that the trusted
     * token issuer generates.</p>
     */
    inline void SetIssuerUrl(const char* value) { m_issuerUrlHasBeenSet = true; m_issuerUrl.assign(value); }

    /**
     * <p>The URL that IAM Identity Center uses for OpenID Discovery. OpenID Discovery
     * is used to obtain the information required to verify the tokens that the trusted
     * token issuer generates.</p>
     */
    inline OidcJwtConfiguration& WithIssuerUrl(const Aws::String& value) { SetIssuerUrl(value); return *this;}

    /**
     * <p>The URL that IAM Identity Center uses for OpenID Discovery. OpenID Discovery
     * is used to obtain the information required to verify the tokens that the trusted
     * token issuer generates.</p>
     */
    inline OidcJwtConfiguration& WithIssuerUrl(Aws::String&& value) { SetIssuerUrl(std::move(value)); return *this;}

    /**
     * <p>The URL that IAM Identity Center uses for OpenID Discovery. OpenID Discovery
     * is used to obtain the information required to verify the tokens that the trusted
     * token issuer generates.</p>
     */
    inline OidcJwtConfiguration& WithIssuerUrl(const char* value) { SetIssuerUrl(value); return *this;}


    /**
     * <p>The method that the trusted token issuer can use to retrieve the JSON Web Key
     * Set used to verify a JWT.</p>
     */
    inline const JwksRetrievalOption& GetJwksRetrievalOption() const{ return m_jwksRetrievalOption; }

    /**
     * <p>The method that the trusted token issuer can use to retrieve the JSON Web Key
     * Set used to verify a JWT.</p>
     */
    inline bool JwksRetrievalOptionHasBeenSet() const { return m_jwksRetrievalOptionHasBeenSet; }

    /**
     * <p>The method that the trusted token issuer can use to retrieve the JSON Web Key
     * Set used to verify a JWT.</p>
     */
    inline void SetJwksRetrievalOption(const JwksRetrievalOption& value) { m_jwksRetrievalOptionHasBeenSet = true; m_jwksRetrievalOption = value; }

    /**
     * <p>The method that the trusted token issuer can use to retrieve the JSON Web Key
     * Set used to verify a JWT.</p>
     */
    inline void SetJwksRetrievalOption(JwksRetrievalOption&& value) { m_jwksRetrievalOptionHasBeenSet = true; m_jwksRetrievalOption = std::move(value); }

    /**
     * <p>The method that the trusted token issuer can use to retrieve the JSON Web Key
     * Set used to verify a JWT.</p>
     */
    inline OidcJwtConfiguration& WithJwksRetrievalOption(const JwksRetrievalOption& value) { SetJwksRetrievalOption(value); return *this;}

    /**
     * <p>The method that the trusted token issuer can use to retrieve the JSON Web Key
     * Set used to verify a JWT.</p>
     */
    inline OidcJwtConfiguration& WithJwksRetrievalOption(JwksRetrievalOption&& value) { SetJwksRetrievalOption(std::move(value)); return *this;}

  private:

    Aws::String m_claimAttributePath;
    bool m_claimAttributePathHasBeenSet = false;

    Aws::String m_identityStoreAttributePath;
    bool m_identityStoreAttributePathHasBeenSet = false;

    Aws::String m_issuerUrl;
    bool m_issuerUrlHasBeenSet = false;

    JwksRetrievalOption m_jwksRetrievalOption;
    bool m_jwksRetrievalOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
