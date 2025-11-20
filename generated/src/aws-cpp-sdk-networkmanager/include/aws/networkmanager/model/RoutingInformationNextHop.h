/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkManager {
namespace Model {

/**
 * <p>Information about the next hop for a route in the core network.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/RoutingInformationNextHop">AWS
 * API Reference</a></p>
 */
class RoutingInformationNextHop {
 public:
  AWS_NETWORKMANAGER_API RoutingInformationNextHop() = default;
  AWS_NETWORKMANAGER_API RoutingInformationNextHop(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API RoutingInformationNextHop& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The IP address of the next hop.</p>
   */
  inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
  inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
  template <typename IpAddressT = Aws::String>
  void SetIpAddress(IpAddressT&& value) {
    m_ipAddressHasBeenSet = true;
    m_ipAddress = std::forward<IpAddressT>(value);
  }
  template <typename IpAddressT = Aws::String>
  RoutingInformationNextHop& WithIpAddress(IpAddressT&& value) {
    SetIpAddress(std::forward<IpAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the core network attachment for the next hop.</p>
   */
  inline const Aws::String& GetCoreNetworkAttachmentId() const { return m_coreNetworkAttachmentId; }
  inline bool CoreNetworkAttachmentIdHasBeenSet() const { return m_coreNetworkAttachmentIdHasBeenSet; }
  template <typename CoreNetworkAttachmentIdT = Aws::String>
  void SetCoreNetworkAttachmentId(CoreNetworkAttachmentIdT&& value) {
    m_coreNetworkAttachmentIdHasBeenSet = true;
    m_coreNetworkAttachmentId = std::forward<CoreNetworkAttachmentIdT>(value);
  }
  template <typename CoreNetworkAttachmentIdT = Aws::String>
  RoutingInformationNextHop& WithCoreNetworkAttachmentId(CoreNetworkAttachmentIdT&& value) {
    SetCoreNetworkAttachmentId(std::forward<CoreNetworkAttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the resource for the next hop.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  RoutingInformationNextHop& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of resource for the next hop.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  RoutingInformationNextHop& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the segment for the next hop.</p>
   */
  inline const Aws::String& GetSegmentName() const { return m_segmentName; }
  inline bool SegmentNameHasBeenSet() const { return m_segmentNameHasBeenSet; }
  template <typename SegmentNameT = Aws::String>
  void SetSegmentName(SegmentNameT&& value) {
    m_segmentNameHasBeenSet = true;
    m_segmentName = std::forward<SegmentNameT>(value);
  }
  template <typename SegmentNameT = Aws::String>
  RoutingInformationNextHop& WithSegmentName(SegmentNameT&& value) {
    SetSegmentName(std::forward<SegmentNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The edge location for the next hop.</p>
   */
  inline const Aws::String& GetEdgeLocation() const { return m_edgeLocation; }
  inline bool EdgeLocationHasBeenSet() const { return m_edgeLocationHasBeenSet; }
  template <typename EdgeLocationT = Aws::String>
  void SetEdgeLocation(EdgeLocationT&& value) {
    m_edgeLocationHasBeenSet = true;
    m_edgeLocation = std::forward<EdgeLocationT>(value);
  }
  template <typename EdgeLocationT = Aws::String>
  RoutingInformationNextHop& WithEdgeLocation(EdgeLocationT&& value) {
    SetEdgeLocation(std::forward<EdgeLocationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ipAddress;
  bool m_ipAddressHasBeenSet = false;

  Aws::String m_coreNetworkAttachmentId;
  bool m_coreNetworkAttachmentIdHasBeenSet = false;

  Aws::String m_resourceId;
  bool m_resourceIdHasBeenSet = false;

  Aws::String m_resourceType;
  bool m_resourceTypeHasBeenSet = false;

  Aws::String m_segmentName;
  bool m_segmentNameHasBeenSet = false;

  Aws::String m_edgeLocation;
  bool m_edgeLocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
