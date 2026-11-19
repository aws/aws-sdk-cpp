/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/SubscriptionStatus.h>
#include <aws/rtbfabric/model/SubscriptionType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {
class GetAvailableModuleResult {
 public:
  AWS_RTBFABRIC_API GetAvailableModuleResult() = default;
  AWS_RTBFABRIC_API GetAvailableModuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RTBFABRIC_API GetAvailableModuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The module's ID.</p>
   */
  inline const Aws::String& GetModuleId() const { return m_moduleId; }
  template <typename ModuleIdT = Aws::String>
  void SetModuleId(ModuleIdT&& value) {
    m_moduleIdHasBeenSet = true;
    m_moduleId = std::forward<ModuleIdT>(value);
  }
  template <typename ModuleIdT = Aws::String>
  GetAvailableModuleResult& WithModuleId(ModuleIdT&& value) {
    SetModuleId(std::forward<ModuleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The module's ARN.</p>
   */
  inline const Aws::String& GetModuleArn() const { return m_moduleArn; }
  template <typename ModuleArnT = Aws::String>
  void SetModuleArn(ModuleArnT&& value) {
    m_moduleArnHasBeenSet = true;
    m_moduleArn = std::forward<ModuleArnT>(value);
  }
  template <typename ModuleArnT = Aws::String>
  GetAvailableModuleResult& WithModuleArn(ModuleArnT&& value) {
    SetModuleArn(std::forward<ModuleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A label, not unique: modules can share a name.</p>
   */
  inline const Aws::String& GetModuleName() const { return m_moduleName; }
  template <typename ModuleNameT = Aws::String>
  void SetModuleName(ModuleNameT&& value) {
    m_moduleNameHasBeenSet = true;
    m_moduleName = std::forward<ModuleNameT>(value);
  }
  template <typename ModuleNameT = Aws::String>
  GetAvailableModuleResult& WithModuleName(ModuleNameT&& value) {
    SetModuleName(std::forward<ModuleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The module's description.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetAvailableModuleResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of access that you have to the module.</p>
   */
  inline SubscriptionType GetSubscriptionType() const { return m_subscriptionType; }
  inline void SetSubscriptionType(SubscriptionType value) {
    m_subscriptionTypeHasBeenSet = true;
    m_subscriptionType = value;
  }
  inline GetAvailableModuleResult& WithSubscriptionType(SubscriptionType value) {
    SetSubscriptionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether your access to the module is current.</p>
   */
  inline SubscriptionStatus GetSubscriptionStatus() const { return m_subscriptionStatus; }
  inline void SetSubscriptionStatus(SubscriptionStatus value) {
    m_subscriptionStatusHasBeenSet = true;
    m_subscriptionStatus = value;
  }
  inline GetAvailableModuleResult& WithSubscriptionStatus(SubscriptionStatus value) {
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
  template <typename MarketplaceProductIdT = Aws::String>
  void SetMarketplaceProductId(MarketplaceProductIdT&& value) {
    m_marketplaceProductIdHasBeenSet = true;
    m_marketplaceProductId = std::forward<MarketplaceProductIdT>(value);
  }
  template <typename MarketplaceProductIdT = Aws::String>
  GetAvailableModuleResult& WithMarketplaceProductId(MarketplaceProductIdT&& value) {
    SetMarketplaceProductId(std::forward<MarketplaceProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the module was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetAvailableModuleResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetAvailableModuleResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_moduleId;

  Aws::String m_moduleArn;

  Aws::String m_moduleName;

  Aws::String m_description;

  SubscriptionType m_subscriptionType{SubscriptionType::NOT_SET};

  SubscriptionStatus m_subscriptionStatus{SubscriptionStatus::NOT_SET};

  Aws::String m_marketplaceProductId;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_moduleIdHasBeenSet = false;
  bool m_moduleArnHasBeenSet = false;
  bool m_moduleNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_subscriptionTypeHasBeenSet = false;
  bool m_subscriptionStatusHasBeenSet = false;
  bool m_marketplaceProductIdHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
