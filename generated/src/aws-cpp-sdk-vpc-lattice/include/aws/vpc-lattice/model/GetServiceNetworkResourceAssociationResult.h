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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace VPCLattice
{
namespace Model
{
  class GetServiceNetworkResourceAssociationResult
  {
  public:
    AWS_VPCLATTICE_API GetServiceNetworkResourceAssociationResult() = default;
    AWS_VPCLATTICE_API GetServiceNetworkResourceAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API GetServiceNetworkResourceAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetServiceNetworkResourceAssociationResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the association was created, in ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetServiceNetworkResourceAssociationResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account that created the association.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    GetServiceNetworkResourceAssociationResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS entry for the service.</p>
     */
    inline const DnsEntry& GetDnsEntry() const { return m_dnsEntry; }
    template<typename DnsEntryT = DnsEntry>
    void SetDnsEntry(DnsEntryT&& value) { m_dnsEntryHasBeenSet = true; m_dnsEntry = std::forward<DnsEntryT>(value); }
    template<typename DnsEntryT = DnsEntry>
    GetServiceNetworkResourceAssociationResult& WithDnsEntry(DnsEntryT&& value) { SetDnsEntry(std::forward<DnsEntryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure code.</p>
     */
    inline const Aws::String& GetFailureCode() const { return m_failureCode; }
    template<typename FailureCodeT = Aws::String>
    void SetFailureCode(FailureCodeT&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::forward<FailureCodeT>(value); }
    template<typename FailureCodeT = Aws::String>
    GetServiceNetworkResourceAssociationResult& WithFailureCode(FailureCodeT&& value) { SetFailureCode(std::forward<FailureCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the association request failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    GetServiceNetworkResourceAssociationResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetServiceNetworkResourceAssociationResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the association is managed by Amazon.</p>
     */
    inline bool GetIsManagedAssociation() const { return m_isManagedAssociation; }
    inline void SetIsManagedAssociation(bool value) { m_isManagedAssociationHasBeenSet = true; m_isManagedAssociation = value; }
    inline GetServiceNetworkResourceAssociationResult& WithIsManagedAssociation(bool value) { SetIsManagedAssociation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent date and time that the association was updated, in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    GetServiceNetworkResourceAssociationResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private DNS entry for the service.</p>
     */
    inline const DnsEntry& GetPrivateDnsEntry() const { return m_privateDnsEntry; }
    template<typename PrivateDnsEntryT = DnsEntry>
    void SetPrivateDnsEntry(PrivateDnsEntryT&& value) { m_privateDnsEntryHasBeenSet = true; m_privateDnsEntry = std::forward<PrivateDnsEntryT>(value); }
    template<typename PrivateDnsEntryT = DnsEntry>
    GetServiceNetworkResourceAssociationResult& WithPrivateDnsEntry(PrivateDnsEntryT&& value) { SetPrivateDnsEntry(std::forward<PrivateDnsEntryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline const Aws::String& GetResourceConfigurationArn() const { return m_resourceConfigurationArn; }
    template<typename ResourceConfigurationArnT = Aws::String>
    void SetResourceConfigurationArn(ResourceConfigurationArnT&& value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn = std::forward<ResourceConfigurationArnT>(value); }
    template<typename ResourceConfigurationArnT = Aws::String>
    GetServiceNetworkResourceAssociationResult& WithResourceConfigurationArn(ResourceConfigurationArnT&& value) { SetResourceConfigurationArn(std::forward<ResourceConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource configuration that is associated with the service
     * network.</p>
     */
    inline const Aws::String& GetResourceConfigurationId() const { return m_resourceConfigurationId; }
    template<typename ResourceConfigurationIdT = Aws::String>
    void SetResourceConfigurationId(ResourceConfigurationIdT&& value) { m_resourceConfigurationIdHasBeenSet = true; m_resourceConfigurationId = std::forward<ResourceConfigurationIdT>(value); }
    template<typename ResourceConfigurationIdT = Aws::String>
    GetServiceNetworkResourceAssociationResult& WithResourceConfigurationId(ResourceConfigurationIdT&& value) { SetResourceConfigurationId(std::forward<ResourceConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource configuration that is associated with the service
     * network.</p>
     */
    inline const Aws::String& GetResourceConfigurationName() const { return m_resourceConfigurationName; }
    template<typename ResourceConfigurationNameT = Aws::String>
    void SetResourceConfigurationName(ResourceConfigurationNameT&& value) { m_resourceConfigurationNameHasBeenSet = true; m_resourceConfigurationName = std::forward<ResourceConfigurationNameT>(value); }
    template<typename ResourceConfigurationNameT = Aws::String>
    GetServiceNetworkResourceAssociationResult& WithResourceConfigurationName(ResourceConfigurationNameT&& value) { SetResourceConfigurationName(std::forward<ResourceConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service network that is associated with
     * the resource configuration.</p>
     */
    inline const Aws::String& GetServiceNetworkArn() const { return m_serviceNetworkArn; }
    template<typename ServiceNetworkArnT = Aws::String>
    void SetServiceNetworkArn(ServiceNetworkArnT&& value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn = std::forward<ServiceNetworkArnT>(value); }
    template<typename ServiceNetworkArnT = Aws::String>
    GetServiceNetworkResourceAssociationResult& WithServiceNetworkArn(ServiceNetworkArnT&& value) { SetServiceNetworkArn(std::forward<ServiceNetworkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service network that is associated with the resource
     * configuration.</p>
     */
    inline const Aws::String& GetServiceNetworkId() const { return m_serviceNetworkId; }
    template<typename ServiceNetworkIdT = Aws::String>
    void SetServiceNetworkId(ServiceNetworkIdT&& value) { m_serviceNetworkIdHasBeenSet = true; m_serviceNetworkId = std::forward<ServiceNetworkIdT>(value); }
    template<typename ServiceNetworkIdT = Aws::String>
    GetServiceNetworkResourceAssociationResult& WithServiceNetworkId(ServiceNetworkIdT&& value) { SetServiceNetworkId(std::forward<ServiceNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service network that is associated with the resource
     * configuration.</p>
     */
    inline const Aws::String& GetServiceNetworkName() const { return m_serviceNetworkName; }
    template<typename ServiceNetworkNameT = Aws::String>
    void SetServiceNetworkName(ServiceNetworkNameT&& value) { m_serviceNetworkNameHasBeenSet = true; m_serviceNetworkName = std::forward<ServiceNetworkNameT>(value); }
    template<typename ServiceNetworkNameT = Aws::String>
    GetServiceNetworkResourceAssociationResult& WithServiceNetworkName(ServiceNetworkNameT&& value) { SetServiceNetworkName(std::forward<ServiceNetworkNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the association.</p>
     */
    inline ServiceNetworkResourceAssociationStatus GetStatus() const { return m_status; }
    inline void SetStatus(ServiceNetworkResourceAssociationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetServiceNetworkResourceAssociationResult& WithStatus(ServiceNetworkResourceAssociationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetServiceNetworkResourceAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    bool m_isManagedAssociation{false};
    bool m_isManagedAssociationHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
