/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterSlurmNodeType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>The Slurm configuration for an instance group in a SageMaker HyperPod
 * cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterSlurmConfig">AWS
 * API Reference</a></p>
 */
class ClusterSlurmConfig {
 public:
  AWS_SAGEMAKER_API ClusterSlurmConfig() = default;
  AWS_SAGEMAKER_API ClusterSlurmConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterSlurmConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of Slurm node for the instance group. Valid values are
   * <code>Controller</code>, <code>Worker</code>, and <code>Login</code>.</p>
   */
  inline ClusterSlurmNodeType GetNodeType() const { return m_nodeType; }
  inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
  inline void SetNodeType(ClusterSlurmNodeType value) {
    m_nodeTypeHasBeenSet = true;
    m_nodeType = value;
  }
  inline ClusterSlurmConfig& WithNodeType(ClusterSlurmNodeType value) {
    SetNodeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of Slurm partition names that the instance group belongs to.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPartitionNames() const { return m_partitionNames; }
  inline bool PartitionNamesHasBeenSet() const { return m_partitionNamesHasBeenSet; }
  template <typename PartitionNamesT = Aws::Vector<Aws::String>>
  void SetPartitionNames(PartitionNamesT&& value) {
    m_partitionNamesHasBeenSet = true;
    m_partitionNames = std::forward<PartitionNamesT>(value);
  }
  template <typename PartitionNamesT = Aws::Vector<Aws::String>>
  ClusterSlurmConfig& WithPartitionNames(PartitionNamesT&& value) {
    SetPartitionNames(std::forward<PartitionNamesT>(value));
    return *this;
  }
  template <typename PartitionNamesT = Aws::String>
  ClusterSlurmConfig& AddPartitionNames(PartitionNamesT&& value) {
    m_partitionNamesHasBeenSet = true;
    m_partitionNames.emplace_back(std::forward<PartitionNamesT>(value));
    return *this;
  }
  ///@}
 private:
  ClusterSlurmNodeType m_nodeType{ClusterSlurmNodeType::NOT_SET};

  Aws::Vector<Aws::String> m_partitionNames;
  bool m_nodeTypeHasBeenSet = false;
  bool m_partitionNamesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
