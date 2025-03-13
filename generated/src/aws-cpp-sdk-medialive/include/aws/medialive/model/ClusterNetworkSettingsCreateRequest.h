/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/InterfaceMappingCreateRequest.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Used in a CreateClusterRequest.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ClusterNetworkSettingsCreateRequest">AWS
   * API Reference</a></p>
   */
  class ClusterNetworkSettingsCreateRequest
  {
  public:
    AWS_MEDIALIVE_API ClusterNetworkSettingsCreateRequest() = default;
    AWS_MEDIALIVE_API ClusterNetworkSettingsCreateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ClusterNetworkSettingsCreateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify one network interface as the default route for traffic to and from the
     * Node. MediaLive Anywhere uses this default when the destination for the traffic
     * isn't covered by the route table for any of the networks. Specify the value of
     * the appropriate logicalInterfaceName parameter that you create in the
     * interfaceMappings.
     */
    inline const Aws::String& GetDefaultRoute() const { return m_defaultRoute; }
    inline bool DefaultRouteHasBeenSet() const { return m_defaultRouteHasBeenSet; }
    template<typename DefaultRouteT = Aws::String>
    void SetDefaultRoute(DefaultRouteT&& value) { m_defaultRouteHasBeenSet = true; m_defaultRoute = std::forward<DefaultRouteT>(value); }
    template<typename DefaultRouteT = Aws::String>
    ClusterNetworkSettingsCreateRequest& WithDefaultRoute(DefaultRouteT&& value) { SetDefaultRoute(std::forward<DefaultRouteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An array of interfaceMapping objects for this Cluster. You must create a mapping
     * for node interfaces that you plan to use for encoding traffic. You typically
     * don't create a mapping for the management interface. You define this mapping in
     * the Cluster so that the mapping can be used by all the Nodes. Each mapping
     * logically connects one interface on the nodes with one Network. Each mapping
     * consists of a pair of parameters. The logicalInterfaceName parameter creates a
     * logical name for the Node interface that handles a specific type of traffic. For
     * example, my-Inputs-Interface. The networkID parameter refers to the ID of the
     * network. When you create the Nodes in this Cluster, you will associate the
     * logicalInterfaceName with the appropriate physical interface.
     */
    inline const Aws::Vector<InterfaceMappingCreateRequest>& GetInterfaceMappings() const { return m_interfaceMappings; }
    inline bool InterfaceMappingsHasBeenSet() const { return m_interfaceMappingsHasBeenSet; }
    template<typename InterfaceMappingsT = Aws::Vector<InterfaceMappingCreateRequest>>
    void SetInterfaceMappings(InterfaceMappingsT&& value) { m_interfaceMappingsHasBeenSet = true; m_interfaceMappings = std::forward<InterfaceMappingsT>(value); }
    template<typename InterfaceMappingsT = Aws::Vector<InterfaceMappingCreateRequest>>
    ClusterNetworkSettingsCreateRequest& WithInterfaceMappings(InterfaceMappingsT&& value) { SetInterfaceMappings(std::forward<InterfaceMappingsT>(value)); return *this;}
    template<typename InterfaceMappingsT = InterfaceMappingCreateRequest>
    ClusterNetworkSettingsCreateRequest& AddInterfaceMappings(InterfaceMappingsT&& value) { m_interfaceMappingsHasBeenSet = true; m_interfaceMappings.emplace_back(std::forward<InterfaceMappingsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_defaultRoute;
    bool m_defaultRouteHasBeenSet = false;

    Aws::Vector<InterfaceMappingCreateRequest> m_interfaceMappings;
    bool m_interfaceMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
