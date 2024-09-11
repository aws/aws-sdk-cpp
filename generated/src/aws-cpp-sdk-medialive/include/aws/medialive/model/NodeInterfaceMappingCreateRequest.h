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
    AWS_MEDIALIVE_API NodeInterfaceMappingCreateRequest();
    AWS_MEDIALIVE_API NodeInterfaceMappingCreateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API NodeInterfaceMappingCreateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify one of the logicalInterfaceNames that you created in the Cluster that
     * this node belongs to. For example, my-Inputs-Interface.
     */
    inline const Aws::String& GetLogicalInterfaceName() const{ return m_logicalInterfaceName; }
    inline bool LogicalInterfaceNameHasBeenSet() const { return m_logicalInterfaceNameHasBeenSet; }
    inline void SetLogicalInterfaceName(const Aws::String& value) { m_logicalInterfaceNameHasBeenSet = true; m_logicalInterfaceName = value; }
    inline void SetLogicalInterfaceName(Aws::String&& value) { m_logicalInterfaceNameHasBeenSet = true; m_logicalInterfaceName = std::move(value); }
    inline void SetLogicalInterfaceName(const char* value) { m_logicalInterfaceNameHasBeenSet = true; m_logicalInterfaceName.assign(value); }
    inline NodeInterfaceMappingCreateRequest& WithLogicalInterfaceName(const Aws::String& value) { SetLogicalInterfaceName(value); return *this;}
    inline NodeInterfaceMappingCreateRequest& WithLogicalInterfaceName(Aws::String&& value) { SetLogicalInterfaceName(std::move(value)); return *this;}
    inline NodeInterfaceMappingCreateRequest& WithLogicalInterfaceName(const char* value) { SetLogicalInterfaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * The style of the network -- NAT or BRIDGE.
     */
    inline const NetworkInterfaceMode& GetNetworkInterfaceMode() const{ return m_networkInterfaceMode; }
    inline bool NetworkInterfaceModeHasBeenSet() const { return m_networkInterfaceModeHasBeenSet; }
    inline void SetNetworkInterfaceMode(const NetworkInterfaceMode& value) { m_networkInterfaceModeHasBeenSet = true; m_networkInterfaceMode = value; }
    inline void SetNetworkInterfaceMode(NetworkInterfaceMode&& value) { m_networkInterfaceModeHasBeenSet = true; m_networkInterfaceMode = std::move(value); }
    inline NodeInterfaceMappingCreateRequest& WithNetworkInterfaceMode(const NetworkInterfaceMode& value) { SetNetworkInterfaceMode(value); return *this;}
    inline NodeInterfaceMappingCreateRequest& WithNetworkInterfaceMode(NetworkInterfaceMode&& value) { SetNetworkInterfaceMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the physical name that corresponds to the logicalInterfaceName that you
     * specified in this interface mapping. For example, Eth1 or ENO1234EXAMPLE.
     */
    inline const Aws::String& GetPhysicalInterfaceName() const{ return m_physicalInterfaceName; }
    inline bool PhysicalInterfaceNameHasBeenSet() const { return m_physicalInterfaceNameHasBeenSet; }
    inline void SetPhysicalInterfaceName(const Aws::String& value) { m_physicalInterfaceNameHasBeenSet = true; m_physicalInterfaceName = value; }
    inline void SetPhysicalInterfaceName(Aws::String&& value) { m_physicalInterfaceNameHasBeenSet = true; m_physicalInterfaceName = std::move(value); }
    inline void SetPhysicalInterfaceName(const char* value) { m_physicalInterfaceNameHasBeenSet = true; m_physicalInterfaceName.assign(value); }
    inline NodeInterfaceMappingCreateRequest& WithPhysicalInterfaceName(const Aws::String& value) { SetPhysicalInterfaceName(value); return *this;}
    inline NodeInterfaceMappingCreateRequest& WithPhysicalInterfaceName(Aws::String&& value) { SetPhysicalInterfaceName(std::move(value)); return *this;}
    inline NodeInterfaceMappingCreateRequest& WithPhysicalInterfaceName(const char* value) { SetPhysicalInterfaceName(value); return *this;}
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
