/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3files/S3Files_EXPORTS.h>
#include <aws/s3files/model/LifeCycleState.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace S3Files {
namespace Model {
class CreateMountTargetResult {
 public:
  AWS_S3FILES_API CreateMountTargetResult() = default;
  AWS_S3FILES_API CreateMountTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_S3FILES_API CreateMountTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique and consistent identifier of the Availability Zone where the mount
   * target is located. For example, <code>use1-az1</code> is an Availability Zone ID
   * for the <code>us-east-1</code> Amazon Web Services Region, and it has the same
   * location in every Amazon Web Services account.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  CreateMountTargetResult& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the mount target owner.</p>
   */
  inline const Aws::String& GetOwnerId() const { return m_ownerId; }
  template <typename OwnerIdT = Aws::String>
  void SetOwnerId(OwnerIdT&& value) {
    m_ownerIdHasBeenSet = true;
    m_ownerId = std::forward<OwnerIdT>(value);
  }
  template <typename OwnerIdT = Aws::String>
  CreateMountTargetResult& WithOwnerId(OwnerIdT&& value) {
    SetOwnerId(std::forward<OwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the mount target, assigned by S3 Files. This ID is used to
   * reference the mount target in subsequent API calls.</p>
   */
  inline const Aws::String& GetMountTargetId() const { return m_mountTargetId; }
  template <typename MountTargetIdT = Aws::String>
  void SetMountTargetId(MountTargetIdT&& value) {
    m_mountTargetIdHasBeenSet = true;
    m_mountTargetId = std::forward<MountTargetIdT>(value);
  }
  template <typename MountTargetIdT = Aws::String>
  CreateMountTargetResult& WithMountTargetId(MountTargetIdT&& value) {
    SetMountTargetId(std::forward<MountTargetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the S3 File System associated with the mount target.</p>
   */
  inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
  template <typename FileSystemIdT = Aws::String>
  void SetFileSystemId(FileSystemIdT&& value) {
    m_fileSystemIdHasBeenSet = true;
    m_fileSystemId = std::forward<FileSystemIdT>(value);
  }
  template <typename FileSystemIdT = Aws::String>
  CreateMountTargetResult& WithFileSystemId(FileSystemIdT&& value) {
    SetFileSystemId(std::forward<FileSystemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the subnet where the mount target is located.</p>
   */
  inline const Aws::String& GetSubnetId() const { return m_subnetId; }
  template <typename SubnetIdT = Aws::String>
  void SetSubnetId(SubnetIdT&& value) {
    m_subnetIdHasBeenSet = true;
    m_subnetId = std::forward<SubnetIdT>(value);
  }
  template <typename SubnetIdT = Aws::String>
  CreateMountTargetResult& WithSubnetId(SubnetIdT&& value) {
    SetSubnetId(std::forward<SubnetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPv4 address assigned to the mount target.</p>
   */
  inline const Aws::String& GetIpv4Address() const { return m_ipv4Address; }
  template <typename Ipv4AddressT = Aws::String>
  void SetIpv4Address(Ipv4AddressT&& value) {
    m_ipv4AddressHasBeenSet = true;
    m_ipv4Address = std::forward<Ipv4AddressT>(value);
  }
  template <typename Ipv4AddressT = Aws::String>
  CreateMountTargetResult& WithIpv4Address(Ipv4AddressT&& value) {
    SetIpv4Address(std::forward<Ipv4AddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPv6 address assigned to the mount target.</p>
   */
  inline const Aws::String& GetIpv6Address() const { return m_ipv6Address; }
  template <typename Ipv6AddressT = Aws::String>
  void SetIpv6Address(Ipv6AddressT&& value) {
    m_ipv6AddressHasBeenSet = true;
    m_ipv6Address = std::forward<Ipv6AddressT>(value);
  }
  template <typename Ipv6AddressT = Aws::String>
  CreateMountTargetResult& WithIpv6Address(Ipv6AddressT&& value) {
    SetIpv6Address(std::forward<Ipv6AddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the network interface that S3 Files created when it created the
   * mount target. This network interface is managed by the service.</p>
   */
  inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
  template <typename NetworkInterfaceIdT = Aws::String>
  void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) {
    m_networkInterfaceIdHasBeenSet = true;
    m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value);
  }
  template <typename NetworkInterfaceIdT = Aws::String>
  CreateMountTargetResult& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) {
    SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the VPC where the mount target is located.</p>
   */
  inline const Aws::String& GetVpcId() const { return m_vpcId; }
  template <typename VpcIdT = Aws::String>
  void SetVpcId(VpcIdT&& value) {
    m_vpcIdHasBeenSet = true;
    m_vpcId = std::forward<VpcIdT>(value);
  }
  template <typename VpcIdT = Aws::String>
  CreateMountTargetResult& WithVpcId(VpcIdT&& value) {
    SetVpcId(std::forward<VpcIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The security groups associated with the mount target's network interface.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
  template <typename SecurityGroupsT = Aws::Vector<Aws::String>>
  void SetSecurityGroups(SecurityGroupsT&& value) {
    m_securityGroupsHasBeenSet = true;
    m_securityGroups = std::forward<SecurityGroupsT>(value);
  }
  template <typename SecurityGroupsT = Aws::Vector<Aws::String>>
  CreateMountTargetResult& WithSecurityGroups(SecurityGroupsT&& value) {
    SetSecurityGroups(std::forward<SecurityGroupsT>(value));
    return *this;
  }
  template <typename SecurityGroupsT = Aws::String>
  CreateMountTargetResult& AddSecurityGroups(SecurityGroupsT&& value) {
    m_securityGroupsHasBeenSet = true;
    m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle state of the mount target. Valid values are:
   * <code>AVAILABLE</code> (the mount target is available for use),
   * <code>CREATING</code> (the mount target is being created), <code>DELETING</code>
   * (the mount target is being deleted), <code>DELETED</code> (the mount target has
   * been deleted), or <code>ERROR</code> (the mount target is in an error state), or
   * <code>UPDATING</code> (the mount target is being updated).</p>
   */
  inline LifeCycleState GetStatus() const { return m_status; }
  inline void SetStatus(LifeCycleState value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateMountTargetResult& WithStatus(LifeCycleState value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the mount target status. This field provides
   * more details when the status is <code>ERROR</code>, or during state
   * transitions.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  CreateMountTargetResult& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreateMountTargetResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_availabilityZoneId;

  Aws::String m_ownerId;

  Aws::String m_mountTargetId;

  Aws::String m_fileSystemId;

  Aws::String m_subnetId;

  Aws::String m_ipv4Address;

  Aws::String m_ipv6Address;

  Aws::String m_networkInterfaceId;

  Aws::String m_vpcId;

  Aws::Vector<Aws::String> m_securityGroups;

  LifeCycleState m_status{LifeCycleState::NOT_SET};

  Aws::String m_statusMessage;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_availabilityZoneIdHasBeenSet = false;
  bool m_ownerIdHasBeenSet = false;
  bool m_mountTargetIdHasBeenSet = false;
  bool m_fileSystemIdHasBeenSet = false;
  bool m_subnetIdHasBeenSet = false;
  bool m_ipv4AddressHasBeenSet = false;
  bool m_ipv6AddressHasBeenSet = false;
  bool m_networkInterfaceIdHasBeenSet = false;
  bool m_vpcIdHasBeenSet = false;
  bool m_securityGroupsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
