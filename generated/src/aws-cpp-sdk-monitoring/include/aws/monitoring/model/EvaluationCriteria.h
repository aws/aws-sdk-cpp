/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/AlarmPromQLCriteria.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatch {
namespace Model {

/**
 * <p>The evaluation criteria for an alarm. This is a union type that currently
 * supports <code>PromQLCriteria</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/EvaluationCriteria">AWS
 * API Reference</a></p>
 */
class EvaluationCriteria {
 public:
  AWS_CLOUDWATCH_API EvaluationCriteria() = default;
  AWS_CLOUDWATCH_API EvaluationCriteria(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API EvaluationCriteria& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The PromQL criteria for the alarm evaluation.</p>
   */
  inline const AlarmPromQLCriteria& GetPromQLCriteria() const { return m_promQLCriteria; }
  inline bool PromQLCriteriaHasBeenSet() const { return m_promQLCriteriaHasBeenSet; }
  template <typename PromQLCriteriaT = AlarmPromQLCriteria>
  void SetPromQLCriteria(PromQLCriteriaT&& value) {
    m_promQLCriteriaHasBeenSet = true;
    m_promQLCriteria = std::forward<PromQLCriteriaT>(value);
  }
  template <typename PromQLCriteriaT = AlarmPromQLCriteria>
  EvaluationCriteria& WithPromQLCriteria(PromQLCriteriaT&& value) {
    SetPromQLCriteria(std::forward<PromQLCriteriaT>(value));
    return *this;
  }
  ///@}
 private:
  AlarmPromQLCriteria m_promQLCriteria;
  bool m_promQLCriteriaHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
