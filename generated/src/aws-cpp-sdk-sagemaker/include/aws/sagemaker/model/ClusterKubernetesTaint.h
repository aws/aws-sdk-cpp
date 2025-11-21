/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterKubernetesTaintEffect.h>

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
 * <p>A Kubernetes taint that can be applied to cluster nodes.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterKubernetesTaint">AWS
 * API Reference</a></p>
 */
class ClusterKubernetesTaint {
 public:
  AWS_SAGEMAKER_API ClusterKubernetesTaint() = default;
  AWS_SAGEMAKER_API ClusterKubernetesTaint(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterKubernetesTaint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The key of the taint.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  ClusterKubernetesTaint& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value of the taint.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  ClusterKubernetesTaint& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effect of the taint. Valid values are <code>NoSchedule</code>,
   * <code>PreferNoSchedule</code>, and <code>NoExecute</code>. </p>
   */
  inline ClusterKubernetesTaintEffect GetEffect() const { return m_effect; }
  inline bool EffectHasBeenSet() const { return m_effectHasBeenSet; }
  inline void SetEffect(ClusterKubernetesTaintEffect value) {
    m_effectHasBeenSet = true;
    m_effect = value;
  }
  inline ClusterKubernetesTaint& WithEffect(ClusterKubernetesTaintEffect value) {
    SetEffect(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_key;
  bool m_keyHasBeenSet = false;

  Aws::String m_value;
  bool m_valueHasBeenSet = false;

  ClusterKubernetesTaintEffect m_effect{ClusterKubernetesTaintEffect::NOT_SET};
  bool m_effectHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
