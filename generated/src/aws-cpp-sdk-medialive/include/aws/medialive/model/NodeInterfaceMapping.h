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
   * A mapping that's used to pair a logical network interface name on a Node with
   * the physical interface name exposed in the operating system.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/NodeInterfaceMapping">AWS
   * API Reference</a></p>
   */
  class NodeInterfaceMapping
  {
  public:
    AWS_MEDIALIVE_API NodeInterfaceMapping() = default;
    AWS_MEDIALIVE_API NodeInterfaceMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API NodeInterfaceMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A uniform logical interface name to address in a MediaLive channel
     * configuration.
     */
    inline const Aws::String& GetLogicalInterfaceName() const { return m_logicalInterfaceName; }
    inline bool LogicalInterfaceNameHasBeenSet() const { return m_logicalInterfaceNameHasBeenSet; }
    template<typename LogicalInterfaceNameT = Aws::String>
    void SetLogicalInterfaceName(LogicalInterfaceNameT&& value) { m_logicalInterfaceNameHasBeenSet = true; m_logicalInterfaceName = std::forward<LogicalInterfaceNameT>(value); }
    template<typename LogicalInterfaceNameT = Aws::String>
    NodeInterfaceMapping& WithLogicalInterfaceName(LogicalInterfaceNameT&& value) { SetLogicalInterfaceName(std::forward<LogicalInterfaceNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline NetworkInterfaceMode GetNetworkInterfaceMode() const { return m_networkInterfaceMode; }
    inline bool NetworkInterfaceModeHasBeenSet() const { return m_networkInterfaceModeHasBeenSet; }
    inline void SetNetworkInterfaceMode(NetworkInterfaceMode value) { m_networkInterfaceModeHasBeenSet = true; m_networkInterfaceMode = value; }
    inline NodeInterfaceMapping& WithNetworkInterfaceMode(NetworkInterfaceMode value) { SetNetworkInterfaceMode(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the physical interface on the hardware that will be running
     * Elemental anywhere.
     */
    inline const Aws::String& GetPhysicalInterfaceName() const { return m_physicalInterfaceName; }
    inline bool PhysicalInterfaceNameHasBeenSet() const { return m_physicalInterfaceNameHasBeenSet; }
    template<typename PhysicalInterfaceNameT = Aws::String>
    void SetPhysicalInterfaceName(PhysicalInterfaceNameT&& value) { m_physicalInterfaceNameHasBeenSet = true; m_physicalInterfaceName = std::forward<PhysicalInterfaceNameT>(value); }
    template<typename PhysicalInterfaceNameT = Aws::String>
    NodeInterfaceMapping& WithPhysicalInterfaceName(PhysicalInterfaceNameT&& value) { SetPhysicalInterfaceName(std::forward<PhysicalInterfaceNameT>(value)); return *this;}
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
