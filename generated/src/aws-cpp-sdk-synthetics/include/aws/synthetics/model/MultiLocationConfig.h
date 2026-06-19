/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/LocationType.h>
#include <aws/synthetics/model/Replica.h>
#include <aws/synthetics/model/ReplicationState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Synthetics {
namespace Model {

/**
 * <p>A structure that contains information about the multi-location configuration
 * of a canary, including whether it is a primary or replica, the primary location,
 * and the list of replicas.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/MultiLocationConfig">AWS
 * API Reference</a></p>
 */
class MultiLocationConfig {
 public:
  AWS_SYNTHETICS_API MultiLocationConfig() = default;
  AWS_SYNTHETICS_API MultiLocationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SYNTHETICS_API MultiLocationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates whether this canary is the <code>Primary</code> or a
   * <code>Replica</code> in the multi-location configuration.</p>
   */
  inline LocationType GetLocationType() const { return m_locationType; }
  inline bool LocationTypeHasBeenSet() const { return m_locationTypeHasBeenSet; }
  inline void SetLocationType(LocationType value) {
    m_locationTypeHasBeenSet = true;
    m_locationType = value;
  }
  inline MultiLocationConfig& WithLocationType(LocationType value) {
    SetLocationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region where the primary canary is located.</p>
   */
  inline const Aws::String& GetPrimaryLocation() const { return m_primaryLocation; }
  inline bool PrimaryLocationHasBeenSet() const { return m_primaryLocationHasBeenSet; }
  template <typename PrimaryLocationT = Aws::String>
  void SetPrimaryLocation(PrimaryLocationT&& value) {
    m_primaryLocationHasBeenSet = true;
    m_primaryLocation = std::forward<PrimaryLocationT>(value);
  }
  template <typename PrimaryLocationT = Aws::String>
  MultiLocationConfig& WithPrimaryLocation(PrimaryLocationT&& value) {
    SetPrimaryLocation(std::forward<PrimaryLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of replicas for this canary. This field is present only for the
   * primary location canary.</p>
   */
  inline const Aws::Vector<Replica>& GetReplicas() const { return m_replicas; }
  inline bool ReplicasHasBeenSet() const { return m_replicasHasBeenSet; }
  template <typename ReplicasT = Aws::Vector<Replica>>
  void SetReplicas(ReplicasT&& value) {
    m_replicasHasBeenSet = true;
    m_replicas = std::forward<ReplicasT>(value);
  }
  template <typename ReplicasT = Aws::Vector<Replica>>
  MultiLocationConfig& WithReplicas(ReplicasT&& value) {
    SetReplicas(std::forward<ReplicasT>(value));
    return *this;
  }
  template <typename ReplicasT = Replica>
  MultiLocationConfig& AddReplicas(ReplicasT&& value) {
    m_replicasHasBeenSet = true;
    m_replicas.emplace_back(std::forward<ReplicasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The overall replication state of the canary across all replica locations.
   * This field is present only for the primary location canary. Valid values are
   * <code>InProgress</code>, <code>InSync</code>, and <code>Inconsistent</code>.</p>
   */
  inline ReplicationState GetReplicationState() const { return m_replicationState; }
  inline bool ReplicationStateHasBeenSet() const { return m_replicationStateHasBeenSet; }
  inline void SetReplicationState(ReplicationState value) {
    m_replicationStateHasBeenSet = true;
    m_replicationState = value;
  }
  inline MultiLocationConfig& WithReplicationState(ReplicationState value) {
    SetReplicationState(value);
    return *this;
  }
  ///@}
 private:
  LocationType m_locationType{LocationType::NOT_SET};

  Aws::String m_primaryLocation;

  Aws::Vector<Replica> m_replicas;

  ReplicationState m_replicationState{ReplicationState::NOT_SET};
  bool m_locationTypeHasBeenSet = false;
  bool m_primaryLocationHasBeenSet = false;
  bool m_replicasHasBeenSet = false;
  bool m_replicationStateHasBeenSet = false;
};

}  // namespace Model
}  // namespace Synthetics
}  // namespace Aws
