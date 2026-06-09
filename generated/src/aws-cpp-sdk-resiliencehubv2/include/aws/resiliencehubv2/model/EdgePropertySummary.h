/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/TopologyType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Contains property information for a service topology edge.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/EdgePropertySummary">AWS
 * API Reference</a></p>
 */
class EdgePropertySummary {
 public:
  AWS_RESILIENCEHUBV2_API EdgePropertySummary() = default;
  AWS_RESILIENCEHUBV2_API EdgePropertySummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API EdgePropertySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The topology type of the edge.</p>
   */
  inline TopologyType GetTopologyType() const { return m_topologyType; }
  inline bool TopologyTypeHasBeenSet() const { return m_topologyTypeHasBeenSet; }
  inline void SetTopologyType(TopologyType value) {
    m_topologyTypeHasBeenSet = true;
    m_topologyType = value;
  }
  inline EdgePropertySummary& WithTopologyType(TopologyType value) {
    SetTopologyType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Human-readable relationship description. Only present for LLM-inferred
   * edges.</p>
   */
  inline const Aws::String& GetLabel() const { return m_label; }
  inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
  template <typename LabelT = Aws::String>
  void SetLabel(LabelT&& value) {
    m_labelHasBeenSet = true;
    m_label = std::forward<LabelT>(value);
  }
  template <typename LabelT = Aws::String>
  EdgePropertySummary& WithLabel(LabelT&& value) {
    SetLabel(std::forward<LabelT>(value));
    return *this;
  }
  ///@}
 private:
  TopologyType m_topologyType{TopologyType::NOT_SET};

  Aws::String m_label;
  bool m_topologyTypeHasBeenSet = false;
  bool m_labelHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
