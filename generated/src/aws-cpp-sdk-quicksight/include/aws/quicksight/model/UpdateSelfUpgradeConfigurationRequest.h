/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SelfUpgradeStatus.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class UpdateSelfUpgradeConfigurationRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API UpdateSelfUpgradeConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateSelfUpgradeConfiguration"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the Quick Suite
   * self-upgrade configuration that you want to update.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  UpdateSelfUpgradeConfigurationRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Quick Suite namespace that you want to update the Quick Suite
   * self-upgrade configuration for.</p>
   */
  inline const Aws::String& GetNamespace() const { return m_namespace; }
  inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
  template <typename NamespaceT = Aws::String>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::String>
  UpdateSelfUpgradeConfigurationRequest& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The self-upgrade status that you want to set for the Quick Suite account.</p>
   */
  inline SelfUpgradeStatus GetSelfUpgradeStatus() const { return m_selfUpgradeStatus; }
  inline bool SelfUpgradeStatusHasBeenSet() const { return m_selfUpgradeStatusHasBeenSet; }
  inline void SetSelfUpgradeStatus(SelfUpgradeStatus value) {
    m_selfUpgradeStatusHasBeenSet = true;
    m_selfUpgradeStatus = value;
  }
  inline UpdateSelfUpgradeConfigurationRequest& WithSelfUpgradeStatus(SelfUpgradeStatus value) {
    SetSelfUpgradeStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_namespace;

  SelfUpgradeStatus m_selfUpgradeStatus{SelfUpgradeStatus::NOT_SET};
  bool m_awsAccountIdHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
  bool m_selfUpgradeStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
