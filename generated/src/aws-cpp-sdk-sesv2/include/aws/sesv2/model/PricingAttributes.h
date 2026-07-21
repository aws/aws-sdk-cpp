/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/PricingPlan.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SESV2 {
namespace Model {

/**
 * <p>The pricing attributes that apply to your Amazon SES account, including the
 * currently active pricing plan and any scheduled change for the next billing
 * cycle.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PricingAttributes">AWS
 * API Reference</a></p>
 */
class PricingAttributes {
 public:
  AWS_SESV2_API PricingAttributes() = default;
  AWS_SESV2_API PricingAttributes(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API PricingAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The pricing plan that is currently active on your Amazon SES account.</p>
   */
  inline PricingPlan GetCurrentPlan() const { return m_currentPlan; }
  inline bool CurrentPlanHasBeenSet() const { return m_currentPlanHasBeenSet; }
  inline void SetCurrentPlan(PricingPlan value) {
    m_currentPlanHasBeenSet = true;
    m_currentPlan = value;
  }
  inline PricingAttributes& WithCurrentPlan(PricingPlan value) {
    SetCurrentPlan(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pricing plan that will become active at the start of the next billing
   * cycle, if a scheduled change has been requested. This field is empty when no
   * scheduled change is pending.</p>
   */
  inline PricingPlan GetNextPlan() const { return m_nextPlan; }
  inline bool NextPlanHasBeenSet() const { return m_nextPlanHasBeenSet; }
  inline void SetNextPlan(PricingPlan value) {
    m_nextPlanHasBeenSet = true;
    m_nextPlan = value;
  }
  inline PricingAttributes& WithNextPlan(PricingPlan value) {
    SetNextPlan(value);
    return *this;
  }
  ///@}
 private:
  PricingPlan m_currentPlan{PricingPlan::NOT_SET};

  PricingPlan m_nextPlan{PricingPlan::NOT_SET};
  bool m_currentPlanHasBeenSet = false;
  bool m_nextPlanHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
