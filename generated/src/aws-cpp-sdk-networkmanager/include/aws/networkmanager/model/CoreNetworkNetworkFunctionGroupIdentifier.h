/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a core network </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CoreNetworkNetworkFunctionGroupIdentifier">AWS
   * API Reference</a></p>
   */
  class CoreNetworkNetworkFunctionGroupIdentifier
  {
  public:
    AWS_NETWORKMANAGER_API CoreNetworkNetworkFunctionGroupIdentifier() = default;
    AWS_NETWORKMANAGER_API CoreNetworkNetworkFunctionGroupIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CoreNetworkNetworkFunctionGroupIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the core network.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const { return m_coreNetworkId; }
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }
    template<typename CoreNetworkIdT = Aws::String>
    void SetCoreNetworkId(CoreNetworkIdT&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::forward<CoreNetworkIdT>(value); }
    template<typename CoreNetworkIdT = Aws::String>
    CoreNetworkNetworkFunctionGroupIdentifier& WithCoreNetworkId(CoreNetworkIdT&& value) { SetCoreNetworkId(std::forward<CoreNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network function group name.</p>
     */
    inline const Aws::String& GetNetworkFunctionGroupName() const { return m_networkFunctionGroupName; }
    inline bool NetworkFunctionGroupNameHasBeenSet() const { return m_networkFunctionGroupNameHasBeenSet; }
    template<typename NetworkFunctionGroupNameT = Aws::String>
    void SetNetworkFunctionGroupName(NetworkFunctionGroupNameT&& value) { m_networkFunctionGroupNameHasBeenSet = true; m_networkFunctionGroupName = std::forward<NetworkFunctionGroupNameT>(value); }
    template<typename NetworkFunctionGroupNameT = Aws::String>
    CoreNetworkNetworkFunctionGroupIdentifier& WithNetworkFunctionGroupName(NetworkFunctionGroupNameT&& value) { SetNetworkFunctionGroupName(std::forward<NetworkFunctionGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location for the core network edge.</p>
     */
    inline const Aws::String& GetEdgeLocation() const { return m_edgeLocation; }
    inline bool EdgeLocationHasBeenSet() const { return m_edgeLocationHasBeenSet; }
    template<typename EdgeLocationT = Aws::String>
    void SetEdgeLocation(EdgeLocationT&& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = std::forward<EdgeLocationT>(value); }
    template<typename EdgeLocationT = Aws::String>
    CoreNetworkNetworkFunctionGroupIdentifier& WithEdgeLocation(EdgeLocationT&& value) { SetEdgeLocation(std::forward<EdgeLocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    Aws::String m_networkFunctionGroupName;
    bool m_networkFunctionGroupNameHasBeenSet = false;

    Aws::String m_edgeLocation;
    bool m_edgeLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
