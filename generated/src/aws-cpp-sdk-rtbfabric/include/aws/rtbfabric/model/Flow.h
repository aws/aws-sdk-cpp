/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/FlowPipeline.h>

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
 * <p>One flow on a link: a set of modules that runs on the link's bid
 * requests.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/Flow">AWS API
 * Reference</a></p>
 */
class Flow {
 public:
  AWS_RTBFABRIC_API Flow() = default;
  AWS_RTBFABRIC_API Flow(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Flow& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The flow's name, unique within the link.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Flow& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pipeline that the flow's modules run in. In a sequential pipeline, each
   * module sees the previous module's output. In a phased pipeline, a phase's
   * modules see the prior phase's output, not each other's.</p>
   */
  inline const FlowPipeline& GetPipeline() const { return m_pipeline; }
  inline bool PipelineHasBeenSet() const { return m_pipelineHasBeenSet; }
  template <typename PipelineT = FlowPipeline>
  void SetPipeline(PipelineT&& value) {
    m_pipelineHasBeenSet = true;
    m_pipeline = std::forward<PipelineT>(value);
  }
  template <typename PipelineT = FlowPipeline>
  Flow& WithPipeline(PipelineT&& value) {
    SetPipeline(std::forward<PipelineT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  FlowPipeline m_pipeline;
  bool m_nameHasBeenSet = false;
  bool m_pipelineHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
