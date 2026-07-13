/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/AzureSubscription.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SSM {
namespace Model {

/**
 * <p>The target resources in the third-party cloud environment.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ConfigurationTargets">AWS
 * API Reference</a></p>
 */
class ConfigurationTargets {
 public:
  AWS_SSM_API ConfigurationTargets() = default;
  AWS_SSM_API ConfigurationTargets(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSM_API ConfigurationTargets& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of Azure subscriptions to target.</p>
   */
  inline const Aws::Vector<AzureSubscription>& GetSubscriptions() const { return m_subscriptions; }
  inline bool SubscriptionsHasBeenSet() const { return m_subscriptionsHasBeenSet; }
  template <typename SubscriptionsT = Aws::Vector<AzureSubscription>>
  void SetSubscriptions(SubscriptionsT&& value) {
    m_subscriptionsHasBeenSet = true;
    m_subscriptions = std::forward<SubscriptionsT>(value);
  }
  template <typename SubscriptionsT = Aws::Vector<AzureSubscription>>
  ConfigurationTargets& WithSubscriptions(SubscriptionsT&& value) {
    SetSubscriptions(std::forward<SubscriptionsT>(value));
    return *this;
  }
  template <typename SubscriptionsT = AzureSubscription>
  ConfigurationTargets& AddSubscriptions(SubscriptionsT&& value) {
    m_subscriptionsHasBeenSet = true;
    m_subscriptions.emplace_back(std::forward<SubscriptionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AzureSubscription> m_subscriptions;
  bool m_subscriptionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
