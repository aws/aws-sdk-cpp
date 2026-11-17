/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/AllSubscriptions.h>

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
 * <p>The subscriptions to find resources in: all subscriptions that the connector
 * can read, or a list of subscriptions. Specify one.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AzureSubscriptionScope">AWS
 * API Reference</a></p>
 */
class AzureSubscriptionScope {
 public:
  AWS_OBSERVABILITYADMIN_API AzureSubscriptionScope() = default;
  AWS_OBSERVABILITYADMIN_API AzureSubscriptionScope(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AzureSubscriptionScope& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>All subscriptions that Azure role-based access control (Azure RBAC) allows
   * the connector to read. Subscriptions that the connector can read later are
   * included automatically.</p>
   */
  inline const AllSubscriptions& GetAll() const { return m_all; }
  inline bool AllHasBeenSet() const { return m_allHasBeenSet; }
  template <typename AllT = AllSubscriptions>
  void SetAll(AllT&& value) {
    m_allHasBeenSet = true;
    m_all = std::forward<AllT>(value);
  }
  template <typename AllT = AllSubscriptions>
  AzureSubscriptionScope& WithAll(AllT&& value) {
    SetAll(std::forward<AllT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of 1–1000 subscription IDs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIds() const { return m_ids; }
  inline bool IdsHasBeenSet() const { return m_idsHasBeenSet; }
  template <typename IdsT = Aws::Vector<Aws::String>>
  void SetIds(IdsT&& value) {
    m_idsHasBeenSet = true;
    m_ids = std::forward<IdsT>(value);
  }
  template <typename IdsT = Aws::Vector<Aws::String>>
  AzureSubscriptionScope& WithIds(IdsT&& value) {
    SetIds(std::forward<IdsT>(value));
    return *this;
  }
  template <typename IdsT = Aws::String>
  AzureSubscriptionScope& AddIds(IdsT&& value) {
    m_idsHasBeenSet = true;
    m_ids.emplace_back(std::forward<IdsT>(value));
    return *this;
  }
  ///@}
 private:
  AllSubscriptions m_all;

  Aws::Vector<Aws::String> m_ids;
  bool m_allHasBeenSet = false;
  bool m_idsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
