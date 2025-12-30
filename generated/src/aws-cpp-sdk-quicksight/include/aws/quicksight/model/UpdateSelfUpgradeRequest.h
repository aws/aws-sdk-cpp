/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SelfUpgradeAdminAction.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class UpdateSelfUpgradeRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API UpdateSelfUpgradeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateSelfUpgrade"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the self-upgrade
   * request.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  UpdateSelfUpgradeRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Quick Suite namespace for the self-upgrade request.</p>
   */
  inline const Aws::String& GetNamespace() const { return m_namespace; }
  inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
  template <typename NamespaceT = Aws::String>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::String>
  UpdateSelfUpgradeRequest& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the self-upgrade request to update.</p>
   */
  inline const Aws::String& GetUpgradeRequestId() const { return m_upgradeRequestId; }
  inline bool UpgradeRequestIdHasBeenSet() const { return m_upgradeRequestIdHasBeenSet; }
  template <typename UpgradeRequestIdT = Aws::String>
  void SetUpgradeRequestId(UpgradeRequestIdT&& value) {
    m_upgradeRequestIdHasBeenSet = true;
    m_upgradeRequestId = std::forward<UpgradeRequestIdT>(value);
  }
  template <typename UpgradeRequestIdT = Aws::String>
  UpdateSelfUpgradeRequest& WithUpgradeRequestId(UpgradeRequestIdT&& value) {
    SetUpgradeRequestId(std::forward<UpgradeRequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action to perform on the self-upgrade request. Valid values are
   * <code>APPROVE</code>, <code>DENY</code>, or <code>VERIFY</code>.</p>
   */
  inline SelfUpgradeAdminAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(SelfUpgradeAdminAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline UpdateSelfUpgradeRequest& WithAction(SelfUpgradeAdminAction value) {
    SetAction(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_namespace;

  Aws::String m_upgradeRequestId;

  SelfUpgradeAdminAction m_action{SelfUpgradeAdminAction::NOT_SET};
  bool m_awsAccountIdHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
  bool m_upgradeRequestIdHasBeenSet = false;
  bool m_actionHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
