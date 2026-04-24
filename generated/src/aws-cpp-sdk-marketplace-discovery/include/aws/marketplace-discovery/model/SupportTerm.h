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
 * <p>Defines a support term that includes the refund policy for the
 * offer.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/SupportTerm">AWS
 * API Reference</a></p>
 */
class SupportTerm {
 public:
  AWS_MARKETPLACEDISCOVERY_API SupportTerm() = default;
  AWS_MARKETPLACEDISCOVERY_API SupportTerm(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API SupportTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  SupportTerm& WithId(IdT&& value) {
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
  inline SupportTerm& WithType(TermType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The refund policy description for the offer.</p>
   */
  inline const Aws::String& GetRefundPolicy() const { return m_refundPolicy; }
  inline bool RefundPolicyHasBeenSet() const { return m_refundPolicyHasBeenSet; }
  template <typename RefundPolicyT = Aws::String>
  void SetRefundPolicy(RefundPolicyT&& value) {
    m_refundPolicyHasBeenSet = true;
    m_refundPolicy = std::forward<RefundPolicyT>(value);
  }
  template <typename RefundPolicyT = Aws::String>
  SupportTerm& WithRefundPolicy(RefundPolicyT&& value) {
    SetRefundPolicy(std::forward<RefundPolicyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  TermType m_type{TermType::NOT_SET};

  Aws::String m_refundPolicy;
  bool m_idHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_refundPolicyHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
