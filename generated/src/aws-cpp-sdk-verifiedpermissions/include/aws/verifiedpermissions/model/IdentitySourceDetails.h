/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/OpenIdIssuer.h>
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
   * <p>A structure that contains configuration of the identity source.</p> <p>This
   * data type is used as a response parameter for the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_CreateIdentitySource.html">CreateIdentitySource</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/IdentitySourceDetails">AWS
   * API Reference</a></p>
   */
  class IdentitySourceDetails
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API IdentitySourceDetails();
    AWS_VERIFIEDPERMISSIONS_API IdentitySourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API IdentitySourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The application client IDs associated with the specified Amazon Cognito user
     * pool that are enabled for this identity source.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClientIds() const{ return m_clientIds; }

    /**
     * <p>The application client IDs associated with the specified Amazon Cognito user
     * pool that are enabled for this identity source.</p>
     */
    inline bool ClientIdsHasBeenSet() const { return m_clientIdsHasBeenSet; }

    /**
     * <p>The application client IDs associated with the specified Amazon Cognito user
     * pool that are enabled for this identity source.</p>
     */
    inline void SetClientIds(const Aws::Vector<Aws::String>& value) { m_clientIdsHasBeenSet = true; m_clientIds = value; }

    /**
     * <p>The application client IDs associated with the specified Amazon Cognito user
     * pool that are enabled for this identity source.</p>
     */
    inline void SetClientIds(Aws::Vector<Aws::String>&& value) { m_clientIdsHasBeenSet = true; m_clientIds = std::move(value); }

    /**
     * <p>The application client IDs associated with the specified Amazon Cognito user
     * pool that are enabled for this identity source.</p>
     */
    inline IdentitySourceDetails& WithClientIds(const Aws::Vector<Aws::String>& value) { SetClientIds(value); return *this;}

    /**
     * <p>The application client IDs associated with the specified Amazon Cognito user
     * pool that are enabled for this identity source.</p>
     */
    inline IdentitySourceDetails& WithClientIds(Aws::Vector<Aws::String>&& value) { SetClientIds(std::move(value)); return *this;}

    /**
     * <p>The application client IDs associated with the specified Amazon Cognito user
     * pool that are enabled for this identity source.</p>
     */
    inline IdentitySourceDetails& AddClientIds(const Aws::String& value) { m_clientIdsHasBeenSet = true; m_clientIds.push_back(value); return *this; }

    /**
     * <p>The application client IDs associated with the specified Amazon Cognito user
     * pool that are enabled for this identity source.</p>
     */
    inline IdentitySourceDetails& AddClientIds(Aws::String&& value) { m_clientIdsHasBeenSet = true; m_clientIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The application client IDs associated with the specified Amazon Cognito user
     * pool that are enabled for this identity source.</p>
     */
    inline IdentitySourceDetails& AddClientIds(const char* value) { m_clientIdsHasBeenSet = true; m_clientIds.push_back(value); return *this; }


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool whose identities are
     * accessible to this Verified Permissions policy store.</p>
     */
    inline const Aws::String& GetUserPoolArn() const{ return m_userPoolArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool whose identities are
     * accessible to this Verified Permissions policy store.</p>
     */
    inline bool UserPoolArnHasBeenSet() const { return m_userPoolArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool whose identities are
     * accessible to this Verified Permissions policy store.</p>
     */
    inline void SetUserPoolArn(const Aws::String& value) { m_userPoolArnHasBeenSet = true; m_userPoolArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool whose identities are
     * accessible to this Verified Permissions policy store.</p>
     */
    inline void SetUserPoolArn(Aws::String&& value) { m_userPoolArnHasBeenSet = true; m_userPoolArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool whose identities are
     * accessible to this Verified Permissions policy store.</p>
     */
    inline void SetUserPoolArn(const char* value) { m_userPoolArnHasBeenSet = true; m_userPoolArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool whose identities are
     * accessible to this Verified Permissions policy store.</p>
     */
    inline IdentitySourceDetails& WithUserPoolArn(const Aws::String& value) { SetUserPoolArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool whose identities are
     * accessible to this Verified Permissions policy store.</p>
     */
    inline IdentitySourceDetails& WithUserPoolArn(Aws::String&& value) { SetUserPoolArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool whose identities are
     * accessible to this Verified Permissions policy store.</p>
     */
    inline IdentitySourceDetails& WithUserPoolArn(const char* value) { SetUserPoolArn(value); return *this;}


    /**
     * <p>The well-known URL that points to this user pool's OIDC discovery endpoint.
     * This is a URL string in the following format. This URL replaces the placeholders
     * for both the Amazon Web Services Region and the user pool identifier with those
     * appropriate for this user pool.</p> <p>
     * <code>https://cognito-idp.<i>&lt;region&gt;</i>.amazonaws.com/<i>&lt;user-pool-id&gt;</i>/.well-known/openid-configuration</code>
     * </p>
     */
    inline const Aws::String& GetDiscoveryUrl() const{ return m_discoveryUrl; }

    /**
     * <p>The well-known URL that points to this user pool's OIDC discovery endpoint.
     * This is a URL string in the following format. This URL replaces the placeholders
     * for both the Amazon Web Services Region and the user pool identifier with those
     * appropriate for this user pool.</p> <p>
     * <code>https://cognito-idp.<i>&lt;region&gt;</i>.amazonaws.com/<i>&lt;user-pool-id&gt;</i>/.well-known/openid-configuration</code>
     * </p>
     */
    inline bool DiscoveryUrlHasBeenSet() const { return m_discoveryUrlHasBeenSet; }

    /**
     * <p>The well-known URL that points to this user pool's OIDC discovery endpoint.
     * This is a URL string in the following format. This URL replaces the placeholders
     * for both the Amazon Web Services Region and the user pool identifier with those
     * appropriate for this user pool.</p> <p>
     * <code>https://cognito-idp.<i>&lt;region&gt;</i>.amazonaws.com/<i>&lt;user-pool-id&gt;</i>/.well-known/openid-configuration</code>
     * </p>
     */
    inline void SetDiscoveryUrl(const Aws::String& value) { m_discoveryUrlHasBeenSet = true; m_discoveryUrl = value; }

    /**
     * <p>The well-known URL that points to this user pool's OIDC discovery endpoint.
     * This is a URL string in the following format. This URL replaces the placeholders
     * for both the Amazon Web Services Region and the user pool identifier with those
     * appropriate for this user pool.</p> <p>
     * <code>https://cognito-idp.<i>&lt;region&gt;</i>.amazonaws.com/<i>&lt;user-pool-id&gt;</i>/.well-known/openid-configuration</code>
     * </p>
     */
    inline void SetDiscoveryUrl(Aws::String&& value) { m_discoveryUrlHasBeenSet = true; m_discoveryUrl = std::move(value); }

    /**
     * <p>The well-known URL that points to this user pool's OIDC discovery endpoint.
     * This is a URL string in the following format. This URL replaces the placeholders
     * for both the Amazon Web Services Region and the user pool identifier with those
     * appropriate for this user pool.</p> <p>
     * <code>https://cognito-idp.<i>&lt;region&gt;</i>.amazonaws.com/<i>&lt;user-pool-id&gt;</i>/.well-known/openid-configuration</code>
     * </p>
     */
    inline void SetDiscoveryUrl(const char* value) { m_discoveryUrlHasBeenSet = true; m_discoveryUrl.assign(value); }

    /**
     * <p>The well-known URL that points to this user pool's OIDC discovery endpoint.
     * This is a URL string in the following format. This URL replaces the placeholders
     * for both the Amazon Web Services Region and the user pool identifier with those
     * appropriate for this user pool.</p> <p>
     * <code>https://cognito-idp.<i>&lt;region&gt;</i>.amazonaws.com/<i>&lt;user-pool-id&gt;</i>/.well-known/openid-configuration</code>
     * </p>
     */
    inline IdentitySourceDetails& WithDiscoveryUrl(const Aws::String& value) { SetDiscoveryUrl(value); return *this;}

    /**
     * <p>The well-known URL that points to this user pool's OIDC discovery endpoint.
     * This is a URL string in the following format. This URL replaces the placeholders
     * for both the Amazon Web Services Region and the user pool identifier with those
     * appropriate for this user pool.</p> <p>
     * <code>https://cognito-idp.<i>&lt;region&gt;</i>.amazonaws.com/<i>&lt;user-pool-id&gt;</i>/.well-known/openid-configuration</code>
     * </p>
     */
    inline IdentitySourceDetails& WithDiscoveryUrl(Aws::String&& value) { SetDiscoveryUrl(std::move(value)); return *this;}

    /**
     * <p>The well-known URL that points to this user pool's OIDC discovery endpoint.
     * This is a URL string in the following format. This URL replaces the placeholders
     * for both the Amazon Web Services Region and the user pool identifier with those
     * appropriate for this user pool.</p> <p>
     * <code>https://cognito-idp.<i>&lt;region&gt;</i>.amazonaws.com/<i>&lt;user-pool-id&gt;</i>/.well-known/openid-configuration</code>
     * </p>
     */
    inline IdentitySourceDetails& WithDiscoveryUrl(const char* value) { SetDiscoveryUrl(value); return *this;}


    /**
     * <p>A string that identifies the type of OIDC service represented by this
     * identity source. </p> <p>At this time, the only valid value is
     * <code>cognito</code>.</p>
     */
    inline const OpenIdIssuer& GetOpenIdIssuer() const{ return m_openIdIssuer; }

    /**
     * <p>A string that identifies the type of OIDC service represented by this
     * identity source. </p> <p>At this time, the only valid value is
     * <code>cognito</code>.</p>
     */
    inline bool OpenIdIssuerHasBeenSet() const { return m_openIdIssuerHasBeenSet; }

    /**
     * <p>A string that identifies the type of OIDC service represented by this
     * identity source. </p> <p>At this time, the only valid value is
     * <code>cognito</code>.</p>
     */
    inline void SetOpenIdIssuer(const OpenIdIssuer& value) { m_openIdIssuerHasBeenSet = true; m_openIdIssuer = value; }

    /**
     * <p>A string that identifies the type of OIDC service represented by this
     * identity source. </p> <p>At this time, the only valid value is
     * <code>cognito</code>.</p>
     */
    inline void SetOpenIdIssuer(OpenIdIssuer&& value) { m_openIdIssuerHasBeenSet = true; m_openIdIssuer = std::move(value); }

    /**
     * <p>A string that identifies the type of OIDC service represented by this
     * identity source. </p> <p>At this time, the only valid value is
     * <code>cognito</code>.</p>
     */
    inline IdentitySourceDetails& WithOpenIdIssuer(const OpenIdIssuer& value) { SetOpenIdIssuer(value); return *this;}

    /**
     * <p>A string that identifies the type of OIDC service represented by this
     * identity source. </p> <p>At this time, the only valid value is
     * <code>cognito</code>.</p>
     */
    inline IdentitySourceDetails& WithOpenIdIssuer(OpenIdIssuer&& value) { SetOpenIdIssuer(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_clientIds;
    bool m_clientIdsHasBeenSet = false;

    Aws::String m_userPoolArn;
    bool m_userPoolArnHasBeenSet = false;

    Aws::String m_discoveryUrl;
    bool m_discoveryUrlHasBeenSet = false;

    OpenIdIssuer m_openIdIssuer;
    bool m_openIdIssuerHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
