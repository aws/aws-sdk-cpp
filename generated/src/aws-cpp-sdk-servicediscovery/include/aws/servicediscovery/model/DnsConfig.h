/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/RoutingPolicy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicediscovery/model/DnsRecord.h>
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
   * <p>A complex type that contains information about the Amazon Route 53 DNS
   * records that you want Cloud Map to create when you register an
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/DnsConfig">AWS
   * API Reference</a></p>
   */
  class DnsConfig
  {
  public:
    AWS_SERVICEDISCOVERY_API DnsConfig() = default;
    AWS_SERVICEDISCOVERY_API DnsConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API DnsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The routing policy that you want to apply to all Route 53 DNS records that
     * Cloud Map creates when you register an instance and specify this service.</p>
     *  <p>If you want to use this service to register instances that create
     * alias records, specify <code>WEIGHTED</code> for the routing policy.</p> 
     * <p>You can specify the following values:</p> <dl> <dt>MULTIVALUE</dt> <dd> <p>If
     * you define a health check for the service and the health check is healthy,
     * Route 53 returns the applicable value for up to eight instances.</p> <p>For
     * example, suppose that the service includes configurations for one <code>A</code>
     * record and a health check. You use the service to register 10 instances.
     * Route 53 responds to DNS queries with IP addresses for up to eight healthy
     * instances. If fewer than eight instances are healthy, Route 53 responds to every
     * DNS query with the IP addresses for all of the healthy instances.</p> <p>If you
     * don't define a health check for the service, Route 53 assumes that all instances
     * are healthy and returns the values for up to eight instances.</p> <p>For more
     * information about the multivalue routing policy, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy.html#routing-policy-multivalue">Multivalue
     * Answer Routing</a> in the <i>Route 53 Developer Guide</i>.</p> </dd>
     * <dt>WEIGHTED</dt> <dd> <p>Route 53 returns the applicable value from one
     * randomly selected instance from among the instances that you registered using
     * the same service. Currently, all records have the same weight, so you can't
     * route more or less traffic to any instances.</p> <p>For example, suppose that
     * the service includes configurations for one <code>A</code> record and a health
     * check. You use the service to register 10 instances. Route 53 responds to DNS
     * queries with the IP address for one randomly selected instance from among the
     * healthy instances. If no instances are healthy, Route 53 responds to DNS queries
     * as if all of the instances were healthy.</p> <p>If you don't define a health
     * check for the service, Route 53 assumes that all instances are healthy and
     * returns the applicable value for one randomly selected instance.</p> <p>For more
     * information about the weighted routing policy, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy.html#routing-policy-weighted">Weighted
     * Routing</a> in the <i>Route 53 Developer Guide</i>.</p> </dd> </dl>
     */
    inline RoutingPolicy GetRoutingPolicy() const { return m_routingPolicy; }
    inline bool RoutingPolicyHasBeenSet() const { return m_routingPolicyHasBeenSet; }
    inline void SetRoutingPolicy(RoutingPolicy value) { m_routingPolicyHasBeenSet = true; m_routingPolicy = value; }
    inline DnsConfig& WithRoutingPolicy(RoutingPolicy value) { SetRoutingPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that contains one <code>DnsRecord</code> object for each Route 53
     * DNS record that you want Cloud Map to create when you register an instance.</p>
     *  <p>The record type of a service specified in a
     * <code>DnsRecord</code> object can't be updated. To change a record type, you
     * need to delete the service and recreate it with a new
     * <code>DnsConfig</code>.</p> 
     */
    inline const Aws::Vector<DnsRecord>& GetDnsRecords() const { return m_dnsRecords; }
    inline bool DnsRecordsHasBeenSet() const { return m_dnsRecordsHasBeenSet; }
    template<typename DnsRecordsT = Aws::Vector<DnsRecord>>
    void SetDnsRecords(DnsRecordsT&& value) { m_dnsRecordsHasBeenSet = true; m_dnsRecords = std::forward<DnsRecordsT>(value); }
    template<typename DnsRecordsT = Aws::Vector<DnsRecord>>
    DnsConfig& WithDnsRecords(DnsRecordsT&& value) { SetDnsRecords(std::forward<DnsRecordsT>(value)); return *this;}
    template<typename DnsRecordsT = DnsRecord>
    DnsConfig& AddDnsRecords(DnsRecordsT&& value) { m_dnsRecordsHasBeenSet = true; m_dnsRecords.emplace_back(std::forward<DnsRecordsT>(value)); return *this; }
    ///@}
  private:

    RoutingPolicy m_routingPolicy{RoutingPolicy::NOT_SET};
    bool m_routingPolicyHasBeenSet = false;

    Aws::Vector<DnsRecord> m_dnsRecords;
    bool m_dnsRecordsHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
