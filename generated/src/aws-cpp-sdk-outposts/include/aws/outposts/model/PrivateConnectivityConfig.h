/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/PrivateConnectivityStatus.h>
#include <aws/outposts/model/VpcInformation.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Outposts {
namespace Model {

/**
 * <p>Information about the private connectivity configuration for an
 * Outpost.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/PrivateConnectivityConfig">AWS
 * API Reference</a></p>
 */
class PrivateConnectivityConfig {
 public:
  AWS_OUTPOSTS_API PrivateConnectivityConfig() = default;
  AWS_OUTPOSTS_API PrivateConnectivityConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API PrivateConnectivityConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the service-linked role that Amazon Web
   * Services Outposts creates and uses to provision and attach the network
   * interfaces for private connectivity in your VPC. The role's permissions are
   * scoped to the specific Outpost and VPC.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  PrivateConnectivityConfig& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of private connectivity for the Outpost. Valid values are
   * <code>ENABLED</code> and <code>DISABLED</code>.</p>
   */
  inline PrivateConnectivityStatus GetPrivateConnectivityStatus() const { return m_privateConnectivityStatus; }
  inline bool PrivateConnectivityStatusHasBeenSet() const { return m_privateConnectivityStatusHasBeenSet; }
  inline void SetPrivateConnectivityStatus(PrivateConnectivityStatus value) {
    m_privateConnectivityStatusHasBeenSet = true;
    m_privateConnectivityStatus = value;
  }
  inline PrivateConnectivityConfig& WithPrivateConnectivityStatus(PrivateConnectivityStatus value) {
    SetPrivateConnectivityStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the VPC used for private connectivity.</p>
   */
  inline const Aws::Vector<VpcInformation>& GetVpcInformationList() const { return m_vpcInformationList; }
  inline bool VpcInformationListHasBeenSet() const { return m_vpcInformationListHasBeenSet; }
  template <typename VpcInformationListT = Aws::Vector<VpcInformation>>
  void SetVpcInformationList(VpcInformationListT&& value) {
    m_vpcInformationListHasBeenSet = true;
    m_vpcInformationList = std::forward<VpcInformationListT>(value);
  }
  template <typename VpcInformationListT = Aws::Vector<VpcInformation>>
  PrivateConnectivityConfig& WithVpcInformationList(VpcInformationListT&& value) {
    SetVpcInformationList(std::forward<VpcInformationListT>(value));
    return *this;
  }
  template <typename VpcInformationListT = VpcInformation>
  PrivateConnectivityConfig& AddVpcInformationList(VpcInformationListT&& value) {
    m_vpcInformationListHasBeenSet = true;
    m_vpcInformationList.emplace_back(std::forward<VpcInformationListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the provisioning role in your account that
   * Amazon Web Services Outposts uses to establish the service link connection
   * during Outpost installation. This field is present only when VPC endpoint-based
   * provisioning is configured.</p>
   */
  inline const Aws::String& GetProvisioningRoleArn() const { return m_provisioningRoleArn; }
  inline bool ProvisioningRoleArnHasBeenSet() const { return m_provisioningRoleArnHasBeenSet; }
  template <typename ProvisioningRoleArnT = Aws::String>
  void SetProvisioningRoleArn(ProvisioningRoleArnT&& value) {
    m_provisioningRoleArnHasBeenSet = true;
    m_provisioningRoleArn = std::forward<ProvisioningRoleArnT>(value);
  }
  template <typename ProvisioningRoleArnT = Aws::String>
  PrivateConnectivityConfig& WithProvisioningRoleArn(ProvisioningRoleArnT&& value) {
    SetProvisioningRoleArn(std::forward<ProvisioningRoleArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_roleArn;

  PrivateConnectivityStatus m_privateConnectivityStatus{PrivateConnectivityStatus::NOT_SET};

  Aws::Vector<VpcInformation> m_vpcInformationList;

  Aws::String m_provisioningRoleArn;
  bool m_roleArnHasBeenSet = false;
  bool m_privateConnectivityStatusHasBeenSet = false;
  bool m_vpcInformationListHasBeenSet = false;
  bool m_provisioningRoleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
