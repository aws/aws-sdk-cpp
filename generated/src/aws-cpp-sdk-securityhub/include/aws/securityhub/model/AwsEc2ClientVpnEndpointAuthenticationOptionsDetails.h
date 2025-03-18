/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails.h>
#include <aws/securityhub/model/AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails.h>
#include <aws/securityhub/model/AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails.h>
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
   * <p> Information about the authentication method used by the Client VPN endpoint.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2ClientVpnEndpointAuthenticationOptionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2ClientVpnEndpointAuthenticationOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointAuthenticationOptionsDetails() = default;
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointAuthenticationOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointAuthenticationOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The authentication type used. </p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AwsEc2ClientVpnEndpointAuthenticationOptionsDetails& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the Active Directory, if applicable. With Active Directory
     * authentication, clients are authenticated against existing Active Directory
     * groups. </p>
     */
    inline const AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails& GetActiveDirectory() const { return m_activeDirectory; }
    inline bool ActiveDirectoryHasBeenSet() const { return m_activeDirectoryHasBeenSet; }
    template<typename ActiveDirectoryT = AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails>
    void SetActiveDirectory(ActiveDirectoryT&& value) { m_activeDirectoryHasBeenSet = true; m_activeDirectory = std::forward<ActiveDirectoryT>(value); }
    template<typename ActiveDirectoryT = AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails>
    AwsEc2ClientVpnEndpointAuthenticationOptionsDetails& WithActiveDirectory(ActiveDirectoryT&& value) { SetActiveDirectory(std::forward<ActiveDirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the authentication certificates, if applicable.</p>
     */
    inline const AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails& GetMutualAuthentication() const { return m_mutualAuthentication; }
    inline bool MutualAuthenticationHasBeenSet() const { return m_mutualAuthenticationHasBeenSet; }
    template<typename MutualAuthenticationT = AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails>
    void SetMutualAuthentication(MutualAuthenticationT&& value) { m_mutualAuthenticationHasBeenSet = true; m_mutualAuthentication = std::forward<MutualAuthenticationT>(value); }
    template<typename MutualAuthenticationT = AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails>
    AwsEc2ClientVpnEndpointAuthenticationOptionsDetails& WithMutualAuthentication(MutualAuthenticationT&& value) { SetMutualAuthentication(std::forward<MutualAuthenticationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the IAM SAML identity provider, if applicable.</p>
     */
    inline const AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails& GetFederatedAuthentication() const { return m_federatedAuthentication; }
    inline bool FederatedAuthenticationHasBeenSet() const { return m_federatedAuthenticationHasBeenSet; }
    template<typename FederatedAuthenticationT = AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails>
    void SetFederatedAuthentication(FederatedAuthenticationT&& value) { m_federatedAuthenticationHasBeenSet = true; m_federatedAuthentication = std::forward<FederatedAuthenticationT>(value); }
    template<typename FederatedAuthenticationT = AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails>
    AwsEc2ClientVpnEndpointAuthenticationOptionsDetails& WithFederatedAuthentication(FederatedAuthenticationT&& value) { SetFederatedAuthentication(std::forward<FederatedAuthenticationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails m_activeDirectory;
    bool m_activeDirectoryHasBeenSet = false;

    AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails m_mutualAuthentication;
    bool m_mutualAuthenticationHasBeenSet = false;

    AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails m_federatedAuthentication;
    bool m_federatedAuthenticationHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
