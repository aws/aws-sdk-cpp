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
    AWS_REDSHIFT_API ModifyRedshiftIdcApplicationRequest() = default;

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
    inline const Aws::String& GetRedshiftIdcApplicationArn() const { return m_redshiftIdcApplicationArn; }
    inline bool RedshiftIdcApplicationArnHasBeenSet() const { return m_redshiftIdcApplicationArnHasBeenSet; }
    template<typename RedshiftIdcApplicationArnT = Aws::String>
    void SetRedshiftIdcApplicationArn(RedshiftIdcApplicationArnT&& value) { m_redshiftIdcApplicationArnHasBeenSet = true; m_redshiftIdcApplicationArn = std::forward<RedshiftIdcApplicationArnT>(value); }
    template<typename RedshiftIdcApplicationArnT = Aws::String>
    ModifyRedshiftIdcApplicationRequest& WithRedshiftIdcApplicationArn(RedshiftIdcApplicationArnT&& value) { SetRedshiftIdcApplicationArn(std::forward<RedshiftIdcApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace for the Amazon Redshift IAM Identity Center application to
     * change. It determines which managed application verifies the connection
     * token.</p>
     */
    inline const Aws::String& GetIdentityNamespace() const { return m_identityNamespace; }
    inline bool IdentityNamespaceHasBeenSet() const { return m_identityNamespaceHasBeenSet; }
    template<typename IdentityNamespaceT = Aws::String>
    void SetIdentityNamespace(IdentityNamespaceT&& value) { m_identityNamespaceHasBeenSet = true; m_identityNamespace = std::forward<IdentityNamespaceT>(value); }
    template<typename IdentityNamespaceT = Aws::String>
    ModifyRedshiftIdcApplicationRequest& WithIdentityNamespace(IdentityNamespaceT&& value) { SetIdentityNamespace(std::forward<IdentityNamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role ARN associated with the Amazon Redshift IAM Identity Center
     * application to change. It has the required permissions to be assumed and invoke
     * the IDC Identity Center API.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    ModifyRedshiftIdcApplicationRequest& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name for the Amazon Redshift IAM Identity Center application to
     * change. It appears on the console.</p>
     */
    inline const Aws::String& GetIdcDisplayName() const { return m_idcDisplayName; }
    inline bool IdcDisplayNameHasBeenSet() const { return m_idcDisplayNameHasBeenSet; }
    template<typename IdcDisplayNameT = Aws::String>
    void SetIdcDisplayName(IdcDisplayNameT&& value) { m_idcDisplayNameHasBeenSet = true; m_idcDisplayName = std::forward<IdcDisplayNameT>(value); }
    template<typename IdcDisplayNameT = Aws::String>
    ModifyRedshiftIdcApplicationRequest& WithIdcDisplayName(IdcDisplayNameT&& value) { SetIdcDisplayName(std::forward<IdcDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorized token issuer list for the Amazon Redshift IAM Identity Center
     * application to change.</p>
     */
    inline const Aws::Vector<AuthorizedTokenIssuer>& GetAuthorizedTokenIssuerList() const { return m_authorizedTokenIssuerList; }
    inline bool AuthorizedTokenIssuerListHasBeenSet() const { return m_authorizedTokenIssuerListHasBeenSet; }
    template<typename AuthorizedTokenIssuerListT = Aws::Vector<AuthorizedTokenIssuer>>
    void SetAuthorizedTokenIssuerList(AuthorizedTokenIssuerListT&& value) { m_authorizedTokenIssuerListHasBeenSet = true; m_authorizedTokenIssuerList = std::forward<AuthorizedTokenIssuerListT>(value); }
    template<typename AuthorizedTokenIssuerListT = Aws::Vector<AuthorizedTokenIssuer>>
    ModifyRedshiftIdcApplicationRequest& WithAuthorizedTokenIssuerList(AuthorizedTokenIssuerListT&& value) { SetAuthorizedTokenIssuerList(std::forward<AuthorizedTokenIssuerListT>(value)); return *this;}
    template<typename AuthorizedTokenIssuerListT = AuthorizedTokenIssuer>
    ModifyRedshiftIdcApplicationRequest& AddAuthorizedTokenIssuerList(AuthorizedTokenIssuerListT&& value) { m_authorizedTokenIssuerListHasBeenSet = true; m_authorizedTokenIssuerList.emplace_back(std::forward<AuthorizedTokenIssuerListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A collection of service integrations associated with the application.</p>
     */
    inline const Aws::Vector<ServiceIntegrationsUnion>& GetServiceIntegrations() const { return m_serviceIntegrations; }
    inline bool ServiceIntegrationsHasBeenSet() const { return m_serviceIntegrationsHasBeenSet; }
    template<typename ServiceIntegrationsT = Aws::Vector<ServiceIntegrationsUnion>>
    void SetServiceIntegrations(ServiceIntegrationsT&& value) { m_serviceIntegrationsHasBeenSet = true; m_serviceIntegrations = std::forward<ServiceIntegrationsT>(value); }
    template<typename ServiceIntegrationsT = Aws::Vector<ServiceIntegrationsUnion>>
    ModifyRedshiftIdcApplicationRequest& WithServiceIntegrations(ServiceIntegrationsT&& value) { SetServiceIntegrations(std::forward<ServiceIntegrationsT>(value)); return *this;}
    template<typename ServiceIntegrationsT = ServiceIntegrationsUnion>
    ModifyRedshiftIdcApplicationRequest& AddServiceIntegrations(ServiceIntegrationsT&& value) { m_serviceIntegrationsHasBeenSet = true; m_serviceIntegrations.emplace_back(std::forward<ServiceIntegrationsT>(value)); return *this; }
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
