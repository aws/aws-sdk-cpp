/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ResourceType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>Filters for <code>ListResourcesInContextStore</code>. Both filters are
 * optional. If you specify both, Network Firewall returns only the resources that
 * match both.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ContextFilters">AWS
 * API Reference</a></p>
 */
class ContextFilters {
 public:
  AWS_NETWORKFIREWALL_API ContextFilters() = default;
  AWS_NETWORKFIREWALL_API ContextFilters(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API ContextFilters& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The Amazon Web Services Region of the resources to return, for example
   * <code>us-east-1</code>.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  ContextFilters& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of resource to return. Each resource type corresponds to the
   * <code>ContextType</code> that Network Firewall reports for the resource:</p>
   * <ul> <li> <p> <code>SecurityGroup</code> - Security groups. Reported with the
   * <code>SegmentId</code> context type.</p> </li> <li> <p> <code>VPC</code> - VPCs.
   * Reported with the <code>ResourceId</code> context type.</p> </li> <li> <p>
   * <code>Subnet</code> - Subnets. Reported with the <code>Subnet</code> context
   * type.</p> </li> <li> <p> <code>TGWAttachment</code> - Transit gateway
   * attachments. Reported with the <code>Attachment</code> context type.</p> </li>
   * </ul>
   */
  inline ResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(ResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline ContextFilters& WithResourceType(ResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_region;

  ResourceType m_resourceType{ResourceType::NOT_SET};
  bool m_regionHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
