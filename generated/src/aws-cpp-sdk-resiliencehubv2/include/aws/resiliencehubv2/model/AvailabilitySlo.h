/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

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
 * <p>Defines the availability service level objective (SLO) for a resilience
 * policy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/AvailabilitySlo">AWS
 * API Reference</a></p>
 */
class AvailabilitySlo {
 public:
  AWS_RESILIENCEHUBV2_API AvailabilitySlo() = default;
  AWS_RESILIENCEHUBV2_API AvailabilitySlo(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API AvailabilitySlo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The target availability percentage, expressed as a value between 0 and
   * 100.</p>
   */
  inline double GetTarget() const { return m_target; }
  inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
  inline void SetTarget(double value) {
    m_targetHasBeenSet = true;
    m_target = value;
  }
  inline AvailabilitySlo& WithTarget(double value) {
    SetTarget(value);
    return *this;
  }
  ///@}
 private:
  double m_target{0.0};
  bool m_targetHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
