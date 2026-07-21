/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2Request.h>
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/PricingPlan.h>

#include <utility>

namespace Aws {
namespace SESV2 {
namespace Model {

/**
 * <p>A request to set the pricing plan for your Amazon SES account.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountPricingAttributesRequest">AWS
 * API Reference</a></p>
 */
class PutAccountPricingAttributesRequest : public SESV2Request {
 public:
  AWS_SESV2_API PutAccountPricingAttributesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutAccountPricingAttributes"; }

  AWS_SESV2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The pricing plan to apply to your Amazon SES account. Can be one of the
   * following:</p> <ul> <li> <p> <code>NONE</code> – No pricing plan is applied;
   * billing follows per-feature pricing.</p> </li> <li> <p> <code>ESSENTIALS</code>
   * – Baseline Amazon SES capabilities and select premium features.</p> </li> <li>
   * <p> <code>PRO</code> – Includes everything in <code>ESSENTIALS</code>, plus
   * additional premium features for growing senders.</p> </li> <li> <p>
   * <code>ENTERPRISE</code> – Includes everything in <code>PRO</code>, plus features
   * intended for large-scale senders.</p> </li> </ul>
   */
  inline PricingPlan GetPlan() const { return m_plan; }
  inline bool PlanHasBeenSet() const { return m_planHasBeenSet; }
  inline void SetPlan(PricingPlan value) {
    m_planHasBeenSet = true;
    m_plan = value;
  }
  inline PutAccountPricingAttributesRequest& WithPlan(PricingPlan value) {
    SetPlan(value);
    return *this;
  }
  ///@}
 private:
  PricingPlan m_plan{PricingPlan::NOT_SET};
  bool m_planHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
