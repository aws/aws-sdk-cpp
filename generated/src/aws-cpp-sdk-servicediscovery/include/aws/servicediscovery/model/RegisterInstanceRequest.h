﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/ServiceDiscoveryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

  /**
   */
  class RegisterInstanceRequest : public ServiceDiscoveryRequest
  {
  public:
    AWS_SERVICEDISCOVERY_API RegisterInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterInstance"; }

    AWS_SERVICEDISCOVERY_API Aws::String SerializePayload() const override;

    AWS_SERVICEDISCOVERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the service that you want to use for settings for the instance.</p>
     */
    inline const Aws::String& GetServiceId() const { return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    template<typename ServiceIdT = Aws::String>
    void SetServiceId(ServiceIdT&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::forward<ServiceIdT>(value); }
    template<typename ServiceIdT = Aws::String>
    RegisterInstanceRequest& WithServiceId(ServiceIdT&& value) { SetServiceId(std::forward<ServiceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier that you want to associate with the instance. Note the
     * following:</p> <ul> <li> <p>If the service that's specified by
     * <code>ServiceId</code> includes settings for an <code>SRV</code> record, the
     * value of <code>InstanceId</code> is automatically included as part of the value
     * for the <code>SRV</code> record. For more information, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_DnsRecord.html#cloudmap-Type-DnsRecord-Type">DnsRecord
     * &gt; Type</a>.</p> </li> <li> <p>You can use this value to update an existing
     * instance.</p> </li> <li> <p>To register a new instance, you must specify a value
     * that's unique among instances that you register by using the same service. </p>
     * </li> <li> <p>If you specify an existing <code>InstanceId</code> and
     * <code>ServiceId</code>, Cloud Map updates the existing DNS records, if any. If
     * there's also an existing health check, Cloud Map deletes the old health check
     * and creates a new one. </p>  <p>The health check isn't deleted
     * immediately, so it will still appear for a while if you submit a
     * <code>ListHealthChecks</code> request, for example.</p>  </li> </ul>
     *  <p>Do not include sensitive information in <code>InstanceId</code> if the
     * namespace is discoverable by public DNS queries and any <code>Type</code> member
     * of <code>DnsRecord</code> for the service contains <code>SRV</code> because the
     * <code>InstanceId</code> is discoverable by public DNS queries.</p> 
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    RegisterInstanceRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>RegisterInstance</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CreatorRequestId</code> string every time you submit a
     * <code>RegisterInstance</code> request if you're registering additional instances
     * for the same namespace and service. <code>CreatorRequestId</code> can be any
     * unique string (for example, a date/time stamp).</p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    RegisterInstanceRequest& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string map that contains the following information for the service that you
     * specify in <code>ServiceId</code>:</p> <ul> <li> <p>The attributes that apply to
     * the records that are defined in the service. </p> </li> <li> <p>For each
     * attribute, the applicable value.</p> </li> </ul>  <p>Do not include
     * sensitive information in the attributes if the namespace is discoverable by
     * public DNS queries.</p>  <p>The following are the supported
     * attribute keys.</p> <dl> <dt>AWS_ALIAS_DNS_NAME</dt> <dd> <p>If you want Cloud
     * Map to create an Amazon Route 53 alias record that routes traffic to an Elastic
     * Load Balancing load balancer, specify the DNS name that's associated with the
     * load balancer. For information about how to get the DNS name, see "DNSName" in
     * the topic <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_AliasTarget.html">AliasTarget</a>
     * in the <i>Route 53 API Reference</i>.</p> <p>Note the following:</p> <ul> <li>
     * <p>The configuration for the service that's specified by <code>ServiceId</code>
     * must include settings for an <code>A</code> record, an <code>AAAA</code> record,
     * or both.</p> </li> <li> <p>In the service that's specified by
     * <code>ServiceId</code>, the value of <code>RoutingPolicy</code> must be
     * <code>WEIGHTED</code>.</p> </li> <li> <p>If the service that's specified by
     * <code>ServiceId</code> includes <code>HealthCheckConfig</code> settings, Cloud
     * Map will create the Route 53 health check, but it doesn't associate the health
     * check with the alias record.</p> </li> <li> <p>Cloud Map currently doesn't
     * support creating alias records that route traffic to Amazon Web Services
     * resources other than Elastic Load Balancing load balancers.</p> </li> <li> <p>If
     * you specify a value for <code>AWS_ALIAS_DNS_NAME</code>, don't specify values
     * for any of the <code>AWS_INSTANCE</code> attributes.</p> </li> <li> <p>The
     * <code>AWS_ALIAS_DNS_NAME</code> is not supported in the GovCloud (US)
     * Regions.</p> </li> </ul> </dd> <dt>AWS_EC2_INSTANCE_ID</dt> <dd> <p> <i>HTTP
     * namespaces only.</i> The Amazon EC2 instance ID for the instance. If the
     * <code>AWS_EC2_INSTANCE_ID</code> attribute is specified, then the only other
     * attribute that can be specified is <code>AWS_INIT_HEALTH_STATUS</code>. When the
     * <code>AWS_EC2_INSTANCE_ID</code> attribute is specified, then the
     * <code>AWS_INSTANCE_IPV4</code> attribute will be filled out with the primary
     * private IPv4 address.</p> </dd> <dt>AWS_INIT_HEALTH_STATUS</dt> <dd> <p>If the
     * service configuration includes <code>HealthCheckCustomConfig</code>, you can
     * optionally use <code>AWS_INIT_HEALTH_STATUS</code> to specify the initial status
     * of the custom health check, <code>HEALTHY</code> or <code>UNHEALTHY</code>. If
     * you don't specify a value for <code>AWS_INIT_HEALTH_STATUS</code>, the initial
     * status is <code>HEALTHY</code>.</p> </dd> <dt>AWS_INSTANCE_CNAME</dt> <dd> <p>If
     * the service configuration includes a <code>CNAME</code> record, the domain name
     * that you want Route 53 to return in response to DNS queries (for example,
     * <code>example.com</code>).</p> <p>This value is required if the service
     * specified by <code>ServiceId</code> includes settings for an <code>CNAME</code>
     * record.</p> </dd> <dt>AWS_INSTANCE_IPV4</dt> <dd> <p>If the service
     * configuration includes an <code>A</code> record, the IPv4 address that you want
     * Route 53 to return in response to DNS queries (for example,
     * <code>192.0.2.44</code>).</p> <p>This value is required if the service specified
     * by <code>ServiceId</code> includes settings for an <code>A</code> record. If the
     * service includes settings for an <code>SRV</code> record, you must specify a
     * value for <code>AWS_INSTANCE_IPV4</code>, <code>AWS_INSTANCE_IPV6</code>, or
     * both.</p> </dd> <dt>AWS_INSTANCE_IPV6</dt> <dd> <p>If the service configuration
     * includes an <code>AAAA</code> record, the IPv6 address that you want Route 53 to
     * return in response to DNS queries (for example,
     * <code>2001:0db8:85a3:0000:0000:abcd:0001:2345</code>).</p> <p>This value is
     * required if the service specified by <code>ServiceId</code> includes settings
     * for an <code>AAAA</code> record. If the service includes settings for an
     * <code>SRV</code> record, you must specify a value for
     * <code>AWS_INSTANCE_IPV4</code>, <code>AWS_INSTANCE_IPV6</code>, or both.</p>
     * </dd> <dt>AWS_INSTANCE_PORT</dt> <dd> <p>If the service includes an
     * <code>SRV</code> record, the value that you want Route 53 to return for the
     * port.</p> <p>If the service includes <code>HealthCheckConfig</code>, the port on
     * the endpoint that you want Route 53 to send requests to. </p> <p>This value is
     * required if you specified settings for an <code>SRV</code> record or a Route 53
     * health check when you created the service.</p> </dd> <dt>Custom attributes</dt>
     * <dd> <p>You can add up to 30 custom attributes. For each key-value pair, the
     * maximum length of the attribute name is 255 characters, and the maximum length
     * of the attribute value is 1,024 characters. The total size of all provided
     * attributes (sum of all keys and values) must not exceed 5,000 characters.</p>
     * </dd> </dl>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    RegisterInstanceRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    RegisterInstanceRequest& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_creatorRequestId{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_creatorRequestIdHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
