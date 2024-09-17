/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-scep/PcaConnectorScep_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pca-connector-scep/model/ConnectorType.h>
#include <aws/pca-connector-scep/model/MobileDeviceManagement.h>
#include <aws/pca-connector-scep/model/OpenIdConfiguration.h>
#include <aws/pca-connector-scep/model/ConnectorStatus.h>
#include <aws/pca-connector-scep/model/ConnectorStatusReason.h>
#include <aws/core/utils/DateTime.h>
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
namespace PcaConnectorScep
{
namespace Model
{

  /**
   * <p>Connector for SCEP is a service that links Amazon Web Services Private
   * Certificate Authority to your SCEP-enabled devices. The connector brokers the
   * exchange of certificates from Amazon Web Services Private CA to your
   * SCEP-enabled devices and mobile device management systems. The connector is a
   * complex type that contains the connector's configuration settings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-scep-2018-05-10/Connector">AWS
   * API Reference</a></p>
   */
  class Connector
  {
  public:
    AWS_PCACONNECTORSCEP_API Connector();
    AWS_PCACONNECTORSCEP_API Connector(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORSCEP_API Connector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORSCEP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Connector& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Connector& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Connector& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority associated with
     * the connector.</p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }
    inline Connector& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}
    inline Connector& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}
    inline Connector& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connector type.</p>
     */
    inline const ConnectorType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ConnectorType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ConnectorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Connector& WithType(const ConnectorType& value) { SetType(value); return *this;}
    inline Connector& WithType(ConnectorType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains settings relevant to the mobile device management system that you
     * chose for the connector. If you didn't configure
     * <code>MobileDeviceManagement</code>, then the connector is for general-purpose
     * use and this object is empty.</p>
     */
    inline const MobileDeviceManagement& GetMobileDeviceManagement() const{ return m_mobileDeviceManagement; }
    inline bool MobileDeviceManagementHasBeenSet() const { return m_mobileDeviceManagementHasBeenSet; }
    inline void SetMobileDeviceManagement(const MobileDeviceManagement& value) { m_mobileDeviceManagementHasBeenSet = true; m_mobileDeviceManagement = value; }
    inline void SetMobileDeviceManagement(MobileDeviceManagement&& value) { m_mobileDeviceManagementHasBeenSet = true; m_mobileDeviceManagement = std::move(value); }
    inline Connector& WithMobileDeviceManagement(const MobileDeviceManagement& value) { SetMobileDeviceManagement(value); return *this;}
    inline Connector& WithMobileDeviceManagement(MobileDeviceManagement&& value) { SetMobileDeviceManagement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains OpenID Connect (OIDC) parameters for use with Connector for SCEP for
     * Microsoft Intune. For more information about using Connector for SCEP for
     * Microsoft Intune, see <a
     * href="https://docs.aws.amazon.com/privateca/latest/userguide/scep-connector.htmlconnector-for-scep-intune.html">Using
     * Connector for SCEP for Microsoft Intune</a>.</p>
     */
    inline const OpenIdConfiguration& GetOpenIdConfiguration() const{ return m_openIdConfiguration; }
    inline bool OpenIdConfigurationHasBeenSet() const { return m_openIdConfigurationHasBeenSet; }
    inline void SetOpenIdConfiguration(const OpenIdConfiguration& value) { m_openIdConfigurationHasBeenSet = true; m_openIdConfiguration = value; }
    inline void SetOpenIdConfiguration(OpenIdConfiguration&& value) { m_openIdConfigurationHasBeenSet = true; m_openIdConfiguration = std::move(value); }
    inline Connector& WithOpenIdConfiguration(const OpenIdConfiguration& value) { SetOpenIdConfiguration(value); return *this;}
    inline Connector& WithOpenIdConfiguration(OpenIdConfiguration&& value) { SetOpenIdConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connector's status.</p>
     */
    inline const ConnectorStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ConnectorStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ConnectorStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Connector& WithStatus(const ConnectorStatus& value) { SetStatus(value); return *this;}
    inline Connector& WithStatus(ConnectorStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about why connector creation failed, if status is
     * <code>FAILED</code>.</p>
     */
    inline const ConnectorStatusReason& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const ConnectorStatusReason& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(ConnectorStatusReason&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline Connector& WithStatusReason(const ConnectorStatusReason& value) { SetStatusReason(value); return *this;}
    inline Connector& WithStatusReason(ConnectorStatusReason&& value) { SetStatusReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connector's HTTPS public SCEP URL.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }
    inline Connector& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline Connector& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline Connector& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the connector was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Connector& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Connector& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the connector was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline Connector& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline Connector& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;

    ConnectorType m_type;
    bool m_typeHasBeenSet = false;

    MobileDeviceManagement m_mobileDeviceManagement;
    bool m_mobileDeviceManagementHasBeenSet = false;

    OpenIdConfiguration m_openIdConfiguration;
    bool m_openIdConfigurationHasBeenSet = false;

    ConnectorStatus m_status;
    bool m_statusHasBeenSet = false;

    ConnectorStatusReason m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
