/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/PaymentOption.h>
#include <aws/outposts/model/PaymentTerm.h>
#include <aws/outposts/model/QuoteCapacity.h>
#include <aws/outposts/model/QuoteConstraint.h>

#include <utility>

namespace Aws {
namespace Outposts {
namespace Model {

/**
 */
class CreateQuoteRequest : public OutpostsRequest {
 public:
  AWS_OUTPOSTS_API CreateQuoteRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateQuote"; }

  AWS_OUTPOSTS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID or ARN of the Outpost to associate with the quote. If not specified,
   * the quote is created without an Outpost association.</p>
   */
  inline const Aws::String& GetOutpostIdentifier() const { return m_outpostIdentifier; }
  inline bool OutpostIdentifierHasBeenSet() const { return m_outpostIdentifierHasBeenSet; }
  template <typename OutpostIdentifierT = Aws::String>
  void SetOutpostIdentifier(OutpostIdentifierT&& value) {
    m_outpostIdentifierHasBeenSet = true;
    m_outpostIdentifier = std::forward<OutpostIdentifierT>(value);
  }
  template <typename OutpostIdentifierT = Aws::String>
  CreateQuoteRequest& WithOutpostIdentifier(OutpostIdentifierT&& value) {
    SetOutpostIdentifier(std::forward<OutpostIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The country code for the Outpost site location.</p>
   */
  inline const Aws::String& GetCountryCode() const { return m_countryCode; }
  inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
  template <typename CountryCodeT = Aws::String>
  void SetCountryCode(CountryCodeT&& value) {
    m_countryCodeHasBeenSet = true;
    m_countryCode = std::forward<CountryCodeT>(value);
  }
  template <typename CountryCodeT = Aws::String>
  CreateQuoteRequest& WithCountryCode(CountryCodeT&& value) {
    SetCountryCode(std::forward<CountryCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The capacity requirements for the quote. Each entry specifies a capacity type
   * (such as Amazon EC2), the unit, and the quantity. For Amazon EC2, the quantity
   * is the number of additional instances to add to the Outpost. For Amazon EBS and
   * Amazon S3, the quantity is the total desired end-state capacity of the
   * Outpost.</p>
   */
  inline const Aws::Vector<QuoteCapacity>& GetRequestedCapacities() const { return m_requestedCapacities; }
  inline bool RequestedCapacitiesHasBeenSet() const { return m_requestedCapacitiesHasBeenSet; }
  template <typename RequestedCapacitiesT = Aws::Vector<QuoteCapacity>>
  void SetRequestedCapacities(RequestedCapacitiesT&& value) {
    m_requestedCapacitiesHasBeenSet = true;
    m_requestedCapacities = std::forward<RequestedCapacitiesT>(value);
  }
  template <typename RequestedCapacitiesT = Aws::Vector<QuoteCapacity>>
  CreateQuoteRequest& WithRequestedCapacities(RequestedCapacitiesT&& value) {
    SetRequestedCapacities(std::forward<RequestedCapacitiesT>(value));
    return *this;
  }
  template <typename RequestedCapacitiesT = QuoteCapacity>
  CreateQuoteRequest& AddRequestedCapacities(RequestedCapacitiesT&& value) {
    m_requestedCapacitiesHasBeenSet = true;
    m_requestedCapacities.emplace_back(std::forward<RequestedCapacitiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The physical constraints for the quote, such as maximum number of racks,
   * maximum power draw per rack, or maximum weight per rack.</p>
   */
  inline const Aws::Vector<QuoteConstraint>& GetRequestedConstraints() const { return m_requestedConstraints; }
  inline bool RequestedConstraintsHasBeenSet() const { return m_requestedConstraintsHasBeenSet; }
  template <typename RequestedConstraintsT = Aws::Vector<QuoteConstraint>>
  void SetRequestedConstraints(RequestedConstraintsT&& value) {
    m_requestedConstraintsHasBeenSet = true;
    m_requestedConstraints = std::forward<RequestedConstraintsT>(value);
  }
  template <typename RequestedConstraintsT = Aws::Vector<QuoteConstraint>>
  CreateQuoteRequest& WithRequestedConstraints(RequestedConstraintsT&& value) {
    SetRequestedConstraints(std::forward<RequestedConstraintsT>(value));
    return *this;
  }
  template <typename RequestedConstraintsT = QuoteConstraint>
  CreateQuoteRequest& AddRequestedConstraints(RequestedConstraintsT&& value) {
    m_requestedConstraintsHasBeenSet = true;
    m_requestedConstraints.emplace_back(std::forward<RequestedConstraintsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payment options to include in the quote pricing. If not specified, all
   * available payment options are returned.</p>
   */
  inline const Aws::Vector<PaymentOption>& GetRequestedPaymentOptions() const { return m_requestedPaymentOptions; }
  inline bool RequestedPaymentOptionsHasBeenSet() const { return m_requestedPaymentOptionsHasBeenSet; }
  template <typename RequestedPaymentOptionsT = Aws::Vector<PaymentOption>>
  void SetRequestedPaymentOptions(RequestedPaymentOptionsT&& value) {
    m_requestedPaymentOptionsHasBeenSet = true;
    m_requestedPaymentOptions = std::forward<RequestedPaymentOptionsT>(value);
  }
  template <typename RequestedPaymentOptionsT = Aws::Vector<PaymentOption>>
  CreateQuoteRequest& WithRequestedPaymentOptions(RequestedPaymentOptionsT&& value) {
    SetRequestedPaymentOptions(std::forward<RequestedPaymentOptionsT>(value));
    return *this;
  }
  inline CreateQuoteRequest& AddRequestedPaymentOptions(PaymentOption value) {
    m_requestedPaymentOptionsHasBeenSet = true;
    m_requestedPaymentOptions.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payment terms to include in the quote pricing. If not specified, all
   * available payment terms are returned.</p>
   */
  inline const Aws::Vector<PaymentTerm>& GetRequestedPaymentTerms() const { return m_requestedPaymentTerms; }
  inline bool RequestedPaymentTermsHasBeenSet() const { return m_requestedPaymentTermsHasBeenSet; }
  template <typename RequestedPaymentTermsT = Aws::Vector<PaymentTerm>>
  void SetRequestedPaymentTerms(RequestedPaymentTermsT&& value) {
    m_requestedPaymentTermsHasBeenSet = true;
    m_requestedPaymentTerms = std::forward<RequestedPaymentTermsT>(value);
  }
  template <typename RequestedPaymentTermsT = Aws::Vector<PaymentTerm>>
  CreateQuoteRequest& WithRequestedPaymentTerms(RequestedPaymentTermsT&& value) {
    SetRequestedPaymentTerms(std::forward<RequestedPaymentTermsT>(value));
    return *this;
  }
  inline CreateQuoteRequest& AddRequestedPaymentTerms(PaymentTerm value) {
    m_requestedPaymentTermsHasBeenSet = true;
    m_requestedPaymentTerms.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description for the quote.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateQuoteRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_outpostIdentifier;

  Aws::String m_countryCode;

  Aws::Vector<QuoteCapacity> m_requestedCapacities;

  Aws::Vector<QuoteConstraint> m_requestedConstraints;

  Aws::Vector<PaymentOption> m_requestedPaymentOptions;

  Aws::Vector<PaymentTerm> m_requestedPaymentTerms;

  Aws::String m_description;
  bool m_outpostIdentifierHasBeenSet = false;
  bool m_countryCodeHasBeenSet = false;
  bool m_requestedCapacitiesHasBeenSet = false;
  bool m_requestedConstraintsHasBeenSet = false;
  bool m_requestedPaymentOptionsHasBeenSet = false;
  bool m_requestedPaymentTermsHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
