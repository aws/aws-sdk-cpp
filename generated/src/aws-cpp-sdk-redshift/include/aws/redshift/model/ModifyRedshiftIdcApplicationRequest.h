/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/AuthorizedTokenIssuer.h>
#include <aws/redshift/model/ServiceIntegrationsUnion.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class ModifyRedshiftIdcApplicationRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API ModifyRedshiftIdcApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyRedshiftIdcApplication"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ARN for the Redshift application that integrates with IAM Identity
     * Center.</p>
     */
    inline const Aws::String& GetRedshiftIdcApplicationArn() const{ return m_redshiftIdcApplicationArn; }
    inline bool RedshiftIdcApplicationArnHasBeenSet() const { return m_redshiftIdcApplicationArnHasBeenSet; }
    inline void SetRedshiftIdcApplicationArn(const Aws::String& value) { m_redshiftIdcApplicationArnHasBeenSet = true; m_redshiftIdcApplicationArn = value; }
    inline void SetRedshiftIdcApplicationArn(Aws::String&& value) { m_redshiftIdcApplicationArnHasBeenSet = true; m_redshiftIdcApplicationArn = std::move(value); }
    inline void SetRedshiftIdcApplicationArn(const char* value) { m_redshiftIdcApplicationArnHasBeenSet = true; m_redshiftIdcApplicationArn.assign(value); }
    inline ModifyRedshiftIdcApplicationRequest& WithRedshiftIdcApplicationArn(const Aws::String& value) { SetRedshiftIdcApplicationArn(value); return *this;}
    inline ModifyRedshiftIdcApplicationRequest& WithRedshiftIdcApplicationArn(Aws::String&& value) { SetRedshiftIdcApplicationArn(std::move(value)); return *this;}
    inline ModifyRedshiftIdcApplicationRequest& WithRedshiftIdcApplicationArn(const char* value) { SetRedshiftIdcApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace for the Amazon Redshift IAM Identity Center application to
     * change. It determines which managed application verifies the connection
     * token.</p>
     */
    inline const Aws::String& GetIdentityNamespace() const{ return m_identityNamespace; }
    inline bool IdentityNamespaceHasBeenSet() const { return m_identityNamespaceHasBeenSet; }
    inline void SetIdentityNamespace(const Aws::String& value) { m_identityNamespaceHasBeenSet = true; m_identityNamespace = value; }
    inline void SetIdentityNamespace(Aws::String&& value) { m_identityNamespaceHasBeenSet = true; m_identityNamespace = std::move(value); }
    inline void SetIdentityNamespace(const char* value) { m_identityNamespaceHasBeenSet = true; m_identityNamespace.assign(value); }
    inline ModifyRedshiftIdcApplicationRequest& WithIdentityNamespace(const Aws::String& value) { SetIdentityNamespace(value); return *this;}
    inline ModifyRedshiftIdcApplicationRequest& WithIdentityNamespace(Aws::String&& value) { SetIdentityNamespace(std::move(value)); return *this;}
    inline ModifyRedshiftIdcApplicationRequest& WithIdentityNamespace(const char* value) { SetIdentityNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role ARN associated with the Amazon Redshift IAM Identity Center
     * application to change. It has the required permissions to be assumed and invoke
     * the IDC Identity Center API.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }
    inline ModifyRedshiftIdcApplicationRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline ModifyRedshiftIdcApplicationRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline ModifyRedshiftIdcApplicationRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name for the Amazon Redshift IAM Identity Center application to
     * change. It appears on the console.</p>
     */
    inline const Aws::String& GetIdcDisplayName() const{ return m_idcDisplayName; }
    inline bool IdcDisplayNameHasBeenSet() const { return m_idcDisplayNameHasBeenSet; }
    inline void SetIdcDisplayName(const Aws::String& value) { m_idcDisplayNameHasBeenSet = true; m_idcDisplayName = value; }
    inline void SetIdcDisplayName(Aws::String&& value) { m_idcDisplayNameHasBeenSet = true; m_idcDisplayName = std::move(value); }
    inline void SetIdcDisplayName(const char* value) { m_idcDisplayNameHasBeenSet = true; m_idcDisplayName.assign(value); }
    inline ModifyRedshiftIdcApplicationRequest& WithIdcDisplayName(const Aws::String& value) { SetIdcDisplayName(value); return *this;}
    inline ModifyRedshiftIdcApplicationRequest& WithIdcDisplayName(Aws::String&& value) { SetIdcDisplayName(std::move(value)); return *this;}
    inline ModifyRedshiftIdcApplicationRequest& WithIdcDisplayName(const char* value) { SetIdcDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorized token issuer list for the Amazon Redshift IAM Identity Center
     * application to change.</p>
     */
    inline const Aws::Vector<AuthorizedTokenIssuer>& GetAuthorizedTokenIssuerList() const{ return m_authorizedTokenIssuerList; }
    inline bool AuthorizedTokenIssuerListHasBeenSet() const { return m_authorizedTokenIssuerListHasBeenSet; }
    inline void SetAuthorizedTokenIssuerList(const Aws::Vector<AuthorizedTokenIssuer>& value) { m_authorizedTokenIssuerListHasBeenSet = true; m_authorizedTokenIssuerList = value; }
    inline void SetAuthorizedTokenIssuerList(Aws::Vector<AuthorizedTokenIssuer>&& value) { m_authorizedTokenIssuerListHasBeenSet = true; m_authorizedTokenIssuerList = std::move(value); }
    inline ModifyRedshiftIdcApplicationRequest& WithAuthorizedTokenIssuerList(const Aws::Vector<AuthorizedTokenIssuer>& value) { SetAuthorizedTokenIssuerList(value); return *this;}
    inline ModifyRedshiftIdcApplicationRequest& WithAuthorizedTokenIssuerList(Aws::Vector<AuthorizedTokenIssuer>&& value) { SetAuthorizedTokenIssuerList(std::move(value)); return *this;}
    inline ModifyRedshiftIdcApplicationRequest& AddAuthorizedTokenIssuerList(const AuthorizedTokenIssuer& value) { m_authorizedTokenIssuerListHasBeenSet = true; m_authorizedTokenIssuerList.push_back(value); return *this; }
    inline ModifyRedshiftIdcApplicationRequest& AddAuthorizedTokenIssuerList(AuthorizedTokenIssuer&& value) { m_authorizedTokenIssuerListHasBeenSet = true; m_authorizedTokenIssuerList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A collection of service integrations associated with the application.</p>
     */
    inline const Aws::Vector<ServiceIntegrationsUnion>& GetServiceIntegrations() const{ return m_serviceIntegrations; }
    inline bool ServiceIntegrationsHasBeenSet() const { return m_serviceIntegrationsHasBeenSet; }
    inline void SetServiceIntegrations(const Aws::Vector<ServiceIntegrationsUnion>& value) { m_serviceIntegrationsHasBeenSet = true; m_serviceIntegrations = value; }
    inline void SetServiceIntegrations(Aws::Vector<ServiceIntegrationsUnion>&& value) { m_serviceIntegrationsHasBeenSet = true; m_serviceIntegrations = std::move(value); }
    inline ModifyRedshiftIdcApplicationRequest& WithServiceIntegrations(const Aws::Vector<ServiceIntegrationsUnion>& value) { SetServiceIntegrations(value); return *this;}
    inline ModifyRedshiftIdcApplicationRequest& WithServiceIntegrations(Aws::Vector<ServiceIntegrationsUnion>&& value) { SetServiceIntegrations(std::move(value)); return *this;}
    inline ModifyRedshiftIdcApplicationRequest& AddServiceIntegrations(const ServiceIntegrationsUnion& value) { m_serviceIntegrationsHasBeenSet = true; m_serviceIntegrations.push_back(value); return *this; }
    inline ModifyRedshiftIdcApplicationRequest& AddServiceIntegrations(ServiceIntegrationsUnion&& value) { m_serviceIntegrationsHasBeenSet = true; m_serviceIntegrations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_redshiftIdcApplicationArn;
    bool m_redshiftIdcApplicationArnHasBeenSet = false;

    Aws::String m_identityNamespace;
    bool m_identityNamespaceHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_idcDisplayName;
    bool m_idcDisplayNameHasBeenSet = false;

    Aws::Vector<AuthorizedTokenIssuer> m_authorizedTokenIssuerList;
    bool m_authorizedTokenIssuerListHasBeenSet = false;

    Aws::Vector<ServiceIntegrationsUnion> m_serviceIntegrations;
    bool m_serviceIntegrationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
