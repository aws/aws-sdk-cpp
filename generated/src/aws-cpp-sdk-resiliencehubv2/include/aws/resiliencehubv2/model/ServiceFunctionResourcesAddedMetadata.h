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
 * <p>Metadata for a service function resources added event.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ServiceFunctionResourcesAddedMetadata">AWS
 * API Reference</a></p>
 */
class ServiceFunctionResourcesAddedMetadata {
 public:
  AWS_RESILIENCEHUBV2_API ServiceFunctionResourcesAddedMetadata() = default;
  AWS_RESILIENCEHUBV2_API ServiceFunctionResourcesAddedMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API ServiceFunctionResourcesAddedMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the service function.</p>
   */
  inline const Aws::String& GetServiceFunctionId() const { return m_serviceFunctionId; }
  inline bool ServiceFunctionIdHasBeenSet() const { return m_serviceFunctionIdHasBeenSet; }
  template <typename ServiceFunctionIdT = Aws::String>
  void SetServiceFunctionId(ServiceFunctionIdT&& value) {
    m_serviceFunctionIdHasBeenSet = true;
    m_serviceFunctionId = std::forward<ServiceFunctionIdT>(value);
  }
  template <typename ServiceFunctionIdT = Aws::String>
  ServiceFunctionResourcesAddedMetadata& WithServiceFunctionId(ServiceFunctionIdT&& value) {
    SetServiceFunctionId(std::forward<ServiceFunctionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the service function.</p>
   */
  inline const Aws::String& GetServiceFunctionName() const { return m_serviceFunctionName; }
  inline bool ServiceFunctionNameHasBeenSet() const { return m_serviceFunctionNameHasBeenSet; }
  template <typename ServiceFunctionNameT = Aws::String>
  void SetServiceFunctionName(ServiceFunctionNameT&& value) {
    m_serviceFunctionNameHasBeenSet = true;
    m_serviceFunctionName = std::forward<ServiceFunctionNameT>(value);
  }
  template <typename ServiceFunctionNameT = Aws::String>
  ServiceFunctionResourcesAddedMetadata& WithServiceFunctionName(ServiceFunctionNameT&& value) {
    SetServiceFunctionName(std::forward<ServiceFunctionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of resource ARNs that were added.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResourcesAdded() const { return m_resourcesAdded; }
  inline bool ResourcesAddedHasBeenSet() const { return m_resourcesAddedHasBeenSet; }
  template <typename ResourcesAddedT = Aws::Vector<Aws::String>>
  void SetResourcesAdded(ResourcesAddedT&& value) {
    m_resourcesAddedHasBeenSet = true;
    m_resourcesAdded = std::forward<ResourcesAddedT>(value);
  }
  template <typename ResourcesAddedT = Aws::Vector<Aws::String>>
  ServiceFunctionResourcesAddedMetadata& WithResourcesAdded(ResourcesAddedT&& value) {
    SetResourcesAdded(std::forward<ResourcesAddedT>(value));
    return *this;
  }
  template <typename ResourcesAddedT = Aws::String>
  ServiceFunctionResourcesAddedMetadata& AddResourcesAdded(ResourcesAddedT&& value) {
    m_resourcesAddedHasBeenSet = true;
    m_resourcesAdded.emplace_back(std::forward<ResourcesAddedT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceFunctionId;

  Aws::String m_serviceFunctionName;

  Aws::Vector<Aws::String> m_resourcesAdded;
  bool m_serviceFunctionIdHasBeenSet = false;
  bool m_serviceFunctionNameHasBeenSet = false;
  bool m_resourcesAddedHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
