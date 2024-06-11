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
   * <p>Lists the Amazon Web Services Private CA SCEP connectors belonging to your
   * Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-scep-2018-05-10/ConnectorSummary">AWS
   * API Reference</a></p>
   */
  class ConnectorSummary
  {
  public:
    AWS_PCACONNECTORSCEP_API ConnectorSummary();
    AWS_PCACONNECTORSCEP_API ConnectorSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORSCEP_API ConnectorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORSCEP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline ConnectorSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline ConnectorSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline ConnectorSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the connector's associated certificate
     * authority.</p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector's associated certificate
     * authority.</p>
     */
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector's associated certificate
     * authority.</p>
     */
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector's associated certificate
     * authority.</p>
     */
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector's associated certificate
     * authority.</p>
     */
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector's associated certificate
     * authority.</p>
     */
    inline ConnectorSummary& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the connector's associated certificate
     * authority.</p>
     */
    inline ConnectorSummary& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the connector's associated certificate
     * authority.</p>
     */
    inline ConnectorSummary& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}


    /**
     * <p>The connector type.</p>
     */
    inline const ConnectorType& GetType() const{ return m_type; }

    /**
     * <p>The connector type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The connector type.</p>
     */
    inline void SetType(const ConnectorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The connector type.</p>
     */
    inline void SetType(ConnectorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The connector type.</p>
     */
    inline ConnectorSummary& WithType(const ConnectorType& value) { SetType(value); return *this;}

    /**
     * <p>The connector type.</p>
     */
    inline ConnectorSummary& WithType(ConnectorType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Contains settings relevant to the mobile device management system that you
     * chose for the connector. If you didn't configure
     * <code>MobileDeviceManagement</code>, then the connector is for general-purpose
     * use and this object is empty.</p>
     */
    inline const MobileDeviceManagement& GetMobileDeviceManagement() const{ return m_mobileDeviceManagement; }

    /**
     * <p>Contains settings relevant to the mobile device management system that you
     * chose for the connector. If you didn't configure
     * <code>MobileDeviceManagement</code>, then the connector is for general-purpose
     * use and this object is empty.</p>
     */
    inline bool MobileDeviceManagementHasBeenSet() const { return m_mobileDeviceManagementHasBeenSet; }

    /**
     * <p>Contains settings relevant to the mobile device management system that you
     * chose for the connector. If you didn't configure
     * <code>MobileDeviceManagement</code>, then the connector is for general-purpose
     * use and this object is empty.</p>
     */
    inline void SetMobileDeviceManagement(const MobileDeviceManagement& value) { m_mobileDeviceManagementHasBeenSet = true; m_mobileDeviceManagement = value; }

    /**
     * <p>Contains settings relevant to the mobile device management system that you
     * chose for the connector. If you didn't configure
     * <code>MobileDeviceManagement</code>, then the connector is for general-purpose
     * use and this object is empty.</p>
     */
    inline void SetMobileDeviceManagement(MobileDeviceManagement&& value) { m_mobileDeviceManagementHasBeenSet = true; m_mobileDeviceManagement = std::move(value); }

    /**
     * <p>Contains settings relevant to the mobile device management system that you
     * chose for the connector. If you didn't configure
     * <code>MobileDeviceManagement</code>, then the connector is for general-purpose
     * use and this object is empty.</p>
     */
    inline ConnectorSummary& WithMobileDeviceManagement(const MobileDeviceManagement& value) { SetMobileDeviceManagement(value); return *this;}

    /**
     * <p>Contains settings relevant to the mobile device management system that you
     * chose for the connector. If you didn't configure
     * <code>MobileDeviceManagement</code>, then the connector is for general-purpose
     * use and this object is empty.</p>
     */
    inline ConnectorSummary& WithMobileDeviceManagement(MobileDeviceManagement&& value) { SetMobileDeviceManagement(std::move(value)); return *this;}


    /**
     * <p>Contains OpenID Connect (OIDC) parameters for use with Microsoft Intune.</p>
     */
    inline const OpenIdConfiguration& GetOpenIdConfiguration() const{ return m_openIdConfiguration; }

    /**
     * <p>Contains OpenID Connect (OIDC) parameters for use with Microsoft Intune.</p>
     */
    inline bool OpenIdConfigurationHasBeenSet() const { return m_openIdConfigurationHasBeenSet; }

    /**
     * <p>Contains OpenID Connect (OIDC) parameters for use with Microsoft Intune.</p>
     */
    inline void SetOpenIdConfiguration(const OpenIdConfiguration& value) { m_openIdConfigurationHasBeenSet = true; m_openIdConfiguration = value; }

    /**
     * <p>Contains OpenID Connect (OIDC) parameters for use with Microsoft Intune.</p>
     */
    inline void SetOpenIdConfiguration(OpenIdConfiguration&& value) { m_openIdConfigurationHasBeenSet = true; m_openIdConfiguration = std::move(value); }

    /**
     * <p>Contains OpenID Connect (OIDC) parameters for use with Microsoft Intune.</p>
     */
    inline ConnectorSummary& WithOpenIdConfiguration(const OpenIdConfiguration& value) { SetOpenIdConfiguration(value); return *this;}

    /**
     * <p>Contains OpenID Connect (OIDC) parameters for use with Microsoft Intune.</p>
     */
    inline ConnectorSummary& WithOpenIdConfiguration(OpenIdConfiguration&& value) { SetOpenIdConfiguration(std::move(value)); return *this;}


    /**
     * <p>The connector's status. Status can be creating, active, deleting, or
     * failed.</p>
     */
    inline const ConnectorStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The connector's status. Status can be creating, active, deleting, or
     * failed.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The connector's status. Status can be creating, active, deleting, or
     * failed.</p>
     */
    inline void SetStatus(const ConnectorStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The connector's status. Status can be creating, active, deleting, or
     * failed.</p>
     */
    inline void SetStatus(ConnectorStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The connector's status. Status can be creating, active, deleting, or
     * failed.</p>
     */
    inline ConnectorSummary& WithStatus(const ConnectorStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The connector's status. Status can be creating, active, deleting, or
     * failed.</p>
     */
    inline ConnectorSummary& WithStatus(ConnectorStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Information about why connector creation failed, if status is
     * <code>FAILED</code>.</p>
     */
    inline const ConnectorStatusReason& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>Information about why connector creation failed, if status is
     * <code>FAILED</code>.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>Information about why connector creation failed, if status is
     * <code>FAILED</code>.</p>
     */
    inline void SetStatusReason(const ConnectorStatusReason& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>Information about why connector creation failed, if status is
     * <code>FAILED</code>.</p>
     */
    inline void SetStatusReason(ConnectorStatusReason&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>Information about why connector creation failed, if status is
     * <code>FAILED</code>.</p>
     */
    inline ConnectorSummary& WithStatusReason(const ConnectorStatusReason& value) { SetStatusReason(value); return *this;}

    /**
     * <p>Information about why connector creation failed, if status is
     * <code>FAILED</code>.</p>
     */
    inline ConnectorSummary& WithStatusReason(ConnectorStatusReason&& value) { SetStatusReason(std::move(value)); return *this;}


    /**
     * <p>The connector's HTTPS public SCEP URL.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The connector's HTTPS public SCEP URL.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The connector's HTTPS public SCEP URL.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The connector's HTTPS public SCEP URL.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The connector's HTTPS public SCEP URL.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The connector's HTTPS public SCEP URL.</p>
     */
    inline ConnectorSummary& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The connector's HTTPS public SCEP URL.</p>
     */
    inline ConnectorSummary& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The connector's HTTPS public SCEP URL.</p>
     */
    inline ConnectorSummary& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The date and time that the challenge was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the challenge was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time that the challenge was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time that the challenge was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the challenge was created.</p>
     */
    inline ConnectorSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the challenge was created.</p>
     */
    inline ConnectorSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The date and time that the challenge was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time that the challenge was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The date and time that the challenge was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The date and time that the challenge was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The date and time that the challenge was updated.</p>
     */
    inline ConnectorSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time that the challenge was updated.</p>
     */
    inline ConnectorSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

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
