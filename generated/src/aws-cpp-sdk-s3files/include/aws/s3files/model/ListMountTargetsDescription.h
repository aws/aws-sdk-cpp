/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3files/S3Files_EXPORTS.h>
#include <aws/s3files/model/LifeCycleState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace S3Files {
namespace Model {

/**
 * <p>Contains information about a mount target returned in list
 * operations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/ListMountTargetsDescription">AWS
 * API Reference</a></p>
 */
class ListMountTargetsDescription {
 public:
  AWS_S3FILES_API ListMountTargetsDescription() = default;
  AWS_S3FILES_API ListMountTargetsDescription(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3FILES_API ListMountTargetsDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3FILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Availability Zone ID where the mount target is located.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  ListMountTargetsDescription& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the S3 File System.</p>
   */
  inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
  inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
  template <typename FileSystemIdT = Aws::String>
  void SetFileSystemId(FileSystemIdT&& value) {
    m_fileSystemIdHasBeenSet = true;
    m_fileSystemId = std::forward<FileSystemIdT>(value);
  }
  template <typename FileSystemIdT = Aws::String>
  ListMountTargetsDescription& WithFileSystemId(FileSystemIdT&& value) {
    SetFileSystemId(std::forward<FileSystemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPv4 address of the mount target.</p>
   */
  inline const Aws::String& GetIpv4Address() const { return m_ipv4Address; }
  inline bool Ipv4AddressHasBeenSet() const { return m_ipv4AddressHasBeenSet; }
  template <typename Ipv4AddressT = Aws::String>
  void SetIpv4Address(Ipv4AddressT&& value) {
    m_ipv4AddressHasBeenSet = true;
    m_ipv4Address = std::forward<Ipv4AddressT>(value);
  }
  template <typename Ipv4AddressT = Aws::String>
  ListMountTargetsDescription& WithIpv4Address(Ipv4AddressT&& value) {
    SetIpv4Address(std::forward<Ipv4AddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPv6 address of the mount target.</p>
   */
  inline const Aws::String& GetIpv6Address() const { return m_ipv6Address; }
  inline bool Ipv6AddressHasBeenSet() const { return m_ipv6AddressHasBeenSet; }
  template <typename Ipv6AddressT = Aws::String>
  void SetIpv6Address(Ipv6AddressT&& value) {
    m_ipv6AddressHasBeenSet = true;
    m_ipv6Address = std::forward<Ipv6AddressT>(value);
  }
  template <typename Ipv6AddressT = Aws::String>
  ListMountTargetsDescription& WithIpv6Address(Ipv6AddressT&& value) {
    SetIpv6Address(std::forward<Ipv6AddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the mount target.</p>
   */
  inline LifeCycleState GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(LifeCycleState value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListMountTargetsDescription& WithStatus(LifeCycleState value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the mount target status.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  ListMountTargetsDescription& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the mount target.</p>
   */
  inline const Aws::String& GetMountTargetId() const { return m_mountTargetId; }
  inline bool MountTargetIdHasBeenSet() const { return m_mountTargetIdHasBeenSet; }
  template <typename MountTargetIdT = Aws::String>
  void SetMountTargetId(MountTargetIdT&& value) {
    m_mountTargetIdHasBeenSet = true;
    m_mountTargetId = std::forward<MountTargetIdT>(value);
  }
  template <typename MountTargetIdT = Aws::String>
  ListMountTargetsDescription& WithMountTargetId(MountTargetIdT&& value) {
    SetMountTargetId(std::forward<MountTargetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the network interface associated with the mount target.</p>
   */
  inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
  inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
  template <typename NetworkInterfaceIdT = Aws::String>
  void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) {
    m_networkInterfaceIdHasBeenSet = true;
    m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value);
  }
  template <typename NetworkInterfaceIdT = Aws::String>
  ListMountTargetsDescription& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) {
    SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the mount target owner.</p>
   */
  inline const Aws::String& GetOwnerId() const { return m_ownerId; }
  inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
  template <typename OwnerIdT = Aws::String>
  void SetOwnerId(OwnerIdT&& value) {
    m_ownerIdHasBeenSet = true;
    m_ownerId = std::forward<OwnerIdT>(value);
  }
  template <typename OwnerIdT = Aws::String>
  ListMountTargetsDescription& WithOwnerId(OwnerIdT&& value) {
    SetOwnerId(std::forward<OwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the subnet where the mount target is located.</p>
   */
  inline const Aws::String& GetSubnetId() const { return m_subnetId; }
  inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
  template <typename SubnetIdT = Aws::String>
  void SetSubnetId(SubnetIdT&& value) {
    m_subnetIdHasBeenSet = true;
    m_subnetId = std::forward<SubnetIdT>(value);
  }
  template <typename SubnetIdT = Aws::String>
  ListMountTargetsDescription& WithSubnetId(SubnetIdT&& value) {
    SetSubnetId(std::forward<SubnetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the VPC where the mount target is located.</p>
   */
  inline const Aws::String& GetVpcId() const { return m_vpcId; }
  inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
  template <typename VpcIdT = Aws::String>
  void SetVpcId(VpcIdT&& value) {
    m_vpcIdHasBeenSet = true;
    m_vpcId = std::forward<VpcIdT>(value);
  }
  template <typename VpcIdT = Aws::String>
  ListMountTargetsDescription& WithVpcId(VpcIdT&& value) {
    SetVpcId(std::forward<VpcIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_availabilityZoneId;

  Aws::String m_fileSystemId;

  Aws::String m_ipv4Address;

  Aws::String m_ipv6Address;

  LifeCycleState m_status{LifeCycleState::NOT_SET};

  Aws::String m_statusMessage;

  Aws::String m_mountTargetId;

  Aws::String m_networkInterfaceId;

  Aws::String m_ownerId;

  Aws::String m_subnetId;

  Aws::String m_vpcId;
  bool m_availabilityZoneIdHasBeenSet = false;
  bool m_fileSystemIdHasBeenSet = false;
  bool m_ipv4AddressHasBeenSet = false;
  bool m_ipv6AddressHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_mountTargetIdHasBeenSet = false;
  bool m_networkInterfaceIdHasBeenSet = false;
  bool m_ownerIdHasBeenSet = false;
  bool m_subnetIdHasBeenSet = false;
  bool m_vpcIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
