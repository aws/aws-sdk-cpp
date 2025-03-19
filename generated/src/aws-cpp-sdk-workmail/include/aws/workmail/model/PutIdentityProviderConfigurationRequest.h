/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/IdentityProviderAuthenticationMode.h>
#include <aws/workmail/model/IdentityCenterConfiguration.h>
#include <aws/workmail/model/PersonalAccessTokenConfiguration.h>
#include <utility>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class PutIdentityProviderConfigurationRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API PutIdentityProviderConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutIdentityProviderConfiguration"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ID of the WorkMail Organization. </p>
     */
    inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    template<typename OrganizationIdT = Aws::String>
    void SetOrganizationId(OrganizationIdT&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::forward<OrganizationIdT>(value); }
    template<typename OrganizationIdT = Aws::String>
    PutIdentityProviderConfigurationRequest& WithOrganizationId(OrganizationIdT&& value) { SetOrganizationId(std::forward<OrganizationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The authentication mode used in WorkMail.</p>
     */
    inline IdentityProviderAuthenticationMode GetAuthenticationMode() const { return m_authenticationMode; }
    inline bool AuthenticationModeHasBeenSet() const { return m_authenticationModeHasBeenSet; }
    inline void SetAuthenticationMode(IdentityProviderAuthenticationMode value) { m_authenticationModeHasBeenSet = true; m_authenticationMode = value; }
    inline PutIdentityProviderConfigurationRequest& WithAuthenticationMode(IdentityProviderAuthenticationMode value) { SetAuthenticationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The details of the IAM Identity Center configuration.</p>
     */
    inline const IdentityCenterConfiguration& GetIdentityCenterConfiguration() const { return m_identityCenterConfiguration; }
    inline bool IdentityCenterConfigurationHasBeenSet() const { return m_identityCenterConfigurationHasBeenSet; }
    template<typename IdentityCenterConfigurationT = IdentityCenterConfiguration>
    void SetIdentityCenterConfiguration(IdentityCenterConfigurationT&& value) { m_identityCenterConfigurationHasBeenSet = true; m_identityCenterConfiguration = std::forward<IdentityCenterConfigurationT>(value); }
    template<typename IdentityCenterConfigurationT = IdentityCenterConfiguration>
    PutIdentityProviderConfigurationRequest& WithIdentityCenterConfiguration(IdentityCenterConfigurationT&& value) { SetIdentityCenterConfiguration(std::forward<IdentityCenterConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The details of the Personal Access Token configuration. </p>
     */
    inline const PersonalAccessTokenConfiguration& GetPersonalAccessTokenConfiguration() const { return m_personalAccessTokenConfiguration; }
    inline bool PersonalAccessTokenConfigurationHasBeenSet() const { return m_personalAccessTokenConfigurationHasBeenSet; }
    template<typename PersonalAccessTokenConfigurationT = PersonalAccessTokenConfiguration>
    void SetPersonalAccessTokenConfiguration(PersonalAccessTokenConfigurationT&& value) { m_personalAccessTokenConfigurationHasBeenSet = true; m_personalAccessTokenConfiguration = std::forward<PersonalAccessTokenConfigurationT>(value); }
    template<typename PersonalAccessTokenConfigurationT = PersonalAccessTokenConfiguration>
    PutIdentityProviderConfigurationRequest& WithPersonalAccessTokenConfiguration(PersonalAccessTokenConfigurationT&& value) { SetPersonalAccessTokenConfiguration(std::forward<PersonalAccessTokenConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    IdentityProviderAuthenticationMode m_authenticationMode{IdentityProviderAuthenticationMode::NOT_SET};
    bool m_authenticationModeHasBeenSet = false;

    IdentityCenterConfiguration m_identityCenterConfiguration;
    bool m_identityCenterConfigurationHasBeenSet = false;

    PersonalAccessTokenConfiguration m_personalAccessTokenConfiguration;
    bool m_personalAccessTokenConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
