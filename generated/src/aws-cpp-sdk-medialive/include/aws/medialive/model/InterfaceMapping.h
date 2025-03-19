/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * Used in ClusterNetworkSettings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InterfaceMapping">AWS
   * API Reference</a></p>
   */
  class InterfaceMapping
  {
  public:
    AWS_MEDIALIVE_API InterfaceMapping() = default;
    AWS_MEDIALIVE_API InterfaceMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InterfaceMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The logical name for one interface (on every Node) that handles a specific type
     * of traffic. We recommend that the name hints at the physical interface it
     * applies to. For example, it could refer to the traffic that the physical
     * interface handles. For example, my-Inputs-Interface.
     */
    inline const Aws::String& GetLogicalInterfaceName() const { return m_logicalInterfaceName; }
    inline bool LogicalInterfaceNameHasBeenSet() const { return m_logicalInterfaceNameHasBeenSet; }
    template<typename LogicalInterfaceNameT = Aws::String>
    void SetLogicalInterfaceName(LogicalInterfaceNameT&& value) { m_logicalInterfaceNameHasBeenSet = true; m_logicalInterfaceName = std::forward<LogicalInterfaceNameT>(value); }
    template<typename LogicalInterfaceNameT = Aws::String>
    InterfaceMapping& WithLogicalInterfaceName(LogicalInterfaceNameT&& value) { SetLogicalInterfaceName(std::forward<LogicalInterfaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the network that you want to connect to the specified
     * logicalInterfaceName.
     */
    inline const Aws::String& GetNetworkId() const { return m_networkId; }
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
    template<typename NetworkIdT = Aws::String>
    void SetNetworkId(NetworkIdT&& value) { m_networkIdHasBeenSet = true; m_networkId = std::forward<NetworkIdT>(value); }
    template<typename NetworkIdT = Aws::String>
    InterfaceMapping& WithNetworkId(NetworkIdT&& value) { SetNetworkId(std::forward<NetworkIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_logicalInterfaceName;
    bool m_logicalInterfaceNameHasBeenSet = false;

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
