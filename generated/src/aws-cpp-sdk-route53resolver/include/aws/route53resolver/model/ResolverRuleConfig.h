/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/TargetAddress.h>
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
namespace Route53Resolver
{
namespace Model
{

  /**
   * <p>In an <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_UpdateResolverRule.html">UpdateResolverRule</a>
   * request, information about the changes that you want to make.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ResolverRuleConfig">AWS
   * API Reference</a></p>
   */
  class ResolverRuleConfig
  {
  public:
    AWS_ROUTE53RESOLVER_API ResolverRuleConfig() = default;
    AWS_ROUTE53RESOLVER_API ResolverRuleConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API ResolverRuleConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The new name for the Resolver rule. The name that you specify appears in the
     * Resolver dashboard in the Route 53 console. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ResolverRuleConfig& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For DNS queries that originate in your VPC, the new IP addresses that you
     * want to route outbound DNS queries to.</p>
     */
    inline const Aws::Vector<TargetAddress>& GetTargetIps() const { return m_targetIps; }
    inline bool TargetIpsHasBeenSet() const { return m_targetIpsHasBeenSet; }
    template<typename TargetIpsT = Aws::Vector<TargetAddress>>
    void SetTargetIps(TargetIpsT&& value) { m_targetIpsHasBeenSet = true; m_targetIps = std::forward<TargetIpsT>(value); }
    template<typename TargetIpsT = Aws::Vector<TargetAddress>>
    ResolverRuleConfig& WithTargetIps(TargetIpsT&& value) { SetTargetIps(std::forward<TargetIpsT>(value)); return *this;}
    template<typename TargetIpsT = TargetAddress>
    ResolverRuleConfig& AddTargetIps(TargetIpsT&& value) { m_targetIpsHasBeenSet = true; m_targetIps.emplace_back(std::forward<TargetIpsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the new outbound Resolver endpoint that you want to use to route
     * DNS queries to the IP addresses that you specify in <code>TargetIps</code>.</p>
     */
    inline const Aws::String& GetResolverEndpointId() const { return m_resolverEndpointId; }
    inline bool ResolverEndpointIdHasBeenSet() const { return m_resolverEndpointIdHasBeenSet; }
    template<typename ResolverEndpointIdT = Aws::String>
    void SetResolverEndpointId(ResolverEndpointIdT&& value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId = std::forward<ResolverEndpointIdT>(value); }
    template<typename ResolverEndpointIdT = Aws::String>
    ResolverRuleConfig& WithResolverEndpointId(ResolverEndpointIdT&& value) { SetResolverEndpointId(std::forward<ResolverEndpointIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<TargetAddress> m_targetIps;
    bool m_targetIpsHasBeenSet = false;

    Aws::String m_resolverEndpointId;
    bool m_resolverEndpointIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
