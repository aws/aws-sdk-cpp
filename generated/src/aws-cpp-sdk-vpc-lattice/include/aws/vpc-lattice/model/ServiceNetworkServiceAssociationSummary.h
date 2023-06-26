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
   * <p>Summary information about the association between a service network and a
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


    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time that the association was created, specified in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the association was created, specified in ISO-8601
     * format.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time that the association was created, specified in ISO-8601
     * format.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time that the association was created, specified in ISO-8601
     * format.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the association was created, specified in ISO-8601
     * format.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the association was created, specified in ISO-8601
     * format.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The account that created the association.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The account that created the association.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The account that created the association.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The account that created the association.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The account that created the association.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The account that created the association.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The account that created the association.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The account that created the association.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p> The custom domain name of the service. </p>
     */
    inline const Aws::String& GetCustomDomainName() const{ return m_customDomainName; }

    /**
     * <p> The custom domain name of the service. </p>
     */
    inline bool CustomDomainNameHasBeenSet() const { return m_customDomainNameHasBeenSet; }

    /**
     * <p> The custom domain name of the service. </p>
     */
    inline void SetCustomDomainName(const Aws::String& value) { m_customDomainNameHasBeenSet = true; m_customDomainName = value; }

    /**
     * <p> The custom domain name of the service. </p>
     */
    inline void SetCustomDomainName(Aws::String&& value) { m_customDomainNameHasBeenSet = true; m_customDomainName = std::move(value); }

    /**
     * <p> The custom domain name of the service. </p>
     */
    inline void SetCustomDomainName(const char* value) { m_customDomainNameHasBeenSet = true; m_customDomainName.assign(value); }

    /**
     * <p> The custom domain name of the service. </p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithCustomDomainName(const Aws::String& value) { SetCustomDomainName(value); return *this;}

    /**
     * <p> The custom domain name of the service. </p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithCustomDomainName(Aws::String&& value) { SetCustomDomainName(std::move(value)); return *this;}

    /**
     * <p> The custom domain name of the service. </p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithCustomDomainName(const char* value) { SetCustomDomainName(value); return *this;}


    /**
     * <p>DNS information about the service.</p>
     */
    inline const DnsEntry& GetDnsEntry() const{ return m_dnsEntry; }

    /**
     * <p>DNS information about the service.</p>
     */
    inline bool DnsEntryHasBeenSet() const { return m_dnsEntryHasBeenSet; }

    /**
     * <p>DNS information about the service.</p>
     */
    inline void SetDnsEntry(const DnsEntry& value) { m_dnsEntryHasBeenSet = true; m_dnsEntry = value; }

    /**
     * <p>DNS information about the service.</p>
     */
    inline void SetDnsEntry(DnsEntry&& value) { m_dnsEntryHasBeenSet = true; m_dnsEntry = std::move(value); }

    /**
     * <p>DNS information about the service.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithDnsEntry(const DnsEntry& value) { SetDnsEntry(value); return *this;}

    /**
     * <p>DNS information about the service.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithDnsEntry(DnsEntry&& value) { SetDnsEntry(std::move(value)); return *this;}


    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the association.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the association.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the association.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the association.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetServiceArn(const Aws::String& value) { m_serviceArnHasBeenSet = true; m_serviceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetServiceArn(Aws::String&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetServiceArn(const char* value) { m_serviceArnHasBeenSet = true; m_serviceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}


    /**
     * <p>The ID of the service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The ID of the service.</p>
     */
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    /**
     * <p>The ID of the service.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The ID of the service.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithServiceId(const char* value) { SetServiceId(value); return *this;}


    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkArn() const{ return m_serviceNetworkArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline bool ServiceNetworkArnHasBeenSet() const { return m_serviceNetworkArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline void SetServiceNetworkArn(const Aws::String& value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline void SetServiceNetworkArn(Aws::String&& value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline void SetServiceNetworkArn(const char* value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithServiceNetworkArn(const Aws::String& value) { SetServiceNetworkArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithServiceNetworkArn(Aws::String&& value) { SetServiceNetworkArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithServiceNetworkArn(const char* value) { SetServiceNetworkArn(value); return *this;}


    /**
     * <p>The ID of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkId() const{ return m_serviceNetworkId; }

    /**
     * <p>The ID of the service network.</p>
     */
    inline bool ServiceNetworkIdHasBeenSet() const { return m_serviceNetworkIdHasBeenSet; }

    /**
     * <p>The ID of the service network.</p>
     */
    inline void SetServiceNetworkId(const Aws::String& value) { m_serviceNetworkIdHasBeenSet = true; m_serviceNetworkId = value; }

    /**
     * <p>The ID of the service network.</p>
     */
    inline void SetServiceNetworkId(Aws::String&& value) { m_serviceNetworkIdHasBeenSet = true; m_serviceNetworkId = std::move(value); }

    /**
     * <p>The ID of the service network.</p>
     */
    inline void SetServiceNetworkId(const char* value) { m_serviceNetworkIdHasBeenSet = true; m_serviceNetworkId.assign(value); }

    /**
     * <p>The ID of the service network.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithServiceNetworkId(const Aws::String& value) { SetServiceNetworkId(value); return *this;}

    /**
     * <p>The ID of the service network.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithServiceNetworkId(Aws::String&& value) { SetServiceNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service network.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithServiceNetworkId(const char* value) { SetServiceNetworkId(value); return *this;}


    /**
     * <p>The name of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkName() const{ return m_serviceNetworkName; }

    /**
     * <p>The name of the service network.</p>
     */
    inline bool ServiceNetworkNameHasBeenSet() const { return m_serviceNetworkNameHasBeenSet; }

    /**
     * <p>The name of the service network.</p>
     */
    inline void SetServiceNetworkName(const Aws::String& value) { m_serviceNetworkNameHasBeenSet = true; m_serviceNetworkName = value; }

    /**
     * <p>The name of the service network.</p>
     */
    inline void SetServiceNetworkName(Aws::String&& value) { m_serviceNetworkNameHasBeenSet = true; m_serviceNetworkName = std::move(value); }

    /**
     * <p>The name of the service network.</p>
     */
    inline void SetServiceNetworkName(const char* value) { m_serviceNetworkNameHasBeenSet = true; m_serviceNetworkName.assign(value); }

    /**
     * <p>The name of the service network.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithServiceNetworkName(const Aws::String& value) { SetServiceNetworkName(value); return *this;}

    /**
     * <p>The name of the service network.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithServiceNetworkName(Aws::String&& value) { SetServiceNetworkName(std::move(value)); return *this;}

    /**
     * <p>The name of the service network.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithServiceNetworkName(const char* value) { SetServiceNetworkName(value); return *this;}


    /**
     * <p>The status. If the deletion fails, try to delete again.</p>
     */
    inline const ServiceNetworkServiceAssociationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status. If the deletion fails, try to delete again.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status. If the deletion fails, try to delete again.</p>
     */
    inline void SetStatus(const ServiceNetworkServiceAssociationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status. If the deletion fails, try to delete again.</p>
     */
    inline void SetStatus(ServiceNetworkServiceAssociationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status. If the deletion fails, try to delete again.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithStatus(const ServiceNetworkServiceAssociationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status. If the deletion fails, try to delete again.</p>
     */
    inline ServiceNetworkServiceAssociationSummary& WithStatus(ServiceNetworkServiceAssociationStatus&& value) { SetStatus(std::move(value)); return *this;}

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
