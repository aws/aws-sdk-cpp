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
    AWS_PCACONNECTORAD_API ConnectorSummary() = default;
    AWS_PCACONNECTORAD_API ConnectorSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API ConnectorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateConnector.html">CreateConnector</a>.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ConnectorSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority being used.</p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const { return m_certificateAuthorityArn; }
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }
    template<typename CertificateAuthorityArnT = Aws::String>
    void SetCertificateAuthorityArn(CertificateAuthorityArnT&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::forward<CertificateAuthorityArnT>(value); }
    template<typename CertificateAuthorityArnT = Aws::String>
    ConnectorSummary& WithCertificateAuthorityArn(CertificateAuthorityArnT&& value) { SetCertificateAuthorityArn(std::forward<CertificateAuthorityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Certificate enrollment endpoint for Active Directory domain-joined objects to
     * request certificates.</p>
     */
    inline const Aws::String& GetCertificateEnrollmentPolicyServerEndpoint() const { return m_certificateEnrollmentPolicyServerEndpoint; }
    inline bool CertificateEnrollmentPolicyServerEndpointHasBeenSet() const { return m_certificateEnrollmentPolicyServerEndpointHasBeenSet; }
    template<typename CertificateEnrollmentPolicyServerEndpointT = Aws::String>
    void SetCertificateEnrollmentPolicyServerEndpoint(CertificateEnrollmentPolicyServerEndpointT&& value) { m_certificateEnrollmentPolicyServerEndpointHasBeenSet = true; m_certificateEnrollmentPolicyServerEndpoint = std::forward<CertificateEnrollmentPolicyServerEndpointT>(value); }
    template<typename CertificateEnrollmentPolicyServerEndpointT = Aws::String>
    ConnectorSummary& WithCertificateEnrollmentPolicyServerEndpoint(CertificateEnrollmentPolicyServerEndpointT&& value) { SetCertificateEnrollmentPolicyServerEndpoint(std::forward<CertificateEnrollmentPolicyServerEndpointT>(value)); return *this;}
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
    ConnectorSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Active Directory.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    ConnectorSummary& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the connector. Status can be creating, active, deleting, or
     * failed.</p>
     */
    inline ConnectorStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ConnectorStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ConnectorSummary& WithStatus(ConnectorStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the connector status if the status is
     * failed.</p>
     */
    inline ConnectorStatusReason GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(ConnectorStatusReason value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline ConnectorSummary& WithStatusReason(ConnectorStatusReason value) { SetStatusReason(value); return *this;}
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
    ConnectorSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information of the VPC and security group(s) used with the connector.</p>
     */
    inline const VpcInformation& GetVpcInformation() const { return m_vpcInformation; }
    inline bool VpcInformationHasBeenSet() const { return m_vpcInformationHasBeenSet; }
    template<typename VpcInformationT = VpcInformation>
    void SetVpcInformation(VpcInformationT&& value) { m_vpcInformationHasBeenSet = true; m_vpcInformation = std::forward<VpcInformationT>(value); }
    template<typename VpcInformationT = VpcInformation>
    ConnectorSummary& WithVpcInformation(VpcInformationT&& value) { SetVpcInformation(std::forward<VpcInformationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;

    Aws::String m_certificateEnrollmentPolicyServerEndpoint;
    bool m_certificateEnrollmentPolicyServerEndpointHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    ConnectorStatus m_status{ConnectorStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ConnectorStatusReason m_statusReason{ConnectorStatusReason::NOT_SET};
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    VpcInformation m_vpcInformation;
    bool m_vpcInformationHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
