/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3files/S3FilesRequest.h>
#include <aws/s3files/S3Files_EXPORTS.h>

#include <utility>

namespace Aws {
namespace S3Files {
namespace Model {

/**
 */
class UpdateMountTargetRequest : public S3FilesRequest {
 public:
  AWS_S3FILES_API UpdateMountTargetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateMountTarget"; }

  AWS_S3FILES_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the mount target to update.</p>
   */
  inline const Aws::String& GetMountTargetId() const { return m_mountTargetId; }
  inline bool MountTargetIdHasBeenSet() const { return m_mountTargetIdHasBeenSet; }
  template <typename MountTargetIdT = Aws::String>
  void SetMountTargetId(MountTargetIdT&& value) {
    m_mountTargetIdHasBeenSet = true;
    m_mountTargetId = std::forward<MountTargetIdT>(value);
  }
  template <typename MountTargetIdT = Aws::String>
  UpdateMountTargetRequest& WithMountTargetId(MountTargetIdT&& value) {
    SetMountTargetId(std::forward<MountTargetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of VPC security group IDs to associate with the mount target's
   * network interface. This replaces the existing security groups. All security
   * groups must belong to the same VPC as the mount target's subnet.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
  inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
  template <typename SecurityGroupsT = Aws::Vector<Aws::String>>
  void SetSecurityGroups(SecurityGroupsT&& value) {
    m_securityGroupsHasBeenSet = true;
    m_securityGroups = std::forward<SecurityGroupsT>(value);
  }
  template <typename SecurityGroupsT = Aws::Vector<Aws::String>>
  UpdateMountTargetRequest& WithSecurityGroups(SecurityGroupsT&& value) {
    SetSecurityGroups(std::forward<SecurityGroupsT>(value));
    return *this;
  }
  template <typename SecurityGroupsT = Aws::String>
  UpdateMountTargetRequest& AddSecurityGroups(SecurityGroupsT&& value) {
    m_securityGroupsHasBeenSet = true;
    m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_mountTargetId;

  Aws::Vector<Aws::String> m_securityGroups;
  bool m_mountTargetIdHasBeenSet = false;
  bool m_securityGroupsHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
