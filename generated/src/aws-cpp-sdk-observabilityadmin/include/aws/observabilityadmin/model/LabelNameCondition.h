/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p> Condition that matches based on WAF rule labels, with label names limited to
 * 1024 characters. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/LabelNameCondition">AWS
 * API Reference</a></p>
 */
class LabelNameCondition {
 public:
  AWS_OBSERVABILITYADMIN_API LabelNameCondition() = default;
  AWS_OBSERVABILITYADMIN_API LabelNameCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API LabelNameCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The label name to match, supporting alphanumeric characters, underscores,
   * hyphens, and colons. </p>
   */
  inline const Aws::String& GetLabelName() const { return m_labelName; }
  inline bool LabelNameHasBeenSet() const { return m_labelNameHasBeenSet; }
  template <typename LabelNameT = Aws::String>
  void SetLabelName(LabelNameT&& value) {
    m_labelNameHasBeenSet = true;
    m_labelName = std::forward<LabelNameT>(value);
  }
  template <typename LabelNameT = Aws::String>
  LabelNameCondition& WithLabelName(LabelNameT&& value) {
    SetLabelName(std::forward<LabelNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_labelName;
  bool m_labelNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
