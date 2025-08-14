/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/ServiceType.h>
#include <aws/servicediscovery/model/DnsConfig.h>
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
   * <p>A complex type that contains information about a specified
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/ServiceSummary">AWS
   * API Reference</a></p>
   */
  class ServiceSummary
  {
  public:
    AWS_SERVICEDISCOVERY_API ServiceSummary() = default;
    AWS_SERVICEDISCOVERY_API ServiceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API ServiceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ServiceSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
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
    ServiceSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
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
    ServiceSummary& WithResourceOwner(ResourceOwnerT&& value) { SetResourceOwner(std::forward<ResourceOwnerT>(value)); return *this;}
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
    ServiceSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    inline ServiceSummary& WithType(ServiceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description that you specify when you create the service.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ServiceSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    inline ServiceSummary& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Route 53 DNS records that you want Cloud Map to create
     * when you register an instance.</p>
     */
    inline const DnsConfig& GetDnsConfig() const { return m_dnsConfig; }
    inline bool DnsConfigHasBeenSet() const { return m_dnsConfigHasBeenSet; }
    template<typename DnsConfigT = DnsConfig>
    void SetDnsConfig(DnsConfigT&& value) { m_dnsConfigHasBeenSet = true; m_dnsConfig = std::forward<DnsConfigT>(value); }
    template<typename DnsConfigT = DnsConfig>
    ServiceSummary& WithDnsConfig(DnsConfigT&& value) { SetDnsConfig(std::forward<DnsConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>Public DNS and HTTP namespaces only.</i> Settings for an optional health
     * check. If you specify settings for a health check, Cloud Map associates the
     * health check with the records that you specify in <code>DnsConfig</code>.</p>
     */
    inline const HealthCheckConfig& GetHealthCheckConfig() const { return m_healthCheckConfig; }
    inline bool HealthCheckConfigHasBeenSet() const { return m_healthCheckConfigHasBeenSet; }
    template<typename HealthCheckConfigT = HealthCheckConfig>
    void SetHealthCheckConfig(HealthCheckConfigT&& value) { m_healthCheckConfigHasBeenSet = true; m_healthCheckConfig = std::forward<HealthCheckConfigT>(value); }
    template<typename HealthCheckConfigT = HealthCheckConfig>
    ServiceSummary& WithHealthCheckConfig(HealthCheckConfigT&& value) { SetHealthCheckConfig(std::forward<HealthCheckConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about an optional custom health check. A custom health check,
     * which requires that you use a third-party health checker to evaluate the health
     * of your resources, is useful in the following circumstances:</p> <ul> <li>
     * <p>You can't use a health check that's defined by <code>HealthCheckConfig</code>
     * because the resource isn't available over the internet. For example, you can use
     * a custom health check when the instance is in an Amazon VPC. (To check the
     * health of resources in a VPC, the health checker must also be in the VPC.)</p>
     * </li> <li> <p>You want to use a third-party health checker regardless of where
     * your resources are located.</p> </li> </ul>  <p>If you specify a
     * health check configuration, you can specify either
     * <code>HealthCheckCustomConfig</code> or <code>HealthCheckConfig</code> but not
     * both.</p> 
     */
    inline const HealthCheckCustomConfig& GetHealthCheckCustomConfig() const { return m_healthCheckCustomConfig; }
    inline bool HealthCheckCustomConfigHasBeenSet() const { return m_healthCheckCustomConfigHasBeenSet; }
    template<typename HealthCheckCustomConfigT = HealthCheckCustomConfig>
    void SetHealthCheckCustomConfig(HealthCheckCustomConfigT&& value) { m_healthCheckCustomConfigHasBeenSet = true; m_healthCheckCustomConfig = std::forward<HealthCheckCustomConfigT>(value); }
    template<typename HealthCheckCustomConfigT = HealthCheckCustomConfig>
    ServiceSummary& WithHealthCheckCustomConfig(HealthCheckCustomConfigT&& value) { SetHealthCheckCustomConfig(std::forward<HealthCheckCustomConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the service was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    ServiceSummary& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that created the service. If this
     * isn't your account ID, it is the account ID of the namespace owner or of another
     * account with which the namespace has been shared. For more information about
     * shared namespaces, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/dg/sharing-namespaces.html">Cross-account
     * Cloud Map namespace sharing</a> in the <i>Cloud Map Developer Guide</i>.</p>
     */
    inline const Aws::String& GetCreatedByAccount() const { return m_createdByAccount; }
    inline bool CreatedByAccountHasBeenSet() const { return m_createdByAccountHasBeenSet; }
    template<typename CreatedByAccountT = Aws::String>
    void SetCreatedByAccount(CreatedByAccountT&& value) { m_createdByAccountHasBeenSet = true; m_createdByAccount = std::forward<CreatedByAccountT>(value); }
    template<typename CreatedByAccountT = Aws::String>
    ServiceSummary& WithCreatedByAccount(CreatedByAccountT&& value) { SetCreatedByAccount(std::forward<CreatedByAccountT>(value)); return *this;}
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

    ServiceType m_type{ServiceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    DnsConfig m_dnsConfig;
    bool m_dnsConfigHasBeenSet = false;

    HealthCheckConfig m_healthCheckConfig;
    bool m_healthCheckConfigHasBeenSet = false;

    HealthCheckCustomConfig m_healthCheckCustomConfig;
    bool m_healthCheckCustomConfigHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    Aws::String m_createdByAccount;
    bool m_createdByAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
