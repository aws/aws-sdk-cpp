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
 * <p>Describes a context entry in a context store. A context entry describes a
 * resource, such as a security group, subnet, or attachment.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ContextEntry">AWS
 * API Reference</a></p>
 */
class ContextEntry {
 public:
  AWS_NETWORKMANAGER_API ContextEntry() = default;
  AWS_NETWORKMANAGER_API ContextEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API ContextEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the context entry.</p>
   */
  inline const Aws::String& GetContextId() const { return m_contextId; }
  inline bool ContextIdHasBeenSet() const { return m_contextIdHasBeenSet; }
  template <typename ContextIdT = Aws::String>
  void SetContextId(ContextIdT&& value) {
    m_contextIdHasBeenSet = true;
    m_contextId = std::forward<ContextIdT>(value);
  }
  template <typename ContextIdT = Aws::String>
  ContextEntry& WithContextId(ContextIdT&& value) {
    SetContextId(std::forward<ContextIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the context entry, for example <code>SegmentId</code>,
   * <code>Subnet</code>, or <code>Attachment</code>.</p>
   */
  inline const Aws::String& GetContextType() const { return m_contextType; }
  inline bool ContextTypeHasBeenSet() const { return m_contextTypeHasBeenSet; }
  template <typename ContextTypeT = Aws::String>
  void SetContextType(ContextTypeT&& value) {
    m_contextTypeHasBeenSet = true;
    m_contextType = std::forward<ContextTypeT>(value);
  }
  template <typename ContextTypeT = Aws::String>
  ContextEntry& WithContextType(ContextTypeT&& value) {
    SetContextType(std::forward<ContextTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the segment, for example <code>SecurityGroup</code>. Network
   * Manager returns this value only when the context type is
   * <code>SegmentId</code>.</p>
   */
  inline const Aws::String& GetSegmentType() const { return m_segmentType; }
  inline bool SegmentTypeHasBeenSet() const { return m_segmentTypeHasBeenSet; }
  template <typename SegmentTypeT = Aws::String>
  void SetSegmentType(SegmentTypeT&& value) {
    m_segmentTypeHasBeenSet = true;
    m_segmentType = std::forward<SegmentTypeT>(value);
  }
  template <typename SegmentTypeT = Aws::String>
  ContextEntry& WithSegmentType(SegmentTypeT&& value) {
    SetSegmentType(std::forward<SegmentTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the resource, for example a security group ID, subnet ID, or
   * transit gateway attachment ID.</p>
   */
  inline const Aws::String& GetPublicId() const { return m_publicId; }
  inline bool PublicIdHasBeenSet() const { return m_publicIdHasBeenSet; }
  template <typename PublicIdT = Aws::String>
  void SetPublicId(PublicIdT&& value) {
    m_publicIdHasBeenSet = true;
    m_publicId = std::forward<PublicIdT>(value);
  }
  template <typename PublicIdT = Aws::String>
  ContextEntry& WithPublicId(PublicIdT&& value) {
    SetPublicId(std::forward<PublicIdT>(value));
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
  ContextEntry& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Availability Zone of the resource, for example
   * <code>use1-az2</code>. Network Manager returns this value only when the context
   * type is <code>Subnet</code>.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  ContextEntry& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the attachment, for example <code>VPC</code>. Network Manager
   * returns this value only when the context type is <code>Attachment</code>.</p>
   */
  inline const Aws::String& GetAttachmentType() const { return m_attachmentType; }
  inline bool AttachmentTypeHasBeenSet() const { return m_attachmentTypeHasBeenSet; }
  template <typename AttachmentTypeT = Aws::String>
  void SetAttachmentType(AttachmentTypeT&& value) {
    m_attachmentTypeHasBeenSet = true;
    m_attachmentType = std::forward<AttachmentTypeT>(value);
  }
  template <typename AttachmentTypeT = Aws::String>
  ContextEntry& WithAttachmentType(AttachmentTypeT&& value) {
    SetAttachmentType(std::forward<AttachmentTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_contextId;

  Aws::String m_contextType;

  Aws::String m_segmentType;

  Aws::String m_publicId;

  Aws::String m_region;

  Aws::String m_availabilityZone;

  Aws::String m_attachmentType;
  bool m_contextIdHasBeenSet = false;
  bool m_contextTypeHasBeenSet = false;
  bool m_segmentTypeHasBeenSet = false;
  bool m_publicIdHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_attachmentTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
