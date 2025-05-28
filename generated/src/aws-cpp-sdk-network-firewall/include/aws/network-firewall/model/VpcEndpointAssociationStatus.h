/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/FirewallStatusValue.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/AZSyncState.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>Detailed information about the current status of a
   * <a>VpcEndpointAssociation</a>. You can retrieve this by calling
   * <a>DescribeVpcEndpointAssociation</a> and providing the VPC endpoint association
   * ARN.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/VpcEndpointAssociationStatus">AWS
   * API Reference</a></p>
   */
  class VpcEndpointAssociationStatus
  {
  public:
    AWS_NETWORKFIREWALL_API VpcEndpointAssociationStatus() = default;
    AWS_NETWORKFIREWALL_API VpcEndpointAssociationStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API VpcEndpointAssociationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The readiness of the configured firewall endpoint to handle network traffic.
     * </p>
     */
    inline FirewallStatusValue GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FirewallStatusValue value) { m_statusHasBeenSet = true; m_status = value; }
    inline VpcEndpointAssociationStatus& WithStatus(FirewallStatusValue value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of the Availability Zone sync states for all subnets that are
     * defined by the firewall. </p>
     */
    inline const Aws::Map<Aws::String, AZSyncState>& GetAssociationSyncState() const { return m_associationSyncState; }
    inline bool AssociationSyncStateHasBeenSet() const { return m_associationSyncStateHasBeenSet; }
    template<typename AssociationSyncStateT = Aws::Map<Aws::String, AZSyncState>>
    void SetAssociationSyncState(AssociationSyncStateT&& value) { m_associationSyncStateHasBeenSet = true; m_associationSyncState = std::forward<AssociationSyncStateT>(value); }
    template<typename AssociationSyncStateT = Aws::Map<Aws::String, AZSyncState>>
    VpcEndpointAssociationStatus& WithAssociationSyncState(AssociationSyncStateT&& value) { SetAssociationSyncState(std::forward<AssociationSyncStateT>(value)); return *this;}
    template<typename AssociationSyncStateKeyT = Aws::String, typename AssociationSyncStateValueT = AZSyncState>
    VpcEndpointAssociationStatus& AddAssociationSyncState(AssociationSyncStateKeyT&& key, AssociationSyncStateValueT&& value) {
      m_associationSyncStateHasBeenSet = true; m_associationSyncState.emplace(std::forward<AssociationSyncStateKeyT>(key), std::forward<AssociationSyncStateValueT>(value)); return *this;
    }
    ///@}
  private:

    FirewallStatusValue m_status{FirewallStatusValue::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, AZSyncState> m_associationSyncState;
    bool m_associationSyncStateHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
