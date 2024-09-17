/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/InterfaceMappingUpdateRequest.h>
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
   * Placeholder documentation for ClusterNetworkSettingsUpdateRequest<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ClusterNetworkSettingsUpdateRequest">AWS
   * API Reference</a></p>
   */
  class ClusterNetworkSettingsUpdateRequest
  {
  public:
    AWS_MEDIALIVE_API ClusterNetworkSettingsUpdateRequest();
    AWS_MEDIALIVE_API ClusterNetworkSettingsUpdateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ClusterNetworkSettingsUpdateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Include this parameter only if you want to change the default route for the
     * Cluster. Specify one network interface as the default route for traffic to and
     * from the node. MediaLive Anywhere uses this default when the destination for the
     * traffic isn't covered by the route table for any of the networks. Specify the
     * value of the appropriate logicalInterfaceName parameter that you create in the
     * interfaceMappings.
     */
    inline const Aws::String& GetDefaultRoute() const{ return m_defaultRoute; }
    inline bool DefaultRouteHasBeenSet() const { return m_defaultRouteHasBeenSet; }
    inline void SetDefaultRoute(const Aws::String& value) { m_defaultRouteHasBeenSet = true; m_defaultRoute = value; }
    inline void SetDefaultRoute(Aws::String&& value) { m_defaultRouteHasBeenSet = true; m_defaultRoute = std::move(value); }
    inline void SetDefaultRoute(const char* value) { m_defaultRouteHasBeenSet = true; m_defaultRoute.assign(value); }
    inline ClusterNetworkSettingsUpdateRequest& WithDefaultRoute(const Aws::String& value) { SetDefaultRoute(value); return *this;}
    inline ClusterNetworkSettingsUpdateRequest& WithDefaultRoute(Aws::String&& value) { SetDefaultRoute(std::move(value)); return *this;}
    inline ClusterNetworkSettingsUpdateRequest& WithDefaultRoute(const char* value) { SetDefaultRoute(value); return *this;}
    ///@}

    ///@{
    /**
     * An array of interfaceMapping objects for this Cluster. Include this parameter
     * only if you want to change the interface mappings for the Cluster. Typically,
     * you change the interface mappings only to fix an error you made when creating
     * the mapping. In an update request, make sure that you enter the entire set of
     * mappings again, not just the mappings that you want to add or change. You define
     * this mapping so that the mapping can be used by all the Nodes. Each mapping
     * logically connects one interface on the nodes with one Network. Each mapping
     * consists of a pair of parameters. The logicalInterfaceName parameter creates a
     * logical name for the Node interface that handles a specific type of traffic. For
     * example, my-Inputs-Interface. The networkID parameter refers to the ID of the
     * network. When you create the Nodes in this Cluster, you will associate the
     * logicalInterfaceName with the appropriate physical interface.
     */
    inline const Aws::Vector<InterfaceMappingUpdateRequest>& GetInterfaceMappings() const{ return m_interfaceMappings; }
    inline bool InterfaceMappingsHasBeenSet() const { return m_interfaceMappingsHasBeenSet; }
    inline void SetInterfaceMappings(const Aws::Vector<InterfaceMappingUpdateRequest>& value) { m_interfaceMappingsHasBeenSet = true; m_interfaceMappings = value; }
    inline void SetInterfaceMappings(Aws::Vector<InterfaceMappingUpdateRequest>&& value) { m_interfaceMappingsHasBeenSet = true; m_interfaceMappings = std::move(value); }
    inline ClusterNetworkSettingsUpdateRequest& WithInterfaceMappings(const Aws::Vector<InterfaceMappingUpdateRequest>& value) { SetInterfaceMappings(value); return *this;}
    inline ClusterNetworkSettingsUpdateRequest& WithInterfaceMappings(Aws::Vector<InterfaceMappingUpdateRequest>&& value) { SetInterfaceMappings(std::move(value)); return *this;}
    inline ClusterNetworkSettingsUpdateRequest& AddInterfaceMappings(const InterfaceMappingUpdateRequest& value) { m_interfaceMappingsHasBeenSet = true; m_interfaceMappings.push_back(value); return *this; }
    inline ClusterNetworkSettingsUpdateRequest& AddInterfaceMappings(InterfaceMappingUpdateRequest&& value) { m_interfaceMappingsHasBeenSet = true; m_interfaceMappings.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_defaultRoute;
    bool m_defaultRouteHasBeenSet = false;

    Aws::Vector<InterfaceMappingUpdateRequest> m_interfaceMappings;
    bool m_interfaceMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
