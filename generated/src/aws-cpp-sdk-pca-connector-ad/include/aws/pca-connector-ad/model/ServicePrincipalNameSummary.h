/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pca-connector-ad/model/ServicePrincipalNameStatus.h>
#include <aws/pca-connector-ad/model/ServicePrincipalNameStatusReason.h>
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
   * <p>The service principal name that the connector uses to authenticate with
   * Active Directory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/ServicePrincipalNameSummary">AWS
   * API Reference</a></p>
   */
  class ServicePrincipalNameSummary
  {
  public:
    AWS_PCACONNECTORAD_API ServicePrincipalNameSummary() = default;
    AWS_PCACONNECTORAD_API ServicePrincipalNameSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API ServicePrincipalNameSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateConnector.html">CreateConnector</a>.</p>
     */
    inline const Aws::String& GetConnectorArn() const { return m_connectorArn; }
    inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }
    template<typename ConnectorArnT = Aws::String>
    void SetConnectorArn(ConnectorArnT&& value) { m_connectorArnHasBeenSet = true; m_connectorArn = std::forward<ConnectorArnT>(value); }
    template<typename ConnectorArnT = Aws::String>
    ServicePrincipalNameSummary& WithConnectorArn(ConnectorArnT&& value) { SetConnectorArn(std::forward<ConnectorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the service principal name was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ServicePrincipalNameSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateDirectoryRegistration.html">CreateDirectoryRegistration</a>.</p>
     */
    inline const Aws::String& GetDirectoryRegistrationArn() const { return m_directoryRegistrationArn; }
    inline bool DirectoryRegistrationArnHasBeenSet() const { return m_directoryRegistrationArnHasBeenSet; }
    template<typename DirectoryRegistrationArnT = Aws::String>
    void SetDirectoryRegistrationArn(DirectoryRegistrationArnT&& value) { m_directoryRegistrationArnHasBeenSet = true; m_directoryRegistrationArn = std::forward<DirectoryRegistrationArnT>(value); }
    template<typename DirectoryRegistrationArnT = Aws::String>
    ServicePrincipalNameSummary& WithDirectoryRegistrationArn(DirectoryRegistrationArnT&& value) { SetDirectoryRegistrationArn(std::forward<DirectoryRegistrationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a service principal name.</p>
     */
    inline ServicePrincipalNameStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ServicePrincipalNameStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ServicePrincipalNameSummary& WithStatus(ServicePrincipalNameStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information for the status of a service principal name if the
     * status is failed.</p>
     */
    inline ServicePrincipalNameStatusReason GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(ServicePrincipalNameStatusReason value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline ServicePrincipalNameSummary& WithStatusReason(ServicePrincipalNameStatusReason value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time when the service principal name was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    ServicePrincipalNameSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorArn;
    bool m_connectorArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_directoryRegistrationArn;
    bool m_directoryRegistrationArnHasBeenSet = false;

    ServicePrincipalNameStatus m_status{ServicePrincipalNameStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ServicePrincipalNameStatusReason m_statusReason{ServicePrincipalNameStatusReason::NOT_SET};
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
