/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3files/S3FilesRequest.h>
#include <aws/s3files/S3Files_EXPORTS.h>
#include <aws/s3files/model/IpAddressType.h>

#include <utility>

namespace Aws {
namespace S3Files {
namespace Model {

/**
 */
class CreateMountTargetRequest : public S3FilesRequest {
 public:
  AWS_S3FILES_API CreateMountTargetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateMountTarget"; }

  AWS_S3FILES_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID or Amazon Resource Name (ARN) of the S3 File System to create the
   * mount target for.</p>
   */
  inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
  inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
  template <typename FileSystemIdT = Aws::String>
  void SetFileSystemId(FileSystemIdT&& value) {
    m_fileSystemIdHasBeenSet = true;
    m_fileSystemId = std::forward<FileSystemIdT>(value);
  }
  template <typename FileSystemIdT = Aws::String>
  CreateMountTargetRequest& WithFileSystemId(FileSystemIdT&& value) {
    SetFileSystemId(std::forward<FileSystemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the subnet where the mount target will be created. The subnet must
   * be in the same Amazon Web Services Region as the file system. For file systems
   * with regional availability, you can create mount targets in any subnet within
   * the Region. The subnet determines the Availability Zone where the mount target
   * will be located.</p>
   */
  inline const Aws::String& GetSubnetId() const { return m_subnetId; }
  inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
  template <typename SubnetIdT = Aws::String>
  void SetSubnetId(SubnetIdT&& value) {
    m_subnetIdHasBeenSet = true;
    m_subnetId = std::forward<SubnetIdT>(value);
  }
  template <typename SubnetIdT = Aws::String>
  CreateMountTargetRequest& WithSubnetId(SubnetIdT&& value) {
    SetSubnetId(std::forward<SubnetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A specific IPv4 address to assign to the mount target. If not specified and
   * the IP address type supports IPv4, an address is automatically assigned from the
   * subnet's available IPv4 address range. The address must be within the subnet's
   * CIDR block and not already in use.</p>
   */
  inline const Aws::String& GetIpv4Address() const { return m_ipv4Address; }
  inline bool Ipv4AddressHasBeenSet() const { return m_ipv4AddressHasBeenSet; }
  template <typename Ipv4AddressT = Aws::String>
  void SetIpv4Address(Ipv4AddressT&& value) {
    m_ipv4AddressHasBeenSet = true;
    m_ipv4Address = std::forward<Ipv4AddressT>(value);
  }
  template <typename Ipv4AddressT = Aws::String>
  CreateMountTargetRequest& WithIpv4Address(Ipv4AddressT&& value) {
    SetIpv4Address(std::forward<Ipv4AddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A specific IPv6 address to assign to the mount target. If not specified and
   * the IP address type supports IPv6, an address is automatically assigned from the
   * subnet's available IPv6 address range. The address must be within the subnet's
   * IPv6 CIDR block and not already in use.</p>
   */
  inline const Aws::String& GetIpv6Address() const { return m_ipv6Address; }
  inline bool Ipv6AddressHasBeenSet() const { return m_ipv6AddressHasBeenSet; }
  template <typename Ipv6AddressT = Aws::String>
  void SetIpv6Address(Ipv6AddressT&& value) {
    m_ipv6AddressHasBeenSet = true;
    m_ipv6Address = std::forward<Ipv6AddressT>(value);
  }
  template <typename Ipv6AddressT = Aws::String>
  CreateMountTargetRequest& WithIpv6Address(Ipv6AddressT&& value) {
    SetIpv6Address(std::forward<Ipv6AddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address type for the mount target. If not specified,
   * <code>IPV4_ONLY</code> is used. The IP address type must match the IP
   * configuration of the specified subnet.</p>
   */
  inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
  inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
  inline void SetIpAddressType(IpAddressType value) {
    m_ipAddressTypeHasBeenSet = true;
    m_ipAddressType = value;
  }
  inline CreateMountTargetRequest& WithIpAddressType(IpAddressType value) {
    SetIpAddressType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of VPC security group IDs to associate with the mount target's
   * network interface. These security groups control network access to the mount
   * target. If not specified, the default security group for the subnet's VPC is
   * used. All security groups must belong to the same VPC as the subnet.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
  inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
  template <typename SecurityGroupsT = Aws::Vector<Aws::String>>
  void SetSecurityGroups(SecurityGroupsT&& value) {
    m_securityGroupsHasBeenSet = true;
    m_securityGroups = std::forward<SecurityGroupsT>(value);
  }
  template <typename SecurityGroupsT = Aws::Vector<Aws::String>>
  CreateMountTargetRequest& WithSecurityGroups(SecurityGroupsT&& value) {
    SetSecurityGroups(std::forward<SecurityGroupsT>(value));
    return *this;
  }
  template <typename SecurityGroupsT = Aws::String>
  CreateMountTargetRequest& AddSecurityGroups(SecurityGroupsT&& value) {
    m_securityGroupsHasBeenSet = true;
    m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fileSystemId;

  Aws::String m_subnetId;

  Aws::String m_ipv4Address;

  Aws::String m_ipv6Address;

  IpAddressType m_ipAddressType{IpAddressType::NOT_SET};

  Aws::Vector<Aws::String> m_securityGroups;
  bool m_fileSystemIdHasBeenSet = false;
  bool m_subnetIdHasBeenSet = false;
  bool m_ipv4AddressHasBeenSet = false;
  bool m_ipv6AddressHasBeenSet = false;
  bool m_ipAddressTypeHasBeenSet = false;
  bool m_securityGroupsHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
