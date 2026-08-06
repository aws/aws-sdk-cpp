/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/TermType.h>

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
 * <p>Defines a net payment term that sets how many days after the invoice date the
 * payment is due.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/NetPaymentTerm">AWS
 * API Reference</a></p>
 */
class NetPaymentTerm {
 public:
  AWS_MARKETPLACEDISCOVERY_API NetPaymentTerm() = default;
  AWS_MARKETPLACEDISCOVERY_API NetPaymentTerm(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API NetPaymentTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the term.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  NetPaymentTerm& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The category of the term.</p>
   */
  inline TermType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(TermType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline NetPaymentTerm& WithType(TermType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration after invoice date by which payment is due.</p>
   */
  inline const Aws::String& GetPaymentDuePeriod() const { return m_paymentDuePeriod; }
  inline bool PaymentDuePeriodHasBeenSet() const { return m_paymentDuePeriodHasBeenSet; }
  template <typename PaymentDuePeriodT = Aws::String>
  void SetPaymentDuePeriod(PaymentDuePeriodT&& value) {
    m_paymentDuePeriodHasBeenSet = true;
    m_paymentDuePeriod = std::forward<PaymentDuePeriodT>(value);
  }
  template <typename PaymentDuePeriodT = Aws::String>
  NetPaymentTerm& WithPaymentDuePeriod(PaymentDuePeriodT&& value) {
    SetPaymentDuePeriod(std::forward<PaymentDuePeriodT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  TermType m_type{TermType::NOT_SET};

  Aws::String m_paymentDuePeriod;
  bool m_idHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_paymentDuePeriodHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
