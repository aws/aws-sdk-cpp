/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/FlowPhase.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {

/**
 * <p>Phases that run in order; each starts after the previous one
 * completes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/PhasedPipeline">AWS
 * API Reference</a></p>
 */
class PhasedPipeline {
 public:
  AWS_RTBFABRIC_API PhasedPipeline() = default;
  AWS_RTBFABRIC_API PhasedPipeline(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API PhasedPipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>At most 8 modules in total across the phases; more fails with
   * ValidationException.</p>
   */
  inline const Aws::Vector<FlowPhase>& GetPhases() const { return m_phases; }
  inline bool PhasesHasBeenSet() const { return m_phasesHasBeenSet; }
  template <typename PhasesT = Aws::Vector<FlowPhase>>
  void SetPhases(PhasesT&& value) {
    m_phasesHasBeenSet = true;
    m_phases = std::forward<PhasesT>(value);
  }
  template <typename PhasesT = Aws::Vector<FlowPhase>>
  PhasedPipeline& WithPhases(PhasesT&& value) {
    SetPhases(std::forward<PhasesT>(value));
    return *this;
  }
  template <typename PhasesT = FlowPhase>
  PhasedPipeline& AddPhases(PhasesT&& value) {
    m_phasesHasBeenSet = true;
    m_phases.emplace_back(std::forward<PhasesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<FlowPhase> m_phases;
  bool m_phasesHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
