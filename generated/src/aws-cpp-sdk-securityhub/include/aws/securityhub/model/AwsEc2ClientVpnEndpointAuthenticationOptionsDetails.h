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
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointAuthenticationOptionsDetails();
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointAuthenticationOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointAuthenticationOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The authentication type used. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline AwsEc2ClientVpnEndpointAuthenticationOptionsDetails& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline AwsEc2ClientVpnEndpointAuthenticationOptionsDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline AwsEc2ClientVpnEndpointAuthenticationOptionsDetails& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the Active Directory, if applicable. With Active Directory
     * authentication, clients are authenticated against existing Active Directory
     * groups. </p>
     */
    inline const AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails& GetActiveDirectory() const{ return m_activeDirectory; }
    inline bool ActiveDirectoryHasBeenSet() const { return m_activeDirectoryHasBeenSet; }
    inline void SetActiveDirectory(const AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails& value) { m_activeDirectoryHasBeenSet = true; m_activeDirectory = value; }
    inline void SetActiveDirectory(AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails&& value) { m_activeDirectoryHasBeenSet = true; m_activeDirectory = std::move(value); }
    inline AwsEc2ClientVpnEndpointAuthenticationOptionsDetails& WithActiveDirectory(const AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails& value) { SetActiveDirectory(value); return *this;}
    inline AwsEc2ClientVpnEndpointAuthenticationOptionsDetails& WithActiveDirectory(AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails&& value) { SetActiveDirectory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the authentication certificates, if applicable.</p>
     */
    inline const AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails& GetMutualAuthentication() const{ return m_mutualAuthentication; }
    inline bool MutualAuthenticationHasBeenSet() const { return m_mutualAuthenticationHasBeenSet; }
    inline void SetMutualAuthentication(const AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails& value) { m_mutualAuthenticationHasBeenSet = true; m_mutualAuthentication = value; }
    inline void SetMutualAuthentication(AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails&& value) { m_mutualAuthenticationHasBeenSet = true; m_mutualAuthentication = std::move(value); }
    inline AwsEc2ClientVpnEndpointAuthenticationOptionsDetails& WithMutualAuthentication(const AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails& value) { SetMutualAuthentication(value); return *this;}
    inline AwsEc2ClientVpnEndpointAuthenticationOptionsDetails& WithMutualAuthentication(AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails&& value) { SetMutualAuthentication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the IAM SAML identity provider, if applicable.</p>
     */
    inline const AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails& GetFederatedAuthentication() const{ return m_federatedAuthentication; }
    inline bool FederatedAuthenticationHasBeenSet() const { return m_federatedAuthenticationHasBeenSet; }
    inline void SetFederatedAuthentication(const AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails& value) { m_federatedAuthenticationHasBeenSet = true; m_federatedAuthentication = value; }
    inline void SetFederatedAuthentication(AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails&& value) { m_federatedAuthenticationHasBeenSet = true; m_federatedAuthentication = std::move(value); }
    inline AwsEc2ClientVpnEndpointAuthenticationOptionsDetails& WithFederatedAuthentication(const AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails& value) { SetFederatedAuthentication(value); return *this;}
    inline AwsEc2ClientVpnEndpointAuthenticationOptionsDetails& WithFederatedAuthentication(AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails&& value) { SetFederatedAuthentication(std::move(value)); return *this;}
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
