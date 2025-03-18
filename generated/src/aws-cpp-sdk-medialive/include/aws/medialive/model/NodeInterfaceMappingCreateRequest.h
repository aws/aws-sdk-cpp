/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/NetworkInterfaceMode.h>
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
   * Used in CreateNodeRequest.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/NodeInterfaceMappingCreateRequest">AWS
   * API Reference</a></p>
   */
  class NodeInterfaceMappingCreateRequest
  {
  public:
    AWS_MEDIALIVE_API NodeInterfaceMappingCreateRequest() = default;
    AWS_MEDIALIVE_API NodeInterfaceMappingCreateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API NodeInterfaceMappingCreateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify one of the logicalInterfaceNames that you created in the Cluster that
     * this node belongs to. For example, my-Inputs-Interface.
     */
    inline const Aws::String& GetLogicalInterfaceName() const { return m_logicalInterfaceName; }
    inline bool LogicalInterfaceNameHasBeenSet() const { return m_logicalInterfaceNameHasBeenSet; }
    template<typename LogicalInterfaceNameT = Aws::String>
    void SetLogicalInterfaceName(LogicalInterfaceNameT&& value) { m_logicalInterfaceNameHasBeenSet = true; m_logicalInterfaceName = std::forward<LogicalInterfaceNameT>(value); }
    template<typename LogicalInterfaceNameT = Aws::String>
    NodeInterfaceMappingCreateRequest& WithLogicalInterfaceName(LogicalInterfaceNameT&& value) { SetLogicalInterfaceName(std::forward<LogicalInterfaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The style of the network -- NAT or BRIDGE.
     */
    inline NetworkInterfaceMode GetNetworkInterfaceMode() const { return m_networkInterfaceMode; }
    inline bool NetworkInterfaceModeHasBeenSet() const { return m_networkInterfaceModeHasBeenSet; }
    inline void SetNetworkInterfaceMode(NetworkInterfaceMode value) { m_networkInterfaceModeHasBeenSet = true; m_networkInterfaceMode = value; }
    inline NodeInterfaceMappingCreateRequest& WithNetworkInterfaceMode(NetworkInterfaceMode value) { SetNetworkInterfaceMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the physical name that corresponds to the logicalInterfaceName that you
     * specified in this interface mapping. For example, Eth1 or ENO1234EXAMPLE.
     */
    inline const Aws::String& GetPhysicalInterfaceName() const { return m_physicalInterfaceName; }
    inline bool PhysicalInterfaceNameHasBeenSet() const { return m_physicalInterfaceNameHasBeenSet; }
    template<typename PhysicalInterfaceNameT = Aws::String>
    void SetPhysicalInterfaceName(PhysicalInterfaceNameT&& value) { m_physicalInterfaceNameHasBeenSet = true; m_physicalInterfaceName = std::forward<PhysicalInterfaceNameT>(value); }
    template<typename PhysicalInterfaceNameT = Aws::String>
    NodeInterfaceMappingCreateRequest& WithPhysicalInterfaceName(PhysicalInterfaceNameT&& value) { SetPhysicalInterfaceName(std::forward<PhysicalInterfaceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_logicalInterfaceName;
    bool m_logicalInterfaceNameHasBeenSet = false;

    NetworkInterfaceMode m_networkInterfaceMode{NetworkInterfaceMode::NOT_SET};
    bool m_networkInterfaceModeHasBeenSet = false;

    Aws::String m_physicalInterfaceName;
    bool m_physicalInterfaceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
