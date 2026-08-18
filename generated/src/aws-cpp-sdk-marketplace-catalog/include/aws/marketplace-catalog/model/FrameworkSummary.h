/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/AMISecuritySummary.h>
#include <aws/marketplace-catalog/model/ContainerSecuritySummary.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceCatalog {
namespace Model {

/**
 * <p>The framework-specific details of the assessed resource. Exactly one member
 * is set, corresponding to the framework that was assessed.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/FrameworkSummary">AWS
 * API Reference</a></p>
 */
class FrameworkSummary {
 public:
  AWS_MARKETPLACECATALOG_API FrameworkSummary() = default;
  AWS_MARKETPLACECATALOG_API FrameworkSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API FrameworkSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The details of the resource assessed under the AMI Security framework.</p>
   */
  inline const AMISecuritySummary& GetAMISecuritySummary() const { return m_aMISecuritySummary; }
  inline bool AMISecuritySummaryHasBeenSet() const { return m_aMISecuritySummaryHasBeenSet; }
  template <typename AMISecuritySummaryT = AMISecuritySummary>
  void SetAMISecuritySummary(AMISecuritySummaryT&& value) {
    m_aMISecuritySummaryHasBeenSet = true;
    m_aMISecuritySummary = std::forward<AMISecuritySummaryT>(value);
  }
  template <typename AMISecuritySummaryT = AMISecuritySummary>
  FrameworkSummary& WithAMISecuritySummary(AMISecuritySummaryT&& value) {
    SetAMISecuritySummary(std::forward<AMISecuritySummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the resource assessed under the Container Security
   * framework.</p>
   */
  inline const ContainerSecuritySummary& GetContainerSecuritySummary() const { return m_containerSecuritySummary; }
  inline bool ContainerSecuritySummaryHasBeenSet() const { return m_containerSecuritySummaryHasBeenSet; }
  template <typename ContainerSecuritySummaryT = ContainerSecuritySummary>
  void SetContainerSecuritySummary(ContainerSecuritySummaryT&& value) {
    m_containerSecuritySummaryHasBeenSet = true;
    m_containerSecuritySummary = std::forward<ContainerSecuritySummaryT>(value);
  }
  template <typename ContainerSecuritySummaryT = ContainerSecuritySummary>
  FrameworkSummary& WithContainerSecuritySummary(ContainerSecuritySummaryT&& value) {
    SetContainerSecuritySummary(std::forward<ContainerSecuritySummaryT>(value));
    return *this;
  }
  ///@}
 private:
  AMISecuritySummary m_aMISecuritySummary;

  ContainerSecuritySummary m_containerSecuritySummary;
  bool m_aMISecuritySummaryHasBeenSet = false;
  bool m_containerSecuritySummaryHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
