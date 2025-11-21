/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RouterOutputType.h>
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
 * <p>A filter that can be used to retrieve a list of router outputs.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterOutputFilter">AWS
 * API Reference</a></p>
 */
class RouterOutputFilter {
 public:
  AWS_MEDIACONNECT_API RouterOutputFilter() = default;
  AWS_MEDIACONNECT_API RouterOutputFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterOutputFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The AWS Regions of the router outputs to include in the filter.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegionNames() const { return m_regionNames; }
  inline bool RegionNamesHasBeenSet() const { return m_regionNamesHasBeenSet; }
  template <typename RegionNamesT = Aws::Vector<Aws::String>>
  void SetRegionNames(RegionNamesT&& value) {
    m_regionNamesHasBeenSet = true;
    m_regionNames = std::forward<RegionNamesT>(value);
  }
  template <typename RegionNamesT = Aws::Vector<Aws::String>>
  RouterOutputFilter& WithRegionNames(RegionNamesT&& value) {
    SetRegionNames(std::forward<RegionNamesT>(value));
    return *this;
  }
  template <typename RegionNamesT = Aws::String>
  RouterOutputFilter& AddRegionNames(RegionNamesT&& value) {
    m_regionNamesHasBeenSet = true;
    m_regionNames.emplace_back(std::forward<RegionNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The types of router outputs to include in the filter.</p>
   */
  inline const Aws::Vector<RouterOutputType>& GetOutputTypes() const { return m_outputTypes; }
  inline bool OutputTypesHasBeenSet() const { return m_outputTypesHasBeenSet; }
  template <typename OutputTypesT = Aws::Vector<RouterOutputType>>
  void SetOutputTypes(OutputTypesT&& value) {
    m_outputTypesHasBeenSet = true;
    m_outputTypes = std::forward<OutputTypesT>(value);
  }
  template <typename OutputTypesT = Aws::Vector<RouterOutputType>>
  RouterOutputFilter& WithOutputTypes(OutputTypesT&& value) {
    SetOutputTypes(std::forward<OutputTypesT>(value));
    return *this;
  }
  inline RouterOutputFilter& AddOutputTypes(RouterOutputType value) {
    m_outputTypesHasBeenSet = true;
    m_outputTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The names of the router outputs to include in the filter.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNameContains() const { return m_nameContains; }
  inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
  template <typename NameContainsT = Aws::Vector<Aws::String>>
  void SetNameContains(NameContainsT&& value) {
    m_nameContainsHasBeenSet = true;
    m_nameContains = std::forward<NameContainsT>(value);
  }
  template <typename NameContainsT = Aws::Vector<Aws::String>>
  RouterOutputFilter& WithNameContains(NameContainsT&& value) {
    SetNameContains(std::forward<NameContainsT>(value));
    return *this;
  }
  template <typename NameContainsT = Aws::String>
  RouterOutputFilter& AddNameContains(NameContainsT&& value) {
    m_nameContainsHasBeenSet = true;
    m_nameContains.emplace_back(std::forward<NameContainsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the network interfaces associated with
   * the router outputs to include in the filter.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNetworkInterfaceArns() const { return m_networkInterfaceArns; }
  inline bool NetworkInterfaceArnsHasBeenSet() const { return m_networkInterfaceArnsHasBeenSet; }
  template <typename NetworkInterfaceArnsT = Aws::Vector<Aws::String>>
  void SetNetworkInterfaceArns(NetworkInterfaceArnsT&& value) {
    m_networkInterfaceArnsHasBeenSet = true;
    m_networkInterfaceArns = std::forward<NetworkInterfaceArnsT>(value);
  }
  template <typename NetworkInterfaceArnsT = Aws::Vector<Aws::String>>
  RouterOutputFilter& WithNetworkInterfaceArns(NetworkInterfaceArnsT&& value) {
    SetNetworkInterfaceArns(std::forward<NetworkInterfaceArnsT>(value));
    return *this;
  }
  template <typename NetworkInterfaceArnsT = Aws::String>
  RouterOutputFilter& AddNetworkInterfaceArns(NetworkInterfaceArnsT&& value) {
    m_networkInterfaceArnsHasBeenSet = true;
    m_networkInterfaceArns.emplace_back(std::forward<NetworkInterfaceArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARNs of the router inputs associated with the router outputs to include
   * in the filter.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRoutedInputArns() const { return m_routedInputArns; }
  inline bool RoutedInputArnsHasBeenSet() const { return m_routedInputArnsHasBeenSet; }
  template <typename RoutedInputArnsT = Aws::Vector<Aws::String>>
  void SetRoutedInputArns(RoutedInputArnsT&& value) {
    m_routedInputArnsHasBeenSet = true;
    m_routedInputArns = std::forward<RoutedInputArnsT>(value);
  }
  template <typename RoutedInputArnsT = Aws::Vector<Aws::String>>
  RouterOutputFilter& WithRoutedInputArns(RoutedInputArnsT&& value) {
    SetRoutedInputArns(std::forward<RoutedInputArnsT>(value));
    return *this;
  }
  template <typename RoutedInputArnsT = Aws::String>
  RouterOutputFilter& AddRoutedInputArns(RoutedInputArnsT&& value) {
    m_routedInputArnsHasBeenSet = true;
    m_routedInputArns.emplace_back(std::forward<RoutedInputArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria to list router outputs based on their routing scope.</p>
   */
  inline const Aws::Vector<RoutingScope>& GetRoutingScopes() const { return m_routingScopes; }
  inline bool RoutingScopesHasBeenSet() const { return m_routingScopesHasBeenSet; }
  template <typename RoutingScopesT = Aws::Vector<RoutingScope>>
  void SetRoutingScopes(RoutingScopesT&& value) {
    m_routingScopesHasBeenSet = true;
    m_routingScopes = std::forward<RoutingScopesT>(value);
  }
  template <typename RoutingScopesT = Aws::Vector<RoutingScope>>
  RouterOutputFilter& WithRoutingScopes(RoutingScopesT&& value) {
    SetRoutingScopes(std::forward<RoutingScopesT>(value));
    return *this;
  }
  inline RouterOutputFilter& AddRoutingScopes(RoutingScope value) {
    m_routingScopesHasBeenSet = true;
    m_routingScopes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_regionNames;
  bool m_regionNamesHasBeenSet = false;

  Aws::Vector<RouterOutputType> m_outputTypes;
  bool m_outputTypesHasBeenSet = false;

  Aws::Vector<Aws::String> m_nameContains;
  bool m_nameContainsHasBeenSet = false;

  Aws::Vector<Aws::String> m_networkInterfaceArns;
  bool m_networkInterfaceArnsHasBeenSet = false;

  Aws::Vector<Aws::String> m_routedInputArns;
  bool m_routedInputArnsHasBeenSet = false;

  Aws::Vector<RoutingScope> m_routingScopes;
  bool m_routingScopesHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
