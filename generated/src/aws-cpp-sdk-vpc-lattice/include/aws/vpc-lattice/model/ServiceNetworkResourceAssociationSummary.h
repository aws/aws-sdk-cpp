/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/vpc-lattice/model/DnsEntry.h>
#include <aws/vpc-lattice/model/ServiceNetworkResourceAssociationStatus.h>
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
namespace VPCLattice
{
namespace Model
{

  /**
   * <p>Summary information about an association between a service network and a
   * resource configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/ServiceNetworkResourceAssociationSummary">AWS
   * API Reference</a></p>
   */
  class ServiceNetworkResourceAssociationSummary
  {
  public:
    AWS_VPCLATTICE_API ServiceNetworkResourceAssociationSummary() = default;
    AWS_VPCLATTICE_API ServiceNetworkResourceAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API ServiceNetworkResourceAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ServiceNetworkResourceAssociationSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the association was created, in ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ServiceNetworkResourceAssociationSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account that created the association.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    ServiceNetworkResourceAssociationSummary& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS entry for the service.</p>
     */
    inline const DnsEntry& GetDnsEntry() const { return m_dnsEntry; }
    inline bool DnsEntryHasBeenSet() const { return m_dnsEntryHasBeenSet; }
    template<typename DnsEntryT = DnsEntry>
    void SetDnsEntry(DnsEntryT&& value) { m_dnsEntryHasBeenSet = true; m_dnsEntry = std::forward<DnsEntryT>(value); }
    template<typename DnsEntryT = DnsEntry>
    ServiceNetworkResourceAssociationSummary& WithDnsEntry(DnsEntryT&& value) { SetDnsEntry(std::forward<DnsEntryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure code.</p>
     */
    inline const Aws::String& GetFailureCode() const { return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    template<typename FailureCodeT = Aws::String>
    void SetFailureCode(FailureCodeT&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::forward<FailureCodeT>(value); }
    template<typename FailureCodeT = Aws::String>
    ServiceNetworkResourceAssociationSummary& WithFailureCode(FailureCodeT&& value) { SetFailureCode(std::forward<FailureCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the association between the service network and resource
     * configuration.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ServiceNetworkResourceAssociationSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the association is managed by Amazon.</p>
     */
    inline bool GetIsManagedAssociation() const { return m_isManagedAssociation; }
    inline bool IsManagedAssociationHasBeenSet() const { return m_isManagedAssociationHasBeenSet; }
    inline void SetIsManagedAssociation(bool value) { m_isManagedAssociationHasBeenSet = true; m_isManagedAssociation = value; }
    inline ServiceNetworkResourceAssociationSummary& WithIsManagedAssociation(bool value) { SetIsManagedAssociation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private DNS entry for the service.</p>
     */
    inline const DnsEntry& GetPrivateDnsEntry() const { return m_privateDnsEntry; }
    inline bool PrivateDnsEntryHasBeenSet() const { return m_privateDnsEntryHasBeenSet; }
    template<typename PrivateDnsEntryT = DnsEntry>
    void SetPrivateDnsEntry(PrivateDnsEntryT&& value) { m_privateDnsEntryHasBeenSet = true; m_privateDnsEntry = std::forward<PrivateDnsEntryT>(value); }
    template<typename PrivateDnsEntryT = DnsEntry>
    ServiceNetworkResourceAssociationSummary& WithPrivateDnsEntry(PrivateDnsEntryT&& value) { SetPrivateDnsEntry(std::forward<PrivateDnsEntryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline const Aws::String& GetResourceConfigurationArn() const { return m_resourceConfigurationArn; }
    inline bool ResourceConfigurationArnHasBeenSet() const { return m_resourceConfigurationArnHasBeenSet; }
    template<typename ResourceConfigurationArnT = Aws::String>
    void SetResourceConfigurationArn(ResourceConfigurationArnT&& value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn = std::forward<ResourceConfigurationArnT>(value); }
    template<typename ResourceConfigurationArnT = Aws::String>
    ServiceNetworkResourceAssociationSummary& WithResourceConfigurationArn(ResourceConfigurationArnT&& value) { SetResourceConfigurationArn(std::forward<ResourceConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource configuration associated with the service network.</p>
     */
    inline const Aws::String& GetResourceConfigurationId() const { return m_resourceConfigurationId; }
    inline bool ResourceConfigurationIdHasBeenSet() const { return m_resourceConfigurationIdHasBeenSet; }
    template<typename ResourceConfigurationIdT = Aws::String>
    void SetResourceConfigurationId(ResourceConfigurationIdT&& value) { m_resourceConfigurationIdHasBeenSet = true; m_resourceConfigurationId = std::forward<ResourceConfigurationIdT>(value); }
    template<typename ResourceConfigurationIdT = Aws::String>
    ServiceNetworkResourceAssociationSummary& WithResourceConfigurationId(ResourceConfigurationIdT&& value) { SetResourceConfigurationId(std::forward<ResourceConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource configuration associated with the service
     * network.</p>
     */
    inline const Aws::String& GetResourceConfigurationName() const { return m_resourceConfigurationName; }
    inline bool ResourceConfigurationNameHasBeenSet() const { return m_resourceConfigurationNameHasBeenSet; }
    template<typename ResourceConfigurationNameT = Aws::String>
    void SetResourceConfigurationName(ResourceConfigurationNameT&& value) { m_resourceConfigurationNameHasBeenSet = true; m_resourceConfigurationName = std::forward<ResourceConfigurationNameT>(value); }
    template<typename ResourceConfigurationNameT = Aws::String>
    ServiceNetworkResourceAssociationSummary& WithResourceConfigurationName(ResourceConfigurationNameT&& value) { SetResourceConfigurationName(std::forward<ResourceConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service network associated with the
     * resource configuration.</p>
     */
    inline const Aws::String& GetServiceNetworkArn() const { return m_serviceNetworkArn; }
    inline bool ServiceNetworkArnHasBeenSet() const { return m_serviceNetworkArnHasBeenSet; }
    template<typename ServiceNetworkArnT = Aws::String>
    void SetServiceNetworkArn(ServiceNetworkArnT&& value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn = std::forward<ServiceNetworkArnT>(value); }
    template<typename ServiceNetworkArnT = Aws::String>
    ServiceNetworkResourceAssociationSummary& WithServiceNetworkArn(ServiceNetworkArnT&& value) { SetServiceNetworkArn(std::forward<ServiceNetworkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service network associated with the resource configuration.</p>
     */
    inline const Aws::String& GetServiceNetworkId() const { return m_serviceNetworkId; }
    inline bool ServiceNetworkIdHasBeenSet() const { return m_serviceNetworkIdHasBeenSet; }
    template<typename ServiceNetworkIdT = Aws::String>
    void SetServiceNetworkId(ServiceNetworkIdT&& value) { m_serviceNetworkIdHasBeenSet = true; m_serviceNetworkId = std::forward<ServiceNetworkIdT>(value); }
    template<typename ServiceNetworkIdT = Aws::String>
    ServiceNetworkResourceAssociationSummary& WithServiceNetworkId(ServiceNetworkIdT&& value) { SetServiceNetworkId(std::forward<ServiceNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service network associated with the resource
     * configuration.</p>
     */
    inline const Aws::String& GetServiceNetworkName() const { return m_serviceNetworkName; }
    inline bool ServiceNetworkNameHasBeenSet() const { return m_serviceNetworkNameHasBeenSet; }
    template<typename ServiceNetworkNameT = Aws::String>
    void SetServiceNetworkName(ServiceNetworkNameT&& value) { m_serviceNetworkNameHasBeenSet = true; m_serviceNetworkName = std::forward<ServiceNetworkNameT>(value); }
    template<typename ServiceNetworkNameT = Aws::String>
    ServiceNetworkResourceAssociationSummary& WithServiceNetworkName(ServiceNetworkNameT&& value) { SetServiceNetworkName(std::forward<ServiceNetworkNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the service network associated with the resource
     * configuration.</p>
     */
    inline ServiceNetworkResourceAssociationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ServiceNetworkResourceAssociationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ServiceNetworkResourceAssociationSummary& WithStatus(ServiceNetworkResourceAssociationStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    DnsEntry m_dnsEntry;
    bool m_dnsEntryHasBeenSet = false;

    Aws::String m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    bool m_isManagedAssociation{false};
    bool m_isManagedAssociationHasBeenSet = false;

    DnsEntry m_privateDnsEntry;
    bool m_privateDnsEntryHasBeenSet = false;

    Aws::String m_resourceConfigurationArn;
    bool m_resourceConfigurationArnHasBeenSet = false;

    Aws::String m_resourceConfigurationId;
    bool m_resourceConfigurationIdHasBeenSet = false;

    Aws::String m_resourceConfigurationName;
    bool m_resourceConfigurationNameHasBeenSet = false;

    Aws::String m_serviceNetworkArn;
    bool m_serviceNetworkArnHasBeenSet = false;

    Aws::String m_serviceNetworkId;
    bool m_serviceNetworkIdHasBeenSet = false;

    Aws::String m_serviceNetworkName;
    bool m_serviceNetworkNameHasBeenSet = false;

    ServiceNetworkResourceAssociationStatus m_status{ServiceNetworkResourceAssociationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
