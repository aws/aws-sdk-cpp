/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Metadata for a service resources associated event.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ServiceResourcesAssociatedMetadata">AWS
 * API Reference</a></p>
 */
class ServiceResourcesAssociatedMetadata {
 public:
  AWS_RESILIENCEHUBV2_API ServiceResourcesAssociatedMetadata() = default;
  AWS_RESILIENCEHUBV2_API ServiceResourcesAssociatedMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API ServiceResourcesAssociatedMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of resources associated.</p>
   */
  inline int GetResourceCount() const { return m_resourceCount; }
  inline bool ResourceCountHasBeenSet() const { return m_resourceCountHasBeenSet; }
  inline void SetResourceCount(int value) {
    m_resourceCountHasBeenSet = true;
    m_resourceCount = value;
  }
  inline ServiceResourcesAssociatedMetadata& WithResourceCount(int value) {
    SetResourceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The types of resources associated.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResourceTypes() const { return m_resourceTypes; }
  inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
  template <typename ResourceTypesT = Aws::Vector<Aws::String>>
  void SetResourceTypes(ResourceTypesT&& value) {
    m_resourceTypesHasBeenSet = true;
    m_resourceTypes = std::forward<ResourceTypesT>(value);
  }
  template <typename ResourceTypesT = Aws::Vector<Aws::String>>
  ServiceResourcesAssociatedMetadata& WithResourceTypes(ResourceTypesT&& value) {
    SetResourceTypes(std::forward<ResourceTypesT>(value));
    return *this;
  }
  template <typename ResourceTypesT = Aws::String>
  ServiceResourcesAssociatedMetadata& AddResourceTypes(ResourceTypesT&& value) {
    m_resourceTypesHasBeenSet = true;
    m_resourceTypes.emplace_back(std::forward<ResourceTypesT>(value));
    return *this;
  }
  ///@}
 private:
  int m_resourceCount{0};

  Aws::Vector<Aws::String> m_resourceTypes;
  bool m_resourceCountHasBeenSet = false;
  bool m_resourceTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
