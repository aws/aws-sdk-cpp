/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/PhasedPipeline.h>
#include <aws/rtbfabric/model/SequentialPipeline.h>

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
 * <p>How a flow's modules run. In <code>sequential</code>, each module sees the
 * previous module's output; in <code>phased</code>, a phase's modules see the
 * prior phase's output, not each other's. Set exactly one. New members can be
 * added, so handle an unknown one.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/FlowPipeline">AWS
 * API Reference</a></p>
 */
class FlowPipeline {
 public:
  AWS_RTBFABRIC_API FlowPipeline() = default;
  AWS_RTBFABRIC_API FlowPipeline(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API FlowPipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Modules run in list order. Use it when each module needs the previous
   * module's output.</p>
   */
  inline const SequentialPipeline& GetSequential() const { return m_sequential; }
  inline bool SequentialHasBeenSet() const { return m_sequentialHasBeenSet; }
  template <typename SequentialT = SequentialPipeline>
  void SetSequential(SequentialT&& value) {
    m_sequentialHasBeenSet = true;
    m_sequential = std::forward<SequentialT>(value);
  }
  template <typename SequentialT = SequentialPipeline>
  FlowPipeline& WithSequential(SequentialT&& value) {
    SetSequential(std::forward<SequentialT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Phases run in order; a phase's modules run concurrently on the same input.
   * Use it when a phase's modules don't depend on each other.</p>
   */
  inline const PhasedPipeline& GetPhased() const { return m_phased; }
  inline bool PhasedHasBeenSet() const { return m_phasedHasBeenSet; }
  template <typename PhasedT = PhasedPipeline>
  void SetPhased(PhasedT&& value) {
    m_phasedHasBeenSet = true;
    m_phased = std::forward<PhasedT>(value);
  }
  template <typename PhasedT = PhasedPipeline>
  FlowPipeline& WithPhased(PhasedT&& value) {
    SetPhased(std::forward<PhasedT>(value));
    return *this;
  }
  ///@}
 private:
  SequentialPipeline m_sequential;

  PhasedPipeline m_phased;
  bool m_sequentialHasBeenSet = false;
  bool m_phasedHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
