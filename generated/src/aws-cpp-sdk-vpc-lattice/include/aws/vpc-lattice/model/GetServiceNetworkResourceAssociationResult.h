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
    AWS_VPCLATTICE_API GetServiceNetworkResourceAssociationResult();
    AWS_VPCLATTICE_API GetServiceNetworkResourceAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API GetServiceNetworkResourceAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetServiceNetworkResourceAssociationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the association was created, in ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetServiceNetworkResourceAssociationResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account that created the association.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetServiceNetworkResourceAssociationResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS entry for the service.</p>
     */
    inline const DnsEntry& GetDnsEntry() const{ return m_dnsEntry; }
    inline void SetDnsEntry(const DnsEntry& value) { m_dnsEntry = value; }
    inline void SetDnsEntry(DnsEntry&& value) { m_dnsEntry = std::move(value); }
    inline GetServiceNetworkResourceAssociationResult& WithDnsEntry(const DnsEntry& value) { SetDnsEntry(value); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithDnsEntry(DnsEntry&& value) { SetDnsEntry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure code.</p>
     */
    inline const Aws::String& GetFailureCode() const{ return m_failureCode; }
    inline void SetFailureCode(const Aws::String& value) { m_failureCode = value; }
    inline void SetFailureCode(Aws::String&& value) { m_failureCode = std::move(value); }
    inline void SetFailureCode(const char* value) { m_failureCode.assign(value); }
    inline GetServiceNetworkResourceAssociationResult& WithFailureCode(const Aws::String& value) { SetFailureCode(value); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithFailureCode(Aws::String&& value) { SetFailureCode(std::move(value)); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithFailureCode(const char* value) { SetFailureCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the association request failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline GetServiceNetworkResourceAssociationResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetServiceNetworkResourceAssociationResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the association is managed by Amazon.</p>
     */
    inline bool GetIsManagedAssociation() const{ return m_isManagedAssociation; }
    inline void SetIsManagedAssociation(bool value) { m_isManagedAssociation = value; }
    inline GetServiceNetworkResourceAssociationResult& WithIsManagedAssociation(bool value) { SetIsManagedAssociation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent date and time that the association was updated, in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline GetServiceNetworkResourceAssociationResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private DNS entry for the service.</p>
     */
    inline const DnsEntry& GetPrivateDnsEntry() const{ return m_privateDnsEntry; }
    inline void SetPrivateDnsEntry(const DnsEntry& value) { m_privateDnsEntry = value; }
    inline void SetPrivateDnsEntry(DnsEntry&& value) { m_privateDnsEntry = std::move(value); }
    inline GetServiceNetworkResourceAssociationResult& WithPrivateDnsEntry(const DnsEntry& value) { SetPrivateDnsEntry(value); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithPrivateDnsEntry(DnsEntry&& value) { SetPrivateDnsEntry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline const Aws::String& GetResourceConfigurationArn() const{ return m_resourceConfigurationArn; }
    inline void SetResourceConfigurationArn(const Aws::String& value) { m_resourceConfigurationArn = value; }
    inline void SetResourceConfigurationArn(Aws::String&& value) { m_resourceConfigurationArn = std::move(value); }
    inline void SetResourceConfigurationArn(const char* value) { m_resourceConfigurationArn.assign(value); }
    inline GetServiceNetworkResourceAssociationResult& WithResourceConfigurationArn(const Aws::String& value) { SetResourceConfigurationArn(value); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithResourceConfigurationArn(Aws::String&& value) { SetResourceConfigurationArn(std::move(value)); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithResourceConfigurationArn(const char* value) { SetResourceConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource configuration that is associated with the service
     * network.</p>
     */
    inline const Aws::String& GetResourceConfigurationId() const{ return m_resourceConfigurationId; }
    inline void SetResourceConfigurationId(const Aws::String& value) { m_resourceConfigurationId = value; }
    inline void SetResourceConfigurationId(Aws::String&& value) { m_resourceConfigurationId = std::move(value); }
    inline void SetResourceConfigurationId(const char* value) { m_resourceConfigurationId.assign(value); }
    inline GetServiceNetworkResourceAssociationResult& WithResourceConfigurationId(const Aws::String& value) { SetResourceConfigurationId(value); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithResourceConfigurationId(Aws::String&& value) { SetResourceConfigurationId(std::move(value)); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithResourceConfigurationId(const char* value) { SetResourceConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource configuration that is associated with the service
     * network.</p>
     */
    inline const Aws::String& GetResourceConfigurationName() const{ return m_resourceConfigurationName; }
    inline void SetResourceConfigurationName(const Aws::String& value) { m_resourceConfigurationName = value; }
    inline void SetResourceConfigurationName(Aws::String&& value) { m_resourceConfigurationName = std::move(value); }
    inline void SetResourceConfigurationName(const char* value) { m_resourceConfigurationName.assign(value); }
    inline GetServiceNetworkResourceAssociationResult& WithResourceConfigurationName(const Aws::String& value) { SetResourceConfigurationName(value); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithResourceConfigurationName(Aws::String&& value) { SetResourceConfigurationName(std::move(value)); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithResourceConfigurationName(const char* value) { SetResourceConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service network that is associated with
     * the resource configuration.</p>
     */
    inline const Aws::String& GetServiceNetworkArn() const{ return m_serviceNetworkArn; }
    inline void SetServiceNetworkArn(const Aws::String& value) { m_serviceNetworkArn = value; }
    inline void SetServiceNetworkArn(Aws::String&& value) { m_serviceNetworkArn = std::move(value); }
    inline void SetServiceNetworkArn(const char* value) { m_serviceNetworkArn.assign(value); }
    inline GetServiceNetworkResourceAssociationResult& WithServiceNetworkArn(const Aws::String& value) { SetServiceNetworkArn(value); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithServiceNetworkArn(Aws::String&& value) { SetServiceNetworkArn(std::move(value)); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithServiceNetworkArn(const char* value) { SetServiceNetworkArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service network that is associated with the resource
     * configuration.</p>
     */
    inline const Aws::String& GetServiceNetworkId() const{ return m_serviceNetworkId; }
    inline void SetServiceNetworkId(const Aws::String& value) { m_serviceNetworkId = value; }
    inline void SetServiceNetworkId(Aws::String&& value) { m_serviceNetworkId = std::move(value); }
    inline void SetServiceNetworkId(const char* value) { m_serviceNetworkId.assign(value); }
    inline GetServiceNetworkResourceAssociationResult& WithServiceNetworkId(const Aws::String& value) { SetServiceNetworkId(value); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithServiceNetworkId(Aws::String&& value) { SetServiceNetworkId(std::move(value)); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithServiceNetworkId(const char* value) { SetServiceNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service network that is associated with the resource
     * configuration.</p>
     */
    inline const Aws::String& GetServiceNetworkName() const{ return m_serviceNetworkName; }
    inline void SetServiceNetworkName(const Aws::String& value) { m_serviceNetworkName = value; }
    inline void SetServiceNetworkName(Aws::String&& value) { m_serviceNetworkName = std::move(value); }
    inline void SetServiceNetworkName(const char* value) { m_serviceNetworkName.assign(value); }
    inline GetServiceNetworkResourceAssociationResult& WithServiceNetworkName(const Aws::String& value) { SetServiceNetworkName(value); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithServiceNetworkName(Aws::String&& value) { SetServiceNetworkName(std::move(value)); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithServiceNetworkName(const char* value) { SetServiceNetworkName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the association.</p>
     */
    inline const ServiceNetworkResourceAssociationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ServiceNetworkResourceAssociationStatus& value) { m_status = value; }
    inline void SetStatus(ServiceNetworkResourceAssociationStatus&& value) { m_status = std::move(value); }
    inline GetServiceNetworkResourceAssociationResult& WithStatus(const ServiceNetworkResourceAssociationStatus& value) { SetStatus(value); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithStatus(ServiceNetworkResourceAssociationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetServiceNetworkResourceAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetServiceNetworkResourceAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    DnsEntry m_dnsEntry;

    Aws::String m_failureCode;

    Aws::String m_failureReason;

    Aws::String m_id;

    bool m_isManagedAssociation;

    Aws::Utils::DateTime m_lastUpdatedAt;

    DnsEntry m_privateDnsEntry;

    Aws::String m_resourceConfigurationArn;

    Aws::String m_resourceConfigurationId;

    Aws::String m_resourceConfigurationName;

    Aws::String m_serviceNetworkArn;

    Aws::String m_serviceNetworkId;

    Aws::String m_serviceNetworkName;

    ServiceNetworkResourceAssociationStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
