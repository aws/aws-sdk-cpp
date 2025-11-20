/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkManager {
namespace Model {

/**
 * <p>Information about a routing policy association.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/RoutingPolicyAssociationDetail">AWS
 * API Reference</a></p>
 */
class RoutingPolicyAssociationDetail {
 public:
  AWS_NETWORKMANAGER_API RoutingPolicyAssociationDetail() = default;
  AWS_NETWORKMANAGER_API RoutingPolicyAssociationDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API RoutingPolicyAssociationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The names of the routing policies in the association.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRoutingPolicyNames() const { return m_routingPolicyNames; }
  inline bool RoutingPolicyNamesHasBeenSet() const { return m_routingPolicyNamesHasBeenSet; }
  template <typename RoutingPolicyNamesT = Aws::Vector<Aws::String>>
  void SetRoutingPolicyNames(RoutingPolicyNamesT&& value) {
    m_routingPolicyNamesHasBeenSet = true;
    m_routingPolicyNames = std::forward<RoutingPolicyNamesT>(value);
  }
  template <typename RoutingPolicyNamesT = Aws::Vector<Aws::String>>
  RoutingPolicyAssociationDetail& WithRoutingPolicyNames(RoutingPolicyNamesT&& value) {
    SetRoutingPolicyNames(std::forward<RoutingPolicyNamesT>(value));
    return *this;
  }
  template <typename RoutingPolicyNamesT = Aws::String>
  RoutingPolicyAssociationDetail& AddRoutingPolicyNames(RoutingPolicyNamesT&& value) {
    m_routingPolicyNamesHasBeenSet = true;
    m_routingPolicyNames.emplace_back(std::forward<RoutingPolicyNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The names of the segments that are shared with each other in the
   * association.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSharedSegments() const { return m_sharedSegments; }
  inline bool SharedSegmentsHasBeenSet() const { return m_sharedSegmentsHasBeenSet; }
  template <typename SharedSegmentsT = Aws::Vector<Aws::String>>
  void SetSharedSegments(SharedSegmentsT&& value) {
    m_sharedSegmentsHasBeenSet = true;
    m_sharedSegments = std::forward<SharedSegmentsT>(value);
  }
  template <typename SharedSegmentsT = Aws::Vector<Aws::String>>
  RoutingPolicyAssociationDetail& WithSharedSegments(SharedSegmentsT&& value) {
    SetSharedSegments(std::forward<SharedSegmentsT>(value));
    return *this;
  }
  template <typename SharedSegmentsT = Aws::String>
  RoutingPolicyAssociationDetail& AddSharedSegments(SharedSegmentsT&& value) {
    m_sharedSegmentsHasBeenSet = true;
    m_sharedSegments.emplace_back(std::forward<SharedSegmentsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_routingPolicyNames;
  bool m_routingPolicyNamesHasBeenSet = false;

  Aws::Vector<Aws::String> m_sharedSegments;
  bool m_sharedSegmentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
