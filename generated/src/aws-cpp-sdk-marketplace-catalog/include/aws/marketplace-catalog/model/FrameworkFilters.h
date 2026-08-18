/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/AMISecurityFilters.h>
#include <aws/marketplace-catalog/model/ContainerSecurityFilters.h>

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
 * <p>Framework-specific filters used to scope <code>ListAssessments</code>
 * results. Set exactly one member, corresponding to the framework you want to
 * filter by.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/FrameworkFilters">AWS
 * API Reference</a></p>
 */
class FrameworkFilters {
 public:
  AWS_MARKETPLACECATALOG_API FrameworkFilters() = default;
  AWS_MARKETPLACECATALOG_API FrameworkFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API FrameworkFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filters that apply to assessments performed against the AMI Security
   * framework.</p>
   */
  inline const AMISecurityFilters& GetAMISecurityFilters() const { return m_aMISecurityFilters; }
  inline bool AMISecurityFiltersHasBeenSet() const { return m_aMISecurityFiltersHasBeenSet; }
  template <typename AMISecurityFiltersT = AMISecurityFilters>
  void SetAMISecurityFilters(AMISecurityFiltersT&& value) {
    m_aMISecurityFiltersHasBeenSet = true;
    m_aMISecurityFilters = std::forward<AMISecurityFiltersT>(value);
  }
  template <typename AMISecurityFiltersT = AMISecurityFilters>
  FrameworkFilters& WithAMISecurityFilters(AMISecurityFiltersT&& value) {
    SetAMISecurityFilters(std::forward<AMISecurityFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters that apply to assessments performed against the Container Security
   * framework.</p>
   */
  inline const ContainerSecurityFilters& GetContainerSecurityFilters() const { return m_containerSecurityFilters; }
  inline bool ContainerSecurityFiltersHasBeenSet() const { return m_containerSecurityFiltersHasBeenSet; }
  template <typename ContainerSecurityFiltersT = ContainerSecurityFilters>
  void SetContainerSecurityFilters(ContainerSecurityFiltersT&& value) {
    m_containerSecurityFiltersHasBeenSet = true;
    m_containerSecurityFilters = std::forward<ContainerSecurityFiltersT>(value);
  }
  template <typename ContainerSecurityFiltersT = ContainerSecurityFilters>
  FrameworkFilters& WithContainerSecurityFilters(ContainerSecurityFiltersT&& value) {
    SetContainerSecurityFilters(std::forward<ContainerSecurityFiltersT>(value));
    return *this;
  }
  ///@}
 private:
  AMISecurityFilters m_aMISecurityFilters;

  ContainerSecurityFilters m_containerSecurityFilters;
  bool m_aMISecurityFiltersHasBeenSet = false;
  bool m_containerSecurityFiltersHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
