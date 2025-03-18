/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/FirewallFailOpenStatus.h>
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
   * <p>Configuration of the firewall behavior provided by DNS Firewall for a single
   * VPC from Amazon Virtual Private Cloud (Amazon VPC). </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/FirewallConfig">AWS
   * API Reference</a></p>
   */
  class FirewallConfig
  {
  public:
    AWS_ROUTE53RESOLVER_API FirewallConfig() = default;
    AWS_ROUTE53RESOLVER_API FirewallConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API FirewallConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the firewall configuration.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    FirewallConfig& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC that this firewall configuration applies to.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    FirewallConfig& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the owner of the VPC that this firewall
     * configuration applies to.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    FirewallConfig& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines how DNS Firewall operates during failures, for example when all
     * traffic that is sent to DNS Firewall fails to receive a reply. </p> <ul> <li>
     * <p>By default, fail open is disabled, which means the failure mode is closed.
     * This approach favors security over availability. DNS Firewall returns a failure
     * error when it is unable to properly evaluate a query. </p> </li> <li> <p>If you
     * enable this option, the failure mode is open. This approach favors availability
     * over security. DNS Firewall allows queries to proceed if it is unable to
     * properly evaluate them. </p> </li> </ul> <p>This behavior is only enforced for
     * VPCs that have at least one DNS Firewall rule group association. </p>
     */
    inline FirewallFailOpenStatus GetFirewallFailOpen() const { return m_firewallFailOpen; }
    inline bool FirewallFailOpenHasBeenSet() const { return m_firewallFailOpenHasBeenSet; }
    inline void SetFirewallFailOpen(FirewallFailOpenStatus value) { m_firewallFailOpenHasBeenSet = true; m_firewallFailOpen = value; }
    inline FirewallConfig& WithFirewallFailOpen(FirewallFailOpenStatus value) { SetFirewallFailOpen(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    FirewallFailOpenStatus m_firewallFailOpen{FirewallFailOpenStatus::NOT_SET};
    bool m_firewallFailOpenHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
