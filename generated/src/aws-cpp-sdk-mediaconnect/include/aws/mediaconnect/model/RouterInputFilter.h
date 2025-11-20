/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RouterInputType.h>
#include <aws/mediaconnect/model/RoutingScope.h>

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
 * <p>A filter that can be used to retrieve a list of router inputs.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterInputFilter">AWS
 * API Reference</a></p>
 */
class RouterInputFilter {
 public:
  AWS_MEDIACONNECT_API RouterInputFilter() = default;
  AWS_MEDIACONNECT_API RouterInputFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterInputFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The AWS Regions of the router inputs to include in the filter.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegionNames() const { return m_regionNames; }
  inline bool RegionNamesHasBeenSet() const { return m_regionNamesHasBeenSet; }
  template <typename RegionNamesT = Aws::Vector<Aws::String>>
  void SetRegionNames(RegionNamesT&& value) {
    m_regionNamesHasBeenSet = true;
    m_regionNames = std::forward<RegionNamesT>(value);
  }
  template <typename RegionNamesT = Aws::Vector<Aws::String>>
  RouterInputFilter& WithRegionNames(RegionNamesT&& value) {
    SetRegionNames(std::forward<RegionNamesT>(value));
    return *this;
  }
  template <typename RegionNamesT = Aws::String>
  RouterInputFilter& AddRegionNames(RegionNamesT&& value) {
    m_regionNamesHasBeenSet = true;
    m_regionNames.emplace_back(std::forward<RegionNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The types of router inputs to include in the filter.</p>
   */
  inline const Aws::Vector<RouterInputType>& GetInputTypes() const { return m_inputTypes; }
  inline bool InputTypesHasBeenSet() const { return m_inputTypesHasBeenSet; }
  template <typename InputTypesT = Aws::Vector<RouterInputType>>
  void SetInputTypes(InputTypesT&& value) {
    m_inputTypesHasBeenSet = true;
    m_inputTypes = std::forward<InputTypesT>(value);
  }
  template <typename InputTypesT = Aws::Vector<RouterInputType>>
  RouterInputFilter& WithInputTypes(InputTypesT&& value) {
    SetInputTypes(std::forward<InputTypesT>(value));
    return *this;
  }
  inline RouterInputFilter& AddInputTypes(RouterInputType value) {
    m_inputTypesHasBeenSet = true;
    m_inputTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The names of the router inputs to include in the filter.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNameContains() const { return m_nameContains; }
  inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
  template <typename NameContainsT = Aws::Vector<Aws::String>>
  void SetNameContains(NameContainsT&& value) {
    m_nameContainsHasBeenSet = true;
    m_nameContains = std::forward<NameContainsT>(value);
  }
  template <typename NameContainsT = Aws::Vector<Aws::String>>
  RouterInputFilter& WithNameContains(NameContainsT&& value) {
    SetNameContains(std::forward<NameContainsT>(value));
    return *this;
  }
  template <typename NameContainsT = Aws::String>
  RouterInputFilter& AddNameContains(NameContainsT&& value) {
    m_nameContainsHasBeenSet = true;
    m_nameContains.emplace_back(std::forward<NameContainsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the network interfaces associated with
   * the router inputs to include in the filter.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNetworkInterfaceArns() const { return m_networkInterfaceArns; }
  inline bool NetworkInterfaceArnsHasBeenSet() const { return m_networkInterfaceArnsHasBeenSet; }
  template <typename NetworkInterfaceArnsT = Aws::Vector<Aws::String>>
  void SetNetworkInterfaceArns(NetworkInterfaceArnsT&& value) {
    m_networkInterfaceArnsHasBeenSet = true;
    m_networkInterfaceArns = std::forward<NetworkInterfaceArnsT>(value);
  }
  template <typename NetworkInterfaceArnsT = Aws::Vector<Aws::String>>
  RouterInputFilter& WithNetworkInterfaceArns(NetworkInterfaceArnsT&& value) {
    SetNetworkInterfaceArns(std::forward<NetworkInterfaceArnsT>(value));
    return *this;
  }
  template <typename NetworkInterfaceArnsT = Aws::String>
  RouterInputFilter& AddNetworkInterfaceArns(NetworkInterfaceArnsT&& value) {
    m_networkInterfaceArnsHasBeenSet = true;
    m_networkInterfaceArns.emplace_back(std::forward<NetworkInterfaceArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria to list router inputs based on their routing scope (REGIONAL
   * or GLOBAL).</p>
   */
  inline const Aws::Vector<RoutingScope>& GetRoutingScopes() const { return m_routingScopes; }
  inline bool RoutingScopesHasBeenSet() const { return m_routingScopesHasBeenSet; }
  template <typename RoutingScopesT = Aws::Vector<RoutingScope>>
  void SetRoutingScopes(RoutingScopesT&& value) {
    m_routingScopesHasBeenSet = true;
    m_routingScopes = std::forward<RoutingScopesT>(value);
  }
  template <typename RoutingScopesT = Aws::Vector<RoutingScope>>
  RouterInputFilter& WithRoutingScopes(RoutingScopesT&& value) {
    SetRoutingScopes(std::forward<RoutingScopesT>(value));
    return *this;
  }
  inline RouterInputFilter& AddRoutingScopes(RoutingScope value) {
    m_routingScopesHasBeenSet = true;
    m_routingScopes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_regionNames;
  bool m_regionNamesHasBeenSet = false;

  Aws::Vector<RouterInputType> m_inputTypes;
  bool m_inputTypesHasBeenSet = false;

  Aws::Vector<Aws::String> m_nameContains;
  bool m_nameContainsHasBeenSet = false;

  Aws::Vector<Aws::String> m_networkInterfaceArns;
  bool m_networkInterfaceArnsHasBeenSet = false;

  Aws::Vector<RoutingScope> m_routingScopes;
  bool m_routingScopesHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
