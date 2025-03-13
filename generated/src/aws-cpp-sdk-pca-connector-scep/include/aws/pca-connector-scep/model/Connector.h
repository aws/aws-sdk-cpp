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
    AWS_PCACONNECTORSCEP_API Connector() = default;
    AWS_PCACONNECTORSCEP_API Connector(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORSCEP_API Connector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORSCEP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Connector& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority associated with
     * the connector.</p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const { return m_certificateAuthorityArn; }
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }
    template<typename CertificateAuthorityArnT = Aws::String>
    void SetCertificateAuthorityArn(CertificateAuthorityArnT&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::forward<CertificateAuthorityArnT>(value); }
    template<typename CertificateAuthorityArnT = Aws::String>
    Connector& WithCertificateAuthorityArn(CertificateAuthorityArnT&& value) { SetCertificateAuthorityArn(std::forward<CertificateAuthorityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connector type.</p>
     */
    inline ConnectorType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ConnectorType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Connector& WithType(ConnectorType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains settings relevant to the mobile device management system that you
     * chose for the connector. If you didn't configure
     * <code>MobileDeviceManagement</code>, then the connector is for general-purpose
     * use and this object is empty.</p>
     */
    inline const MobileDeviceManagement& GetMobileDeviceManagement() const { return m_mobileDeviceManagement; }
    inline bool MobileDeviceManagementHasBeenSet() const { return m_mobileDeviceManagementHasBeenSet; }
    template<typename MobileDeviceManagementT = MobileDeviceManagement>
    void SetMobileDeviceManagement(MobileDeviceManagementT&& value) { m_mobileDeviceManagementHasBeenSet = true; m_mobileDeviceManagement = std::forward<MobileDeviceManagementT>(value); }
    template<typename MobileDeviceManagementT = MobileDeviceManagement>
    Connector& WithMobileDeviceManagement(MobileDeviceManagementT&& value) { SetMobileDeviceManagement(std::forward<MobileDeviceManagementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains OpenID Connect (OIDC) parameters for use with Connector for SCEP for
     * Microsoft Intune. For more information about using Connector for SCEP for
     * Microsoft Intune, see <a
     * href="https://docs.aws.amazon.com/privateca/latest/userguide/scep-connector.htmlconnector-for-scep-intune.html">Using
     * Connector for SCEP for Microsoft Intune</a>.</p>
     */
    inline const OpenIdConfiguration& GetOpenIdConfiguration() const { return m_openIdConfiguration; }
    inline bool OpenIdConfigurationHasBeenSet() const { return m_openIdConfigurationHasBeenSet; }
    template<typename OpenIdConfigurationT = OpenIdConfiguration>
    void SetOpenIdConfiguration(OpenIdConfigurationT&& value) { m_openIdConfigurationHasBeenSet = true; m_openIdConfiguration = std::forward<OpenIdConfigurationT>(value); }
    template<typename OpenIdConfigurationT = OpenIdConfiguration>
    Connector& WithOpenIdConfiguration(OpenIdConfigurationT&& value) { SetOpenIdConfiguration(std::forward<OpenIdConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connector's status.</p>
     */
    inline ConnectorStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ConnectorStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Connector& WithStatus(ConnectorStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about why connector creation failed, if status is
     * <code>FAILED</code>.</p>
     */
    inline ConnectorStatusReason GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(ConnectorStatusReason value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline Connector& WithStatusReason(ConnectorStatusReason value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connector's HTTPS public SCEP URL.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    Connector& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the connector was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Connector& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the connector was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    Connector& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;

    ConnectorType m_type{ConnectorType::NOT_SET};
    bool m_typeHasBeenSet = false;

    MobileDeviceManagement m_mobileDeviceManagement;
    bool m_mobileDeviceManagementHasBeenSet = false;

    OpenIdConfiguration m_openIdConfiguration;
    bool m_openIdConfigurationHasBeenSet = false;

    ConnectorStatus m_status{ConnectorStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ConnectorStatusReason m_statusReason{ConnectorStatusReason::NOT_SET};
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
