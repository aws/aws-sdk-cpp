/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RouterNetworkInterfaceType.h>

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
 * <p>A filter that can be used to retrieve a list of router network
 * interfaces.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterNetworkInterfaceFilter">AWS
 * API Reference</a></p>
 */
class RouterNetworkInterfaceFilter {
 public:
  AWS_MEDIACONNECT_API RouterNetworkInterfaceFilter() = default;
  AWS_MEDIACONNECT_API RouterNetworkInterfaceFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterNetworkInterfaceFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The AWS Regions of the router network interfaces to include in the
   * filter.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegionNames() const { return m_regionNames; }
  inline bool RegionNamesHasBeenSet() const { return m_regionNamesHasBeenSet; }
  template <typename RegionNamesT = Aws::Vector<Aws::String>>
  void SetRegionNames(RegionNamesT&& value) {
    m_regionNamesHasBeenSet = true;
    m_regionNames = std::forward<RegionNamesT>(value);
  }
  template <typename RegionNamesT = Aws::Vector<Aws::String>>
  RouterNetworkInterfaceFilter& WithRegionNames(RegionNamesT&& value) {
    SetRegionNames(std::forward<RegionNamesT>(value));
    return *this;
  }
  template <typename RegionNamesT = Aws::String>
  RouterNetworkInterfaceFilter& AddRegionNames(RegionNamesT&& value) {
    m_regionNamesHasBeenSet = true;
    m_regionNames.emplace_back(std::forward<RegionNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The types of router network interfaces to include in the filter.</p>
   */
  inline const Aws::Vector<RouterNetworkInterfaceType>& GetNetworkInterfaceTypes() const { return m_networkInterfaceTypes; }
  inline bool NetworkInterfaceTypesHasBeenSet() const { return m_networkInterfaceTypesHasBeenSet; }
  template <typename NetworkInterfaceTypesT = Aws::Vector<RouterNetworkInterfaceType>>
  void SetNetworkInterfaceTypes(NetworkInterfaceTypesT&& value) {
    m_networkInterfaceTypesHasBeenSet = true;
    m_networkInterfaceTypes = std::forward<NetworkInterfaceTypesT>(value);
  }
  template <typename NetworkInterfaceTypesT = Aws::Vector<RouterNetworkInterfaceType>>
  RouterNetworkInterfaceFilter& WithNetworkInterfaceTypes(NetworkInterfaceTypesT&& value) {
    SetNetworkInterfaceTypes(std::forward<NetworkInterfaceTypesT>(value));
    return *this;
  }
  inline RouterNetworkInterfaceFilter& AddNetworkInterfaceTypes(RouterNetworkInterfaceType value) {
    m_networkInterfaceTypesHasBeenSet = true;
    m_networkInterfaceTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The names of the router network interfaces to include in the filter.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNameContains() const { return m_nameContains; }
  inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
  template <typename NameContainsT = Aws::Vector<Aws::String>>
  void SetNameContains(NameContainsT&& value) {
    m_nameContainsHasBeenSet = true;
    m_nameContains = std::forward<NameContainsT>(value);
  }
  template <typename NameContainsT = Aws::Vector<Aws::String>>
  RouterNetworkInterfaceFilter& WithNameContains(NameContainsT&& value) {
    SetNameContains(std::forward<NameContainsT>(value));
    return *this;
  }
  template <typename NameContainsT = Aws::String>
  RouterNetworkInterfaceFilter& AddNameContains(NameContainsT&& value) {
    m_nameContainsHasBeenSet = true;
    m_nameContains.emplace_back(std::forward<NameContainsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_regionNames;

  Aws::Vector<RouterNetworkInterfaceType> m_networkInterfaceTypes;

  Aws::Vector<Aws::String> m_nameContains;
  bool m_regionNamesHasBeenSet = false;
  bool m_networkInterfaceTypesHasBeenSet = false;
  bool m_nameContainsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
