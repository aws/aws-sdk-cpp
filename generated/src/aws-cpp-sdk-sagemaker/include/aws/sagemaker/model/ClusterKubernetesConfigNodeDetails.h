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
 * <p>Node-specific Kubernetes configuration showing both current and desired state
 * of labels and taints for an individual cluster node. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterKubernetesConfigNodeDetails">AWS
 * API Reference</a></p>
 */
class ClusterKubernetesConfigNodeDetails {
 public:
  AWS_SAGEMAKER_API ClusterKubernetesConfigNodeDetails() = default;
  AWS_SAGEMAKER_API ClusterKubernetesConfigNodeDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterKubernetesConfigNodeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current labels applied to the cluster node.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetCurrentLabels() const { return m_currentLabels; }
  inline bool CurrentLabelsHasBeenSet() const { return m_currentLabelsHasBeenSet; }
  template <typename CurrentLabelsT = Aws::Map<Aws::String, Aws::String>>
  void SetCurrentLabels(CurrentLabelsT&& value) {
    m_currentLabelsHasBeenSet = true;
    m_currentLabels = std::forward<CurrentLabelsT>(value);
  }
  template <typename CurrentLabelsT = Aws::Map<Aws::String, Aws::String>>
  ClusterKubernetesConfigNodeDetails& WithCurrentLabels(CurrentLabelsT&& value) {
    SetCurrentLabels(std::forward<CurrentLabelsT>(value));
    return *this;
  }
  template <typename CurrentLabelsKeyT = Aws::String, typename CurrentLabelsValueT = Aws::String>
  ClusterKubernetesConfigNodeDetails& AddCurrentLabels(CurrentLabelsKeyT&& key, CurrentLabelsValueT&& value) {
    m_currentLabelsHasBeenSet = true;
    m_currentLabels.emplace(std::forward<CurrentLabelsKeyT>(key), std::forward<CurrentLabelsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The desired labels to be applied to the cluster node.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetDesiredLabels() const { return m_desiredLabels; }
  inline bool DesiredLabelsHasBeenSet() const { return m_desiredLabelsHasBeenSet; }
  template <typename DesiredLabelsT = Aws::Map<Aws::String, Aws::String>>
  void SetDesiredLabels(DesiredLabelsT&& value) {
    m_desiredLabelsHasBeenSet = true;
    m_desiredLabels = std::forward<DesiredLabelsT>(value);
  }
  template <typename DesiredLabelsT = Aws::Map<Aws::String, Aws::String>>
  ClusterKubernetesConfigNodeDetails& WithDesiredLabels(DesiredLabelsT&& value) {
    SetDesiredLabels(std::forward<DesiredLabelsT>(value));
    return *this;
  }
  template <typename DesiredLabelsKeyT = Aws::String, typename DesiredLabelsValueT = Aws::String>
  ClusterKubernetesConfigNodeDetails& AddDesiredLabels(DesiredLabelsKeyT&& key, DesiredLabelsValueT&& value) {
    m_desiredLabelsHasBeenSet = true;
    m_desiredLabels.emplace(std::forward<DesiredLabelsKeyT>(key), std::forward<DesiredLabelsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current taints applied to the cluster node.</p>
   */
  inline const Aws::Vector<ClusterKubernetesTaint>& GetCurrentTaints() const { return m_currentTaints; }
  inline bool CurrentTaintsHasBeenSet() const { return m_currentTaintsHasBeenSet; }
  template <typename CurrentTaintsT = Aws::Vector<ClusterKubernetesTaint>>
  void SetCurrentTaints(CurrentTaintsT&& value) {
    m_currentTaintsHasBeenSet = true;
    m_currentTaints = std::forward<CurrentTaintsT>(value);
  }
  template <typename CurrentTaintsT = Aws::Vector<ClusterKubernetesTaint>>
  ClusterKubernetesConfigNodeDetails& WithCurrentTaints(CurrentTaintsT&& value) {
    SetCurrentTaints(std::forward<CurrentTaintsT>(value));
    return *this;
  }
  template <typename CurrentTaintsT = ClusterKubernetesTaint>
  ClusterKubernetesConfigNodeDetails& AddCurrentTaints(CurrentTaintsT&& value) {
    m_currentTaintsHasBeenSet = true;
    m_currentTaints.emplace_back(std::forward<CurrentTaintsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The desired taints to be applied to the cluster node.</p>
   */
  inline const Aws::Vector<ClusterKubernetesTaint>& GetDesiredTaints() const { return m_desiredTaints; }
  inline bool DesiredTaintsHasBeenSet() const { return m_desiredTaintsHasBeenSet; }
  template <typename DesiredTaintsT = Aws::Vector<ClusterKubernetesTaint>>
  void SetDesiredTaints(DesiredTaintsT&& value) {
    m_desiredTaintsHasBeenSet = true;
    m_desiredTaints = std::forward<DesiredTaintsT>(value);
  }
  template <typename DesiredTaintsT = Aws::Vector<ClusterKubernetesTaint>>
  ClusterKubernetesConfigNodeDetails& WithDesiredTaints(DesiredTaintsT&& value) {
    SetDesiredTaints(std::forward<DesiredTaintsT>(value));
    return *this;
  }
  template <typename DesiredTaintsT = ClusterKubernetesTaint>
  ClusterKubernetesConfigNodeDetails& AddDesiredTaints(DesiredTaintsT&& value) {
    m_desiredTaintsHasBeenSet = true;
    m_desiredTaints.emplace_back(std::forward<DesiredTaintsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_currentLabels;

  Aws::Map<Aws::String, Aws::String> m_desiredLabels;

  Aws::Vector<ClusterKubernetesTaint> m_currentTaints;

  Aws::Vector<ClusterKubernetesTaint> m_desiredTaints;
  bool m_currentLabelsHasBeenSet = false;
  bool m_desiredLabelsHasBeenSet = false;
  bool m_currentTaintsHasBeenSet = false;
  bool m_desiredTaintsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
