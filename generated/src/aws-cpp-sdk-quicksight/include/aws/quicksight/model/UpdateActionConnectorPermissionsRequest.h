/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ResourcePermission.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class UpdateActionConnectorPermissionsRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API UpdateActionConnectorPermissionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateActionConnectorPermissions"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Web Services account ID that contains the action connector.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  UpdateActionConnectorPermissionsRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the action connector whose permissions you want to
   * update.</p>
   */
  inline const Aws::String& GetActionConnectorId() const { return m_actionConnectorId; }
  inline bool ActionConnectorIdHasBeenSet() const { return m_actionConnectorIdHasBeenSet; }
  template <typename ActionConnectorIdT = Aws::String>
  void SetActionConnectorId(ActionConnectorIdT&& value) {
    m_actionConnectorIdHasBeenSet = true;
    m_actionConnectorId = std::forward<ActionConnectorIdT>(value);
  }
  template <typename ActionConnectorIdT = Aws::String>
  UpdateActionConnectorPermissionsRequest& WithActionConnectorId(ActionConnectorIdT&& value) {
    SetActionConnectorId(std::forward<ActionConnectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permissions to grant to users and groups for this action connector.</p>
   */
  inline const Aws::Vector<ResourcePermission>& GetGrantPermissions() const { return m_grantPermissions; }
  inline bool GrantPermissionsHasBeenSet() const { return m_grantPermissionsHasBeenSet; }
  template <typename GrantPermissionsT = Aws::Vector<ResourcePermission>>
  void SetGrantPermissions(GrantPermissionsT&& value) {
    m_grantPermissionsHasBeenSet = true;
    m_grantPermissions = std::forward<GrantPermissionsT>(value);
  }
  template <typename GrantPermissionsT = Aws::Vector<ResourcePermission>>
  UpdateActionConnectorPermissionsRequest& WithGrantPermissions(GrantPermissionsT&& value) {
    SetGrantPermissions(std::forward<GrantPermissionsT>(value));
    return *this;
  }
  template <typename GrantPermissionsT = ResourcePermission>
  UpdateActionConnectorPermissionsRequest& AddGrantPermissions(GrantPermissionsT&& value) {
    m_grantPermissionsHasBeenSet = true;
    m_grantPermissions.emplace_back(std::forward<GrantPermissionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permissions to revoke from users and groups for this action
   * connector.</p>
   */
  inline const Aws::Vector<ResourcePermission>& GetRevokePermissions() const { return m_revokePermissions; }
  inline bool RevokePermissionsHasBeenSet() const { return m_revokePermissionsHasBeenSet; }
  template <typename RevokePermissionsT = Aws::Vector<ResourcePermission>>
  void SetRevokePermissions(RevokePermissionsT&& value) {
    m_revokePermissionsHasBeenSet = true;
    m_revokePermissions = std::forward<RevokePermissionsT>(value);
  }
  template <typename RevokePermissionsT = Aws::Vector<ResourcePermission>>
  UpdateActionConnectorPermissionsRequest& WithRevokePermissions(RevokePermissionsT&& value) {
    SetRevokePermissions(std::forward<RevokePermissionsT>(value));
    return *this;
  }
  template <typename RevokePermissionsT = ResourcePermission>
  UpdateActionConnectorPermissionsRequest& AddRevokePermissions(RevokePermissionsT&& value) {
    m_revokePermissionsHasBeenSet = true;
    m_revokePermissions.emplace_back(std::forward<RevokePermissionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;
  bool m_awsAccountIdHasBeenSet = false;

  Aws::String m_actionConnectorId;
  bool m_actionConnectorIdHasBeenSet = false;

  Aws::Vector<ResourcePermission> m_grantPermissions;
  bool m_grantPermissionsHasBeenSet = false;

  Aws::Vector<ResourcePermission> m_revokePermissions;
  bool m_revokePermissionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
