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
    AWS_MEDIALIVE_API NodeInterfaceMapping();
    AWS_MEDIALIVE_API NodeInterfaceMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API NodeInterfaceMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A uniform logical interface name to address in a MediaLive channel
     * configuration.
     */
    inline const Aws::String& GetLogicalInterfaceName() const{ return m_logicalInterfaceName; }
    inline bool LogicalInterfaceNameHasBeenSet() const { return m_logicalInterfaceNameHasBeenSet; }
    inline void SetLogicalInterfaceName(const Aws::String& value) { m_logicalInterfaceNameHasBeenSet = true; m_logicalInterfaceName = value; }
    inline void SetLogicalInterfaceName(Aws::String&& value) { m_logicalInterfaceNameHasBeenSet = true; m_logicalInterfaceName = std::move(value); }
    inline void SetLogicalInterfaceName(const char* value) { m_logicalInterfaceNameHasBeenSet = true; m_logicalInterfaceName.assign(value); }
    inline NodeInterfaceMapping& WithLogicalInterfaceName(const Aws::String& value) { SetLogicalInterfaceName(value); return *this;}
    inline NodeInterfaceMapping& WithLogicalInterfaceName(Aws::String&& value) { SetLogicalInterfaceName(std::move(value)); return *this;}
    inline NodeInterfaceMapping& WithLogicalInterfaceName(const char* value) { SetLogicalInterfaceName(value); return *this;}
    ///@}

    ///@{
    
    inline const NetworkInterfaceMode& GetNetworkInterfaceMode() const{ return m_networkInterfaceMode; }
    inline bool NetworkInterfaceModeHasBeenSet() const { return m_networkInterfaceModeHasBeenSet; }
    inline void SetNetworkInterfaceMode(const NetworkInterfaceMode& value) { m_networkInterfaceModeHasBeenSet = true; m_networkInterfaceMode = value; }
    inline void SetNetworkInterfaceMode(NetworkInterfaceMode&& value) { m_networkInterfaceModeHasBeenSet = true; m_networkInterfaceMode = std::move(value); }
    inline NodeInterfaceMapping& WithNetworkInterfaceMode(const NetworkInterfaceMode& value) { SetNetworkInterfaceMode(value); return *this;}
    inline NodeInterfaceMapping& WithNetworkInterfaceMode(NetworkInterfaceMode&& value) { SetNetworkInterfaceMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the physical interface on the hardware that will be running
     * Elemental anywhere.
     */
    inline const Aws::String& GetPhysicalInterfaceName() const{ return m_physicalInterfaceName; }
    inline bool PhysicalInterfaceNameHasBeenSet() const { return m_physicalInterfaceNameHasBeenSet; }
    inline void SetPhysicalInterfaceName(const Aws::String& value) { m_physicalInterfaceNameHasBeenSet = true; m_physicalInterfaceName = value; }
    inline void SetPhysicalInterfaceName(Aws::String&& value) { m_physicalInterfaceNameHasBeenSet = true; m_physicalInterfaceName = std::move(value); }
    inline void SetPhysicalInterfaceName(const char* value) { m_physicalInterfaceNameHasBeenSet = true; m_physicalInterfaceName.assign(value); }
    inline NodeInterfaceMapping& WithPhysicalInterfaceName(const Aws::String& value) { SetPhysicalInterfaceName(value); return *this;}
    inline NodeInterfaceMapping& WithPhysicalInterfaceName(Aws::String&& value) { SetPhysicalInterfaceName(std::move(value)); return *this;}
    inline NodeInterfaceMapping& WithPhysicalInterfaceName(const char* value) { SetPhysicalInterfaceName(value); return *this;}
    ///@}
  private:

    Aws::String m_logicalInterfaceName;
    bool m_logicalInterfaceNameHasBeenSet = false;

    NetworkInterfaceMode m_networkInterfaceMode;
    bool m_networkInterfaceModeHasBeenSet = false;

    Aws::String m_physicalInterfaceName;
    bool m_physicalInterfaceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
