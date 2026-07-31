/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/StopConditionSource.h>

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
 * <p>A CloudWatch alarm that automatically stops a test run if it breaches its
 * threshold.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/StopCondition">AWS
 * API Reference</a></p>
 */
class StopCondition {
 public:
  AWS_RESILIENCEHUBV2_API StopCondition() = default;
  AWS_RESILIENCEHUBV2_API StopCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API StopCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The source of the stop condition.</p>
   */
  inline StopConditionSource GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  inline void SetSource(StopConditionSource value) {
    m_sourceHasBeenSet = true;
    m_source = value;
  }
  inline StopCondition& WithSource(StopConditionSource value) {
    SetSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value of the stop condition, such as the ARN of the CloudWatch alarm.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  StopCondition& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  StopConditionSource m_source{StopConditionSource::NOT_SET};

  Aws::String m_value;
  bool m_sourceHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
