/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/SubscriptionStatus.h>
#include <aws/rtbfabric/model/SubscriptionType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {

/**
 * <p>A module that you can attach, as ListAvailableModules returns it.
 * ListAvailableModules and GetAvailableModule never return how a module is
 * implemented.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/AvailableModuleSummary">AWS
 * API Reference</a></p>
 */
class AvailableModuleSummary {
 public:
  AWS_RTBFABRIC_API AvailableModuleSummary() = default;
  AWS_RTBFABRIC_API AvailableModuleSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API AvailableModuleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The module's ID.</p>
   */
  inline const Aws::String& GetModuleId() const { return m_moduleId; }
  inline bool ModuleIdHasBeenSet() const { return m_moduleIdHasBeenSet; }
  template <typename ModuleIdT = Aws::String>
  void SetModuleId(ModuleIdT&& value) {
    m_moduleIdHasBeenSet = true;
    m_moduleId = std::forward<ModuleIdT>(value);
  }
  template <typename ModuleIdT = Aws::String>
  AvailableModuleSummary& WithModuleId(ModuleIdT&& value) {
    SetModuleId(std::forward<ModuleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The module's ARN.</p>
   */
  inline const Aws::String& GetModuleArn() const { return m_moduleArn; }
  inline bool ModuleArnHasBeenSet() const { return m_moduleArnHasBeenSet; }
  template <typename ModuleArnT = Aws::String>
  void SetModuleArn(ModuleArnT&& value) {
    m_moduleArnHasBeenSet = true;
    m_moduleArn = std::forward<ModuleArnT>(value);
  }
  template <typename ModuleArnT = Aws::String>
  AvailableModuleSummary& WithModuleArn(ModuleArnT&& value) {
    SetModuleArn(std::forward<ModuleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A label, not unique: modules can share a name.</p>
   */
  inline const Aws::String& GetModuleName() const { return m_moduleName; }
  inline bool ModuleNameHasBeenSet() const { return m_moduleNameHasBeenSet; }
  template <typename ModuleNameT = Aws::String>
  void SetModuleName(ModuleNameT&& value) {
    m_moduleNameHasBeenSet = true;
    m_moduleName = std::forward<ModuleNameT>(value);
  }
  template <typename ModuleNameT = Aws::String>
  AvailableModuleSummary& WithModuleName(ModuleNameT&& value) {
    SetModuleName(std::forward<ModuleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of access that you have to the module.</p>
   */
  inline SubscriptionType GetSubscriptionType() const { return m_subscriptionType; }
  inline bool SubscriptionTypeHasBeenSet() const { return m_subscriptionTypeHasBeenSet; }
  inline void SetSubscriptionType(SubscriptionType value) {
    m_subscriptionTypeHasBeenSet = true;
    m_subscriptionType = value;
  }
  inline AvailableModuleSummary& WithSubscriptionType(SubscriptionType value) {
    SetSubscriptionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether your access to the module is current.</p>
   */
  inline SubscriptionStatus GetSubscriptionStatus() const { return m_subscriptionStatus; }
  inline bool SubscriptionStatusHasBeenSet() const { return m_subscriptionStatusHasBeenSet; }
  inline void SetSubscriptionStatus(SubscriptionStatus value) {
    m_subscriptionStatusHasBeenSet = true;
    m_subscriptionStatus = value;
  }
  inline AvailableModuleSummary& WithSubscriptionStatus(SubscriptionStatus value) {
    SetSubscriptionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Marketplace product the module is sold under. Present only when
   * subscriptionType is MARKETPLACE.</p>
   */
  inline const Aws::String& GetMarketplaceProductId() const { return m_marketplaceProductId; }
  inline bool MarketplaceProductIdHasBeenSet() const { return m_marketplaceProductIdHasBeenSet; }
  template <typename MarketplaceProductIdT = Aws::String>
  void SetMarketplaceProductId(MarketplaceProductIdT&& value) {
    m_marketplaceProductIdHasBeenSet = true;
    m_marketplaceProductId = std::forward<MarketplaceProductIdT>(value);
  }
  template <typename MarketplaceProductIdT = Aws::String>
  AvailableModuleSummary& WithMarketplaceProductId(MarketplaceProductIdT&& value) {
    SetMarketplaceProductId(std::forward<MarketplaceProductIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_moduleId;

  Aws::String m_moduleArn;

  Aws::String m_moduleName;

  SubscriptionType m_subscriptionType{SubscriptionType::NOT_SET};

  SubscriptionStatus m_subscriptionStatus{SubscriptionStatus::NOT_SET};

  Aws::String m_marketplaceProductId;
  bool m_moduleIdHasBeenSet = false;
  bool m_moduleArnHasBeenSet = false;
  bool m_moduleNameHasBeenSet = false;
  bool m_subscriptionTypeHasBeenSet = false;
  bool m_subscriptionStatusHasBeenSet = false;
  bool m_marketplaceProductIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
