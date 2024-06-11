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
    AWS_SERVICEDISCOVERY_API Service();
    AWS_SERVICEDISCOVERY_API Service(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Service& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID that Cloud Map assigned to the service when you created it.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Service& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Service& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Service& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that Cloud Map assigns to the service when you
     * create it.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Service& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Service& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Service& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Service& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Service& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Service& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the namespace that was used to create the service.</p>
     */
    inline const Aws::String& GetNamespaceId() const{ return m_namespaceId; }
    inline bool NamespaceIdHasBeenSet() const { return m_namespaceIdHasBeenSet; }
    inline void SetNamespaceId(const Aws::String& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = value; }
    inline void SetNamespaceId(Aws::String&& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = std::move(value); }
    inline void SetNamespaceId(const char* value) { m_namespaceIdHasBeenSet = true; m_namespaceId.assign(value); }
    inline Service& WithNamespaceId(const Aws::String& value) { SetNamespaceId(value); return *this;}
    inline Service& WithNamespaceId(Aws::String&& value) { SetNamespaceId(std::move(value)); return *this;}
    inline Service& WithNamespaceId(const char* value) { SetNamespaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the service.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Service& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Service& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Service& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances that are currently associated with the service.
     * Instances that were previously associated with the service but that are deleted
     * aren't included in the count. The count might not reflect pending registrations
     * and deregistrations.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }
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
    inline const DnsConfig& GetDnsConfig() const{ return m_dnsConfig; }
    inline bool DnsConfigHasBeenSet() const { return m_dnsConfigHasBeenSet; }
    inline void SetDnsConfig(const DnsConfig& value) { m_dnsConfigHasBeenSet = true; m_dnsConfig = value; }
    inline void SetDnsConfig(DnsConfig&& value) { m_dnsConfigHasBeenSet = true; m_dnsConfig = std::move(value); }
    inline Service& WithDnsConfig(const DnsConfig& value) { SetDnsConfig(value); return *this;}
    inline Service& WithDnsConfig(DnsConfig&& value) { SetDnsConfig(std::move(value)); return *this;}
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
    inline const ServiceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ServiceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ServiceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Service& WithType(const ServiceType& value) { SetType(value); return *this;}
    inline Service& WithType(ServiceType&& value) { SetType(std::move(value)); return *this;}
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
    inline const HealthCheckConfig& GetHealthCheckConfig() const{ return m_healthCheckConfig; }
    inline bool HealthCheckConfigHasBeenSet() const { return m_healthCheckConfigHasBeenSet; }
    inline void SetHealthCheckConfig(const HealthCheckConfig& value) { m_healthCheckConfigHasBeenSet = true; m_healthCheckConfig = value; }
    inline void SetHealthCheckConfig(HealthCheckConfig&& value) { m_healthCheckConfigHasBeenSet = true; m_healthCheckConfig = std::move(value); }
    inline Service& WithHealthCheckConfig(const HealthCheckConfig& value) { SetHealthCheckConfig(value); return *this;}
    inline Service& WithHealthCheckConfig(HealthCheckConfig&& value) { SetHealthCheckConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about an optional custom health
     * check.</p>  <p>If you specify a health check configuration, you can
     * specify either <code>HealthCheckCustomConfig</code> or
     * <code>HealthCheckConfig</code> but not both.</p> 
     */
    inline const HealthCheckCustomConfig& GetHealthCheckCustomConfig() const{ return m_healthCheckCustomConfig; }
    inline bool HealthCheckCustomConfigHasBeenSet() const { return m_healthCheckCustomConfigHasBeenSet; }
    inline void SetHealthCheckCustomConfig(const HealthCheckCustomConfig& value) { m_healthCheckCustomConfigHasBeenSet = true; m_healthCheckCustomConfig = value; }
    inline void SetHealthCheckCustomConfig(HealthCheckCustomConfig&& value) { m_healthCheckCustomConfigHasBeenSet = true; m_healthCheckCustomConfig = std::move(value); }
    inline Service& WithHealthCheckCustomConfig(const HealthCheckCustomConfig& value) { SetHealthCheckCustomConfig(value); return *this;}
    inline Service& WithHealthCheckCustomConfig(HealthCheckCustomConfig&& value) { SetHealthCheckCustomConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the service was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreateDate</code> is
     * accurate to milliseconds. For example, the value <code>1516925490.087</code>
     * represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }
    inline Service& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}
    inline Service& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string (for example, a
     * date/timestamp).</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }
    inline Service& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}
    inline Service& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}
    inline Service& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_namespaceId;
    bool m_namespaceIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    DnsConfig m_dnsConfig;
    bool m_dnsConfigHasBeenSet = false;

    ServiceType m_type;
    bool m_typeHasBeenSet = false;

    HealthCheckConfig m_healthCheckConfig;
    bool m_healthCheckConfigHasBeenSet = false;

    HealthCheckCustomConfig m_healthCheckCustomConfig;
    bool m_healthCheckCustomConfigHasBeenSet = false;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
