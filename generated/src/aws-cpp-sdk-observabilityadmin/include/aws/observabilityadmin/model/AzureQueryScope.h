/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>Limits a query to a management group or to specific
 * subscriptions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AzureQueryScope">AWS
 * API Reference</a></p>
 */
class AzureQueryScope {
 public:
  AWS_OBSERVABILITYADMIN_API AzureQueryScope() = default;
  AWS_OBSERVABILITYADMIN_API AzureQueryScope(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AzureQueryScope& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Limits the query to resources under this management group.</p>
   */
  inline const Aws::String& GetManagementGroupId() const { return m_managementGroupId; }
  inline bool ManagementGroupIdHasBeenSet() const { return m_managementGroupIdHasBeenSet; }
  template <typename ManagementGroupIdT = Aws::String>
  void SetManagementGroupId(ManagementGroupIdT&& value) {
    m_managementGroupIdHasBeenSet = true;
    m_managementGroupId = std::forward<ManagementGroupIdT>(value);
  }
  template <typename ManagementGroupIdT = Aws::String>
  AzureQueryScope& WithManagementGroupId(ManagementGroupIdT&& value) {
    SetManagementGroupId(std::forward<ManagementGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Limits the query to these subscriptions. You can specify 1–1000
   * subscriptions.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSubscriptionIds() const { return m_subscriptionIds; }
  inline bool SubscriptionIdsHasBeenSet() const { return m_subscriptionIdsHasBeenSet; }
  template <typename SubscriptionIdsT = Aws::Vector<Aws::String>>
  void SetSubscriptionIds(SubscriptionIdsT&& value) {
    m_subscriptionIdsHasBeenSet = true;
    m_subscriptionIds = std::forward<SubscriptionIdsT>(value);
  }
  template <typename SubscriptionIdsT = Aws::Vector<Aws::String>>
  AzureQueryScope& WithSubscriptionIds(SubscriptionIdsT&& value) {
    SetSubscriptionIds(std::forward<SubscriptionIdsT>(value));
    return *this;
  }
  template <typename SubscriptionIdsT = Aws::String>
  AzureQueryScope& AddSubscriptionIds(SubscriptionIdsT&& value) {
    m_subscriptionIdsHasBeenSet = true;
    m_subscriptionIds.emplace_back(std::forward<SubscriptionIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_managementGroupId;

  Aws::Vector<Aws::String> m_subscriptionIds;
  bool m_managementGroupIdHasBeenSet = false;
  bool m_subscriptionIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
