/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>A complex type that contains information about the instances that you
   * registered by using a specified service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/InstanceSummary">AWS
   * API Reference</a></p>
   */
  class InstanceSummary
  {
  public:
    AWS_SERVICEDISCOVERY_API InstanceSummary();
    AWS_SERVICEDISCOVERY_API InstanceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API InstanceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID for an instance that you created by using a specified service.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID for an instance that you created by using a specified service.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID for an instance that you created by using a specified service.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID for an instance that you created by using a specified service.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID for an instance that you created by using a specified service.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID for an instance that you created by using a specified service.</p>
     */
    inline InstanceSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID for an instance that you created by using a specified service.</p>
     */
    inline InstanceSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID for an instance that you created by using a specified service.</p>
     */
    inline InstanceSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A string map that contains the following information:</p> <ul> <li> <p>The
     * attributes that are associated with the instance. </p> </li> <li> <p>For each
     * attribute, the applicable value.</p> </li> </ul> <p>Supported attribute keys
     * include the following:</p> <dl> <dt>AWS_ALIAS_DNS_NAME</dt> <dd> <p>For an alias
     * record that routes traffic to an Elastic Load Balancing load balancer, the DNS
     * name that's associated with the load balancer. </p> </dd>
     * <dt>AWS_EC2_INSTANCE_ID (HTTP namespaces only)</dt> <dd> <p>The Amazon EC2
     * instance ID for the instance. When the <code>AWS_EC2_INSTANCE_ID</code>
     * attribute is specified, then the <code>AWS_INSTANCE_IPV4</code> attribute
     * contains the primary private IPv4 address.</p> </dd>
     * <dt>AWS_INIT_HEALTH_STATUS</dt> <dd> <p>If the service configuration includes
     * <code>HealthCheckCustomConfig</code>, you can optionally use
     * <code>AWS_INIT_HEALTH_STATUS</code> to specify the initial status of the custom
     * health check, <code>HEALTHY</code> or <code>UNHEALTHY</code>. If you don't
     * specify a value for <code>AWS_INIT_HEALTH_STATUS</code>, the initial status is
     * <code>HEALTHY</code>.</p> </dd> <dt>AWS_INSTANCE_CNAME</dt> <dd> <p>For a
     * <code>CNAME</code> record, the domain name that Route 53 returns in response to
     * DNS queries (for example, <code>example.com</code>).</p> </dd>
     * <dt>AWS_INSTANCE_IPV4</dt> <dd> <p>For an <code>A</code> record, the IPv4
     * address that Route 53 returns in response to DNS queries (for example,
     * <code>192.0.2.44</code>).</p> </dd> <dt>AWS_INSTANCE_IPV6</dt> <dd> <p>For an
     * <code>AAAA</code> record, the IPv6 address that Route 53 returns in response to
     * DNS queries (for example,
     * <code>2001:0db8:85a3:0000:0000:abcd:0001:2345</code>).</p> </dd>
     * <dt>AWS_INSTANCE_PORT</dt> <dd> <p>For an <code>SRV</code> record, the value
     * that Route 53 returns for the port. In addition, if the service includes
     * <code>HealthCheckConfig</code>, the port on the endpoint that Route 53 sends
     * requests to.</p> </dd> </dl>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A string map that contains the following information:</p> <ul> <li> <p>The
     * attributes that are associated with the instance. </p> </li> <li> <p>For each
     * attribute, the applicable value.</p> </li> </ul> <p>Supported attribute keys
     * include the following:</p> <dl> <dt>AWS_ALIAS_DNS_NAME</dt> <dd> <p>For an alias
     * record that routes traffic to an Elastic Load Balancing load balancer, the DNS
     * name that's associated with the load balancer. </p> </dd>
     * <dt>AWS_EC2_INSTANCE_ID (HTTP namespaces only)</dt> <dd> <p>The Amazon EC2
     * instance ID for the instance. When the <code>AWS_EC2_INSTANCE_ID</code>
     * attribute is specified, then the <code>AWS_INSTANCE_IPV4</code> attribute
     * contains the primary private IPv4 address.</p> </dd>
     * <dt>AWS_INIT_HEALTH_STATUS</dt> <dd> <p>If the service configuration includes
     * <code>HealthCheckCustomConfig</code>, you can optionally use
     * <code>AWS_INIT_HEALTH_STATUS</code> to specify the initial status of the custom
     * health check, <code>HEALTHY</code> or <code>UNHEALTHY</code>. If you don't
     * specify a value for <code>AWS_INIT_HEALTH_STATUS</code>, the initial status is
     * <code>HEALTHY</code>.</p> </dd> <dt>AWS_INSTANCE_CNAME</dt> <dd> <p>For a
     * <code>CNAME</code> record, the domain name that Route 53 returns in response to
     * DNS queries (for example, <code>example.com</code>).</p> </dd>
     * <dt>AWS_INSTANCE_IPV4</dt> <dd> <p>For an <code>A</code> record, the IPv4
     * address that Route 53 returns in response to DNS queries (for example,
     * <code>192.0.2.44</code>).</p> </dd> <dt>AWS_INSTANCE_IPV6</dt> <dd> <p>For an
     * <code>AAAA</code> record, the IPv6 address that Route 53 returns in response to
     * DNS queries (for example,
     * <code>2001:0db8:85a3:0000:0000:abcd:0001:2345</code>).</p> </dd>
     * <dt>AWS_INSTANCE_PORT</dt> <dd> <p>For an <code>SRV</code> record, the value
     * that Route 53 returns for the port. In addition, if the service includes
     * <code>HealthCheckConfig</code>, the port on the endpoint that Route 53 sends
     * requests to.</p> </dd> </dl>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A string map that contains the following information:</p> <ul> <li> <p>The
     * attributes that are associated with the instance. </p> </li> <li> <p>For each
     * attribute, the applicable value.</p> </li> </ul> <p>Supported attribute keys
     * include the following:</p> <dl> <dt>AWS_ALIAS_DNS_NAME</dt> <dd> <p>For an alias
     * record that routes traffic to an Elastic Load Balancing load balancer, the DNS
     * name that's associated with the load balancer. </p> </dd>
     * <dt>AWS_EC2_INSTANCE_ID (HTTP namespaces only)</dt> <dd> <p>The Amazon EC2
     * instance ID for the instance. When the <code>AWS_EC2_INSTANCE_ID</code>
     * attribute is specified, then the <code>AWS_INSTANCE_IPV4</code> attribute
     * contains the primary private IPv4 address.</p> </dd>
     * <dt>AWS_INIT_HEALTH_STATUS</dt> <dd> <p>If the service configuration includes
     * <code>HealthCheckCustomConfig</code>, you can optionally use
     * <code>AWS_INIT_HEALTH_STATUS</code> to specify the initial status of the custom
     * health check, <code>HEALTHY</code> or <code>UNHEALTHY</code>. If you don't
     * specify a value for <code>AWS_INIT_HEALTH_STATUS</code>, the initial status is
     * <code>HEALTHY</code>.</p> </dd> <dt>AWS_INSTANCE_CNAME</dt> <dd> <p>For a
     * <code>CNAME</code> record, the domain name that Route 53 returns in response to
     * DNS queries (for example, <code>example.com</code>).</p> </dd>
     * <dt>AWS_INSTANCE_IPV4</dt> <dd> <p>For an <code>A</code> record, the IPv4
     * address that Route 53 returns in response to DNS queries (for example,
     * <code>192.0.2.44</code>).</p> </dd> <dt>AWS_INSTANCE_IPV6</dt> <dd> <p>For an
     * <code>AAAA</code> record, the IPv6 address that Route 53 returns in response to
     * DNS queries (for example,
     * <code>2001:0db8:85a3:0000:0000:abcd:0001:2345</code>).</p> </dd>
     * <dt>AWS_INSTANCE_PORT</dt> <dd> <p>For an <code>SRV</code> record, the value
     * that Route 53 returns for the port. In addition, if the service includes
     * <code>HealthCheckConfig</code>, the port on the endpoint that Route 53 sends
     * requests to.</p> </dd> </dl>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A string map that contains the following information:</p> <ul> <li> <p>The
     * attributes that are associated with the instance. </p> </li> <li> <p>For each
     * attribute, the applicable value.</p> </li> </ul> <p>Supported attribute keys
     * include the following:</p> <dl> <dt>AWS_ALIAS_DNS_NAME</dt> <dd> <p>For an alias
     * record that routes traffic to an Elastic Load Balancing load balancer, the DNS
     * name that's associated with the load balancer. </p> </dd>
     * <dt>AWS_EC2_INSTANCE_ID (HTTP namespaces only)</dt> <dd> <p>The Amazon EC2
     * instance ID for the instance. When the <code>AWS_EC2_INSTANCE_ID</code>
     * attribute is specified, then the <code>AWS_INSTANCE_IPV4</code> attribute
     * contains the primary private IPv4 address.</p> </dd>
     * <dt>AWS_INIT_HEALTH_STATUS</dt> <dd> <p>If the service configuration includes
     * <code>HealthCheckCustomConfig</code>, you can optionally use
     * <code>AWS_INIT_HEALTH_STATUS</code> to specify the initial status of the custom
     * health check, <code>HEALTHY</code> or <code>UNHEALTHY</code>. If you don't
     * specify a value for <code>AWS_INIT_HEALTH_STATUS</code>, the initial status is
     * <code>HEALTHY</code>.</p> </dd> <dt>AWS_INSTANCE_CNAME</dt> <dd> <p>For a
     * <code>CNAME</code> record, the domain name that Route 53 returns in response to
     * DNS queries (for example, <code>example.com</code>).</p> </dd>
     * <dt>AWS_INSTANCE_IPV4</dt> <dd> <p>For an <code>A</code> record, the IPv4
     * address that Route 53 returns in response to DNS queries (for example,
     * <code>192.0.2.44</code>).</p> </dd> <dt>AWS_INSTANCE_IPV6</dt> <dd> <p>For an
     * <code>AAAA</code> record, the IPv6 address that Route 53 returns in response to
     * DNS queries (for example,
     * <code>2001:0db8:85a3:0000:0000:abcd:0001:2345</code>).</p> </dd>
     * <dt>AWS_INSTANCE_PORT</dt> <dd> <p>For an <code>SRV</code> record, the value
     * that Route 53 returns for the port. In addition, if the service includes
     * <code>HealthCheckConfig</code>, the port on the endpoint that Route 53 sends
     * requests to.</p> </dd> </dl>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A string map that contains the following information:</p> <ul> <li> <p>The
     * attributes that are associated with the instance. </p> </li> <li> <p>For each
     * attribute, the applicable value.</p> </li> </ul> <p>Supported attribute keys
     * include the following:</p> <dl> <dt>AWS_ALIAS_DNS_NAME</dt> <dd> <p>For an alias
     * record that routes traffic to an Elastic Load Balancing load balancer, the DNS
     * name that's associated with the load balancer. </p> </dd>
     * <dt>AWS_EC2_INSTANCE_ID (HTTP namespaces only)</dt> <dd> <p>The Amazon EC2
     * instance ID for the instance. When the <code>AWS_EC2_INSTANCE_ID</code>
     * attribute is specified, then the <code>AWS_INSTANCE_IPV4</code> attribute
     * contains the primary private IPv4 address.</p> </dd>
     * <dt>AWS_INIT_HEALTH_STATUS</dt> <dd> <p>If the service configuration includes
     * <code>HealthCheckCustomConfig</code>, you can optionally use
     * <code>AWS_INIT_HEALTH_STATUS</code> to specify the initial status of the custom
     * health check, <code>HEALTHY</code> or <code>UNHEALTHY</code>. If you don't
     * specify a value for <code>AWS_INIT_HEALTH_STATUS</code>, the initial status is
     * <code>HEALTHY</code>.</p> </dd> <dt>AWS_INSTANCE_CNAME</dt> <dd> <p>For a
     * <code>CNAME</code> record, the domain name that Route 53 returns in response to
     * DNS queries (for example, <code>example.com</code>).</p> </dd>
     * <dt>AWS_INSTANCE_IPV4</dt> <dd> <p>For an <code>A</code> record, the IPv4
     * address that Route 53 returns in response to DNS queries (for example,
     * <code>192.0.2.44</code>).</p> </dd> <dt>AWS_INSTANCE_IPV6</dt> <dd> <p>For an
     * <code>AAAA</code> record, the IPv6 address that Route 53 returns in response to
     * DNS queries (for example,
     * <code>2001:0db8:85a3:0000:0000:abcd:0001:2345</code>).</p> </dd>
     * <dt>AWS_INSTANCE_PORT</dt> <dd> <p>For an <code>SRV</code> record, the value
     * that Route 53 returns for the port. In addition, if the service includes
     * <code>HealthCheckConfig</code>, the port on the endpoint that Route 53 sends
     * requests to.</p> </dd> </dl>
     */
    inline InstanceSummary& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A string map that contains the following information:</p> <ul> <li> <p>The
     * attributes that are associated with the instance. </p> </li> <li> <p>For each
     * attribute, the applicable value.</p> </li> </ul> <p>Supported attribute keys
     * include the following:</p> <dl> <dt>AWS_ALIAS_DNS_NAME</dt> <dd> <p>For an alias
     * record that routes traffic to an Elastic Load Balancing load balancer, the DNS
     * name that's associated with the load balancer. </p> </dd>
     * <dt>AWS_EC2_INSTANCE_ID (HTTP namespaces only)</dt> <dd> <p>The Amazon EC2
     * instance ID for the instance. When the <code>AWS_EC2_INSTANCE_ID</code>
     * attribute is specified, then the <code>AWS_INSTANCE_IPV4</code> attribute
     * contains the primary private IPv4 address.</p> </dd>
     * <dt>AWS_INIT_HEALTH_STATUS</dt> <dd> <p>If the service configuration includes
     * <code>HealthCheckCustomConfig</code>, you can optionally use
     * <code>AWS_INIT_HEALTH_STATUS</code> to specify the initial status of the custom
     * health check, <code>HEALTHY</code> or <code>UNHEALTHY</code>. If you don't
     * specify a value for <code>AWS_INIT_HEALTH_STATUS</code>, the initial status is
     * <code>HEALTHY</code>.</p> </dd> <dt>AWS_INSTANCE_CNAME</dt> <dd> <p>For a
     * <code>CNAME</code> record, the domain name that Route 53 returns in response to
     * DNS queries (for example, <code>example.com</code>).</p> </dd>
     * <dt>AWS_INSTANCE_IPV4</dt> <dd> <p>For an <code>A</code> record, the IPv4
     * address that Route 53 returns in response to DNS queries (for example,
     * <code>192.0.2.44</code>).</p> </dd> <dt>AWS_INSTANCE_IPV6</dt> <dd> <p>For an
     * <code>AAAA</code> record, the IPv6 address that Route 53 returns in response to
     * DNS queries (for example,
     * <code>2001:0db8:85a3:0000:0000:abcd:0001:2345</code>).</p> </dd>
     * <dt>AWS_INSTANCE_PORT</dt> <dd> <p>For an <code>SRV</code> record, the value
     * that Route 53 returns for the port. In addition, if the service includes
     * <code>HealthCheckConfig</code>, the port on the endpoint that Route 53 sends
     * requests to.</p> </dd> </dl>
     */
    inline InstanceSummary& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A string map that contains the following information:</p> <ul> <li> <p>The
     * attributes that are associated with the instance. </p> </li> <li> <p>For each
     * attribute, the applicable value.</p> </li> </ul> <p>Supported attribute keys
     * include the following:</p> <dl> <dt>AWS_ALIAS_DNS_NAME</dt> <dd> <p>For an alias
     * record that routes traffic to an Elastic Load Balancing load balancer, the DNS
     * name that's associated with the load balancer. </p> </dd>
     * <dt>AWS_EC2_INSTANCE_ID (HTTP namespaces only)</dt> <dd> <p>The Amazon EC2
     * instance ID for the instance. When the <code>AWS_EC2_INSTANCE_ID</code>
     * attribute is specified, then the <code>AWS_INSTANCE_IPV4</code> attribute
     * contains the primary private IPv4 address.</p> </dd>
     * <dt>AWS_INIT_HEALTH_STATUS</dt> <dd> <p>If the service configuration includes
     * <code>HealthCheckCustomConfig</code>, you can optionally use
     * <code>AWS_INIT_HEALTH_STATUS</code> to specify the initial status of the custom
     * health check, <code>HEALTHY</code> or <code>UNHEALTHY</code>. If you don't
     * specify a value for <code>AWS_INIT_HEALTH_STATUS</code>, the initial status is
     * <code>HEALTHY</code>.</p> </dd> <dt>AWS_INSTANCE_CNAME</dt> <dd> <p>For a
     * <code>CNAME</code> record, the domain name that Route 53 returns in response to
     * DNS queries (for example, <code>example.com</code>).</p> </dd>
     * <dt>AWS_INSTANCE_IPV4</dt> <dd> <p>For an <code>A</code> record, the IPv4
     * address that Route 53 returns in response to DNS queries (for example,
     * <code>192.0.2.44</code>).</p> </dd> <dt>AWS_INSTANCE_IPV6</dt> <dd> <p>For an
     * <code>AAAA</code> record, the IPv6 address that Route 53 returns in response to
     * DNS queries (for example,
     * <code>2001:0db8:85a3:0000:0000:abcd:0001:2345</code>).</p> </dd>
     * <dt>AWS_INSTANCE_PORT</dt> <dd> <p>For an <code>SRV</code> record, the value
     * that Route 53 returns for the port. In addition, if the service includes
     * <code>HealthCheckConfig</code>, the port on the endpoint that Route 53 sends
     * requests to.</p> </dd> </dl>
     */
    inline InstanceSummary& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A string map that contains the following information:</p> <ul> <li> <p>The
     * attributes that are associated with the instance. </p> </li> <li> <p>For each
     * attribute, the applicable value.</p> </li> </ul> <p>Supported attribute keys
     * include the following:</p> <dl> <dt>AWS_ALIAS_DNS_NAME</dt> <dd> <p>For an alias
     * record that routes traffic to an Elastic Load Balancing load balancer, the DNS
     * name that's associated with the load balancer. </p> </dd>
     * <dt>AWS_EC2_INSTANCE_ID (HTTP namespaces only)</dt> <dd> <p>The Amazon EC2
     * instance ID for the instance. When the <code>AWS_EC2_INSTANCE_ID</code>
     * attribute is specified, then the <code>AWS_INSTANCE_IPV4</code> attribute
     * contains the primary private IPv4 address.</p> </dd>
     * <dt>AWS_INIT_HEALTH_STATUS</dt> <dd> <p>If the service configuration includes
     * <code>HealthCheckCustomConfig</code>, you can optionally use
     * <code>AWS_INIT_HEALTH_STATUS</code> to specify the initial status of the custom
     * health check, <code>HEALTHY</code> or <code>UNHEALTHY</code>. If you don't
     * specify a value for <code>AWS_INIT_HEALTH_STATUS</code>, the initial status is
     * <code>HEALTHY</code>.</p> </dd> <dt>AWS_INSTANCE_CNAME</dt> <dd> <p>For a
     * <code>CNAME</code> record, the domain name that Route 53 returns in response to
     * DNS queries (for example, <code>example.com</code>).</p> </dd>
     * <dt>AWS_INSTANCE_IPV4</dt> <dd> <p>For an <code>A</code> record, the IPv4
     * address that Route 53 returns in response to DNS queries (for example,
     * <code>192.0.2.44</code>).</p> </dd> <dt>AWS_INSTANCE_IPV6</dt> <dd> <p>For an
     * <code>AAAA</code> record, the IPv6 address that Route 53 returns in response to
     * DNS queries (for example,
     * <code>2001:0db8:85a3:0000:0000:abcd:0001:2345</code>).</p> </dd>
     * <dt>AWS_INSTANCE_PORT</dt> <dd> <p>For an <code>SRV</code> record, the value
     * that Route 53 returns for the port. In addition, if the service includes
     * <code>HealthCheckConfig</code>, the port on the endpoint that Route 53 sends
     * requests to.</p> </dd> </dl>
     */
    inline InstanceSummary& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string map that contains the following information:</p> <ul> <li> <p>The
     * attributes that are associated with the instance. </p> </li> <li> <p>For each
     * attribute, the applicable value.</p> </li> </ul> <p>Supported attribute keys
     * include the following:</p> <dl> <dt>AWS_ALIAS_DNS_NAME</dt> <dd> <p>For an alias
     * record that routes traffic to an Elastic Load Balancing load balancer, the DNS
     * name that's associated with the load balancer. </p> </dd>
     * <dt>AWS_EC2_INSTANCE_ID (HTTP namespaces only)</dt> <dd> <p>The Amazon EC2
     * instance ID for the instance. When the <code>AWS_EC2_INSTANCE_ID</code>
     * attribute is specified, then the <code>AWS_INSTANCE_IPV4</code> attribute
     * contains the primary private IPv4 address.</p> </dd>
     * <dt>AWS_INIT_HEALTH_STATUS</dt> <dd> <p>If the service configuration includes
     * <code>HealthCheckCustomConfig</code>, you can optionally use
     * <code>AWS_INIT_HEALTH_STATUS</code> to specify the initial status of the custom
     * health check, <code>HEALTHY</code> or <code>UNHEALTHY</code>. If you don't
     * specify a value for <code>AWS_INIT_HEALTH_STATUS</code>, the initial status is
     * <code>HEALTHY</code>.</p> </dd> <dt>AWS_INSTANCE_CNAME</dt> <dd> <p>For a
     * <code>CNAME</code> record, the domain name that Route 53 returns in response to
     * DNS queries (for example, <code>example.com</code>).</p> </dd>
     * <dt>AWS_INSTANCE_IPV4</dt> <dd> <p>For an <code>A</code> record, the IPv4
     * address that Route 53 returns in response to DNS queries (for example,
     * <code>192.0.2.44</code>).</p> </dd> <dt>AWS_INSTANCE_IPV6</dt> <dd> <p>For an
     * <code>AAAA</code> record, the IPv6 address that Route 53 returns in response to
     * DNS queries (for example,
     * <code>2001:0db8:85a3:0000:0000:abcd:0001:2345</code>).</p> </dd>
     * <dt>AWS_INSTANCE_PORT</dt> <dd> <p>For an <code>SRV</code> record, the value
     * that Route 53 returns for the port. In addition, if the service includes
     * <code>HealthCheckConfig</code>, the port on the endpoint that Route 53 sends
     * requests to.</p> </dd> </dl>
     */
    inline InstanceSummary& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string map that contains the following information:</p> <ul> <li> <p>The
     * attributes that are associated with the instance. </p> </li> <li> <p>For each
     * attribute, the applicable value.</p> </li> </ul> <p>Supported attribute keys
     * include the following:</p> <dl> <dt>AWS_ALIAS_DNS_NAME</dt> <dd> <p>For an alias
     * record that routes traffic to an Elastic Load Balancing load balancer, the DNS
     * name that's associated with the load balancer. </p> </dd>
     * <dt>AWS_EC2_INSTANCE_ID (HTTP namespaces only)</dt> <dd> <p>The Amazon EC2
     * instance ID for the instance. When the <code>AWS_EC2_INSTANCE_ID</code>
     * attribute is specified, then the <code>AWS_INSTANCE_IPV4</code> attribute
     * contains the primary private IPv4 address.</p> </dd>
     * <dt>AWS_INIT_HEALTH_STATUS</dt> <dd> <p>If the service configuration includes
     * <code>HealthCheckCustomConfig</code>, you can optionally use
     * <code>AWS_INIT_HEALTH_STATUS</code> to specify the initial status of the custom
     * health check, <code>HEALTHY</code> or <code>UNHEALTHY</code>. If you don't
     * specify a value for <code>AWS_INIT_HEALTH_STATUS</code>, the initial status is
     * <code>HEALTHY</code>.</p> </dd> <dt>AWS_INSTANCE_CNAME</dt> <dd> <p>For a
     * <code>CNAME</code> record, the domain name that Route 53 returns in response to
     * DNS queries (for example, <code>example.com</code>).</p> </dd>
     * <dt>AWS_INSTANCE_IPV4</dt> <dd> <p>For an <code>A</code> record, the IPv4
     * address that Route 53 returns in response to DNS queries (for example,
     * <code>192.0.2.44</code>).</p> </dd> <dt>AWS_INSTANCE_IPV6</dt> <dd> <p>For an
     * <code>AAAA</code> record, the IPv6 address that Route 53 returns in response to
     * DNS queries (for example,
     * <code>2001:0db8:85a3:0000:0000:abcd:0001:2345</code>).</p> </dd>
     * <dt>AWS_INSTANCE_PORT</dt> <dd> <p>For an <code>SRV</code> record, the value
     * that Route 53 returns for the port. In addition, if the service includes
     * <code>HealthCheckConfig</code>, the port on the endpoint that Route 53 sends
     * requests to.</p> </dd> </dl>
     */
    inline InstanceSummary& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A string map that contains the following information:</p> <ul> <li> <p>The
     * attributes that are associated with the instance. </p> </li> <li> <p>For each
     * attribute, the applicable value.</p> </li> </ul> <p>Supported attribute keys
     * include the following:</p> <dl> <dt>AWS_ALIAS_DNS_NAME</dt> <dd> <p>For an alias
     * record that routes traffic to an Elastic Load Balancing load balancer, the DNS
     * name that's associated with the load balancer. </p> </dd>
     * <dt>AWS_EC2_INSTANCE_ID (HTTP namespaces only)</dt> <dd> <p>The Amazon EC2
     * instance ID for the instance. When the <code>AWS_EC2_INSTANCE_ID</code>
     * attribute is specified, then the <code>AWS_INSTANCE_IPV4</code> attribute
     * contains the primary private IPv4 address.</p> </dd>
     * <dt>AWS_INIT_HEALTH_STATUS</dt> <dd> <p>If the service configuration includes
     * <code>HealthCheckCustomConfig</code>, you can optionally use
     * <code>AWS_INIT_HEALTH_STATUS</code> to specify the initial status of the custom
     * health check, <code>HEALTHY</code> or <code>UNHEALTHY</code>. If you don't
     * specify a value for <code>AWS_INIT_HEALTH_STATUS</code>, the initial status is
     * <code>HEALTHY</code>.</p> </dd> <dt>AWS_INSTANCE_CNAME</dt> <dd> <p>For a
     * <code>CNAME</code> record, the domain name that Route 53 returns in response to
     * DNS queries (for example, <code>example.com</code>).</p> </dd>
     * <dt>AWS_INSTANCE_IPV4</dt> <dd> <p>For an <code>A</code> record, the IPv4
     * address that Route 53 returns in response to DNS queries (for example,
     * <code>192.0.2.44</code>).</p> </dd> <dt>AWS_INSTANCE_IPV6</dt> <dd> <p>For an
     * <code>AAAA</code> record, the IPv6 address that Route 53 returns in response to
     * DNS queries (for example,
     * <code>2001:0db8:85a3:0000:0000:abcd:0001:2345</code>).</p> </dd>
     * <dt>AWS_INSTANCE_PORT</dt> <dd> <p>For an <code>SRV</code> record, the value
     * that Route 53 returns for the port. In addition, if the service includes
     * <code>HealthCheckConfig</code>, the port on the endpoint that Route 53 sends
     * requests to.</p> </dd> </dl>
     */
    inline InstanceSummary& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string map that contains the following information:</p> <ul> <li> <p>The
     * attributes that are associated with the instance. </p> </li> <li> <p>For each
     * attribute, the applicable value.</p> </li> </ul> <p>Supported attribute keys
     * include the following:</p> <dl> <dt>AWS_ALIAS_DNS_NAME</dt> <dd> <p>For an alias
     * record that routes traffic to an Elastic Load Balancing load balancer, the DNS
     * name that's associated with the load balancer. </p> </dd>
     * <dt>AWS_EC2_INSTANCE_ID (HTTP namespaces only)</dt> <dd> <p>The Amazon EC2
     * instance ID for the instance. When the <code>AWS_EC2_INSTANCE_ID</code>
     * attribute is specified, then the <code>AWS_INSTANCE_IPV4</code> attribute
     * contains the primary private IPv4 address.</p> </dd>
     * <dt>AWS_INIT_HEALTH_STATUS</dt> <dd> <p>If the service configuration includes
     * <code>HealthCheckCustomConfig</code>, you can optionally use
     * <code>AWS_INIT_HEALTH_STATUS</code> to specify the initial status of the custom
     * health check, <code>HEALTHY</code> or <code>UNHEALTHY</code>. If you don't
     * specify a value for <code>AWS_INIT_HEALTH_STATUS</code>, the initial status is
     * <code>HEALTHY</code>.</p> </dd> <dt>AWS_INSTANCE_CNAME</dt> <dd> <p>For a
     * <code>CNAME</code> record, the domain name that Route 53 returns in response to
     * DNS queries (for example, <code>example.com</code>).</p> </dd>
     * <dt>AWS_INSTANCE_IPV4</dt> <dd> <p>For an <code>A</code> record, the IPv4
     * address that Route 53 returns in response to DNS queries (for example,
     * <code>192.0.2.44</code>).</p> </dd> <dt>AWS_INSTANCE_IPV6</dt> <dd> <p>For an
     * <code>AAAA</code> record, the IPv6 address that Route 53 returns in response to
     * DNS queries (for example,
     * <code>2001:0db8:85a3:0000:0000:abcd:0001:2345</code>).</p> </dd>
     * <dt>AWS_INSTANCE_PORT</dt> <dd> <p>For an <code>SRV</code> record, the value
     * that Route 53 returns for the port. In addition, if the service includes
     * <code>HealthCheckConfig</code>, the port on the endpoint that Route 53 sends
     * requests to.</p> </dd> </dl>
     */
    inline InstanceSummary& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string map that contains the following information:</p> <ul> <li> <p>The
     * attributes that are associated with the instance. </p> </li> <li> <p>For each
     * attribute, the applicable value.</p> </li> </ul> <p>Supported attribute keys
     * include the following:</p> <dl> <dt>AWS_ALIAS_DNS_NAME</dt> <dd> <p>For an alias
     * record that routes traffic to an Elastic Load Balancing load balancer, the DNS
     * name that's associated with the load balancer. </p> </dd>
     * <dt>AWS_EC2_INSTANCE_ID (HTTP namespaces only)</dt> <dd> <p>The Amazon EC2
     * instance ID for the instance. When the <code>AWS_EC2_INSTANCE_ID</code>
     * attribute is specified, then the <code>AWS_INSTANCE_IPV4</code> attribute
     * contains the primary private IPv4 address.</p> </dd>
     * <dt>AWS_INIT_HEALTH_STATUS</dt> <dd> <p>If the service configuration includes
     * <code>HealthCheckCustomConfig</code>, you can optionally use
     * <code>AWS_INIT_HEALTH_STATUS</code> to specify the initial status of the custom
     * health check, <code>HEALTHY</code> or <code>UNHEALTHY</code>. If you don't
     * specify a value for <code>AWS_INIT_HEALTH_STATUS</code>, the initial status is
     * <code>HEALTHY</code>.</p> </dd> <dt>AWS_INSTANCE_CNAME</dt> <dd> <p>For a
     * <code>CNAME</code> record, the domain name that Route 53 returns in response to
     * DNS queries (for example, <code>example.com</code>).</p> </dd>
     * <dt>AWS_INSTANCE_IPV4</dt> <dd> <p>For an <code>A</code> record, the IPv4
     * address that Route 53 returns in response to DNS queries (for example,
     * <code>192.0.2.44</code>).</p> </dd> <dt>AWS_INSTANCE_IPV6</dt> <dd> <p>For an
     * <code>AAAA</code> record, the IPv6 address that Route 53 returns in response to
     * DNS queries (for example,
     * <code>2001:0db8:85a3:0000:0000:abcd:0001:2345</code>).</p> </dd>
     * <dt>AWS_INSTANCE_PORT</dt> <dd> <p>For an <code>SRV</code> record, the value
     * that Route 53 returns for the port. In addition, if the service includes
     * <code>HealthCheckConfig</code>, the port on the endpoint that Route 53 sends
     * requests to.</p> </dd> </dl>
     */
    inline InstanceSummary& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
