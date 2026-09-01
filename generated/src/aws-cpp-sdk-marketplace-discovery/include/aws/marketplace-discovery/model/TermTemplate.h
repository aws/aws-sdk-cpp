/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/PaymentScheduleTermTemplate.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>A structural template defining how a specific term type is reshaped on each
 * renewal cycle. Exactly one variant is present.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/TermTemplate">AWS
 * API Reference</a></p>
 */
class TermTemplate {
 public:
  AWS_MARKETPLACEDISCOVERY_API TermTemplate() = default;
  AWS_MARKETPLACEDISCOVERY_API TermTemplate(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API TermTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The installment schedule used to structure payments on the renewal offer.</p>
   */
  inline const PaymentScheduleTermTemplate& GetPaymentScheduleTermTemplate() const { return m_paymentScheduleTermTemplate; }
  inline bool PaymentScheduleTermTemplateHasBeenSet() const { return m_paymentScheduleTermTemplateHasBeenSet; }
  template <typename PaymentScheduleTermTemplateT = PaymentScheduleTermTemplate>
  void SetPaymentScheduleTermTemplate(PaymentScheduleTermTemplateT&& value) {
    m_paymentScheduleTermTemplateHasBeenSet = true;
    m_paymentScheduleTermTemplate = std::forward<PaymentScheduleTermTemplateT>(value);
  }
  template <typename PaymentScheduleTermTemplateT = PaymentScheduleTermTemplate>
  TermTemplate& WithPaymentScheduleTermTemplate(PaymentScheduleTermTemplateT&& value) {
    SetPaymentScheduleTermTemplate(std::forward<PaymentScheduleTermTemplateT>(value));
    return *this;
  }
  ///@}
 private:
  PaymentScheduleTermTemplate m_paymentScheduleTermTemplate;
  bool m_paymentScheduleTermTemplateHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
