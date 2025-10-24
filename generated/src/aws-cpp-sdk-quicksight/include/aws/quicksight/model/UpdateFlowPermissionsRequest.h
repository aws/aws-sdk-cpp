/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Permission.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class UpdateFlowPermissionsRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API UpdateFlowPermissionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateFlowPermissions"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the flow you are
   * updating permissions against.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  UpdateFlowPermissionsRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the flow to update permissions for.</p>
   */
  inline const Aws::String& GetFlowId() const { return m_flowId; }
  inline bool FlowIdHasBeenSet() const { return m_flowIdHasBeenSet; }
  template <typename FlowIdT = Aws::String>
  void SetFlowId(FlowIdT&& value) {
    m_flowIdHasBeenSet = true;
    m_flowId = std::forward<FlowIdT>(value);
  }
  template <typename FlowIdT = Aws::String>
  UpdateFlowPermissionsRequest& WithFlowId(FlowIdT&& value) {
    SetFlowId(std::forward<FlowIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permissions that you want to grant on this flow.</p>
   */
  inline const Aws::Vector<Permission>& GetGrantPermissions() const { return m_grantPermissions; }
  inline bool GrantPermissionsHasBeenSet() const { return m_grantPermissionsHasBeenSet; }
  template <typename GrantPermissionsT = Aws::Vector<Permission>>
  void SetGrantPermissions(GrantPermissionsT&& value) {
    m_grantPermissionsHasBeenSet = true;
    m_grantPermissions = std::forward<GrantPermissionsT>(value);
  }
  template <typename GrantPermissionsT = Aws::Vector<Permission>>
  UpdateFlowPermissionsRequest& WithGrantPermissions(GrantPermissionsT&& value) {
    SetGrantPermissions(std::forward<GrantPermissionsT>(value));
    return *this;
  }
  template <typename GrantPermissionsT = Permission>
  UpdateFlowPermissionsRequest& AddGrantPermissions(GrantPermissionsT&& value) {
    m_grantPermissionsHasBeenSet = true;
    m_grantPermissions.emplace_back(std::forward<GrantPermissionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permissions that you want to revoke from this flow.</p>
   */
  inline const Aws::Vector<Permission>& GetRevokePermissions() const { return m_revokePermissions; }
  inline bool RevokePermissionsHasBeenSet() const { return m_revokePermissionsHasBeenSet; }
  template <typename RevokePermissionsT = Aws::Vector<Permission>>
  void SetRevokePermissions(RevokePermissionsT&& value) {
    m_revokePermissionsHasBeenSet = true;
    m_revokePermissions = std::forward<RevokePermissionsT>(value);
  }
  template <typename RevokePermissionsT = Aws::Vector<Permission>>
  UpdateFlowPermissionsRequest& WithRevokePermissions(RevokePermissionsT&& value) {
    SetRevokePermissions(std::forward<RevokePermissionsT>(value));
    return *this;
  }
  template <typename RevokePermissionsT = Permission>
  UpdateFlowPermissionsRequest& AddRevokePermissions(RevokePermissionsT&& value) {
    m_revokePermissionsHasBeenSet = true;
    m_revokePermissions.emplace_back(std::forward<RevokePermissionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;
  bool m_awsAccountIdHasBeenSet = false;

  Aws::String m_flowId;
  bool m_flowIdHasBeenSet = false;

  Aws::Vector<Permission> m_grantPermissions;
  bool m_grantPermissionsHasBeenSet = false;

  Aws::Vector<Permission> m_revokePermissions;
  bool m_revokePermissionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
