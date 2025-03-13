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
   * <p>Describes the destination of a network route.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/NetworkRouteDestination">AWS
   * API Reference</a></p>
   */
  class NetworkRouteDestination
  {
  public:
    AWS_NETWORKMANAGER_API NetworkRouteDestination() = default;
    AWS_NETWORKMANAGER_API NetworkRouteDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API NetworkRouteDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a core network attachment.</p>
     */
    inline const Aws::String& GetCoreNetworkAttachmentId() const { return m_coreNetworkAttachmentId; }
    inline bool CoreNetworkAttachmentIdHasBeenSet() const { return m_coreNetworkAttachmentIdHasBeenSet; }
    template<typename CoreNetworkAttachmentIdT = Aws::String>
    void SetCoreNetworkAttachmentId(CoreNetworkAttachmentIdT&& value) { m_coreNetworkAttachmentIdHasBeenSet = true; m_coreNetworkAttachmentId = std::forward<CoreNetworkAttachmentIdT>(value); }
    template<typename CoreNetworkAttachmentIdT = Aws::String>
    NetworkRouteDestination& WithCoreNetworkAttachmentId(CoreNetworkAttachmentIdT&& value) { SetCoreNetworkAttachmentId(std::forward<CoreNetworkAttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const { return m_transitGatewayAttachmentId; }
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }
    template<typename TransitGatewayAttachmentIdT = Aws::String>
    void SetTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::forward<TransitGatewayAttachmentIdT>(value); }
    template<typename TransitGatewayAttachmentIdT = Aws::String>
    NetworkRouteDestination& WithTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) { SetTransitGatewayAttachmentId(std::forward<TransitGatewayAttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the segment.</p>
     */
    inline const Aws::String& GetSegmentName() const { return m_segmentName; }
    inline bool SegmentNameHasBeenSet() const { return m_segmentNameHasBeenSet; }
    template<typename SegmentNameT = Aws::String>
    void SetSegmentName(SegmentNameT&& value) { m_segmentNameHasBeenSet = true; m_segmentName = std::forward<SegmentNameT>(value); }
    template<typename SegmentNameT = Aws::String>
    NetworkRouteDestination& WithSegmentName(SegmentNameT&& value) { SetSegmentName(std::forward<SegmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network function group name associated with the destination.</p>
     */
    inline const Aws::String& GetNetworkFunctionGroupName() const { return m_networkFunctionGroupName; }
    inline bool NetworkFunctionGroupNameHasBeenSet() const { return m_networkFunctionGroupNameHasBeenSet; }
    template<typename NetworkFunctionGroupNameT = Aws::String>
    void SetNetworkFunctionGroupName(NetworkFunctionGroupNameT&& value) { m_networkFunctionGroupNameHasBeenSet = true; m_networkFunctionGroupName = std::forward<NetworkFunctionGroupNameT>(value); }
    template<typename NetworkFunctionGroupNameT = Aws::String>
    NetworkRouteDestination& WithNetworkFunctionGroupName(NetworkFunctionGroupNameT&& value) { SetNetworkFunctionGroupName(std::forward<NetworkFunctionGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The edge location for the network destination.</p>
     */
    inline const Aws::String& GetEdgeLocation() const { return m_edgeLocation; }
    inline bool EdgeLocationHasBeenSet() const { return m_edgeLocationHasBeenSet; }
    template<typename EdgeLocationT = Aws::String>
    void SetEdgeLocation(EdgeLocationT&& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = std::forward<EdgeLocationT>(value); }
    template<typename EdgeLocationT = Aws::String>
    NetworkRouteDestination& WithEdgeLocation(EdgeLocationT&& value) { SetEdgeLocation(std::forward<EdgeLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    NetworkRouteDestination& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    NetworkRouteDestination& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_coreNetworkAttachmentId;
    bool m_coreNetworkAttachmentIdHasBeenSet = false;

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet = false;

    Aws::String m_segmentName;
    bool m_segmentNameHasBeenSet = false;

    Aws::String m_networkFunctionGroupName;
    bool m_networkFunctionGroupNameHasBeenSet = false;

    Aws::String m_edgeLocation;
    bool m_edgeLocationHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
