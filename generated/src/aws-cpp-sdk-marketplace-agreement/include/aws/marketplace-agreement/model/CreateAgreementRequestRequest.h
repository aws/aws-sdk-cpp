/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-agreement/AgreementServiceRequest.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/AcceptorContact.h>
#include <aws/marketplace-agreement/model/Intent.h>
#include <aws/marketplace-agreement/model/RequestedTerm.h>
#include <aws/marketplace-agreement/model/TaxConfiguration.h>

#include <utility>

namespace Aws {
namespace AgreementService {
namespace Model {

/**
 */
class CreateAgreementRequestRequest : public AgreementServiceRequest {
 public:
  AWS_AGREEMENTSERVICE_API CreateAgreementRequestRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAgreementRequest"; }

  AWS_AGREEMENTSERVICE_API Aws::String SerializePayload() const override;

  AWS_AGREEMENTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateAgreementRequestRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The purpose and desired outcome of the agreement request. This is a required
   * parameter that determines how the agreement request is processed.</p> <ul> <li>
   * <p> <code>NEW</code> – Creates a new agreement for terms in the request.</p>
   * </li> <li> <p> <code>AMEND</code> – Modifies an existing agreement with terms
   * that are accepted in the request.</p> </li> <li> <p> <code>REPLACE</code> –
   * Creates a new agreement with accepted terms and replaces the existing
   * agreement.</p> </li> </ul>
   */
  inline Intent GetIntent() const { return m_intent; }
  inline bool IntentHasBeenSet() const { return m_intentHasBeenSet; }
  inline void SetIntent(Intent value) {
    m_intentHasBeenSet = true;
    m_intent = value;
  }
  inline CreateAgreementRequestRequest& WithIntent(Intent value) {
    SetIntent(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of terms that define what is being accepted as part of the agreement.
   * Some terms require configuration.</p>
   */
  inline const Aws::Vector<RequestedTerm>& GetRequestedTerms() const { return m_requestedTerms; }
  inline bool RequestedTermsHasBeenSet() const { return m_requestedTermsHasBeenSet; }
  template <typename RequestedTermsT = Aws::Vector<RequestedTerm>>
  void SetRequestedTerms(RequestedTermsT&& value) {
    m_requestedTermsHasBeenSet = true;
    m_requestedTerms = std::forward<RequestedTermsT>(value);
  }
  template <typename RequestedTermsT = Aws::Vector<RequestedTerm>>
  CreateAgreementRequestRequest& WithRequestedTerms(RequestedTermsT&& value) {
    SetRequestedTerms(std::forward<RequestedTermsT>(value));
    return *this;
  }
  template <typename RequestedTermsT = RequestedTerm>
  CreateAgreementRequestRequest& AddRequestedTerms(RequestedTermsT&& value) {
    m_requestedTermsHasBeenSet = true;
    m_requestedTerms.emplace_back(std::forward<RequestedTermsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The agreement's identifier that the request acts upon.</p>  <p>
   * This parameter is required for all non-<code>NEW</code> intents (i.e.,
   * <code>AMEND</code> or <code>REPLACE</code>). Don't provide this parameter if the
   * intent is <code>NEW</code>. </p>
   */
  inline const Aws::String& GetSourceAgreementIdentifier() const { return m_sourceAgreementIdentifier; }
  inline bool SourceAgreementIdentifierHasBeenSet() const { return m_sourceAgreementIdentifierHasBeenSet; }
  template <typename SourceAgreementIdentifierT = Aws::String>
  void SetSourceAgreementIdentifier(SourceAgreementIdentifierT&& value) {
    m_sourceAgreementIdentifierHasBeenSet = true;
    m_sourceAgreementIdentifier = std::forward<SourceAgreementIdentifierT>(value);
  }
  template <typename SourceAgreementIdentifierT = Aws::String>
  CreateAgreementRequestRequest& WithSourceAgreementIdentifier(SourceAgreementIdentifierT&& value) {
    SetSourceAgreementIdentifier(std::forward<SourceAgreementIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The agreement proposal signed by the proposer. The proposal includes the
   * requested resources and the terms that outline an agreement outcome.</p>
   *  <p> This parameter is required if the intent is not
   * <code>AMEND</code>.</p>
   */
  inline const Aws::String& GetAgreementProposalIdentifier() const { return m_agreementProposalIdentifier; }
  inline bool AgreementProposalIdentifierHasBeenSet() const { return m_agreementProposalIdentifierHasBeenSet; }
  template <typename AgreementProposalIdentifierT = Aws::String>
  void SetAgreementProposalIdentifier(AgreementProposalIdentifierT&& value) {
    m_agreementProposalIdentifierHasBeenSet = true;
    m_agreementProposalIdentifier = std::forward<AgreementProposalIdentifierT>(value);
  }
  template <typename AgreementProposalIdentifierT = Aws::String>
  CreateAgreementRequestRequest& WithAgreementProposalIdentifier(AgreementProposalIdentifierT&& value) {
    SetAgreementProposalIdentifier(std::forward<AgreementProposalIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for tax estimation in the agreement request response.</p>
   */
  inline const TaxConfiguration& GetTaxConfiguration() const { return m_taxConfiguration; }
  inline bool TaxConfigurationHasBeenSet() const { return m_taxConfigurationHasBeenSet; }
  template <typename TaxConfigurationT = TaxConfiguration>
  void SetTaxConfiguration(TaxConfigurationT&& value) {
    m_taxConfigurationHasBeenSet = true;
    m_taxConfiguration = std::forward<TaxConfigurationT>(value);
  }
  template <typename TaxConfigurationT = TaxConfiguration>
  CreateAgreementRequestRequest& WithTaxConfiguration(TaxConfigurationT&& value) {
    SetTaxConfiguration(std::forward<TaxConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The contact information of the acceptor.</p>  <p>Don't provide
   * this parameter if the intent is <code>AMEND</code>.</p>
   */
  inline const AcceptorContact& GetAcceptorContact() const { return m_acceptorContact; }
  inline bool AcceptorContactHasBeenSet() const { return m_acceptorContactHasBeenSet; }
  template <typename AcceptorContactT = AcceptorContact>
  void SetAcceptorContact(AcceptorContactT&& value) {
    m_acceptorContactHasBeenSet = true;
    m_acceptorContact = std::forward<AcceptorContactT>(value);
  }
  template <typename AcceptorContactT = AcceptorContact>
  CreateAgreementRequestRequest& WithAcceptorContact(AcceptorContactT&& value) {
    SetAcceptorContact(std::forward<AcceptorContactT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Intent m_intent{Intent::NOT_SET};

  Aws::Vector<RequestedTerm> m_requestedTerms;

  Aws::String m_sourceAgreementIdentifier;

  Aws::String m_agreementProposalIdentifier;

  TaxConfiguration m_taxConfiguration;

  AcceptorContact m_acceptorContact;
  bool m_clientTokenHasBeenSet = true;
  bool m_intentHasBeenSet = false;
  bool m_requestedTermsHasBeenSet = false;
  bool m_sourceAgreementIdentifierHasBeenSet = false;
  bool m_agreementProposalIdentifierHasBeenSet = false;
  bool m_taxConfigurationHasBeenSet = false;
  bool m_acceptorContactHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
