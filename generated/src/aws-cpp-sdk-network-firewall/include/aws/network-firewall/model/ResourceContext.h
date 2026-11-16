/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ContextType.h>

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
 * <p>A resource that a context store records, which
 * <code>ListResourcesInContextStore</code> returns.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ResourceContext">AWS
 * API Reference</a></p>
 */
class ResourceContext {
 public:
  AWS_NETWORKFIREWALL_API ResourceContext() = default;
  AWS_NETWORKFIREWALL_API ResourceContext(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API ResourceContext& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The kind of context that the context store records for the resource. Valid
   * values:</p> <ul> <li> <p> <code>ResourceId</code> - A VPC.</p> </li> <li> <p>
   * <code>SegmentId</code> - A security group.</p> </li> <li> <p>
   * <code>Subnet</code> - A subnet.</p> </li> <li> <p> <code>Attachment</code> - A
   * transit gateway attachment.</p> </li> </ul>
   */
  inline ContextType GetContextType() const { return m_contextType; }
  inline bool ContextTypeHasBeenSet() const { return m_contextTypeHasBeenSet; }
  inline void SetContextType(ContextType value) {
    m_contextTypeHasBeenSet = true;
    m_contextType = value;
  }
  inline ResourceContext& WithContextType(ContextType value) {
    SetContextType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region of the resource.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  ResourceContext& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone of the resource. Present for subnets.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  ResourceContext& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the transit gateway attachment. Present for attachments.</p>
   */
  inline const Aws::String& GetAttachmentType() const { return m_attachmentType; }
  inline bool AttachmentTypeHasBeenSet() const { return m_attachmentTypeHasBeenSet; }
  template <typename AttachmentTypeT = Aws::String>
  void SetAttachmentType(AttachmentTypeT&& value) {
    m_attachmentTypeHasBeenSet = true;
    m_attachmentType = std::forward<AttachmentTypeT>(value);
  }
  template <typename AttachmentTypeT = Aws::String>
  ResourceContext& WithAttachmentType(AttachmentTypeT&& value) {
    SetAttachmentType(std::forward<AttachmentTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the resource, for example
   * <code>vpc-1234567890abcdef0</code>, <code>subnet-1234567890abcdef0</code>,
   * <code>sg-1234567890abcdef0</code>, or
   * <code>tgw-attach-1234567890abcdef0</code>.</p>
   */
  inline const Aws::String& GetPublicId() const { return m_publicId; }
  inline bool PublicIdHasBeenSet() const { return m_publicIdHasBeenSet; }
  template <typename PublicIdT = Aws::String>
  void SetPublicId(PublicIdT&& value) {
    m_publicIdHasBeenSet = true;
    m_publicId = std::forward<PublicIdT>(value);
  }
  template <typename PublicIdT = Aws::String>
  ResourceContext& WithPublicId(PublicIdT&& value) {
    SetPublicId(std::forward<PublicIdT>(value));
    return *this;
  }
  ///@}
 private:
  ContextType m_contextType{ContextType::NOT_SET};

  Aws::String m_region;

  Aws::String m_availabilityZone;

  Aws::String m_attachmentType;

  Aws::String m_publicId;
  bool m_contextTypeHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_attachmentTypeHasBeenSet = false;
  bool m_publicIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
