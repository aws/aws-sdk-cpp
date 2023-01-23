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
    AWS_SERVICEDISCOVERY_API ServiceSummary();
    AWS_SERVICEDISCOVERY_API ServiceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API ServiceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID that Cloud Map assigned to the service when you created it.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID that Cloud Map assigned to the service when you created it.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID that Cloud Map assigned to the service when you created it.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID that Cloud Map assigned to the service when you created it.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID that Cloud Map assigned to the service when you created it.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID that Cloud Map assigned to the service when you created it.</p>
     */
    inline ServiceSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID that Cloud Map assigned to the service when you created it.</p>
     */
    inline ServiceSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID that Cloud Map assigned to the service when you created it.</p>
     */
    inline ServiceSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that Cloud Map assigns to the service when you
     * create it.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) that Cloud Map assigns to the service when you
     * create it.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that Cloud Map assigns to the service when you
     * create it.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that Cloud Map assigns to the service when you
     * create it.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that Cloud Map assigns to the service when you
     * create it.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that Cloud Map assigns to the service when you
     * create it.</p>
     */
    inline ServiceSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that Cloud Map assigns to the service when you
     * create it.</p>
     */
    inline ServiceSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that Cloud Map assigns to the service when you
     * create it.</p>
     */
    inline ServiceSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the service.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline ServiceSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline ServiceSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline ServiceSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Describes the systems that can be used to discover the service instances.</p>
     * <dl> <dt>DNS_HTTP</dt> <dd> <p>The service instances can be discovered using
     * either DNS queries or the <code>DiscoverInstances</code> API operation.</p>
     * </dd> <dt>HTTP</dt> <dd> <p>The service instances can only be discovered using
     * the <code>DiscoverInstances</code> API operation.</p> </dd> <dt>DNS</dt> <dd>
     * <p>Reserved.</p> </dd> </dl>
     */
    inline const ServiceType& GetType() const{ return m_type; }

    /**
     * <p>Describes the systems that can be used to discover the service instances.</p>
     * <dl> <dt>DNS_HTTP</dt> <dd> <p>The service instances can be discovered using
     * either DNS queries or the <code>DiscoverInstances</code> API operation.</p>
     * </dd> <dt>HTTP</dt> <dd> <p>The service instances can only be discovered using
     * the <code>DiscoverInstances</code> API operation.</p> </dd> <dt>DNS</dt> <dd>
     * <p>Reserved.</p> </dd> </dl>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Describes the systems that can be used to discover the service instances.</p>
     * <dl> <dt>DNS_HTTP</dt> <dd> <p>The service instances can be discovered using
     * either DNS queries or the <code>DiscoverInstances</code> API operation.</p>
     * </dd> <dt>HTTP</dt> <dd> <p>The service instances can only be discovered using
     * the <code>DiscoverInstances</code> API operation.</p> </dd> <dt>DNS</dt> <dd>
     * <p>Reserved.</p> </dd> </dl>
     */
    inline void SetType(const ServiceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Describes the systems that can be used to discover the service instances.</p>
     * <dl> <dt>DNS_HTTP</dt> <dd> <p>The service instances can be discovered using
     * either DNS queries or the <code>DiscoverInstances</code> API operation.</p>
     * </dd> <dt>HTTP</dt> <dd> <p>The service instances can only be discovered using
     * the <code>DiscoverInstances</code> API operation.</p> </dd> <dt>DNS</dt> <dd>
     * <p>Reserved.</p> </dd> </dl>
     */
    inline void SetType(ServiceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Describes the systems that can be used to discover the service instances.</p>
     * <dl> <dt>DNS_HTTP</dt> <dd> <p>The service instances can be discovered using
     * either DNS queries or the <code>DiscoverInstances</code> API operation.</p>
     * </dd> <dt>HTTP</dt> <dd> <p>The service instances can only be discovered using
     * the <code>DiscoverInstances</code> API operation.</p> </dd> <dt>DNS</dt> <dd>
     * <p>Reserved.</p> </dd> </dl>
     */
    inline ServiceSummary& WithType(const ServiceType& value) { SetType(value); return *this;}

    /**
     * <p>Describes the systems that can be used to discover the service instances.</p>
     * <dl> <dt>DNS_HTTP</dt> <dd> <p>The service instances can be discovered using
     * either DNS queries or the <code>DiscoverInstances</code> API operation.</p>
     * </dd> <dt>HTTP</dt> <dd> <p>The service instances can only be discovered using
     * the <code>DiscoverInstances</code> API operation.</p> </dd> <dt>DNS</dt> <dd>
     * <p>Reserved.</p> </dd> </dl>
     */
    inline ServiceSummary& WithType(ServiceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The description that you specify when you create the service.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description that you specify when you create the service.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description that you specify when you create the service.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description that you specify when you create the service.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description that you specify when you create the service.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description that you specify when you create the service.</p>
     */
    inline ServiceSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description that you specify when you create the service.</p>
     */
    inline ServiceSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description that you specify when you create the service.</p>
     */
    inline ServiceSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The number of instances that are currently associated with the service.
     * Instances that were previously associated with the service but that are deleted
     * aren't included in the count. The count might not reflect pending registrations
     * and deregistrations.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of instances that are currently associated with the service.
     * Instances that were previously associated with the service but that are deleted
     * aren't included in the count. The count might not reflect pending registrations
     * and deregistrations.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>The number of instances that are currently associated with the service.
     * Instances that were previously associated with the service but that are deleted
     * aren't included in the count. The count might not reflect pending registrations
     * and deregistrations.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of instances that are currently associated with the service.
     * Instances that were previously associated with the service but that are deleted
     * aren't included in the count. The count might not reflect pending registrations
     * and deregistrations.</p>
     */
    inline ServiceSummary& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>Information about the Route 53 DNS records that you want Cloud Map to create
     * when you register an instance.</p>
     */
    inline const DnsConfig& GetDnsConfig() const{ return m_dnsConfig; }

    /**
     * <p>Information about the Route 53 DNS records that you want Cloud Map to create
     * when you register an instance.</p>
     */
    inline bool DnsConfigHasBeenSet() const { return m_dnsConfigHasBeenSet; }

    /**
     * <p>Information about the Route 53 DNS records that you want Cloud Map to create
     * when you register an instance.</p>
     */
    inline void SetDnsConfig(const DnsConfig& value) { m_dnsConfigHasBeenSet = true; m_dnsConfig = value; }

    /**
     * <p>Information about the Route 53 DNS records that you want Cloud Map to create
     * when you register an instance.</p>
     */
    inline void SetDnsConfig(DnsConfig&& value) { m_dnsConfigHasBeenSet = true; m_dnsConfig = std::move(value); }

    /**
     * <p>Information about the Route 53 DNS records that you want Cloud Map to create
     * when you register an instance.</p>
     */
    inline ServiceSummary& WithDnsConfig(const DnsConfig& value) { SetDnsConfig(value); return *this;}

    /**
     * <p>Information about the Route 53 DNS records that you want Cloud Map to create
     * when you register an instance.</p>
     */
    inline ServiceSummary& WithDnsConfig(DnsConfig&& value) { SetDnsConfig(std::move(value)); return *this;}


    /**
     * <p> <i>Public DNS and HTTP namespaces only.</i> Settings for an optional health
     * check. If you specify settings for a health check, Cloud Map associates the
     * health check with the records that you specify in <code>DnsConfig</code>.</p>
     */
    inline const HealthCheckConfig& GetHealthCheckConfig() const{ return m_healthCheckConfig; }

    /**
     * <p> <i>Public DNS and HTTP namespaces only.</i> Settings for an optional health
     * check. If you specify settings for a health check, Cloud Map associates the
     * health check with the records that you specify in <code>DnsConfig</code>.</p>
     */
    inline bool HealthCheckConfigHasBeenSet() const { return m_healthCheckConfigHasBeenSet; }

    /**
     * <p> <i>Public DNS and HTTP namespaces only.</i> Settings for an optional health
     * check. If you specify settings for a health check, Cloud Map associates the
     * health check with the records that you specify in <code>DnsConfig</code>.</p>
     */
    inline void SetHealthCheckConfig(const HealthCheckConfig& value) { m_healthCheckConfigHasBeenSet = true; m_healthCheckConfig = value; }

    /**
     * <p> <i>Public DNS and HTTP namespaces only.</i> Settings for an optional health
     * check. If you specify settings for a health check, Cloud Map associates the
     * health check with the records that you specify in <code>DnsConfig</code>.</p>
     */
    inline void SetHealthCheckConfig(HealthCheckConfig&& value) { m_healthCheckConfigHasBeenSet = true; m_healthCheckConfig = std::move(value); }

    /**
     * <p> <i>Public DNS and HTTP namespaces only.</i> Settings for an optional health
     * check. If you specify settings for a health check, Cloud Map associates the
     * health check with the records that you specify in <code>DnsConfig</code>.</p>
     */
    inline ServiceSummary& WithHealthCheckConfig(const HealthCheckConfig& value) { SetHealthCheckConfig(value); return *this;}

    /**
     * <p> <i>Public DNS and HTTP namespaces only.</i> Settings for an optional health
     * check. If you specify settings for a health check, Cloud Map associates the
     * health check with the records that you specify in <code>DnsConfig</code>.</p>
     */
    inline ServiceSummary& WithHealthCheckConfig(HealthCheckConfig&& value) { SetHealthCheckConfig(std::move(value)); return *this;}


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
    inline const HealthCheckCustomConfig& GetHealthCheckCustomConfig() const{ return m_healthCheckCustomConfig; }

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
    inline bool HealthCheckCustomConfigHasBeenSet() const { return m_healthCheckCustomConfigHasBeenSet; }

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
    inline void SetHealthCheckCustomConfig(const HealthCheckCustomConfig& value) { m_healthCheckCustomConfigHasBeenSet = true; m_healthCheckCustomConfig = value; }

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
    inline void SetHealthCheckCustomConfig(HealthCheckCustomConfig&& value) { m_healthCheckCustomConfigHasBeenSet = true; m_healthCheckCustomConfig = std::move(value); }

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
    inline ServiceSummary& WithHealthCheckCustomConfig(const HealthCheckCustomConfig& value) { SetHealthCheckCustomConfig(value); return *this;}

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
    inline ServiceSummary& WithHealthCheckCustomConfig(HealthCheckCustomConfig&& value) { SetHealthCheckCustomConfig(std::move(value)); return *this;}


    /**
     * <p>The date and time that the service was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time that the service was created.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>The date and time that the service was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time that the service was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The date and time that the service was created.</p>
     */
    inline ServiceSummary& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time that the service was created.</p>
     */
    inline ServiceSummary& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ServiceType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    DnsConfig m_dnsConfig;
    bool m_dnsConfigHasBeenSet = false;

    HealthCheckConfig m_healthCheckConfig;
    bool m_healthCheckConfigHasBeenSet = false;

    HealthCheckCustomConfig m_healthCheckCustomConfig;
    bool m_healthCheckCustomConfigHasBeenSet = false;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
