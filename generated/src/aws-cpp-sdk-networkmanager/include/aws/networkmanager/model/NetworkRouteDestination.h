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
    AWS_NETWORKMANAGER_API NetworkRouteDestination();
    AWS_NETWORKMANAGER_API NetworkRouteDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API NetworkRouteDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a core network attachment.</p>
     */
    inline const Aws::String& GetCoreNetworkAttachmentId() const{ return m_coreNetworkAttachmentId; }
    inline bool CoreNetworkAttachmentIdHasBeenSet() const { return m_coreNetworkAttachmentIdHasBeenSet; }
    inline void SetCoreNetworkAttachmentId(const Aws::String& value) { m_coreNetworkAttachmentIdHasBeenSet = true; m_coreNetworkAttachmentId = value; }
    inline void SetCoreNetworkAttachmentId(Aws::String&& value) { m_coreNetworkAttachmentIdHasBeenSet = true; m_coreNetworkAttachmentId = std::move(value); }
    inline void SetCoreNetworkAttachmentId(const char* value) { m_coreNetworkAttachmentIdHasBeenSet = true; m_coreNetworkAttachmentId.assign(value); }
    inline NetworkRouteDestination& WithCoreNetworkAttachmentId(const Aws::String& value) { SetCoreNetworkAttachmentId(value); return *this;}
    inline NetworkRouteDestination& WithCoreNetworkAttachmentId(Aws::String&& value) { SetCoreNetworkAttachmentId(std::move(value)); return *this;}
    inline NetworkRouteDestination& WithCoreNetworkAttachmentId(const char* value) { SetCoreNetworkAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const{ return m_transitGatewayAttachmentId; }
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }
    inline void SetTransitGatewayAttachmentId(const Aws::String& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = value; }
    inline void SetTransitGatewayAttachmentId(Aws::String&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::move(value); }
    inline void SetTransitGatewayAttachmentId(const char* value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId.assign(value); }
    inline NetworkRouteDestination& WithTransitGatewayAttachmentId(const Aws::String& value) { SetTransitGatewayAttachmentId(value); return *this;}
    inline NetworkRouteDestination& WithTransitGatewayAttachmentId(Aws::String&& value) { SetTransitGatewayAttachmentId(std::move(value)); return *this;}
    inline NetworkRouteDestination& WithTransitGatewayAttachmentId(const char* value) { SetTransitGatewayAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the segment.</p>
     */
    inline const Aws::String& GetSegmentName() const{ return m_segmentName; }
    inline bool SegmentNameHasBeenSet() const { return m_segmentNameHasBeenSet; }
    inline void SetSegmentName(const Aws::String& value) { m_segmentNameHasBeenSet = true; m_segmentName = value; }
    inline void SetSegmentName(Aws::String&& value) { m_segmentNameHasBeenSet = true; m_segmentName = std::move(value); }
    inline void SetSegmentName(const char* value) { m_segmentNameHasBeenSet = true; m_segmentName.assign(value); }
    inline NetworkRouteDestination& WithSegmentName(const Aws::String& value) { SetSegmentName(value); return *this;}
    inline NetworkRouteDestination& WithSegmentName(Aws::String&& value) { SetSegmentName(std::move(value)); return *this;}
    inline NetworkRouteDestination& WithSegmentName(const char* value) { SetSegmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network function group name associated with the destination.</p>
     */
    inline const Aws::String& GetNetworkFunctionGroupName() const{ return m_networkFunctionGroupName; }
    inline bool NetworkFunctionGroupNameHasBeenSet() const { return m_networkFunctionGroupNameHasBeenSet; }
    inline void SetNetworkFunctionGroupName(const Aws::String& value) { m_networkFunctionGroupNameHasBeenSet = true; m_networkFunctionGroupName = value; }
    inline void SetNetworkFunctionGroupName(Aws::String&& value) { m_networkFunctionGroupNameHasBeenSet = true; m_networkFunctionGroupName = std::move(value); }
    inline void SetNetworkFunctionGroupName(const char* value) { m_networkFunctionGroupNameHasBeenSet = true; m_networkFunctionGroupName.assign(value); }
    inline NetworkRouteDestination& WithNetworkFunctionGroupName(const Aws::String& value) { SetNetworkFunctionGroupName(value); return *this;}
    inline NetworkRouteDestination& WithNetworkFunctionGroupName(Aws::String&& value) { SetNetworkFunctionGroupName(std::move(value)); return *this;}
    inline NetworkRouteDestination& WithNetworkFunctionGroupName(const char* value) { SetNetworkFunctionGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The edge location for the network destination.</p>
     */
    inline const Aws::String& GetEdgeLocation() const{ return m_edgeLocation; }
    inline bool EdgeLocationHasBeenSet() const { return m_edgeLocationHasBeenSet; }
    inline void SetEdgeLocation(const Aws::String& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = value; }
    inline void SetEdgeLocation(Aws::String&& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = std::move(value); }
    inline void SetEdgeLocation(const char* value) { m_edgeLocationHasBeenSet = true; m_edgeLocation.assign(value); }
    inline NetworkRouteDestination& WithEdgeLocation(const Aws::String& value) { SetEdgeLocation(value); return *this;}
    inline NetworkRouteDestination& WithEdgeLocation(Aws::String&& value) { SetEdgeLocation(std::move(value)); return *this;}
    inline NetworkRouteDestination& WithEdgeLocation(const char* value) { SetEdgeLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline NetworkRouteDestination& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline NetworkRouteDestination& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline NetworkRouteDestination& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline NetworkRouteDestination& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline NetworkRouteDestination& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline NetworkRouteDestination& WithResourceId(const char* value) { SetResourceId(value); return *this;}
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
