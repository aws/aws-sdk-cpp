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
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails() = default;
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the IAM SAML identity provider. </p>
     */
    inline const Aws::String& GetSamlProviderArn() const { return m_samlProviderArn; }
    inline bool SamlProviderArnHasBeenSet() const { return m_samlProviderArnHasBeenSet; }
    template<typename SamlProviderArnT = Aws::String>
    void SetSamlProviderArn(SamlProviderArnT&& value) { m_samlProviderArnHasBeenSet = true; m_samlProviderArn = std::forward<SamlProviderArnT>(value); }
    template<typename SamlProviderArnT = Aws::String>
    AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails& WithSamlProviderArn(SamlProviderArnT&& value) { SetSamlProviderArn(std::forward<SamlProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal. </p>
     */
    inline const Aws::String& GetSelfServiceSamlProviderArn() const { return m_selfServiceSamlProviderArn; }
    inline bool SelfServiceSamlProviderArnHasBeenSet() const { return m_selfServiceSamlProviderArnHasBeenSet; }
    template<typename SelfServiceSamlProviderArnT = Aws::String>
    void SetSelfServiceSamlProviderArn(SelfServiceSamlProviderArnT&& value) { m_selfServiceSamlProviderArnHasBeenSet = true; m_selfServiceSamlProviderArn = std::forward<SelfServiceSamlProviderArnT>(value); }
    template<typename SelfServiceSamlProviderArnT = Aws::String>
    AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails& WithSelfServiceSamlProviderArn(SelfServiceSamlProviderArnT&& value) { SetSelfServiceSamlProviderArn(std::forward<SelfServiceSamlProviderArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_samlProviderArn;
    bool m_samlProviderArnHasBeenSet = false;

    Aws::String m_selfServiceSamlProviderArn;
    bool m_selfServiceSamlProviderArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
