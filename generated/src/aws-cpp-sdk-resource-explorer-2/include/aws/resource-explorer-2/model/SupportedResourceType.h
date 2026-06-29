/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ResourceExplorer2 {
namespace Model {

/**
 * <p>A structure that describes a resource type supported by Amazon Web Services
 * Resource Explorer.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/SupportedResourceType">AWS
 * API Reference</a></p>
 */
class SupportedResourceType {
 public:
  AWS_RESOURCEEXPLORER2_API SupportedResourceType() = default;
  AWS_RESOURCEEXPLORER2_API SupportedResourceType(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESOURCEEXPLORER2_API SupportedResourceType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services service that is associated with the resource type.
   * This is the primary service that lets you create and interact with resources of
   * this type.</p>
   */
  inline const Aws::String& GetService() const { return m_service; }
  inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
  template <typename ServiceT = Aws::String>
  void SetService(ServiceT&& value) {
    m_serviceHasBeenSet = true;
    m_service = std::forward<ServiceT>(value);
  }
  template <typename ServiceT = Aws::String>
  SupportedResourceType& WithService(ServiceT&& value) {
    SetService(std::forward<ServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the resource type.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  SupportedResourceType& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CloudFormation resource type identifiers for this resource type, such as
   * <code>AWS::EC2::Instance</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCFNResourceTypes() const { return m_cFNResourceTypes; }
  inline bool CFNResourceTypesHasBeenSet() const { return m_cFNResourceTypesHasBeenSet; }
  template <typename CFNResourceTypesT = Aws::Vector<Aws::String>>
  void SetCFNResourceTypes(CFNResourceTypesT&& value) {
    m_cFNResourceTypesHasBeenSet = true;
    m_cFNResourceTypes = std::forward<CFNResourceTypesT>(value);
  }
  template <typename CFNResourceTypesT = Aws::Vector<Aws::String>>
  SupportedResourceType& WithCFNResourceTypes(CFNResourceTypesT&& value) {
    SetCFNResourceTypes(std::forward<CFNResourceTypesT>(value));
    return *this;
  }
  template <typename CFNResourceTypesT = Aws::String>
  SupportedResourceType& AddCFNResourceTypes(CFNResourceTypesT&& value) {
    m_cFNResourceTypesHasBeenSet = true;
    m_cFNResourceTypes.emplace_back(std::forward<CFNResourceTypesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_service;

  Aws::String m_resourceType;

  Aws::Vector<Aws::String> m_cFNResourceTypes;
  bool m_serviceHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_cFNResourceTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ResourceExplorer2
}  // namespace Aws
