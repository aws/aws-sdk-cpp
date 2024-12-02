/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/vpc-lattice/model/DnsEntry.h>
#include <aws/vpc-lattice/model/ServiceNetworkServiceAssociationStatus.h>
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
  class GetServiceNetworkServiceAssociationResult
  {
  public:
    AWS_VPCLATTICE_API GetServiceNetworkServiceAssociationResult();
    AWS_VPCLATTICE_API GetServiceNetworkServiceAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API GetServiceNetworkServiceAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetServiceNetworkServiceAssociationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the association was created, in ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetServiceNetworkServiceAssociationResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account that created the association.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetServiceNetworkServiceAssociationResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom domain name of the service.</p>
     */
    inline const Aws::String& GetCustomDomainName() const{ return m_customDomainName; }
    inline void SetCustomDomainName(const Aws::String& value) { m_customDomainName = value; }
    inline void SetCustomDomainName(Aws::String&& value) { m_customDomainName = std::move(value); }
    inline void SetCustomDomainName(const char* value) { m_customDomainName.assign(value); }
    inline GetServiceNetworkServiceAssociationResult& WithCustomDomainName(const Aws::String& value) { SetCustomDomainName(value); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithCustomDomainName(Aws::String&& value) { SetCustomDomainName(std::move(value)); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithCustomDomainName(const char* value) { SetCustomDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name of the service.</p>
     */
    inline const DnsEntry& GetDnsEntry() const{ return m_dnsEntry; }
    inline void SetDnsEntry(const DnsEntry& value) { m_dnsEntry = value; }
    inline void SetDnsEntry(DnsEntry&& value) { m_dnsEntry = std::move(value); }
    inline GetServiceNetworkServiceAssociationResult& WithDnsEntry(const DnsEntry& value) { SetDnsEntry(value); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithDnsEntry(DnsEntry&& value) { SetDnsEntry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure code.</p>
     */
    inline const Aws::String& GetFailureCode() const{ return m_failureCode; }
    inline void SetFailureCode(const Aws::String& value) { m_failureCode = value; }
    inline void SetFailureCode(Aws::String&& value) { m_failureCode = std::move(value); }
    inline void SetFailureCode(const char* value) { m_failureCode.assign(value); }
    inline GetServiceNetworkServiceAssociationResult& WithFailureCode(const Aws::String& value) { SetFailureCode(value); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithFailureCode(Aws::String&& value) { SetFailureCode(std::move(value)); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithFailureCode(const char* value) { SetFailureCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure message.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessage = value; }
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessage = std::move(value); }
    inline void SetFailureMessage(const char* value) { m_failureMessage.assign(value); }
    inline GetServiceNetworkServiceAssociationResult& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service network and service association.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetServiceNetworkServiceAssociationResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }
    inline void SetServiceArn(const Aws::String& value) { m_serviceArn = value; }
    inline void SetServiceArn(Aws::String&& value) { m_serviceArn = std::move(value); }
    inline void SetServiceArn(const char* value) { m_serviceArn.assign(value); }
    inline GetServiceNetworkServiceAssociationResult& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }
    inline void SetServiceId(const Aws::String& value) { m_serviceId = value; }
    inline void SetServiceId(Aws::String&& value) { m_serviceId = std::move(value); }
    inline void SetServiceId(const char* value) { m_serviceId.assign(value); }
    inline GetServiceNetworkServiceAssociationResult& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithServiceId(const char* value) { SetServiceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline void SetServiceName(const Aws::String& value) { m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceName.assign(value); }
    inline GetServiceNetworkServiceAssociationResult& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkArn() const{ return m_serviceNetworkArn; }
    inline void SetServiceNetworkArn(const Aws::String& value) { m_serviceNetworkArn = value; }
    inline void SetServiceNetworkArn(Aws::String&& value) { m_serviceNetworkArn = std::move(value); }
    inline void SetServiceNetworkArn(const char* value) { m_serviceNetworkArn.assign(value); }
    inline GetServiceNetworkServiceAssociationResult& WithServiceNetworkArn(const Aws::String& value) { SetServiceNetworkArn(value); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithServiceNetworkArn(Aws::String&& value) { SetServiceNetworkArn(std::move(value)); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithServiceNetworkArn(const char* value) { SetServiceNetworkArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkId() const{ return m_serviceNetworkId; }
    inline void SetServiceNetworkId(const Aws::String& value) { m_serviceNetworkId = value; }
    inline void SetServiceNetworkId(Aws::String&& value) { m_serviceNetworkId = std::move(value); }
    inline void SetServiceNetworkId(const char* value) { m_serviceNetworkId.assign(value); }
    inline GetServiceNetworkServiceAssociationResult& WithServiceNetworkId(const Aws::String& value) { SetServiceNetworkId(value); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithServiceNetworkId(Aws::String&& value) { SetServiceNetworkId(std::move(value)); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithServiceNetworkId(const char* value) { SetServiceNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkName() const{ return m_serviceNetworkName; }
    inline void SetServiceNetworkName(const Aws::String& value) { m_serviceNetworkName = value; }
    inline void SetServiceNetworkName(Aws::String&& value) { m_serviceNetworkName = std::move(value); }
    inline void SetServiceNetworkName(const char* value) { m_serviceNetworkName.assign(value); }
    inline GetServiceNetworkServiceAssociationResult& WithServiceNetworkName(const Aws::String& value) { SetServiceNetworkName(value); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithServiceNetworkName(Aws::String&& value) { SetServiceNetworkName(std::move(value)); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithServiceNetworkName(const char* value) { SetServiceNetworkName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the association.</p>
     */
    inline const ServiceNetworkServiceAssociationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ServiceNetworkServiceAssociationStatus& value) { m_status = value; }
    inline void SetStatus(ServiceNetworkServiceAssociationStatus&& value) { m_status = std::move(value); }
    inline GetServiceNetworkServiceAssociationResult& WithStatus(const ServiceNetworkServiceAssociationStatus& value) { SetStatus(value); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithStatus(ServiceNetworkServiceAssociationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetServiceNetworkServiceAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetServiceNetworkServiceAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_customDomainName;

    DnsEntry m_dnsEntry;

    Aws::String m_failureCode;

    Aws::String m_failureMessage;

    Aws::String m_id;

    Aws::String m_serviceArn;

    Aws::String m_serviceId;

    Aws::String m_serviceName;

    Aws::String m_serviceNetworkArn;

    Aws::String m_serviceNetworkId;

    Aws::String m_serviceNetworkName;

    ServiceNetworkServiceAssociationStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
