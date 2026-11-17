/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/AgreementApprovalResource.h>
#include <aws/marketplace-agreement/model/OfferVisibilityScope.h>

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
 * <p>A summary of the proposal received from the proposer.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/AgreementApprovalProposalSummary">AWS
 * API Reference</a></p>
 */
class AgreementApprovalProposalSummary {
 public:
  AWS_AGREEMENTSERVICE_API AgreementApprovalProposalSummary() = default;
  AWS_AGREEMENTSERVICE_API AgreementApprovalProposalSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API AgreementApprovalProposalSummary& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The unique identifier of the offer in AWS Marketplace.</p>
   */
  inline const Aws::String& GetOfferId() const { return m_offerId; }
  inline bool OfferIdHasBeenSet() const { return m_offerIdHasBeenSet; }
  template <typename OfferIdT = Aws::String>
  void SetOfferId(OfferIdT&& value) {
    m_offerIdHasBeenSet = true;
    m_offerId = std::forward<OfferIdT>(value);
  }
  template <typename OfferIdT = Aws::String>
  AgreementApprovalProposalSummary& WithOfferId(OfferIdT&& value) {
    SetOfferId(std::forward<OfferIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for the offer set containing this offer.</p>
   */
  inline const Aws::String& GetOfferSetId() const { return m_offerSetId; }
  inline bool OfferSetIdHasBeenSet() const { return m_offerSetIdHasBeenSet; }
  template <typename OfferSetIdT = Aws::String>
  void SetOfferSetId(OfferSetIdT&& value) {
    m_offerSetIdHasBeenSet = true;
    m_offerSetId = std::forward<OfferSetIdT>(value);
  }
  template <typename OfferSetIdT = Aws::String>
  AgreementApprovalProposalSummary& WithOfferSetId(OfferSetIdT&& value) {
    SetOfferSetId(std::forward<OfferSetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of resources involved in the agreement.</p>
   */
  inline const Aws::Vector<AgreementApprovalResource>& GetResources() const { return m_resources; }
  inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
  template <typename ResourcesT = Aws::Vector<AgreementApprovalResource>>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = Aws::Vector<AgreementApprovalResource>>
  AgreementApprovalProposalSummary& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  template <typename ResourcesT = AgreementApprovalResource>
  AgreementApprovalProposalSummary& AddResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources.emplace_back(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The visibility of the offer. Valid values are <code>PUBLIC</code> and
   * <code>PRIVATE</code>.</p>
   */
  inline OfferVisibilityScope GetVisibilityScope() const { return m_visibilityScope; }
  inline bool VisibilityScopeHasBeenSet() const { return m_visibilityScopeHasBeenSet; }
  inline void SetVisibilityScope(OfferVisibilityScope value) {
    m_visibilityScopeHasBeenSet = true;
    m_visibilityScope = value;
  }
  inline AgreementApprovalProposalSummary& WithVisibilityScope(OfferVisibilityScope value) {
    SetVisibilityScope(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_offerId;

  Aws::String m_offerSetId;

  Aws::Vector<AgreementApprovalResource> m_resources;

  OfferVisibilityScope m_visibilityScope{OfferVisibilityScope::NOT_SET};
  bool m_offerIdHasBeenSet = false;
  bool m_offerSetIdHasBeenSet = false;
  bool m_resourcesHasBeenSet = false;
  bool m_visibilityScopeHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
