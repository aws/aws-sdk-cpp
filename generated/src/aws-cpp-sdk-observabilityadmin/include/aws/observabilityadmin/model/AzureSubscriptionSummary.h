/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>Information about an Azure subscription.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AzureSubscriptionSummary">AWS
 * API Reference</a></p>
 */
class AzureSubscriptionSummary {
 public:
  AWS_OBSERVABILITYADMIN_API AzureSubscriptionSummary() = default;
  AWS_OBSERVABILITYADMIN_API AzureSubscriptionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AzureSubscriptionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the subscription.</p>
   */
  inline const Aws::String& GetSubscriptionId() const { return m_subscriptionId; }
  inline bool SubscriptionIdHasBeenSet() const { return m_subscriptionIdHasBeenSet; }
  template <typename SubscriptionIdT = Aws::String>
  void SetSubscriptionId(SubscriptionIdT&& value) {
    m_subscriptionIdHasBeenSet = true;
    m_subscriptionId = std::forward<SubscriptionIdT>(value);
  }
  template <typename SubscriptionIdT = Aws::String>
  AzureSubscriptionSummary& WithSubscriptionId(SubscriptionIdT&& value) {
    SetSubscriptionId(std::forward<SubscriptionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the subscription.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  AzureSubscriptionSummary& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the subscription in Azure, for example <code>Enabled</code>.</p>
   */
  inline const Aws::String& GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  template <typename StateT = Aws::String>
  void SetState(StateT&& value) {
    m_stateHasBeenSet = true;
    m_state = std::forward<StateT>(value);
  }
  template <typename StateT = Aws::String>
  AzureSubscriptionSummary& WithState(StateT&& value) {
    SetState(std::forward<StateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the management group that contains the subscription.</p>
   */
  inline const Aws::String& GetManagementGroupId() const { return m_managementGroupId; }
  inline bool ManagementGroupIdHasBeenSet() const { return m_managementGroupIdHasBeenSet; }
  template <typename ManagementGroupIdT = Aws::String>
  void SetManagementGroupId(ManagementGroupIdT&& value) {
    m_managementGroupIdHasBeenSet = true;
    m_managementGroupId = std::forward<ManagementGroupIdT>(value);
  }
  template <typename ManagementGroupIdT = Aws::String>
  AzureSubscriptionSummary& WithManagementGroupId(ManagementGroupIdT&& value) {
    SetManagementGroupId(std::forward<ManagementGroupIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_subscriptionId;

  Aws::String m_displayName;

  Aws::String m_state;

  Aws::String m_managementGroupId;
  bool m_subscriptionIdHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_managementGroupIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
