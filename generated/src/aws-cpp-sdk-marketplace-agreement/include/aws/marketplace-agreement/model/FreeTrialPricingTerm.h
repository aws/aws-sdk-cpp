/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/GrantItem.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>Defines a short-term free pricing model where the buyers aren’t charged
 * anything within a specified limit.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/FreeTrialPricingTerm">AWS
 * API Reference</a></p>
 */
class FreeTrialPricingTerm {
 public:
  AWS_AGREEMENTSERVICE_API FreeTrialPricingTerm() = default;
  AWS_AGREEMENTSERVICE_API FreeTrialPricingTerm(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API FreeTrialPricingTerm& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Category of the term.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  FreeTrialPricingTerm& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the terms.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  FreeTrialPricingTerm& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Duration of the free trial period (5–31 days). </p>
   */
  inline const Aws::String& GetDuration() const { return m_duration; }
  inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
  template <typename DurationT = Aws::String>
  void SetDuration(DurationT&& value) {
    m_durationHasBeenSet = true;
    m_duration = std::forward<DurationT>(value);
  }
  template <typename DurationT = Aws::String>
  FreeTrialPricingTerm& WithDuration(DurationT&& value) {
    SetDuration(std::forward<DurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Entitlements granted to the acceptor of a free trial as part of an agreement
   * execution.</p>
   */
  inline const Aws::Vector<GrantItem>& GetGrants() const { return m_grants; }
  inline bool GrantsHasBeenSet() const { return m_grantsHasBeenSet; }
  template <typename GrantsT = Aws::Vector<GrantItem>>
  void SetGrants(GrantsT&& value) {
    m_grantsHasBeenSet = true;
    m_grants = std::forward<GrantsT>(value);
  }
  template <typename GrantsT = Aws::Vector<GrantItem>>
  FreeTrialPricingTerm& WithGrants(GrantsT&& value) {
    SetGrants(std::forward<GrantsT>(value));
    return *this;
  }
  template <typename GrantsT = GrantItem>
  FreeTrialPricingTerm& AddGrants(GrantsT&& value) {
    m_grantsHasBeenSet = true;
    m_grants.emplace_back(std::forward<GrantsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_type;

  Aws::String m_id;

  Aws::String m_duration;

  Aws::Vector<GrantItem> m_grants;
  bool m_typeHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_durationHasBeenSet = false;
  bool m_grantsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
