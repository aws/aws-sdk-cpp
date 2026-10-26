/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/SourceEndpointType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p>A filter to apply when listing source endpoints. This is a union type, so
 * exactly one of its members is set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/SourceEndpointFilter">AWS
 * API Reference</a></p>
 */
class SourceEndpointFilter {
 public:
  AWS_MEDIACONNECT_API SourceEndpointFilter() = default;
  AWS_MEDIACONNECT_API SourceEndpointFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API SourceEndpointFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filters the results to source endpoints in the specified Amazon Web Services
   * Regions.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegionNames() const { return m_regionNames; }
  inline bool RegionNamesHasBeenSet() const { return m_regionNamesHasBeenSet; }
  template <typename RegionNamesT = Aws::Vector<Aws::String>>
  void SetRegionNames(RegionNamesT&& value) {
    m_regionNamesHasBeenSet = true;
    m_regionNames = std::forward<RegionNamesT>(value);
  }
  template <typename RegionNamesT = Aws::Vector<Aws::String>>
  SourceEndpointFilter& WithRegionNames(RegionNamesT&& value) {
    SetRegionNames(std::forward<RegionNamesT>(value));
    return *this;
  }
  template <typename RegionNamesT = Aws::String>
  SourceEndpointFilter& AddRegionNames(RegionNamesT&& value) {
    m_regionNamesHasBeenSet = true;
    m_regionNames.emplace_back(std::forward<RegionNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results to source endpoints of the specified types.</p>
   */
  inline const Aws::Vector<SourceEndpointType>& GetSourceTypes() const { return m_sourceTypes; }
  inline bool SourceTypesHasBeenSet() const { return m_sourceTypesHasBeenSet; }
  template <typename SourceTypesT = Aws::Vector<SourceEndpointType>>
  void SetSourceTypes(SourceTypesT&& value) {
    m_sourceTypesHasBeenSet = true;
    m_sourceTypes = std::forward<SourceTypesT>(value);
  }
  template <typename SourceTypesT = Aws::Vector<SourceEndpointType>>
  SourceEndpointFilter& WithSourceTypes(SourceTypesT&& value) {
    SetSourceTypes(std::forward<SourceTypesT>(value));
    return *this;
  }
  inline SourceEndpointFilter& AddSourceTypes(SourceEndpointType value) {
    m_sourceTypesHasBeenSet = true;
    m_sourceTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results to source endpoints whose names contain the specified
   * strings.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNameContains() const { return m_nameContains; }
  inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
  template <typename NameContainsT = Aws::Vector<Aws::String>>
  void SetNameContains(NameContainsT&& value) {
    m_nameContainsHasBeenSet = true;
    m_nameContains = std::forward<NameContainsT>(value);
  }
  template <typename NameContainsT = Aws::Vector<Aws::String>>
  SourceEndpointFilter& WithNameContains(NameContainsT&& value) {
    SetNameContains(std::forward<NameContainsT>(value));
    return *this;
  }
  template <typename NameContainsT = Aws::String>
  SourceEndpointFilter& AddNameContains(NameContainsT&& value) {
    m_nameContainsHasBeenSet = true;
    m_nameContains.emplace_back(std::forward<NameContainsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_regionNames;

  Aws::Vector<SourceEndpointType> m_sourceTypes;

  Aws::Vector<Aws::String> m_nameContains;
  bool m_regionNamesHasBeenSet = false;
  bool m_sourceTypesHasBeenSet = false;
  bool m_nameContainsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
