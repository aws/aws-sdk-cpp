/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/DnsConfig.h>
#include <aws/servicediscovery/model/ServiceType.h>
#include <aws/servicediscovery/model/HealthCheckConfig.h>
#include <aws/servicediscovery/model/HealthCheckCustomConfig.h>
#include <aws/core/utils/DateTime.h>
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
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the specified
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/Service">AWS
   * API Reference</a></p>
   */
  class Service
  {
  public:
    AWS_SERVICEDISCOVERY_API Service() = default;
    AWS_SERVICEDISCOVERY_API Service(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Service& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID that Cloud Map assigned to the service when you created it.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Service& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that Cloud Map assigns to the service when you
     * create it.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Service& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that created the namespace with
     * which the service is associated. If this isn't your account ID, it is the ID of
     * the account that shared the namespace with your account. For more information
     * about shared namespaces, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/dg/sharing-namespaces.html">Cross-account
     * Cloud Map namespace sharing</a> in the <i>Cloud Map Developer Guide</i>.</p>
     */
    inline const Aws::String& GetResourceOwner() const { return m_resourceOwner; }
    inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }
    template<typename ResourceOwnerT = Aws::String>
    void SetResourceOwner(ResourceOwnerT&& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = std::forward<ResourceOwnerT>(value); }
    template<typename ResourceOwnerT = Aws::String>
    Service& WithResourceOwner(ResourceOwnerT&& value) { SetResourceOwner(std::forward<ResourceOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Service& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the namespace that was used to create the service.</p>
     */
    inline const Aws::String& GetNamespaceId() const { return m_namespaceId; }
    inline bool NamespaceIdHasBeenSet() const { return m_namespaceIdHasBeenSet; }
    template<typename NamespaceIdT = Aws::String>
    void SetNamespaceId(NamespaceIdT&& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = std::forward<NamespaceIdT>(value); }
    template<typename NamespaceIdT = Aws::String>
    Service& WithNamespaceId(NamespaceIdT&& value) { SetNamespaceId(std::forward<NamespaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the service.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Service& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances that are currently associated with the service.
     * Instances that were previously associated with the service but that are deleted
     * aren't included in the count. The count might not reflect pending registrations
     * and deregistrations.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline Service& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about the Route 53 DNS records that
     * you want Cloud Map to create when you register an instance.</p> 
     * <p>The record types of a service can only be changed by deleting the service and
     * recreating it with a new <code>Dnsconfig</code>.</p> 
     */
    inline const DnsConfig& GetDnsConfig() const { return m_dnsConfig; }
    inline bool DnsConfigHasBeenSet() const { return m_dnsConfigHasBeenSet; }
    template<typename DnsConfigT = DnsConfig>
    void SetDnsConfig(DnsConfigT&& value) { m_dnsConfigHasBeenSet = true; m_dnsConfig = std::forward<DnsConfigT>(value); }
    template<typename DnsConfigT = DnsConfig>
    Service& WithDnsConfig(DnsConfigT&& value) { SetDnsConfig(std::forward<DnsConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the systems that can be used to discover the service instances.</p>
     * <dl> <dt>DNS_HTTP</dt> <dd> <p>The service instances can be discovered using
     * either DNS queries or the <code>DiscoverInstances</code> API operation.</p>
     * </dd> <dt>HTTP</dt> <dd> <p>The service instances can only be discovered using
     * the <code>DiscoverInstances</code> API operation.</p> </dd> <dt>DNS</dt> <dd>
     * <p>Reserved.</p> </dd> </dl>
     */
    inline ServiceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ServiceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Service& WithType(ServiceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>Public DNS and HTTP namespaces only.</i> A complex type that contains
     * settings for an optional health check. If you specify settings for a health
     * check, Cloud Map associates the health check with the records that you specify
     * in <code>DnsConfig</code>.</p> <p>For information about the charges for health
     * checks, see <a href="http://aws.amazon.com/route53/pricing/">Amazon Route 53
     * Pricing</a>.</p>
     */
    inline const HealthCheckConfig& GetHealthCheckConfig() const { return m_healthCheckConfig; }
    inline bool HealthCheckConfigHasBeenSet() const { return m_healthCheckConfigHasBeenSet; }
    template<typename HealthCheckConfigT = HealthCheckConfig>
    void SetHealthCheckConfig(HealthCheckConfigT&& value) { m_healthCheckConfigHasBeenSet = true; m_healthCheckConfig = std::forward<HealthCheckConfigT>(value); }
    template<typename HealthCheckConfigT = HealthCheckConfig>
    Service& WithHealthCheckConfig(HealthCheckConfigT&& value) { SetHealthCheckConfig(std::forward<HealthCheckConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about an optional custom health
     * check.</p>  <p>If you specify a health check configuration, you can
     * specify either <code>HealthCheckCustomConfig</code> or
     * <code>HealthCheckConfig</code> but not both.</p> 
     */
    inline const HealthCheckCustomConfig& GetHealthCheckCustomConfig() const { return m_healthCheckCustomConfig; }
    inline bool HealthCheckCustomConfigHasBeenSet() const { return m_healthCheckCustomConfigHasBeenSet; }
    template<typename HealthCheckCustomConfigT = HealthCheckCustomConfig>
    void SetHealthCheckCustomConfig(HealthCheckCustomConfigT&& value) { m_healthCheckCustomConfigHasBeenSet = true; m_healthCheckCustomConfig = std::forward<HealthCheckCustomConfigT>(value); }
    template<typename HealthCheckCustomConfigT = HealthCheckCustomConfig>
    Service& WithHealthCheckCustomConfig(HealthCheckCustomConfigT&& value) { SetHealthCheckCustomConfig(std::forward<HealthCheckCustomConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the service was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreateDate</code> is
     * accurate to milliseconds. For example, the value <code>1516925490.087</code>
     * represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    Service& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string (for example, a
     * date/timestamp).</p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    Service& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that created the service. If this
     * isn't your account ID, it is the ID of account of the namespace owner or of
     * another account with which the namespace has been shared. For more information
     * about shared namespaces, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/dg/sharing-namespaces.html">Cross-account
     * Cloud Map namespace sharing</a> in the <i>Cloud Map Developer Guide</i>.</p>
     */
    inline const Aws::String& GetCreatedByAccount() const { return m_createdByAccount; }
    inline bool CreatedByAccountHasBeenSet() const { return m_createdByAccountHasBeenSet; }
    template<typename CreatedByAccountT = Aws::String>
    void SetCreatedByAccount(CreatedByAccountT&& value) { m_createdByAccountHasBeenSet = true; m_createdByAccount = std::forward<CreatedByAccountT>(value); }
    template<typename CreatedByAccountT = Aws::String>
    Service& WithCreatedByAccount(CreatedByAccountT&& value) { SetCreatedByAccount(std::forward<CreatedByAccountT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_resourceOwner;
    bool m_resourceOwnerHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_namespaceId;
    bool m_namespaceIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    DnsConfig m_dnsConfig;
    bool m_dnsConfigHasBeenSet = false;

    ServiceType m_type{ServiceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    HealthCheckConfig m_healthCheckConfig;
    bool m_healthCheckConfigHasBeenSet = false;

    HealthCheckCustomConfig m_healthCheckCustomConfig;
    bool m_healthCheckCustomConfigHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_createdByAccount;
    bool m_createdByAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
