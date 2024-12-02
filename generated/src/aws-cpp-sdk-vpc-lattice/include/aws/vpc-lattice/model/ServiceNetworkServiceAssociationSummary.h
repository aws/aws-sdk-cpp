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
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/ServiceNetworkServiceAssociationSummary">AWS
   * API Reference</a></p>
   */
  class ServiceNetworkServiceAssociationSummary
  {
  public:
    AWS_VPCLATTICE_API ServiceNetworkServiceAssociationSummary();
    AWS_VPCLATTICE_API ServiceNetworkServiceAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API ServiceNetworkServiceAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ServiceNetworkServiceAssociationSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ServiceNetworkServiceAssociationSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ServiceNetworkServiceAssociationSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the association was created, in ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ServiceNetworkServiceAssociationSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ServiceNetworkServiceAssociationSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account that created the association.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline ServiceNetworkServiceAssociationSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline ServiceNetworkServiceAssociationSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline ServiceNetworkServiceAssociationSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom domain name of the service.</p>
     */
    inline const Aws::String& GetCustomDomainName() const{ return m_customDomainName; }
    inline bool CustomDomainNameHasBeenSet() const { return m_customDomainNameHasBeenSet; }
    inline void SetCustomDomainName(const Aws::String& value) { m_customDomainNameHasBeenSet = true; m_customDomainName = value; }
    inline void SetCustomDomainName(Aws::String&& value) { m_customDomainNameHasBeenSet = true; m_customDomainName = std::move(value); }
    inline void SetCustomDomainName(const char* value) { m_customDomainNameHasBeenSet = true; m_customDomainName.assign(value); }
    inline ServiceNetworkServiceAssociationSummary& WithCustomDomainName(const Aws::String& value) { SetCustomDomainName(value); return *this;}
    inline ServiceNetworkServiceAssociationSummary& WithCustomDomainName(Aws::String&& value) { SetCustomDomainName(std::move(value)); return *this;}
    inline ServiceNetworkServiceAssociationSummary& WithCustomDomainName(const char* value) { SetCustomDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS information.</p>
     */
    inline const DnsEntry& GetDnsEntry() const{ return m_dnsEntry; }
    inline bool DnsEntryHasBeenSet() const { return m_dnsEntryHasBeenSet; }
    inline void SetDnsEntry(const DnsEntry& value) { m_dnsEntryHasBeenSet = true; m_dnsEntry = value; }
    inline void SetDnsEntry(DnsEntry&& value) { m_dnsEntryHasBeenSet = true; m_dnsEntry = std::move(value); }
    inline ServiceNetworkServiceAssociationSummary& WithDnsEntry(const DnsEntry& value) { SetDnsEntry(value); return *this;}
    inline ServiceNetworkServiceAssociationSummary& WithDnsEntry(DnsEntry&& value) { SetDnsEntry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ServiceNetworkServiceAssociationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ServiceNetworkServiceAssociationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ServiceNetworkServiceAssociationSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
    inline void SetServiceArn(const Aws::String& value) { m_serviceArnHasBeenSet = true; m_serviceArn = value; }
    inline void SetServiceArn(Aws::String&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::move(value); }
    inline void SetServiceArn(const char* value) { m_serviceArnHasBeenSet = true; m_serviceArn.assign(value); }
    inline ServiceNetworkServiceAssociationSummary& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}
    inline ServiceNetworkServiceAssociationSummary& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}
    inline ServiceNetworkServiceAssociationSummary& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }
    inline ServiceNetworkServiceAssociationSummary& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}
    inline ServiceNetworkServiceAssociationSummary& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}
    inline ServiceNetworkServiceAssociationSummary& WithServiceId(const char* value) { SetServiceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline ServiceNetworkServiceAssociationSummary& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline ServiceNetworkServiceAssociationSummary& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline ServiceNetworkServiceAssociationSummary& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkArn() const{ return m_serviceNetworkArn; }
    inline bool ServiceNetworkArnHasBeenSet() const { return m_serviceNetworkArnHasBeenSet; }
    inline void SetServiceNetworkArn(const Aws::String& value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn = value; }
    inline void SetServiceNetworkArn(Aws::String&& value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn = std::move(value); }
    inline void SetServiceNetworkArn(const char* value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn.assign(value); }
    inline ServiceNetworkServiceAssociationSummary& WithServiceNetworkArn(const Aws::String& value) { SetServiceNetworkArn(value); return *this;}
    inline ServiceNetworkServiceAssociationSummary& WithServiceNetworkArn(Aws::String&& value) { SetServiceNetworkArn(std::move(value)); return *this;}
    inline ServiceNetworkServiceAssociationSummary& WithServiceNetworkArn(const char* value) { SetServiceNetworkArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkId() const{ return m_serviceNetworkId; }
    inline bool ServiceNetworkIdHasBeenSet() const { return m_serviceNetworkIdHasBeenSet; }
    inline void SetServiceNetworkId(const Aws::String& value) { m_serviceNetworkIdHasBeenSet = true; m_serviceNetworkId = value; }
    inline void SetServiceNetworkId(Aws::String&& value) { m_serviceNetworkIdHasBeenSet = true; m_serviceNetworkId = std::move(value); }
    inline void SetServiceNetworkId(const char* value) { m_serviceNetworkIdHasBeenSet = true; m_serviceNetworkId.assign(value); }
    inline ServiceNetworkServiceAssociationSummary& WithServiceNetworkId(const Aws::String& value) { SetServiceNetworkId(value); return *this;}
    inline ServiceNetworkServiceAssociationSummary& WithServiceNetworkId(Aws::String&& value) { SetServiceNetworkId(std::move(value)); return *this;}
    inline ServiceNetworkServiceAssociationSummary& WithServiceNetworkId(const char* value) { SetServiceNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkName() const{ return m_serviceNetworkName; }
    inline bool ServiceNetworkNameHasBeenSet() const { return m_serviceNetworkNameHasBeenSet; }
    inline void SetServiceNetworkName(const Aws::String& value) { m_serviceNetworkNameHasBeenSet = true; m_serviceNetworkName = value; }
    inline void SetServiceNetworkName(Aws::String&& value) { m_serviceNetworkNameHasBeenSet = true; m_serviceNetworkName = std::move(value); }
    inline void SetServiceNetworkName(const char* value) { m_serviceNetworkNameHasBeenSet = true; m_serviceNetworkName.assign(value); }
    inline ServiceNetworkServiceAssociationSummary& WithServiceNetworkName(const Aws::String& value) { SetServiceNetworkName(value); return *this;}
    inline ServiceNetworkServiceAssociationSummary& WithServiceNetworkName(Aws::String&& value) { SetServiceNetworkName(std::move(value)); return *this;}
    inline ServiceNetworkServiceAssociationSummary& WithServiceNetworkName(const char* value) { SetServiceNetworkName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status. If the deletion fails, try to delete again.</p>
     */
    inline const ServiceNetworkServiceAssociationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ServiceNetworkServiceAssociationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ServiceNetworkServiceAssociationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ServiceNetworkServiceAssociationSummary& WithStatus(const ServiceNetworkServiceAssociationStatus& value) { SetStatus(value); return *this;}
    inline ServiceNetworkServiceAssociationSummary& WithStatus(ServiceNetworkServiceAssociationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_customDomainName;
    bool m_customDomainNameHasBeenSet = false;

    DnsEntry m_dnsEntry;
    bool m_dnsEntryHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_serviceNetworkArn;
    bool m_serviceNetworkArnHasBeenSet = false;

    Aws::String m_serviceNetworkId;
    bool m_serviceNetworkIdHasBeenSet = false;

    Aws::String m_serviceNetworkName;
    bool m_serviceNetworkNameHasBeenSet = false;

    ServiceNetworkServiceAssociationStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
