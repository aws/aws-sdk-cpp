/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/CanaryState.h>
#include <aws/synthetics/model/ReplicationStatus.h>
#include <aws/synthetics/model/VpcConfigOutput.h>

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
 * <p>A structure that contains information about a canary replica in a specific
 * location.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/Replica">AWS
 * API Reference</a></p>
 */
class Replica {
 public:
  AWS_SYNTHETICS_API Replica() = default;
  AWS_SYNTHETICS_API Replica(Aws::Utils::Json::JsonView jsonValue);
  AWS_SYNTHETICS_API Replica& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services Region where this replica is located.</p>
   */
  inline const Aws::String& GetLocation() const { return m_location; }
  inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
  template <typename LocationT = Aws::String>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = Aws::String>
  Replica& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A structure that contains information about the replication status of this
   * replica.</p>
   */
  inline const ReplicationStatus& GetReplicationStatus() const { return m_replicationStatus; }
  inline bool ReplicationStatusHasBeenSet() const { return m_replicationStatusHasBeenSet; }
  template <typename ReplicationStatusT = ReplicationStatus>
  void SetReplicationStatus(ReplicationStatusT&& value) {
    m_replicationStatusHasBeenSet = true;
    m_replicationStatus = std::forward<ReplicationStatusT>(value);
  }
  template <typename ReplicationStatusT = ReplicationStatus>
  Replica& WithReplicationStatus(ReplicationStatusT&& value) {
    SetReplicationStatus(std::forward<ReplicationStatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the canary in this replica location.</p>
   */
  inline CanaryState GetCanaryState() const { return m_canaryState; }
  inline bool CanaryStateHasBeenSet() const { return m_canaryStateHasBeenSet; }
  inline void SetCanaryState(CanaryState value) {
    m_canaryStateHasBeenSet = true;
    m_canaryState = value;
  }
  inline Replica& WithCanaryState(CanaryState value) {
    SetCanaryState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the replica was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
  inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  void SetLastModified(LastModifiedT&& value) {
    m_lastModifiedHasBeenSet = true;
    m_lastModified = std::forward<LastModifiedT>(value);
  }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  Replica& WithLastModified(LastModifiedT&& value) {
    SetLastModified(std::forward<LastModifiedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The VPC configuration for the canary replica in this location.</p>
   */
  inline const VpcConfigOutput& GetVpcConfig() const { return m_vpcConfig; }
  inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
  template <typename VpcConfigT = VpcConfigOutput>
  void SetVpcConfig(VpcConfigT&& value) {
    m_vpcConfigHasBeenSet = true;
    m_vpcConfig = std::forward<VpcConfigT>(value);
  }
  template <typename VpcConfigT = VpcConfigOutput>
  Replica& WithVpcConfig(VpcConfigT&& value) {
    SetVpcConfig(std::forward<VpcConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_location;

  ReplicationStatus m_replicationStatus;

  CanaryState m_canaryState{CanaryState::NOT_SET};

  Aws::Utils::DateTime m_lastModified{};

  VpcConfigOutput m_vpcConfig;
  bool m_locationHasBeenSet = false;
  bool m_replicationStatusHasBeenSet = false;
  bool m_canaryStateHasBeenSet = false;
  bool m_lastModifiedHasBeenSet = false;
  bool m_vpcConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace Synthetics
}  // namespace Aws
