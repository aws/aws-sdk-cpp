/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterKubernetesTaint.h>

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
 * <p>Kubernetes configuration that specifies labels and taints to be applied to
 * cluster nodes in an instance group. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterKubernetesConfig">AWS
 * API Reference</a></p>
 */
class ClusterKubernetesConfig {
 public:
  AWS_SAGEMAKER_API ClusterKubernetesConfig() = default;
  AWS_SAGEMAKER_API ClusterKubernetesConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterKubernetesConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Key-value pairs of labels to be applied to cluster nodes.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetLabels() const { return m_labels; }
  inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
  template <typename LabelsT = Aws::Map<Aws::String, Aws::String>>
  void SetLabels(LabelsT&& value) {
    m_labelsHasBeenSet = true;
    m_labels = std::forward<LabelsT>(value);
  }
  template <typename LabelsT = Aws::Map<Aws::String, Aws::String>>
  ClusterKubernetesConfig& WithLabels(LabelsT&& value) {
    SetLabels(std::forward<LabelsT>(value));
    return *this;
  }
  template <typename LabelsKeyT = Aws::String, typename LabelsValueT = Aws::String>
  ClusterKubernetesConfig& AddLabels(LabelsKeyT&& key, LabelsValueT&& value) {
    m_labelsHasBeenSet = true;
    m_labels.emplace(std::forward<LabelsKeyT>(key), std::forward<LabelsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of taints to be applied to cluster nodes.</p>
   */
  inline const Aws::Vector<ClusterKubernetesTaint>& GetTaints() const { return m_taints; }
  inline bool TaintsHasBeenSet() const { return m_taintsHasBeenSet; }
  template <typename TaintsT = Aws::Vector<ClusterKubernetesTaint>>
  void SetTaints(TaintsT&& value) {
    m_taintsHasBeenSet = true;
    m_taints = std::forward<TaintsT>(value);
  }
  template <typename TaintsT = Aws::Vector<ClusterKubernetesTaint>>
  ClusterKubernetesConfig& WithTaints(TaintsT&& value) {
    SetTaints(std::forward<TaintsT>(value));
    return *this;
  }
  template <typename TaintsT = ClusterKubernetesTaint>
  ClusterKubernetesConfig& AddTaints(TaintsT&& value) {
    m_taintsHasBeenSet = true;
    m_taints.emplace_back(std::forward<TaintsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_labels;

  Aws::Vector<ClusterKubernetesTaint> m_taints;
  bool m_labelsHasBeenSet = false;
  bool m_taintsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
