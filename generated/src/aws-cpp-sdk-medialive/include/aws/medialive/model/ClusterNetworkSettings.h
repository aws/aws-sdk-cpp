/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/InterfaceMapping.h>
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
   * Used in DescribeClusterResult, DescribeClusterSummary,
   * UpdateClusterResult.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ClusterNetworkSettings">AWS
   * API Reference</a></p>
   */
  class ClusterNetworkSettings
  {
  public:
    AWS_MEDIALIVE_API ClusterNetworkSettings() = default;
    AWS_MEDIALIVE_API ClusterNetworkSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ClusterNetworkSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The network interface that is the default route for traffic to and from the
     * node. MediaLive Anywhere uses this default when the destination for the traffic
     * isn't covered by the route table for any of the networks. Specify the value of
     * the appropriate logicalInterfaceName parameter that you create in the
     * interfaceMappings.
     */
    inline const Aws::String& GetDefaultRoute() const { return m_defaultRoute; }
    inline bool DefaultRouteHasBeenSet() const { return m_defaultRouteHasBeenSet; }
    template<typename DefaultRouteT = Aws::String>
    void SetDefaultRoute(DefaultRouteT&& value) { m_defaultRouteHasBeenSet = true; m_defaultRoute = std::forward<DefaultRouteT>(value); }
    template<typename DefaultRouteT = Aws::String>
    ClusterNetworkSettings& WithDefaultRoute(DefaultRouteT&& value) { SetDefaultRoute(std::forward<DefaultRouteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An array of interfaceMapping objects for this Cluster. Each mapping logically
     * connects one interface on the nodes with one Network. You need only one mapping
     * for each interface because all the Nodes share the mapping.
     */
    inline const Aws::Vector<InterfaceMapping>& GetInterfaceMappings() const { return m_interfaceMappings; }
    inline bool InterfaceMappingsHasBeenSet() const { return m_interfaceMappingsHasBeenSet; }
    template<typename InterfaceMappingsT = Aws::Vector<InterfaceMapping>>
    void SetInterfaceMappings(InterfaceMappingsT&& value) { m_interfaceMappingsHasBeenSet = true; m_interfaceMappings = std::forward<InterfaceMappingsT>(value); }
    template<typename InterfaceMappingsT = Aws::Vector<InterfaceMapping>>
    ClusterNetworkSettings& WithInterfaceMappings(InterfaceMappingsT&& value) { SetInterfaceMappings(std::forward<InterfaceMappingsT>(value)); return *this;}
    template<typename InterfaceMappingsT = InterfaceMapping>
    ClusterNetworkSettings& AddInterfaceMappings(InterfaceMappingsT&& value) { m_interfaceMappingsHasBeenSet = true; m_interfaceMappings.emplace_back(std::forward<InterfaceMappingsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_defaultRoute;
    bool m_defaultRouteHasBeenSet = false;

    Aws::Vector<InterfaceMapping> m_interfaceMappings;
    bool m_interfaceMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
