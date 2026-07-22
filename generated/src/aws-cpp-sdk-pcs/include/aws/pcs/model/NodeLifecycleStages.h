/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/NodeLifecycleScript.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PCS {
namespace Model {

/**
 * <p>The stages of a compute node's lifecycle where you can configure scripts to
 * run.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/NodeLifecycleStages">AWS
 * API Reference</a></p>
 */
class NodeLifecycleStages {
 public:
  AWS_PCS_API NodeLifecycleStages() = default;
  AWS_PCS_API NodeLifecycleStages(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API NodeLifecycleStages& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The scripts to run after PCS finishes setting up the compute node and before
   * the Slurm daemon (<code>slurmd</code>) starts. Use this stage for tasks that
   * must complete before the node accepts jobs, such as mounting shared storage,
   * configuring networking, or installing software packages.</p>
   */
  inline const Aws::Vector<NodeLifecycleScript>& GetNodeBootstrapped() const { return m_nodeBootstrapped; }
  inline bool NodeBootstrappedHasBeenSet() const { return m_nodeBootstrappedHasBeenSet; }
  template <typename NodeBootstrappedT = Aws::Vector<NodeLifecycleScript>>
  void SetNodeBootstrapped(NodeBootstrappedT&& value) {
    m_nodeBootstrappedHasBeenSet = true;
    m_nodeBootstrapped = std::forward<NodeBootstrappedT>(value);
  }
  template <typename NodeBootstrappedT = Aws::Vector<NodeLifecycleScript>>
  NodeLifecycleStages& WithNodeBootstrapped(NodeBootstrappedT&& value) {
    SetNodeBootstrapped(std::forward<NodeBootstrappedT>(value));
    return *this;
  }
  template <typename NodeBootstrappedT = NodeLifecycleScript>
  NodeLifecycleStages& AddNodeBootstrapped(NodeBootstrappedT&& value) {
    m_nodeBootstrappedHasBeenSet = true;
    m_nodeBootstrapped.emplace_back(std::forward<NodeBootstrappedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scripts to run after the Slurm daemon (<code>slurmd</code>) starts and
   * the compute node registers with the Slurm controller. Use this stage for tasks
   * that require Slurm to be running, such as running Slurm commands.</p>
   */
  inline const Aws::Vector<NodeLifecycleScript>& GetNodeReady() const { return m_nodeReady; }
  inline bool NodeReadyHasBeenSet() const { return m_nodeReadyHasBeenSet; }
  template <typename NodeReadyT = Aws::Vector<NodeLifecycleScript>>
  void SetNodeReady(NodeReadyT&& value) {
    m_nodeReadyHasBeenSet = true;
    m_nodeReady = std::forward<NodeReadyT>(value);
  }
  template <typename NodeReadyT = Aws::Vector<NodeLifecycleScript>>
  NodeLifecycleStages& WithNodeReady(NodeReadyT&& value) {
    SetNodeReady(std::forward<NodeReadyT>(value));
    return *this;
  }
  template <typename NodeReadyT = NodeLifecycleScript>
  NodeLifecycleStages& AddNodeReady(NodeReadyT&& value) {
    m_nodeReadyHasBeenSet = true;
    m_nodeReady.emplace_back(std::forward<NodeReadyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<NodeLifecycleScript> m_nodeBootstrapped;

  Aws::Vector<NodeLifecycleScript> m_nodeReady;
  bool m_nodeBootstrappedHasBeenSet = false;
  bool m_nodeReadyHasBeenSet = false;
};

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
