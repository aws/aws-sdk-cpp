/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/AuthorizedTokenIssuer.h>
#include <aws/redshift/model/ServiceIntegrationsUnion.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Contains properties for the Redshift IDC application.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/RedshiftIdcApplication">AWS
   * API Reference</a></p>
   */
  class RedshiftIdcApplication
  {
  public:
    AWS_REDSHIFT_API RedshiftIdcApplication();
    AWS_REDSHIFT_API RedshiftIdcApplication(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API RedshiftIdcApplication& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ARN for the IAM Identity Center instance that Redshift integrates
     * with.</p>
     */
    inline const Aws::String& GetIdcInstanceArn() const{ return m_idcInstanceArn; }
    inline bool IdcInstanceArnHasBeenSet() const { return m_idcInstanceArnHasBeenSet; }
    inline void SetIdcInstanceArn(const Aws::String& value) { m_idcInstanceArnHasBeenSet = true; m_idcInstanceArn = value; }
    inline void SetIdcInstanceArn(Aws::String&& value) { m_idcInstanceArnHasBeenSet = true; m_idcInstanceArn = std::move(value); }
    inline void SetIdcInstanceArn(const char* value) { m_idcInstanceArnHasBeenSet = true; m_idcInstanceArn.assign(value); }
    inline RedshiftIdcApplication& WithIdcInstanceArn(const Aws::String& value) { SetIdcInstanceArn(value); return *this;}
    inline RedshiftIdcApplication& WithIdcInstanceArn(Aws::String&& value) { SetIdcInstanceArn(std::move(value)); return *this;}
    inline RedshiftIdcApplication& WithIdcInstanceArn(const char* value) { SetIdcInstanceArn(value); return *this;}
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
    inline RedshiftIdcApplication& WithRedshiftIdcApplicationName(const Aws::String& value) { SetRedshiftIdcApplicationName(value); return *this;}
    inline RedshiftIdcApplication& WithRedshiftIdcApplicationName(Aws::String&& value) { SetRedshiftIdcApplicationName(std::move(value)); return *this;}
    inline RedshiftIdcApplication& WithRedshiftIdcApplicationName(const char* value) { SetRedshiftIdcApplicationName(value); return *this;}
    ///@}

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
    inline RedshiftIdcApplication& WithRedshiftIdcApplicationArn(const Aws::String& value) { SetRedshiftIdcApplicationArn(value); return *this;}
    inline RedshiftIdcApplication& WithRedshiftIdcApplicationArn(Aws::String&& value) { SetRedshiftIdcApplicationArn(std::move(value)); return *this;}
    inline RedshiftIdcApplication& WithRedshiftIdcApplicationArn(const char* value) { SetRedshiftIdcApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity namespace for the Amazon Redshift IAM Identity Center
     * application. It determines which managed application verifies the connection
     * token.</p>
     */
    inline const Aws::String& GetIdentityNamespace() const{ return m_identityNamespace; }
    inline bool IdentityNamespaceHasBeenSet() const { return m_identityNamespaceHasBeenSet; }
    inline void SetIdentityNamespace(const Aws::String& value) { m_identityNamespaceHasBeenSet = true; m_identityNamespace = value; }
    inline void SetIdentityNamespace(Aws::String&& value) { m_identityNamespaceHasBeenSet = true; m_identityNamespace = std::move(value); }
    inline void SetIdentityNamespace(const char* value) { m_identityNamespaceHasBeenSet = true; m_identityNamespace.assign(value); }
    inline RedshiftIdcApplication& WithIdentityNamespace(const Aws::String& value) { SetIdentityNamespace(value); return *this;}
    inline RedshiftIdcApplication& WithIdentityNamespace(Aws::String&& value) { SetIdentityNamespace(std::move(value)); return *this;}
    inline RedshiftIdcApplication& WithIdentityNamespace(const char* value) { SetIdentityNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name for the Amazon Redshift IAM Identity Center application. It
     * appears on the console.</p>
     */
    inline const Aws::String& GetIdcDisplayName() const{ return m_idcDisplayName; }
    inline bool IdcDisplayNameHasBeenSet() const { return m_idcDisplayNameHasBeenSet; }
    inline void SetIdcDisplayName(const Aws::String& value) { m_idcDisplayNameHasBeenSet = true; m_idcDisplayName = value; }
    inline void SetIdcDisplayName(Aws::String&& value) { m_idcDisplayNameHasBeenSet = true; m_idcDisplayName = std::move(value); }
    inline void SetIdcDisplayName(const char* value) { m_idcDisplayNameHasBeenSet = true; m_idcDisplayName.assign(value); }
    inline RedshiftIdcApplication& WithIdcDisplayName(const Aws::String& value) { SetIdcDisplayName(value); return *this;}
    inline RedshiftIdcApplication& WithIdcDisplayName(Aws::String&& value) { SetIdcDisplayName(std::move(value)); return *this;}
    inline RedshiftIdcApplication& WithIdcDisplayName(const char* value) { SetIdcDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the Amazon Redshift IAM Identity Center application. It has the
     * required permissions to be assumed and invoke the IDC Identity Center API.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }
    inline RedshiftIdcApplication& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline RedshiftIdcApplication& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline RedshiftIdcApplication& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the Amazon Redshift IAM Identity Center application.</p>
     */
    inline const Aws::String& GetIdcManagedApplicationArn() const{ return m_idcManagedApplicationArn; }
    inline bool IdcManagedApplicationArnHasBeenSet() const { return m_idcManagedApplicationArnHasBeenSet; }
    inline void SetIdcManagedApplicationArn(const Aws::String& value) { m_idcManagedApplicationArnHasBeenSet = true; m_idcManagedApplicationArn = value; }
    inline void SetIdcManagedApplicationArn(Aws::String&& value) { m_idcManagedApplicationArnHasBeenSet = true; m_idcManagedApplicationArn = std::move(value); }
    inline void SetIdcManagedApplicationArn(const char* value) { m_idcManagedApplicationArnHasBeenSet = true; m_idcManagedApplicationArn.assign(value); }
    inline RedshiftIdcApplication& WithIdcManagedApplicationArn(const Aws::String& value) { SetIdcManagedApplicationArn(value); return *this;}
    inline RedshiftIdcApplication& WithIdcManagedApplicationArn(Aws::String&& value) { SetIdcManagedApplicationArn(std::move(value)); return *this;}
    inline RedshiftIdcApplication& WithIdcManagedApplicationArn(const char* value) { SetIdcManagedApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The onboarding status for the Amazon Redshift IAM Identity Center
     * application.</p>
     */
    inline const Aws::String& GetIdcOnboardStatus() const{ return m_idcOnboardStatus; }
    inline bool IdcOnboardStatusHasBeenSet() const { return m_idcOnboardStatusHasBeenSet; }
    inline void SetIdcOnboardStatus(const Aws::String& value) { m_idcOnboardStatusHasBeenSet = true; m_idcOnboardStatus = value; }
    inline void SetIdcOnboardStatus(Aws::String&& value) { m_idcOnboardStatusHasBeenSet = true; m_idcOnboardStatus = std::move(value); }
    inline void SetIdcOnboardStatus(const char* value) { m_idcOnboardStatusHasBeenSet = true; m_idcOnboardStatus.assign(value); }
    inline RedshiftIdcApplication& WithIdcOnboardStatus(const Aws::String& value) { SetIdcOnboardStatus(value); return *this;}
    inline RedshiftIdcApplication& WithIdcOnboardStatus(Aws::String&& value) { SetIdcOnboardStatus(std::move(value)); return *this;}
    inline RedshiftIdcApplication& WithIdcOnboardStatus(const char* value) { SetIdcOnboardStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorized token issuer list for the Amazon Redshift IAM Identity Center
     * application.</p>
     */
    inline const Aws::Vector<AuthorizedTokenIssuer>& GetAuthorizedTokenIssuerList() const{ return m_authorizedTokenIssuerList; }
    inline bool AuthorizedTokenIssuerListHasBeenSet() const { return m_authorizedTokenIssuerListHasBeenSet; }
    inline void SetAuthorizedTokenIssuerList(const Aws::Vector<AuthorizedTokenIssuer>& value) { m_authorizedTokenIssuerListHasBeenSet = true; m_authorizedTokenIssuerList = value; }
    inline void SetAuthorizedTokenIssuerList(Aws::Vector<AuthorizedTokenIssuer>&& value) { m_authorizedTokenIssuerListHasBeenSet = true; m_authorizedTokenIssuerList = std::move(value); }
    inline RedshiftIdcApplication& WithAuthorizedTokenIssuerList(const Aws::Vector<AuthorizedTokenIssuer>& value) { SetAuthorizedTokenIssuerList(value); return *this;}
    inline RedshiftIdcApplication& WithAuthorizedTokenIssuerList(Aws::Vector<AuthorizedTokenIssuer>&& value) { SetAuthorizedTokenIssuerList(std::move(value)); return *this;}
    inline RedshiftIdcApplication& AddAuthorizedTokenIssuerList(const AuthorizedTokenIssuer& value) { m_authorizedTokenIssuerListHasBeenSet = true; m_authorizedTokenIssuerList.push_back(value); return *this; }
    inline RedshiftIdcApplication& AddAuthorizedTokenIssuerList(AuthorizedTokenIssuer&& value) { m_authorizedTokenIssuerListHasBeenSet = true; m_authorizedTokenIssuerList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of service integrations for the Redshift IAM Identity Center
     * application.</p>
     */
    inline const Aws::Vector<ServiceIntegrationsUnion>& GetServiceIntegrations() const{ return m_serviceIntegrations; }
    inline bool ServiceIntegrationsHasBeenSet() const { return m_serviceIntegrationsHasBeenSet; }
    inline void SetServiceIntegrations(const Aws::Vector<ServiceIntegrationsUnion>& value) { m_serviceIntegrationsHasBeenSet = true; m_serviceIntegrations = value; }
    inline void SetServiceIntegrations(Aws::Vector<ServiceIntegrationsUnion>&& value) { m_serviceIntegrationsHasBeenSet = true; m_serviceIntegrations = std::move(value); }
    inline RedshiftIdcApplication& WithServiceIntegrations(const Aws::Vector<ServiceIntegrationsUnion>& value) { SetServiceIntegrations(value); return *this;}
    inline RedshiftIdcApplication& WithServiceIntegrations(Aws::Vector<ServiceIntegrationsUnion>&& value) { SetServiceIntegrations(std::move(value)); return *this;}
    inline RedshiftIdcApplication& AddServiceIntegrations(const ServiceIntegrationsUnion& value) { m_serviceIntegrationsHasBeenSet = true; m_serviceIntegrations.push_back(value); return *this; }
    inline RedshiftIdcApplication& AddServiceIntegrations(ServiceIntegrationsUnion&& value) { m_serviceIntegrationsHasBeenSet = true; m_serviceIntegrations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_idcInstanceArn;
    bool m_idcInstanceArnHasBeenSet = false;

    Aws::String m_redshiftIdcApplicationName;
    bool m_redshiftIdcApplicationNameHasBeenSet = false;

    Aws::String m_redshiftIdcApplicationArn;
    bool m_redshiftIdcApplicationArnHasBeenSet = false;

    Aws::String m_identityNamespace;
    bool m_identityNamespaceHasBeenSet = false;

    Aws::String m_idcDisplayName;
    bool m_idcDisplayNameHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_idcManagedApplicationArn;
    bool m_idcManagedApplicationArnHasBeenSet = false;

    Aws::String m_idcOnboardStatus;
    bool m_idcOnboardStatusHasBeenSet = false;

    Aws::Vector<AuthorizedTokenIssuer> m_authorizedTokenIssuerList;
    bool m_authorizedTokenIssuerListHasBeenSet = false;

    Aws::Vector<ServiceIntegrationsUnion> m_serviceIntegrations;
    bool m_serviceIntegrationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
