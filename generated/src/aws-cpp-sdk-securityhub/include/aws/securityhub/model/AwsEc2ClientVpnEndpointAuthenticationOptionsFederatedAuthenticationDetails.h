/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Describes the IAM SAML identity providers used for federated authentication.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails();
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) of the IAM SAML identity provider. </p>
     */
    inline const Aws::String& GetSamlProviderArn() const{ return m_samlProviderArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM SAML identity provider. </p>
     */
    inline bool SamlProviderArnHasBeenSet() const { return m_samlProviderArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM SAML identity provider. </p>
     */
    inline void SetSamlProviderArn(const Aws::String& value) { m_samlProviderArnHasBeenSet = true; m_samlProviderArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM SAML identity provider. </p>
     */
    inline void SetSamlProviderArn(Aws::String&& value) { m_samlProviderArnHasBeenSet = true; m_samlProviderArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM SAML identity provider. </p>
     */
    inline void SetSamlProviderArn(const char* value) { m_samlProviderArnHasBeenSet = true; m_samlProviderArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM SAML identity provider. </p>
     */
    inline AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails& WithSamlProviderArn(const Aws::String& value) { SetSamlProviderArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM SAML identity provider. </p>
     */
    inline AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails& WithSamlProviderArn(Aws::String&& value) { SetSamlProviderArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM SAML identity provider. </p>
     */
    inline AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails& WithSamlProviderArn(const char* value) { SetSamlProviderArn(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal. </p>
     */
    inline const Aws::String& GetSelfServiceSamlProviderArn() const{ return m_selfServiceSamlProviderArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal. </p>
     */
    inline bool SelfServiceSamlProviderArnHasBeenSet() const { return m_selfServiceSamlProviderArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal. </p>
     */
    inline void SetSelfServiceSamlProviderArn(const Aws::String& value) { m_selfServiceSamlProviderArnHasBeenSet = true; m_selfServiceSamlProviderArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal. </p>
     */
    inline void SetSelfServiceSamlProviderArn(Aws::String&& value) { m_selfServiceSamlProviderArnHasBeenSet = true; m_selfServiceSamlProviderArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal. </p>
     */
    inline void SetSelfServiceSamlProviderArn(const char* value) { m_selfServiceSamlProviderArnHasBeenSet = true; m_selfServiceSamlProviderArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal. </p>
     */
    inline AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails& WithSelfServiceSamlProviderArn(const Aws::String& value) { SetSelfServiceSamlProviderArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal. </p>
     */
    inline AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails& WithSelfServiceSamlProviderArn(Aws::String&& value) { SetSelfServiceSamlProviderArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal. </p>
     */
    inline AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails& WithSelfServiceSamlProviderArn(const char* value) { SetSelfServiceSamlProviderArn(value); return *this;}

  private:

    Aws::String m_samlProviderArn;
    bool m_samlProviderArnHasBeenSet = false;

    Aws::String m_selfServiceSamlProviderArn;
    bool m_selfServiceSamlProviderArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
