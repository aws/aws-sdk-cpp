/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>
#include <aws/supportauthz/model/Unit.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SupportAuthZ {
namespace Model {

/**
 * <p>The set of resources authorized by a permit. Specify either all resources in
 * the Region or a list of specific resources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/supportauthz-2026-06-30/ResourceSet">AWS
 * API Reference</a></p>
 */
class ResourceSet {
 public:
  AWS_SUPPORTAUTHZ_API ResourceSet() = default;
  AWS_SUPPORTAUTHZ_API ResourceSet(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORTAUTHZ_API ResourceSet& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORTAUTHZ_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Authorizes the support operator to act on all resources in the Region.</p>
   */
  inline const Unit& GetAllResourcesInRegion() const { return m_allResourcesInRegion; }
  inline bool AllResourcesInRegionHasBeenSet() const { return m_allResourcesInRegionHasBeenSet; }
  template <typename AllResourcesInRegionT = Unit>
  void SetAllResourcesInRegion(AllResourcesInRegionT&& value) {
    m_allResourcesInRegionHasBeenSet = true;
    m_allResourcesInRegion = std::forward<AllResourcesInRegionT>(value);
  }
  template <typename AllResourcesInRegionT = Unit>
  ResourceSet& WithAllResourcesInRegion(AllResourcesInRegionT&& value) {
    SetAllResourcesInRegion(std::forward<AllResourcesInRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of specific resource identifiers that the support operator is
   * authorized to act upon. Maximum of 5 resources.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResources() const { return m_resources; }
  inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
  template <typename ResourcesT = Aws::Vector<Aws::String>>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = Aws::Vector<Aws::String>>
  ResourceSet& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  template <typename ResourcesT = Aws::String>
  ResourceSet& AddResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources.emplace_back(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}
 private:
  Unit m_allResourcesInRegion;

  Aws::Vector<Aws::String> m_resources;
  bool m_allResourcesInRegionHasBeenSet = false;
  bool m_resourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
