/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AICapacityReservationPreference.h>

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
 * <p>The capacity reservation configuration for an AI recommendation
 * job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AICapacityReservationConfig">AWS
 * API Reference</a></p>
 */
class AICapacityReservationConfig {
 public:
  AWS_SAGEMAKER_API AICapacityReservationConfig() = default;
  AWS_SAGEMAKER_API AICapacityReservationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AICapacityReservationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The capacity reservation preference. The only valid value is
   * <code>capacity-reservations-only</code>.</p>
   */
  inline AICapacityReservationPreference GetCapacityReservationPreference() const { return m_capacityReservationPreference; }
  inline bool CapacityReservationPreferenceHasBeenSet() const { return m_capacityReservationPreferenceHasBeenSet; }
  inline void SetCapacityReservationPreference(AICapacityReservationPreference value) {
    m_capacityReservationPreferenceHasBeenSet = true;
    m_capacityReservationPreference = value;
  }
  inline AICapacityReservationConfig& WithCapacityReservationPreference(AICapacityReservationPreference value) {
    SetCapacityReservationPreference(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of ML reservation ARNs to use.</p>
   */
  inline const Aws::Vector<Aws::String>& GetMlReservationArns() const { return m_mlReservationArns; }
  inline bool MlReservationArnsHasBeenSet() const { return m_mlReservationArnsHasBeenSet; }
  template <typename MlReservationArnsT = Aws::Vector<Aws::String>>
  void SetMlReservationArns(MlReservationArnsT&& value) {
    m_mlReservationArnsHasBeenSet = true;
    m_mlReservationArns = std::forward<MlReservationArnsT>(value);
  }
  template <typename MlReservationArnsT = Aws::Vector<Aws::String>>
  AICapacityReservationConfig& WithMlReservationArns(MlReservationArnsT&& value) {
    SetMlReservationArns(std::forward<MlReservationArnsT>(value));
    return *this;
  }
  template <typename MlReservationArnsT = Aws::String>
  AICapacityReservationConfig& AddMlReservationArns(MlReservationArnsT&& value) {
    m_mlReservationArnsHasBeenSet = true;
    m_mlReservationArns.emplace_back(std::forward<MlReservationArnsT>(value));
    return *this;
  }
  ///@}
 private:
  AICapacityReservationPreference m_capacityReservationPreference{AICapacityReservationPreference::NOT_SET};

  Aws::Vector<Aws::String> m_mlReservationArns;
  bool m_capacityReservationPreferenceHasBeenSet = false;
  bool m_mlReservationArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
