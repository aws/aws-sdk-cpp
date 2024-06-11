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
  class CreateRedshiftIdcApplicationRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API CreateRedshiftIdcApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRedshiftIdcApplication"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the IAM Identity Center instance where
     * Amazon Redshift creates a new managed application.</p>
     */
    inline const Aws::String& GetIdcInstanceArn() const{ return m_idcInstanceArn; }
    inline bool IdcInstanceArnHasBeenSet() const { return m_idcInstanceArnHasBeenSet; }
    inline void SetIdcInstanceArn(const Aws::String& value) { m_idcInstanceArnHasBeenSet = true; m_idcInstanceArn = value; }
    inline void SetIdcInstanceArn(Aws::String&& value) { m_idcInstanceArnHasBeenSet = true; m_idcInstanceArn = std::move(value); }
    inline void SetIdcInstanceArn(const char* value) { m_idcInstanceArnHasBeenSet = true; m_idcInstanceArn.assign(value); }
    inline CreateRedshiftIdcApplicationRequest& WithIdcInstanceArn(const Aws::String& value) { SetIdcInstanceArn(value); return *this;}
    inline CreateRedshiftIdcApplicationRequest& WithIdcInstanceArn(Aws::String&& value) { SetIdcInstanceArn(std::move(value)); return *this;}
    inline CreateRedshiftIdcApplicationRequest& WithIdcInstanceArn(const char* value) { SetIdcInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Redshift application in IAM Identity Center.</p>
     */
    inline const Aws::String& GetRedshiftIdcApplicationName() const{ return m_redshiftIdcApplicationName; }
    inline bool RedshiftIdcApplicationNameHasBeenSet() const { return m_redshiftIdcApplicationNameHasBeenSet; }
    inline void SetRedshiftIdcApplicationName(const Aws::String& value) { m_redshiftIdcApplicationNameHasBeenSet = true; m_redshiftIdcApplicationName = value; }
    inline void SetRedshiftIdcApplicationName(Aws::String&& value) { m_redshiftIdcApplicationNameHasBeenSet = true; m_redshiftIdcApplicationName = std::move(value); }
    inline void SetRedshiftIdcApplicationName(const char* value) { m_redshiftIdcApplicationNameHasBeenSet = true; m_redshiftIdcApplicationName.assign(value); }
    inline CreateRedshiftIdcApplicationRequest& WithRedshiftIdcApplicationName(const Aws::String& value) { SetRedshiftIdcApplicationName(value); return *this;}
    inline CreateRedshiftIdcApplicationRequest& WithRedshiftIdcApplicationName(Aws::String&& value) { SetRedshiftIdcApplicationName(std::move(value)); return *this;}
    inline CreateRedshiftIdcApplicationRequest& WithRedshiftIdcApplicationName(const char* value) { SetRedshiftIdcApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace for the Amazon Redshift IAM Identity Center application
     * instance. It determines which managed application verifies the connection
     * token.</p>
     */
    inline const Aws::String& GetIdentityNamespace() const{ return m_identityNamespace; }
    inline bool IdentityNamespaceHasBeenSet() const { return m_identityNamespaceHasBeenSet; }
    inline void SetIdentityNamespace(const Aws::String& value) { m_identityNamespaceHasBeenSet = true; m_identityNamespace = value; }
    inline void SetIdentityNamespace(Aws::String&& value) { m_identityNamespaceHasBeenSet = true; m_identityNamespace = std::move(value); }
    inline void SetIdentityNamespace(const char* value) { m_identityNamespaceHasBeenSet = true; m_identityNamespace.assign(value); }
    inline CreateRedshiftIdcApplicationRequest& WithIdentityNamespace(const Aws::String& value) { SetIdentityNamespace(value); return *this;}
    inline CreateRedshiftIdcApplicationRequest& WithIdentityNamespace(Aws::String&& value) { SetIdentityNamespace(std::move(value)); return *this;}
    inline CreateRedshiftIdcApplicationRequest& WithIdentityNamespace(const char* value) { SetIdentityNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name for the Amazon Redshift IAM Identity Center application
     * instance. It appears in the console.</p>
     */
    inline const Aws::String& GetIdcDisplayName() const{ return m_idcDisplayName; }
    inline bool IdcDisplayNameHasBeenSet() const { return m_idcDisplayNameHasBeenSet; }
    inline void SetIdcDisplayName(const Aws::String& value) { m_idcDisplayNameHasBeenSet = true; m_idcDisplayName = value; }
    inline void SetIdcDisplayName(Aws::String&& value) { m_idcDisplayNameHasBeenSet = true; m_idcDisplayName = std::move(value); }
    inline void SetIdcDisplayName(const char* value) { m_idcDisplayNameHasBeenSet = true; m_idcDisplayName.assign(value); }
    inline CreateRedshiftIdcApplicationRequest& WithIdcDisplayName(const Aws::String& value) { SetIdcDisplayName(value); return *this;}
    inline CreateRedshiftIdcApplicationRequest& WithIdcDisplayName(Aws::String&& value) { SetIdcDisplayName(std::move(value)); return *this;}
    inline CreateRedshiftIdcApplicationRequest& WithIdcDisplayName(const char* value) { SetIdcDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role ARN for the Amazon Redshift IAM Identity Center application
     * instance. It has the required permissions to be assumed and invoke the IDC
     * Identity Center API.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }
    inline CreateRedshiftIdcApplicationRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline CreateRedshiftIdcApplicationRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline CreateRedshiftIdcApplicationRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token issuer list for the Amazon Redshift IAM Identity Center application
     * instance.</p>
     */
    inline const Aws::Vector<AuthorizedTokenIssuer>& GetAuthorizedTokenIssuerList() const{ return m_authorizedTokenIssuerList; }
    inline bool AuthorizedTokenIssuerListHasBeenSet() const { return m_authorizedTokenIssuerListHasBeenSet; }
    inline void SetAuthorizedTokenIssuerList(const Aws::Vector<AuthorizedTokenIssuer>& value) { m_authorizedTokenIssuerListHasBeenSet = true; m_authorizedTokenIssuerList = value; }
    inline void SetAuthorizedTokenIssuerList(Aws::Vector<AuthorizedTokenIssuer>&& value) { m_authorizedTokenIssuerListHasBeenSet = true; m_authorizedTokenIssuerList = std::move(value); }
    inline CreateRedshiftIdcApplicationRequest& WithAuthorizedTokenIssuerList(const Aws::Vector<AuthorizedTokenIssuer>& value) { SetAuthorizedTokenIssuerList(value); return *this;}
    inline CreateRedshiftIdcApplicationRequest& WithAuthorizedTokenIssuerList(Aws::Vector<AuthorizedTokenIssuer>&& value) { SetAuthorizedTokenIssuerList(std::move(value)); return *this;}
    inline CreateRedshiftIdcApplicationRequest& AddAuthorizedTokenIssuerList(const AuthorizedTokenIssuer& value) { m_authorizedTokenIssuerListHasBeenSet = true; m_authorizedTokenIssuerList.push_back(value); return *this; }
    inline CreateRedshiftIdcApplicationRequest& AddAuthorizedTokenIssuerList(AuthorizedTokenIssuer&& value) { m_authorizedTokenIssuerListHasBeenSet = true; m_authorizedTokenIssuerList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A collection of service integrations for the Redshift IAM Identity Center
     * application.</p>
     */
    inline const Aws::Vector<ServiceIntegrationsUnion>& GetServiceIntegrations() const{ return m_serviceIntegrations; }
    inline bool ServiceIntegrationsHasBeenSet() const { return m_serviceIntegrationsHasBeenSet; }
    inline void SetServiceIntegrations(const Aws::Vector<ServiceIntegrationsUnion>& value) { m_serviceIntegrationsHasBeenSet = true; m_serviceIntegrations = value; }
    inline void SetServiceIntegrations(Aws::Vector<ServiceIntegrationsUnion>&& value) { m_serviceIntegrationsHasBeenSet = true; m_serviceIntegrations = std::move(value); }
    inline CreateRedshiftIdcApplicationRequest& WithServiceIntegrations(const Aws::Vector<ServiceIntegrationsUnion>& value) { SetServiceIntegrations(value); return *this;}
    inline CreateRedshiftIdcApplicationRequest& WithServiceIntegrations(Aws::Vector<ServiceIntegrationsUnion>&& value) { SetServiceIntegrations(std::move(value)); return *this;}
    inline CreateRedshiftIdcApplicationRequest& AddServiceIntegrations(const ServiceIntegrationsUnion& value) { m_serviceIntegrationsHasBeenSet = true; m_serviceIntegrations.push_back(value); return *this; }
    inline CreateRedshiftIdcApplicationRequest& AddServiceIntegrations(ServiceIntegrationsUnion&& value) { m_serviceIntegrationsHasBeenSet = true; m_serviceIntegrations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_idcInstanceArn;
    bool m_idcInstanceArnHasBeenSet = false;

    Aws::String m_redshiftIdcApplicationName;
    bool m_redshiftIdcApplicationNameHasBeenSet = false;

    Aws::String m_identityNamespace;
    bool m_identityNamespaceHasBeenSet = false;

    Aws::String m_idcDisplayName;
    bool m_idcDisplayNameHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::Vector<AuthorizedTokenIssuer> m_authorizedTokenIssuerList;
    bool m_authorizedTokenIssuerListHasBeenSet = false;

    Aws::Vector<ServiceIntegrationsUnion> m_serviceIntegrations;
    bool m_serviceIntegrationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
