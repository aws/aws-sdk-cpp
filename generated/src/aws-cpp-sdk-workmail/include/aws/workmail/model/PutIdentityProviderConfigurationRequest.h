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
    AWS_WORKMAIL_API PutIdentityProviderConfigurationRequest();

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
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }
    inline PutIdentityProviderConfigurationRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}
    inline PutIdentityProviderConfigurationRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}
    inline PutIdentityProviderConfigurationRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The authentication mode used in WorkMail.</p>
     */
    inline const IdentityProviderAuthenticationMode& GetAuthenticationMode() const{ return m_authenticationMode; }
    inline bool AuthenticationModeHasBeenSet() const { return m_authenticationModeHasBeenSet; }
    inline void SetAuthenticationMode(const IdentityProviderAuthenticationMode& value) { m_authenticationModeHasBeenSet = true; m_authenticationMode = value; }
    inline void SetAuthenticationMode(IdentityProviderAuthenticationMode&& value) { m_authenticationModeHasBeenSet = true; m_authenticationMode = std::move(value); }
    inline PutIdentityProviderConfigurationRequest& WithAuthenticationMode(const IdentityProviderAuthenticationMode& value) { SetAuthenticationMode(value); return *this;}
    inline PutIdentityProviderConfigurationRequest& WithAuthenticationMode(IdentityProviderAuthenticationMode&& value) { SetAuthenticationMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The details of the IAM Identity Center configuration.</p>
     */
    inline const IdentityCenterConfiguration& GetIdentityCenterConfiguration() const{ return m_identityCenterConfiguration; }
    inline bool IdentityCenterConfigurationHasBeenSet() const { return m_identityCenterConfigurationHasBeenSet; }
    inline void SetIdentityCenterConfiguration(const IdentityCenterConfiguration& value) { m_identityCenterConfigurationHasBeenSet = true; m_identityCenterConfiguration = value; }
    inline void SetIdentityCenterConfiguration(IdentityCenterConfiguration&& value) { m_identityCenterConfigurationHasBeenSet = true; m_identityCenterConfiguration = std::move(value); }
    inline PutIdentityProviderConfigurationRequest& WithIdentityCenterConfiguration(const IdentityCenterConfiguration& value) { SetIdentityCenterConfiguration(value); return *this;}
    inline PutIdentityProviderConfigurationRequest& WithIdentityCenterConfiguration(IdentityCenterConfiguration&& value) { SetIdentityCenterConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The details of the Personal Access Token configuration. </p>
     */
    inline const PersonalAccessTokenConfiguration& GetPersonalAccessTokenConfiguration() const{ return m_personalAccessTokenConfiguration; }
    inline bool PersonalAccessTokenConfigurationHasBeenSet() const { return m_personalAccessTokenConfigurationHasBeenSet; }
    inline void SetPersonalAccessTokenConfiguration(const PersonalAccessTokenConfiguration& value) { m_personalAccessTokenConfigurationHasBeenSet = true; m_personalAccessTokenConfiguration = value; }
    inline void SetPersonalAccessTokenConfiguration(PersonalAccessTokenConfiguration&& value) { m_personalAccessTokenConfigurationHasBeenSet = true; m_personalAccessTokenConfiguration = std::move(value); }
    inline PutIdentityProviderConfigurationRequest& WithPersonalAccessTokenConfiguration(const PersonalAccessTokenConfiguration& value) { SetPersonalAccessTokenConfiguration(value); return *this;}
    inline PutIdentityProviderConfigurationRequest& WithPersonalAccessTokenConfiguration(PersonalAccessTokenConfiguration&& value) { SetPersonalAccessTokenConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    IdentityProviderAuthenticationMode m_authenticationMode;
    bool m_authenticationModeHasBeenSet = false;

    IdentityCenterConfiguration m_identityCenterConfiguration;
    bool m_identityCenterConfigurationHasBeenSet = false;

    PersonalAccessTokenConfiguration m_personalAccessTokenConfiguration;
    bool m_personalAccessTokenConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
