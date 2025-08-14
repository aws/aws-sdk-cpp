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
    AWS_SERVICEDISCOVERY_API InstanceSummary() = default;
    AWS_SERVICEDISCOVERY_API InstanceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API InstanceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for an instance that you created by using a specified service.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    InstanceSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    InstanceSummary& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    InstanceSummary& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that registered the instance. If
     * this isn't your account ID, it's the ID of the account that shared the namespace
     * with your account or the ID of another account with which the namespace has been
     * shared. For more information about shared namespaces, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/dg/sharing-namespaces.html">Cross-account
     * Cloud Map namespace sharing</a> in the <i>Cloud Map Developer Guide</i>.</p>
     */
    inline const Aws::String& GetCreatedByAccount() const { return m_createdByAccount; }
    inline bool CreatedByAccountHasBeenSet() const { return m_createdByAccountHasBeenSet; }
    template<typename CreatedByAccountT = Aws::String>
    void SetCreatedByAccount(CreatedByAccountT&& value) { m_createdByAccountHasBeenSet = true; m_createdByAccount = std::forward<CreatedByAccountT>(value); }
    template<typename CreatedByAccountT = Aws::String>
    InstanceSummary& WithCreatedByAccount(CreatedByAccountT&& value) { SetCreatedByAccount(std::forward<CreatedByAccountT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_createdByAccount;
    bool m_createdByAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
