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
 * <p>Azure resources in one Azure Region.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AzureResourceIdScope">AWS
 * API Reference</a></p>
 */
class AzureResourceIdScope {
 public:
  AWS_OBSERVABILITYADMIN_API AzureResourceIdScope() = default;
  AWS_OBSERVABILITYADMIN_API AzureResourceIdScope(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AzureResourceIdScope& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Azure Region of the resources, for example <code>eastus</code>. Required
   * because an Azure resource ID doesn't include the Region.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  AzureResourceIdScope& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Azure Resource Manager IDs of the resources.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResourceIds() const { return m_resourceIds; }
  inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
  template <typename ResourceIdsT = Aws::Vector<Aws::String>>
  void SetResourceIds(ResourceIdsT&& value) {
    m_resourceIdsHasBeenSet = true;
    m_resourceIds = std::forward<ResourceIdsT>(value);
  }
  template <typename ResourceIdsT = Aws::Vector<Aws::String>>
  AzureResourceIdScope& WithResourceIds(ResourceIdsT&& value) {
    SetResourceIds(std::forward<ResourceIdsT>(value));
    return *this;
  }
  template <typename ResourceIdsT = Aws::String>
  AzureResourceIdScope& AddResourceIds(ResourceIdsT&& value) {
    m_resourceIdsHasBeenSet = true;
    m_resourceIds.emplace_back(std::forward<ResourceIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_region;

  Aws::Vector<Aws::String> m_resourceIds;
  bool m_regionHasBeenSet = false;
  bool m_resourceIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
