/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pca-connector-ad/model/ConnectorStatus.h>
#include <aws/pca-connector-ad/model/ConnectorStatusReason.h>
#include <aws/pca-connector-ad/model/VpcInformation.h>
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
namespace PcaConnectorAd
{
namespace Model
{

  /**
   * <p>Amazon Web Services Private CA Connector for Active Directory is a service
   * that links your Active Directory with Amazon Web Services Private CA. The
   * connector brokers the exchange of certificates from Amazon Web Services Private
   * CA to domain-joined users and machines managed with Active
   * Directory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/Connector">AWS
   * API Reference</a></p>
   */
  class Connector
  {
  public:
    AWS_PCACONNECTORAD_API Connector();
    AWS_PCACONNECTORAD_API Connector(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Connector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateConnector.html">CreateConnector</a>.
     * </p>
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
     * <p>The Amazon Resource Name (ARN) of the certificate authority being used. </p>
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
     * <p>Certificate enrollment endpoint for Active Directory domain-joined objects
     * reach out to when requesting certificates.</p>
     */
    inline const Aws::String& GetCertificateEnrollmentPolicyServerEndpoint() const{ return m_certificateEnrollmentPolicyServerEndpoint; }
    inline bool CertificateEnrollmentPolicyServerEndpointHasBeenSet() const { return m_certificateEnrollmentPolicyServerEndpointHasBeenSet; }
    inline void SetCertificateEnrollmentPolicyServerEndpoint(const Aws::String& value) { m_certificateEnrollmentPolicyServerEndpointHasBeenSet = true; m_certificateEnrollmentPolicyServerEndpoint = value; }
    inline void SetCertificateEnrollmentPolicyServerEndpoint(Aws::String&& value) { m_certificateEnrollmentPolicyServerEndpointHasBeenSet = true; m_certificateEnrollmentPolicyServerEndpoint = std::move(value); }
    inline void SetCertificateEnrollmentPolicyServerEndpoint(const char* value) { m_certificateEnrollmentPolicyServerEndpointHasBeenSet = true; m_certificateEnrollmentPolicyServerEndpoint.assign(value); }
    inline Connector& WithCertificateEnrollmentPolicyServerEndpoint(const Aws::String& value) { SetCertificateEnrollmentPolicyServerEndpoint(value); return *this;}
    inline Connector& WithCertificateEnrollmentPolicyServerEndpoint(Aws::String&& value) { SetCertificateEnrollmentPolicyServerEndpoint(std::move(value)); return *this;}
    inline Connector& WithCertificateEnrollmentPolicyServerEndpoint(const char* value) { SetCertificateEnrollmentPolicyServerEndpoint(value); return *this;}
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
     * <p>The identifier of the Active Directory.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline Connector& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline Connector& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline Connector& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the connector. Status can be creating, active, deleting, or
     * failed.</p>
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
     * <p>Additional information about the connector status if the status is
     * failed.</p>
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
     * <p>The date and time that the connector was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline Connector& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline Connector& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information of the VPC and security group(s) used with the connector.</p>
     */
    inline const VpcInformation& GetVpcInformation() const{ return m_vpcInformation; }
    inline bool VpcInformationHasBeenSet() const { return m_vpcInformationHasBeenSet; }
    inline void SetVpcInformation(const VpcInformation& value) { m_vpcInformationHasBeenSet = true; m_vpcInformation = value; }
    inline void SetVpcInformation(VpcInformation&& value) { m_vpcInformationHasBeenSet = true; m_vpcInformation = std::move(value); }
    inline Connector& WithVpcInformation(const VpcInformation& value) { SetVpcInformation(value); return *this;}
    inline Connector& WithVpcInformation(VpcInformation&& value) { SetVpcInformation(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;

    Aws::String m_certificateEnrollmentPolicyServerEndpoint;
    bool m_certificateEnrollmentPolicyServerEndpointHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    ConnectorStatus m_status;
    bool m_statusHasBeenSet = false;

    ConnectorStatusReason m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    VpcInformation m_vpcInformation;
    bool m_vpcInformationHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
