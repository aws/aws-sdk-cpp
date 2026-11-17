/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/MultipathResilienceMode.h>

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
 * <p>Information about a change in multipath resilience.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/MultipathResilienceChangeValues">AWS
 * API Reference</a></p>
 */
class MultipathResilienceChangeValues {
 public:
  AWS_NETWORKMANAGER_API MultipathResilienceChangeValues() = default;
  AWS_NETWORKMANAGER_API MultipathResilienceChangeValues(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API MultipathResilienceChangeValues& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The mode (best-effort/disabled) of multipath resilience.</p>
   */
  inline MultipathResilienceMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(MultipathResilienceMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline MultipathResilienceChangeValues& WithMode(MultipathResilienceMode value) {
    SetMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A set of two edge locations.</p>
   */
  inline const Aws::Vector<Aws::Vector<Aws::String>>& GetEdgeSets() const { return m_edgeSets; }
  inline bool EdgeSetsHasBeenSet() const { return m_edgeSetsHasBeenSet; }
  template <typename EdgeSetsT = Aws::Vector<Aws::Vector<Aws::String>>>
  void SetEdgeSets(EdgeSetsT&& value) {
    m_edgeSetsHasBeenSet = true;
    m_edgeSets = std::forward<EdgeSetsT>(value);
  }
  template <typename EdgeSetsT = Aws::Vector<Aws::Vector<Aws::String>>>
  MultipathResilienceChangeValues& WithEdgeSets(EdgeSetsT&& value) {
    SetEdgeSets(std::forward<EdgeSetsT>(value));
    return *this;
  }
  template <typename EdgeSetsT = Aws::Vector<Aws::String>>
  MultipathResilienceChangeValues& AddEdgeSets(EdgeSetsT&& value) {
    m_edgeSetsHasBeenSet = true;
    m_edgeSets.emplace_back(std::forward<EdgeSetsT>(value));
    return *this;
  }
  ///@}
 private:
  MultipathResilienceMode m_mode{MultipathResilienceMode::NOT_SET};

  Aws::Vector<Aws::Vector<Aws::String>> m_edgeSets;
  bool m_modeHasBeenSet = false;
  bool m_edgeSetsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
