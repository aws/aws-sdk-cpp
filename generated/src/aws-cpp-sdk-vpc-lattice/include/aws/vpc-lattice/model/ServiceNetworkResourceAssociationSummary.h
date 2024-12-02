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
    AWS_VPCLATTICE_API ServiceNetworkResourceAssociationSummary();
    AWS_VPCLATTICE_API ServiceNetworkResourceAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API ServiceNetworkResourceAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ServiceNetworkResourceAssociationSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the association was created, in ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ServiceNetworkResourceAssociationSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
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
    inline ServiceNetworkResourceAssociationSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS entry for the service.</p>
     */
    inline const DnsEntry& GetDnsEntry() const{ return m_dnsEntry; }
    inline bool DnsEntryHasBeenSet() const { return m_dnsEntryHasBeenSet; }
    inline void SetDnsEntry(const DnsEntry& value) { m_dnsEntryHasBeenSet = true; m_dnsEntry = value; }
    inline void SetDnsEntry(DnsEntry&& value) { m_dnsEntryHasBeenSet = true; m_dnsEntry = std::move(value); }
    inline ServiceNetworkResourceAssociationSummary& WithDnsEntry(const DnsEntry& value) { SetDnsEntry(value); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithDnsEntry(DnsEntry&& value) { SetDnsEntry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure code.</p>
     */
    inline const Aws::String& GetFailureCode() const{ return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(const Aws::String& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline void SetFailureCode(Aws::String&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }
    inline void SetFailureCode(const char* value) { m_failureCodeHasBeenSet = true; m_failureCode.assign(value); }
    inline ServiceNetworkResourceAssociationSummary& WithFailureCode(const Aws::String& value) { SetFailureCode(value); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithFailureCode(Aws::String&& value) { SetFailureCode(std::move(value)); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithFailureCode(const char* value) { SetFailureCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the association between the service network and resource
     * configuration.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ServiceNetworkResourceAssociationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the association is managed by Amazon.</p>
     */
    inline bool GetIsManagedAssociation() const{ return m_isManagedAssociation; }
    inline bool IsManagedAssociationHasBeenSet() const { return m_isManagedAssociationHasBeenSet; }
    inline void SetIsManagedAssociation(bool value) { m_isManagedAssociationHasBeenSet = true; m_isManagedAssociation = value; }
    inline ServiceNetworkResourceAssociationSummary& WithIsManagedAssociation(bool value) { SetIsManagedAssociation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private DNS entry for the service.</p>
     */
    inline const DnsEntry& GetPrivateDnsEntry() const{ return m_privateDnsEntry; }
    inline bool PrivateDnsEntryHasBeenSet() const { return m_privateDnsEntryHasBeenSet; }
    inline void SetPrivateDnsEntry(const DnsEntry& value) { m_privateDnsEntryHasBeenSet = true; m_privateDnsEntry = value; }
    inline void SetPrivateDnsEntry(DnsEntry&& value) { m_privateDnsEntryHasBeenSet = true; m_privateDnsEntry = std::move(value); }
    inline ServiceNetworkResourceAssociationSummary& WithPrivateDnsEntry(const DnsEntry& value) { SetPrivateDnsEntry(value); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithPrivateDnsEntry(DnsEntry&& value) { SetPrivateDnsEntry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline const Aws::String& GetResourceConfigurationArn() const{ return m_resourceConfigurationArn; }
    inline bool ResourceConfigurationArnHasBeenSet() const { return m_resourceConfigurationArnHasBeenSet; }
    inline void SetResourceConfigurationArn(const Aws::String& value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn = value; }
    inline void SetResourceConfigurationArn(Aws::String&& value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn = std::move(value); }
    inline void SetResourceConfigurationArn(const char* value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn.assign(value); }
    inline ServiceNetworkResourceAssociationSummary& WithResourceConfigurationArn(const Aws::String& value) { SetResourceConfigurationArn(value); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithResourceConfigurationArn(Aws::String&& value) { SetResourceConfigurationArn(std::move(value)); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithResourceConfigurationArn(const char* value) { SetResourceConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource configuration associated with the service network.</p>
     */
    inline const Aws::String& GetResourceConfigurationId() const{ return m_resourceConfigurationId; }
    inline bool ResourceConfigurationIdHasBeenSet() const { return m_resourceConfigurationIdHasBeenSet; }
    inline void SetResourceConfigurationId(const Aws::String& value) { m_resourceConfigurationIdHasBeenSet = true; m_resourceConfigurationId = value; }
    inline void SetResourceConfigurationId(Aws::String&& value) { m_resourceConfigurationIdHasBeenSet = true; m_resourceConfigurationId = std::move(value); }
    inline void SetResourceConfigurationId(const char* value) { m_resourceConfigurationIdHasBeenSet = true; m_resourceConfigurationId.assign(value); }
    inline ServiceNetworkResourceAssociationSummary& WithResourceConfigurationId(const Aws::String& value) { SetResourceConfigurationId(value); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithResourceConfigurationId(Aws::String&& value) { SetResourceConfigurationId(std::move(value)); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithResourceConfigurationId(const char* value) { SetResourceConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource configuration associated with the service
     * network.</p>
     */
    inline const Aws::String& GetResourceConfigurationName() const{ return m_resourceConfigurationName; }
    inline bool ResourceConfigurationNameHasBeenSet() const { return m_resourceConfigurationNameHasBeenSet; }
    inline void SetResourceConfigurationName(const Aws::String& value) { m_resourceConfigurationNameHasBeenSet = true; m_resourceConfigurationName = value; }
    inline void SetResourceConfigurationName(Aws::String&& value) { m_resourceConfigurationNameHasBeenSet = true; m_resourceConfigurationName = std::move(value); }
    inline void SetResourceConfigurationName(const char* value) { m_resourceConfigurationNameHasBeenSet = true; m_resourceConfigurationName.assign(value); }
    inline ServiceNetworkResourceAssociationSummary& WithResourceConfigurationName(const Aws::String& value) { SetResourceConfigurationName(value); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithResourceConfigurationName(Aws::String&& value) { SetResourceConfigurationName(std::move(value)); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithResourceConfigurationName(const char* value) { SetResourceConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service network associated with the
     * resource configuration.</p>
     */
    inline const Aws::String& GetServiceNetworkArn() const{ return m_serviceNetworkArn; }
    inline bool ServiceNetworkArnHasBeenSet() const { return m_serviceNetworkArnHasBeenSet; }
    inline void SetServiceNetworkArn(const Aws::String& value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn = value; }
    inline void SetServiceNetworkArn(Aws::String&& value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn = std::move(value); }
    inline void SetServiceNetworkArn(const char* value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn.assign(value); }
    inline ServiceNetworkResourceAssociationSummary& WithServiceNetworkArn(const Aws::String& value) { SetServiceNetworkArn(value); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithServiceNetworkArn(Aws::String&& value) { SetServiceNetworkArn(std::move(value)); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithServiceNetworkArn(const char* value) { SetServiceNetworkArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service network associated with the resource configuration.</p>
     */
    inline const Aws::String& GetServiceNetworkId() const{ return m_serviceNetworkId; }
    inline bool ServiceNetworkIdHasBeenSet() const { return m_serviceNetworkIdHasBeenSet; }
    inline void SetServiceNetworkId(const Aws::String& value) { m_serviceNetworkIdHasBeenSet = true; m_serviceNetworkId = value; }
    inline void SetServiceNetworkId(Aws::String&& value) { m_serviceNetworkIdHasBeenSet = true; m_serviceNetworkId = std::move(value); }
    inline void SetServiceNetworkId(const char* value) { m_serviceNetworkIdHasBeenSet = true; m_serviceNetworkId.assign(value); }
    inline ServiceNetworkResourceAssociationSummary& WithServiceNetworkId(const Aws::String& value) { SetServiceNetworkId(value); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithServiceNetworkId(Aws::String&& value) { SetServiceNetworkId(std::move(value)); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithServiceNetworkId(const char* value) { SetServiceNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service network associated with the resource
     * configuration.</p>
     */
    inline const Aws::String& GetServiceNetworkName() const{ return m_serviceNetworkName; }
    inline bool ServiceNetworkNameHasBeenSet() const { return m_serviceNetworkNameHasBeenSet; }
    inline void SetServiceNetworkName(const Aws::String& value) { m_serviceNetworkNameHasBeenSet = true; m_serviceNetworkName = value; }
    inline void SetServiceNetworkName(Aws::String&& value) { m_serviceNetworkNameHasBeenSet = true; m_serviceNetworkName = std::move(value); }
    inline void SetServiceNetworkName(const char* value) { m_serviceNetworkNameHasBeenSet = true; m_serviceNetworkName.assign(value); }
    inline ServiceNetworkResourceAssociationSummary& WithServiceNetworkName(const Aws::String& value) { SetServiceNetworkName(value); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithServiceNetworkName(Aws::String&& value) { SetServiceNetworkName(std::move(value)); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithServiceNetworkName(const char* value) { SetServiceNetworkName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the service network associated with the resource
     * configuration.</p>
     */
    inline const ServiceNetworkResourceAssociationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ServiceNetworkResourceAssociationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ServiceNetworkResourceAssociationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ServiceNetworkResourceAssociationSummary& WithStatus(const ServiceNetworkResourceAssociationStatus& value) { SetStatus(value); return *this;}
    inline ServiceNetworkResourceAssociationSummary& WithStatus(ServiceNetworkResourceAssociationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    DnsEntry m_dnsEntry;
    bool m_dnsEntryHasBeenSet = false;

    Aws::String m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    bool m_isManagedAssociation;
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

    ServiceNetworkResourceAssociationStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
