/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/model/IncludedProperty.h>
#include <aws/resource-explorer-2/model/SearchFilter.h>

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
 * <p>Contains the configuration and properties of a Resource Explorer service
 * view.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/ServiceView">AWS
 * API Reference</a></p>
 */
class ServiceView {
 public:
  AWS_RESOURCEEXPLORER2_API ServiceView() = default;
  AWS_RESOURCEEXPLORER2_API ServiceView(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESOURCEEXPLORER2_API ServiceView& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the service view.</p>
   */
  inline const Aws::String& GetServiceViewArn() const { return m_serviceViewArn; }
  inline bool ServiceViewArnHasBeenSet() const { return m_serviceViewArnHasBeenSet; }
  template <typename ServiceViewArnT = Aws::String>
  void SetServiceViewArn(ServiceViewArnT&& value) {
    m_serviceViewArnHasBeenSet = true;
    m_serviceViewArn = std::forward<ServiceViewArnT>(value);
  }
  template <typename ServiceViewArnT = Aws::String>
  ServiceView& WithServiceViewArn(ServiceViewArnT&& value) {
    SetServiceViewArn(std::forward<ServiceViewArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const SearchFilter& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = SearchFilter>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = SearchFilter>
  ServiceView& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of additional resource properties that are included in this view for
   * search and filtering purposes.</p>
   */
  inline const Aws::Vector<IncludedProperty>& GetIncludedProperties() const { return m_includedProperties; }
  inline bool IncludedPropertiesHasBeenSet() const { return m_includedPropertiesHasBeenSet; }
  template <typename IncludedPropertiesT = Aws::Vector<IncludedProperty>>
  void SetIncludedProperties(IncludedPropertiesT&& value) {
    m_includedPropertiesHasBeenSet = true;
    m_includedProperties = std::forward<IncludedPropertiesT>(value);
  }
  template <typename IncludedPropertiesT = Aws::Vector<IncludedProperty>>
  ServiceView& WithIncludedProperties(IncludedPropertiesT&& value) {
    SetIncludedProperties(std::forward<IncludedPropertiesT>(value));
    return *this;
  }
  template <typename IncludedPropertiesT = IncludedProperty>
  ServiceView& AddIncludedProperties(IncludedPropertiesT&& value) {
    m_includedPropertiesHasBeenSet = true;
    m_includedProperties.emplace_back(std::forward<IncludedPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services service that has streaming access to this view's
   * data.</p>
   */
  inline const Aws::String& GetStreamingAccessForService() const { return m_streamingAccessForService; }
  inline bool StreamingAccessForServiceHasBeenSet() const { return m_streamingAccessForServiceHasBeenSet; }
  template <typename StreamingAccessForServiceT = Aws::String>
  void SetStreamingAccessForService(StreamingAccessForServiceT&& value) {
    m_streamingAccessForServiceHasBeenSet = true;
    m_streamingAccessForService = std::forward<StreamingAccessForServiceT>(value);
  }
  template <typename StreamingAccessForServiceT = Aws::String>
  ServiceView& WithStreamingAccessForService(StreamingAccessForServiceT&& value) {
    SetStreamingAccessForService(std::forward<StreamingAccessForServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope type of the service view, which determines what resources are
   * included.</p>
   */
  inline const Aws::String& GetScopeType() const { return m_scopeType; }
  inline bool ScopeTypeHasBeenSet() const { return m_scopeTypeHasBeenSet; }
  template <typename ScopeTypeT = Aws::String>
  void SetScopeType(ScopeTypeT&& value) {
    m_scopeTypeHasBeenSet = true;
    m_scopeType = std::forward<ScopeTypeT>(value);
  }
  template <typename ScopeTypeT = Aws::String>
  ServiceView& WithScopeType(ScopeTypeT&& value) {
    SetScopeType(std::forward<ScopeTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceViewArn;
  bool m_serviceViewArnHasBeenSet = false;

  SearchFilter m_filters;
  bool m_filtersHasBeenSet = false;

  Aws::Vector<IncludedProperty> m_includedProperties;
  bool m_includedPropertiesHasBeenSet = false;

  Aws::String m_streamingAccessForService;
  bool m_streamingAccessForServiceHasBeenSet = false;

  Aws::String m_scopeType;
  bool m_scopeTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ResourceExplorer2
}  // namespace Aws
