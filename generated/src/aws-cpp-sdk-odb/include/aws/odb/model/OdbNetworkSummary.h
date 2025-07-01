/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/model/ResourceStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/odb/model/ManagedServices.h>
#include <aws/odb/model/OciDnsForwardingConfig.h>
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
namespace odb
{
namespace Model
{

  /**
   * <p>Information about an ODB network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/OdbNetworkSummary">AWS
   * API Reference</a></p>
   */
  class OdbNetworkSummary
  {
  public:
    AWS_ODB_API OdbNetworkSummary() = default;
    AWS_ODB_API OdbNetworkSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API OdbNetworkSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the ODB network.</p>
     */
    inline const Aws::String& GetOdbNetworkId() const { return m_odbNetworkId; }
    inline bool OdbNetworkIdHasBeenSet() const { return m_odbNetworkIdHasBeenSet; }
    template<typename OdbNetworkIdT = Aws::String>
    void SetOdbNetworkId(OdbNetworkIdT&& value) { m_odbNetworkIdHasBeenSet = true; m_odbNetworkId = std::forward<OdbNetworkIdT>(value); }
    template<typename OdbNetworkIdT = Aws::String>
    OdbNetworkSummary& WithOdbNetworkId(OdbNetworkIdT&& value) { SetOdbNetworkId(std::forward<OdbNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name of the ODB network.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    OdbNetworkSummary& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the ODB network.</p>
     */
    inline ResourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline OdbNetworkSummary& WithStatus(ResourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the current status of the ODB network.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    OdbNetworkSummary& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ODB network.</p>
     */
    inline const Aws::String& GetOdbNetworkArn() const { return m_odbNetworkArn; }
    inline bool OdbNetworkArnHasBeenSet() const { return m_odbNetworkArnHasBeenSet; }
    template<typename OdbNetworkArnT = Aws::String>
    void SetOdbNetworkArn(OdbNetworkArnT&& value) { m_odbNetworkArnHasBeenSet = true; m_odbNetworkArn = std::forward<OdbNetworkArnT>(value); }
    template<typename OdbNetworkArnT = Aws::String>
    OdbNetworkSummary& WithOdbNetworkArn(OdbNetworkArnT&& value) { SetOdbNetworkArn(std::forward<OdbNetworkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Availability Zone (AZ) where the ODB network is
     * located.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    OdbNetworkSummary& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AZ ID of the AZ where the ODB network is located.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    OdbNetworkSummary& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIDR range of the client subnet in the ODB network.</p>
     */
    inline const Aws::String& GetClientSubnetCidr() const { return m_clientSubnetCidr; }
    inline bool ClientSubnetCidrHasBeenSet() const { return m_clientSubnetCidrHasBeenSet; }
    template<typename ClientSubnetCidrT = Aws::String>
    void SetClientSubnetCidr(ClientSubnetCidrT&& value) { m_clientSubnetCidrHasBeenSet = true; m_clientSubnetCidr = std::forward<ClientSubnetCidrT>(value); }
    template<typename ClientSubnetCidrT = Aws::String>
    OdbNetworkSummary& WithClientSubnetCidr(ClientSubnetCidrT&& value) { SetClientSubnetCidr(std::forward<ClientSubnetCidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIDR range of the backup subnet in the ODB network.</p>
     */
    inline const Aws::String& GetBackupSubnetCidr() const { return m_backupSubnetCidr; }
    inline bool BackupSubnetCidrHasBeenSet() const { return m_backupSubnetCidrHasBeenSet; }
    template<typename BackupSubnetCidrT = Aws::String>
    void SetBackupSubnetCidr(BackupSubnetCidrT&& value) { m_backupSubnetCidrHasBeenSet = true; m_backupSubnetCidr = std::forward<BackupSubnetCidrT>(value); }
    template<typename BackupSubnetCidrT = Aws::String>
    OdbNetworkSummary& WithBackupSubnetCidr(BackupSubnetCidrT&& value) { SetBackupSubnetCidr(std::forward<BackupSubnetCidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name for the resources in the ODB network.</p>
     */
    inline const Aws::String& GetCustomDomainName() const { return m_customDomainName; }
    inline bool CustomDomainNameHasBeenSet() const { return m_customDomainNameHasBeenSet; }
    template<typename CustomDomainNameT = Aws::String>
    void SetCustomDomainName(CustomDomainNameT&& value) { m_customDomainNameHasBeenSet = true; m_customDomainName = std::forward<CustomDomainNameT>(value); }
    template<typename CustomDomainNameT = Aws::String>
    OdbNetworkSummary& WithCustomDomainName(CustomDomainNameT&& value) { SetCustomDomainName(std::forward<CustomDomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS prefix to the default DNS domain name. The default DNS domain name is
     * oraclevcn.com.</p>
     */
    inline const Aws::String& GetDefaultDnsPrefix() const { return m_defaultDnsPrefix; }
    inline bool DefaultDnsPrefixHasBeenSet() const { return m_defaultDnsPrefixHasBeenSet; }
    template<typename DefaultDnsPrefixT = Aws::String>
    void SetDefaultDnsPrefix(DefaultDnsPrefixT&& value) { m_defaultDnsPrefixHasBeenSet = true; m_defaultDnsPrefix = std::forward<DefaultDnsPrefixT>(value); }
    template<typename DefaultDnsPrefixT = Aws::String>
    OdbNetworkSummary& WithDefaultDnsPrefix(DefaultDnsPrefixT&& value) { SetDefaultDnsPrefix(std::forward<DefaultDnsPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of CIDR ranges from the peered VPC that are allowed access to the
     * ODB network.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPeeredCidrs() const { return m_peeredCidrs; }
    inline bool PeeredCidrsHasBeenSet() const { return m_peeredCidrsHasBeenSet; }
    template<typename PeeredCidrsT = Aws::Vector<Aws::String>>
    void SetPeeredCidrs(PeeredCidrsT&& value) { m_peeredCidrsHasBeenSet = true; m_peeredCidrs = std::forward<PeeredCidrsT>(value); }
    template<typename PeeredCidrsT = Aws::Vector<Aws::String>>
    OdbNetworkSummary& WithPeeredCidrs(PeeredCidrsT&& value) { SetPeeredCidrs(std::forward<PeeredCidrsT>(value)); return *this;}
    template<typename PeeredCidrsT = Aws::String>
    OdbNetworkSummary& AddPeeredCidrs(PeeredCidrsT&& value) { m_peeredCidrsHasBeenSet = true; m_peeredCidrs.emplace_back(std::forward<PeeredCidrsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the OCI network anchor for the ODB network.</p>
     */
    inline const Aws::String& GetOciNetworkAnchorId() const { return m_ociNetworkAnchorId; }
    inline bool OciNetworkAnchorIdHasBeenSet() const { return m_ociNetworkAnchorIdHasBeenSet; }
    template<typename OciNetworkAnchorIdT = Aws::String>
    void SetOciNetworkAnchorId(OciNetworkAnchorIdT&& value) { m_ociNetworkAnchorIdHasBeenSet = true; m_ociNetworkAnchorId = std::forward<OciNetworkAnchorIdT>(value); }
    template<typename OciNetworkAnchorIdT = Aws::String>
    OdbNetworkSummary& WithOciNetworkAnchorId(OciNetworkAnchorIdT&& value) { SetOciNetworkAnchorId(std::forward<OciNetworkAnchorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the OCI network anchor for the ODB network.</p>
     */
    inline const Aws::String& GetOciNetworkAnchorUrl() const { return m_ociNetworkAnchorUrl; }
    inline bool OciNetworkAnchorUrlHasBeenSet() const { return m_ociNetworkAnchorUrlHasBeenSet; }
    template<typename OciNetworkAnchorUrlT = Aws::String>
    void SetOciNetworkAnchorUrl(OciNetworkAnchorUrlT&& value) { m_ociNetworkAnchorUrlHasBeenSet = true; m_ociNetworkAnchorUrl = std::forward<OciNetworkAnchorUrlT>(value); }
    template<typename OciNetworkAnchorUrlT = Aws::String>
    OdbNetworkSummary& WithOciNetworkAnchorUrl(OciNetworkAnchorUrlT&& value) { SetOciNetworkAnchorUrl(std::forward<OciNetworkAnchorUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the OCI resource anchor associated with the ODB network.</p>
     */
    inline const Aws::String& GetOciResourceAnchorName() const { return m_ociResourceAnchorName; }
    inline bool OciResourceAnchorNameHasBeenSet() const { return m_ociResourceAnchorNameHasBeenSet; }
    template<typename OciResourceAnchorNameT = Aws::String>
    void SetOciResourceAnchorName(OciResourceAnchorNameT&& value) { m_ociResourceAnchorNameHasBeenSet = true; m_ociResourceAnchorName = std::forward<OciResourceAnchorNameT>(value); }
    template<typename OciResourceAnchorNameT = Aws::String>
    OdbNetworkSummary& WithOciResourceAnchorName(OciResourceAnchorNameT&& value) { SetOciResourceAnchorName(std::forward<OciResourceAnchorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Oracle Cloud ID (OCID) for the Virtual Cloud Network (VCN) associated
     * with the ODB network.</p>
     */
    inline const Aws::String& GetOciVcnId() const { return m_ociVcnId; }
    inline bool OciVcnIdHasBeenSet() const { return m_ociVcnIdHasBeenSet; }
    template<typename OciVcnIdT = Aws::String>
    void SetOciVcnId(OciVcnIdT&& value) { m_ociVcnIdHasBeenSet = true; m_ociVcnId = std::forward<OciVcnIdT>(value); }
    template<typename OciVcnIdT = Aws::String>
    OdbNetworkSummary& WithOciVcnId(OciVcnIdT&& value) { SetOciVcnId(std::forward<OciVcnIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for the VCN that's associated with the ODB network.</p>
     */
    inline const Aws::String& GetOciVcnUrl() const { return m_ociVcnUrl; }
    inline bool OciVcnUrlHasBeenSet() const { return m_ociVcnUrlHasBeenSet; }
    template<typename OciVcnUrlT = Aws::String>
    void SetOciVcnUrl(OciVcnUrlT&& value) { m_ociVcnUrlHasBeenSet = true; m_ociVcnUrl = std::forward<OciVcnUrlT>(value); }
    template<typename OciVcnUrlT = Aws::String>
    OdbNetworkSummary& WithOciVcnUrl(OciVcnUrlT&& value) { SetOciVcnUrl(std::forward<OciVcnUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS resolver endpoint in OCI for forwarding DNS queries for the
     * ociPrivateZone domain.</p>
     */
    inline const Aws::Vector<OciDnsForwardingConfig>& GetOciDnsForwardingConfigs() const { return m_ociDnsForwardingConfigs; }
    inline bool OciDnsForwardingConfigsHasBeenSet() const { return m_ociDnsForwardingConfigsHasBeenSet; }
    template<typename OciDnsForwardingConfigsT = Aws::Vector<OciDnsForwardingConfig>>
    void SetOciDnsForwardingConfigs(OciDnsForwardingConfigsT&& value) { m_ociDnsForwardingConfigsHasBeenSet = true; m_ociDnsForwardingConfigs = std::forward<OciDnsForwardingConfigsT>(value); }
    template<typename OciDnsForwardingConfigsT = Aws::Vector<OciDnsForwardingConfig>>
    OdbNetworkSummary& WithOciDnsForwardingConfigs(OciDnsForwardingConfigsT&& value) { SetOciDnsForwardingConfigs(std::forward<OciDnsForwardingConfigsT>(value)); return *this;}
    template<typename OciDnsForwardingConfigsT = OciDnsForwardingConfig>
    OdbNetworkSummary& AddOciDnsForwardingConfigs(OciDnsForwardingConfigsT&& value) { m_ociDnsForwardingConfigsHasBeenSet = true; m_ociDnsForwardingConfigs.emplace_back(std::forward<OciDnsForwardingConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the ODB network was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    OdbNetworkSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of progress made on the current operation on the ODB network,
     * expressed as a percentage.</p>
     */
    inline double GetPercentProgress() const { return m_percentProgress; }
    inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }
    inline void SetPercentProgress(double value) { m_percentProgressHasBeenSet = true; m_percentProgress = value; }
    inline OdbNetworkSummary& WithPercentProgress(double value) { SetPercentProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed services configuration for the ODB network.</p>
     */
    inline const ManagedServices& GetManagedServices() const { return m_managedServices; }
    inline bool ManagedServicesHasBeenSet() const { return m_managedServicesHasBeenSet; }
    template<typename ManagedServicesT = ManagedServices>
    void SetManagedServices(ManagedServicesT&& value) { m_managedServicesHasBeenSet = true; m_managedServices = std::forward<ManagedServicesT>(value); }
    template<typename ManagedServicesT = ManagedServices>
    OdbNetworkSummary& WithManagedServices(ManagedServicesT&& value) { SetManagedServices(std::forward<ManagedServicesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_odbNetworkId;
    bool m_odbNetworkIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    ResourceStatus m_status{ResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_odbNetworkArn;
    bool m_odbNetworkArnHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::String m_clientSubnetCidr;
    bool m_clientSubnetCidrHasBeenSet = false;

    Aws::String m_backupSubnetCidr;
    bool m_backupSubnetCidrHasBeenSet = false;

    Aws::String m_customDomainName;
    bool m_customDomainNameHasBeenSet = false;

    Aws::String m_defaultDnsPrefix;
    bool m_defaultDnsPrefixHasBeenSet = false;

    Aws::Vector<Aws::String> m_peeredCidrs;
    bool m_peeredCidrsHasBeenSet = false;

    Aws::String m_ociNetworkAnchorId;
    bool m_ociNetworkAnchorIdHasBeenSet = false;

    Aws::String m_ociNetworkAnchorUrl;
    bool m_ociNetworkAnchorUrlHasBeenSet = false;

    Aws::String m_ociResourceAnchorName;
    bool m_ociResourceAnchorNameHasBeenSet = false;

    Aws::String m_ociVcnId;
    bool m_ociVcnIdHasBeenSet = false;

    Aws::String m_ociVcnUrl;
    bool m_ociVcnUrlHasBeenSet = false;

    Aws::Vector<OciDnsForwardingConfig> m_ociDnsForwardingConfigs;
    bool m_ociDnsForwardingConfigsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    double m_percentProgress{0.0};
    bool m_percentProgressHasBeenSet = false;

    ManagedServices m_managedServices;
    bool m_managedServicesHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
