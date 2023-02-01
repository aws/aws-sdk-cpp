/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/DnsConfigChange.h>
#include <aws/servicediscovery/model/HealthCheckConfig.h>
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
   * <p>A complex type that contains changes to an existing service.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/ServiceChange">AWS
   * API Reference</a></p>
   */
  class ServiceChange
  {
  public:
    AWS_SERVICEDISCOVERY_API ServiceChange();
    AWS_SERVICEDISCOVERY_API ServiceChange(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API ServiceChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description for the service.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the service.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the service.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the service.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the service.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the service.</p>
     */
    inline ServiceChange& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the service.</p>
     */
    inline ServiceChange& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the service.</p>
     */
    inline ServiceChange& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Information about the Route 53 DNS records that you want Cloud Map to create
     * when you register an instance.</p>
     */
    inline const DnsConfigChange& GetDnsConfig() const{ return m_dnsConfig; }

    /**
     * <p>Information about the Route 53 DNS records that you want Cloud Map to create
     * when you register an instance.</p>
     */
    inline bool DnsConfigHasBeenSet() const { return m_dnsConfigHasBeenSet; }

    /**
     * <p>Information about the Route 53 DNS records that you want Cloud Map to create
     * when you register an instance.</p>
     */
    inline void SetDnsConfig(const DnsConfigChange& value) { m_dnsConfigHasBeenSet = true; m_dnsConfig = value; }

    /**
     * <p>Information about the Route 53 DNS records that you want Cloud Map to create
     * when you register an instance.</p>
     */
    inline void SetDnsConfig(DnsConfigChange&& value) { m_dnsConfigHasBeenSet = true; m_dnsConfig = std::move(value); }

    /**
     * <p>Information about the Route 53 DNS records that you want Cloud Map to create
     * when you register an instance.</p>
     */
    inline ServiceChange& WithDnsConfig(const DnsConfigChange& value) { SetDnsConfig(value); return *this;}

    /**
     * <p>Information about the Route 53 DNS records that you want Cloud Map to create
     * when you register an instance.</p>
     */
    inline ServiceChange& WithDnsConfig(DnsConfigChange&& value) { SetDnsConfig(std::move(value)); return *this;}


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
    inline ServiceChange& WithHealthCheckConfig(const HealthCheckConfig& value) { SetHealthCheckConfig(value); return *this;}

    /**
     * <p> <i>Public DNS and HTTP namespaces only.</i> Settings for an optional health
     * check. If you specify settings for a health check, Cloud Map associates the
     * health check with the records that you specify in <code>DnsConfig</code>.</p>
     */
    inline ServiceChange& WithHealthCheckConfig(HealthCheckConfig&& value) { SetHealthCheckConfig(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DnsConfigChange m_dnsConfig;
    bool m_dnsConfigHasBeenSet = false;

    HealthCheckConfig m_healthCheckConfig;
    bool m_healthCheckConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
