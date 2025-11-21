/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/MIGProfileType.h>

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
 * <p>Configuration for allocating accelerator partitions.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AcceleratorPartitionConfig">AWS
 * API Reference</a></p>
 */
class AcceleratorPartitionConfig {
 public:
  AWS_SAGEMAKER_API AcceleratorPartitionConfig() = default;
  AWS_SAGEMAKER_API AcceleratorPartitionConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AcceleratorPartitionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Multi-Instance GPU (MIG) profile type that defines the partition
   * configuration. The profile specifies the compute and memory allocation for each
   * partition instance. The available profile types depend on the instance type
   * specified in the compute quota configuration.</p>
   */
  inline MIGProfileType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(MIGProfileType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline AcceleratorPartitionConfig& WithType(MIGProfileType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of accelerator partitions to allocate with the specified partition
   * type. If you don't specify a value for vCPU and MemoryInGiB, SageMaker AI
   * automatically allocates ratio-based values for those parameters based on the
   * accelerator partition count you provide.</p>
   */
  inline int GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  inline void SetCount(int value) {
    m_countHasBeenSet = true;
    m_count = value;
  }
  inline AcceleratorPartitionConfig& WithCount(int value) {
    SetCount(value);
    return *this;
  }
  ///@}
 private:
  MIGProfileType m_type{MIGProfileType::NOT_SET};
  bool m_typeHasBeenSet = false;

  int m_count{0};
  bool m_countHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
