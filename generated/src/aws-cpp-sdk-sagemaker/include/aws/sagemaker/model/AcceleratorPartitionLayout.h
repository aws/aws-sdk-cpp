/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
 * <p>A layout of accelerator partitions for a production variant. On NVIDIA GPUs,
 * the partitions are Multi-Instance GPU (MIG) instances. SageMaker applies the
 * layout to every accelerator on the variant's instance type. You can't change the
 * layout of a running endpoint. To use a different layout, create a new
 * endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AcceleratorPartitionLayout">AWS
 * API Reference</a></p>
 */
class AcceleratorPartitionLayout {
 public:
  AWS_SAGEMAKER_API AcceleratorPartitionLayout() = default;
  AWS_SAGEMAKER_API AcceleratorPartitionLayout(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AcceleratorPartitionLayout& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of partition profiles to carve on each accelerator that this layout
   * applies to. On NVIDIA GPUs these are Multi-Instance GPU (MIG) profiles, for
   * example <code>["mig-3g.40gb", "mig-4g.40gb"]</code>. The order of the profiles
   * doesn't change how the accelerator is partitioned. However, when you update an
   * endpoint, a layout with the same profiles in a different order counts as a
   * different layout, and the update is rejected. Repeat a profile to request more
   * than one partition of that size: for example, <code>["mig-3g.40gb",
   * "mig-3g.40gb"]</code> requests two <code>mig-3g.40gb</code> partitions.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAcceleratorPartitionTypes() const { return m_acceleratorPartitionTypes; }
  inline bool AcceleratorPartitionTypesHasBeenSet() const { return m_acceleratorPartitionTypesHasBeenSet; }
  template <typename AcceleratorPartitionTypesT = Aws::Vector<Aws::String>>
  void SetAcceleratorPartitionTypes(AcceleratorPartitionTypesT&& value) {
    m_acceleratorPartitionTypesHasBeenSet = true;
    m_acceleratorPartitionTypes = std::forward<AcceleratorPartitionTypesT>(value);
  }
  template <typename AcceleratorPartitionTypesT = Aws::Vector<Aws::String>>
  AcceleratorPartitionLayout& WithAcceleratorPartitionTypes(AcceleratorPartitionTypesT&& value) {
    SetAcceleratorPartitionTypes(std::forward<AcceleratorPartitionTypesT>(value));
    return *this;
  }
  template <typename AcceleratorPartitionTypesT = Aws::String>
  AcceleratorPartitionLayout& AddAcceleratorPartitionTypes(AcceleratorPartitionTypesT&& value) {
    m_acceleratorPartitionTypesHasBeenSet = true;
    m_acceleratorPartitionTypes.emplace_back(std::forward<AcceleratorPartitionTypesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_acceleratorPartitionTypes;
  bool m_acceleratorPartitionTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
