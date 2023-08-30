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
   * <p>Summary description of the Amazon Web Services Private CA AD connectors
   * belonging to an Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/ConnectorSummary">AWS
   * API Reference</a></p>
   */
  class ConnectorSummary
  {
  public:
    AWS_PCACONNECTORAD_API ConnectorSummary();
    AWS_PCACONNECTORAD_API ConnectorSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API ConnectorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateConnector.html">CreateConnector</a>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateConnector.html">CreateConnector</a>.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateConnector.html">CreateConnector</a>.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateConnector.html">CreateConnector</a>.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateConnector.html">CreateConnector</a>.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateConnector.html">CreateConnector</a>.</p>
     */
    inline ConnectorSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateConnector.html">CreateConnector</a>.</p>
     */
    inline ConnectorSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateConnector.html">CreateConnector</a>.</p>
     */
    inline ConnectorSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority being used.</p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority being used.</p>
     */
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority being used.</p>
     */
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority being used.</p>
     */
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority being used.</p>
     */
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority being used.</p>
     */
    inline ConnectorSummary& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority being used.</p>
     */
    inline ConnectorSummary& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority being used.</p>
     */
    inline ConnectorSummary& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}


    /**
     * <p>Certificate enrollment endpoint for Active Directory domain-joined objects to
     * request certificates.</p>
     */
    inline const Aws::String& GetCertificateEnrollmentPolicyServerEndpoint() const{ return m_certificateEnrollmentPolicyServerEndpoint; }

    /**
     * <p>Certificate enrollment endpoint for Active Directory domain-joined objects to
     * request certificates.</p>
     */
    inline bool CertificateEnrollmentPolicyServerEndpointHasBeenSet() const { return m_certificateEnrollmentPolicyServerEndpointHasBeenSet; }

    /**
     * <p>Certificate enrollment endpoint for Active Directory domain-joined objects to
     * request certificates.</p>
     */
    inline void SetCertificateEnrollmentPolicyServerEndpoint(const Aws::String& value) { m_certificateEnrollmentPolicyServerEndpointHasBeenSet = true; m_certificateEnrollmentPolicyServerEndpoint = value; }

    /**
     * <p>Certificate enrollment endpoint for Active Directory domain-joined objects to
     * request certificates.</p>
     */
    inline void SetCertificateEnrollmentPolicyServerEndpoint(Aws::String&& value) { m_certificateEnrollmentPolicyServerEndpointHasBeenSet = true; m_certificateEnrollmentPolicyServerEndpoint = std::move(value); }

    /**
     * <p>Certificate enrollment endpoint for Active Directory domain-joined objects to
     * request certificates.</p>
     */
    inline void SetCertificateEnrollmentPolicyServerEndpoint(const char* value) { m_certificateEnrollmentPolicyServerEndpointHasBeenSet = true; m_certificateEnrollmentPolicyServerEndpoint.assign(value); }

    /**
     * <p>Certificate enrollment endpoint for Active Directory domain-joined objects to
     * request certificates.</p>
     */
    inline ConnectorSummary& WithCertificateEnrollmentPolicyServerEndpoint(const Aws::String& value) { SetCertificateEnrollmentPolicyServerEndpoint(value); return *this;}

    /**
     * <p>Certificate enrollment endpoint for Active Directory domain-joined objects to
     * request certificates.</p>
     */
    inline ConnectorSummary& WithCertificateEnrollmentPolicyServerEndpoint(Aws::String&& value) { SetCertificateEnrollmentPolicyServerEndpoint(std::move(value)); return *this;}

    /**
     * <p>Certificate enrollment endpoint for Active Directory domain-joined objects to
     * request certificates.</p>
     */
    inline ConnectorSummary& WithCertificateEnrollmentPolicyServerEndpoint(const char* value) { SetCertificateEnrollmentPolicyServerEndpoint(value); return *this;}


    /**
     * <p>The date and time that the connector was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the connector was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time that the connector was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time that the connector was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the connector was created.</p>
     */
    inline ConnectorSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the connector was created.</p>
     */
    inline ConnectorSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The identifier of the Active Directory.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the Active Directory.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the Active Directory.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the Active Directory.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the Active Directory.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the Active Directory.</p>
     */
    inline ConnectorSummary& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the Active Directory.</p>
     */
    inline ConnectorSummary& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Active Directory.</p>
     */
    inline ConnectorSummary& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>Status of the connector. Status can be creating, active, deleting, or
     * failed.</p>
     */
    inline const ConnectorStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the connector. Status can be creating, active, deleting, or
     * failed.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of the connector. Status can be creating, active, deleting, or
     * failed.</p>
     */
    inline void SetStatus(const ConnectorStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of the connector. Status can be creating, active, deleting, or
     * failed.</p>
     */
    inline void SetStatus(ConnectorStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of the connector. Status can be creating, active, deleting, or
     * failed.</p>
     */
    inline ConnectorSummary& WithStatus(const ConnectorStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the connector. Status can be creating, active, deleting, or
     * failed.</p>
     */
    inline ConnectorSummary& WithStatus(ConnectorStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Additional information about the connector status if the status is
     * failed.</p>
     */
    inline const ConnectorStatusReason& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>Additional information about the connector status if the status is
     * failed.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>Additional information about the connector status if the status is
     * failed.</p>
     */
    inline void SetStatusReason(const ConnectorStatusReason& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>Additional information about the connector status if the status is
     * failed.</p>
     */
    inline void SetStatusReason(ConnectorStatusReason&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>Additional information about the connector status if the status is
     * failed.</p>
     */
    inline ConnectorSummary& WithStatusReason(const ConnectorStatusReason& value) { SetStatusReason(value); return *this;}

    /**
     * <p>Additional information about the connector status if the status is
     * failed.</p>
     */
    inline ConnectorSummary& WithStatusReason(ConnectorStatusReason&& value) { SetStatusReason(std::move(value)); return *this;}


    /**
     * <p>The date and time that the connector was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time that the connector was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The date and time that the connector was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The date and time that the connector was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The date and time that the connector was updated.</p>
     */
    inline ConnectorSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time that the connector was updated.</p>
     */
    inline ConnectorSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>Information of the VPC and security group(s) used with the connector.</p>
     */
    inline const VpcInformation& GetVpcInformation() const{ return m_vpcInformation; }

    /**
     * <p>Information of the VPC and security group(s) used with the connector.</p>
     */
    inline bool VpcInformationHasBeenSet() const { return m_vpcInformationHasBeenSet; }

    /**
     * <p>Information of the VPC and security group(s) used with the connector.</p>
     */
    inline void SetVpcInformation(const VpcInformation& value) { m_vpcInformationHasBeenSet = true; m_vpcInformation = value; }

    /**
     * <p>Information of the VPC and security group(s) used with the connector.</p>
     */
    inline void SetVpcInformation(VpcInformation&& value) { m_vpcInformationHasBeenSet = true; m_vpcInformation = std::move(value); }

    /**
     * <p>Information of the VPC and security group(s) used with the connector.</p>
     */
    inline ConnectorSummary& WithVpcInformation(const VpcInformation& value) { SetVpcInformation(value); return *this;}

    /**
     * <p>Information of the VPC and security group(s) used with the connector.</p>
     */
    inline ConnectorSummary& WithVpcInformation(VpcInformation&& value) { SetVpcInformation(std::move(value)); return *this;}

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
