/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Contains the related-entity identifiers (AWS Marketplace offers, offer sets,
 * and solutions) returned for an opportunity in search results.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/OpportunitySearchRelatedEntityIdentifiers">AWS
 * API Reference</a></p>
 */
class OpportunitySearchRelatedEntityIdentifiers {
 public:
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchRelatedEntityIdentifiers() = default;
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchRelatedEntityIdentifiers(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchRelatedEntityIdentifiers& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The AWS Marketplace offers associated with this opportunity.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAwsMarketplaceOffers() const { return m_awsMarketplaceOffers; }
  inline bool AwsMarketplaceOffersHasBeenSet() const { return m_awsMarketplaceOffersHasBeenSet; }
  template <typename AwsMarketplaceOffersT = Aws::Vector<Aws::String>>
  void SetAwsMarketplaceOffers(AwsMarketplaceOffersT&& value) {
    m_awsMarketplaceOffersHasBeenSet = true;
    m_awsMarketplaceOffers = std::forward<AwsMarketplaceOffersT>(value);
  }
  template <typename AwsMarketplaceOffersT = Aws::Vector<Aws::String>>
  OpportunitySearchRelatedEntityIdentifiers& WithAwsMarketplaceOffers(AwsMarketplaceOffersT&& value) {
    SetAwsMarketplaceOffers(std::forward<AwsMarketplaceOffersT>(value));
    return *this;
  }
  template <typename AwsMarketplaceOffersT = Aws::String>
  OpportunitySearchRelatedEntityIdentifiers& AddAwsMarketplaceOffers(AwsMarketplaceOffersT&& value) {
    m_awsMarketplaceOffersHasBeenSet = true;
    m_awsMarketplaceOffers.emplace_back(std::forward<AwsMarketplaceOffersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Marketplace offer sets associated with this opportunity.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAwsMarketplaceOfferSets() const { return m_awsMarketplaceOfferSets; }
  inline bool AwsMarketplaceOfferSetsHasBeenSet() const { return m_awsMarketplaceOfferSetsHasBeenSet; }
  template <typename AwsMarketplaceOfferSetsT = Aws::Vector<Aws::String>>
  void SetAwsMarketplaceOfferSets(AwsMarketplaceOfferSetsT&& value) {
    m_awsMarketplaceOfferSetsHasBeenSet = true;
    m_awsMarketplaceOfferSets = std::forward<AwsMarketplaceOfferSetsT>(value);
  }
  template <typename AwsMarketplaceOfferSetsT = Aws::Vector<Aws::String>>
  OpportunitySearchRelatedEntityIdentifiers& WithAwsMarketplaceOfferSets(AwsMarketplaceOfferSetsT&& value) {
    SetAwsMarketplaceOfferSets(std::forward<AwsMarketplaceOfferSetsT>(value));
    return *this;
  }
  template <typename AwsMarketplaceOfferSetsT = Aws::String>
  OpportunitySearchRelatedEntityIdentifiers& AddAwsMarketplaceOfferSets(AwsMarketplaceOfferSetsT&& value) {
    m_awsMarketplaceOfferSetsHasBeenSet = true;
    m_awsMarketplaceOfferSets.emplace_back(std::forward<AwsMarketplaceOfferSetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Marketplace solutions associated with this opportunity.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAwsMarketplaceSolutions() const { return m_awsMarketplaceSolutions; }
  inline bool AwsMarketplaceSolutionsHasBeenSet() const { return m_awsMarketplaceSolutionsHasBeenSet; }
  template <typename AwsMarketplaceSolutionsT = Aws::Vector<Aws::String>>
  void SetAwsMarketplaceSolutions(AwsMarketplaceSolutionsT&& value) {
    m_awsMarketplaceSolutionsHasBeenSet = true;
    m_awsMarketplaceSolutions = std::forward<AwsMarketplaceSolutionsT>(value);
  }
  template <typename AwsMarketplaceSolutionsT = Aws::Vector<Aws::String>>
  OpportunitySearchRelatedEntityIdentifiers& WithAwsMarketplaceSolutions(AwsMarketplaceSolutionsT&& value) {
    SetAwsMarketplaceSolutions(std::forward<AwsMarketplaceSolutionsT>(value));
    return *this;
  }
  template <typename AwsMarketplaceSolutionsT = Aws::String>
  OpportunitySearchRelatedEntityIdentifiers& AddAwsMarketplaceSolutions(AwsMarketplaceSolutionsT&& value) {
    m_awsMarketplaceSolutionsHasBeenSet = true;
    m_awsMarketplaceSolutions.emplace_back(std::forward<AwsMarketplaceSolutionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The proposed solutions to address the customer's business problem.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSolutions() const { return m_solutions; }
  inline bool SolutionsHasBeenSet() const { return m_solutionsHasBeenSet; }
  template <typename SolutionsT = Aws::Vector<Aws::String>>
  void SetSolutions(SolutionsT&& value) {
    m_solutionsHasBeenSet = true;
    m_solutions = std::forward<SolutionsT>(value);
  }
  template <typename SolutionsT = Aws::Vector<Aws::String>>
  OpportunitySearchRelatedEntityIdentifiers& WithSolutions(SolutionsT&& value) {
    SetSolutions(std::forward<SolutionsT>(value));
    return *this;
  }
  template <typename SolutionsT = Aws::String>
  OpportunitySearchRelatedEntityIdentifiers& AddSolutions(SolutionsT&& value) {
    m_solutionsHasBeenSet = true;
    m_solutions.emplace_back(std::forward<SolutionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_awsMarketplaceOffers;

  Aws::Vector<Aws::String> m_awsMarketplaceOfferSets;

  Aws::Vector<Aws::String> m_awsMarketplaceSolutions;

  Aws::Vector<Aws::String> m_solutions;
  bool m_awsMarketplaceOffersHasBeenSet = false;
  bool m_awsMarketplaceOfferSetsHasBeenSet = false;
  bool m_awsMarketplaceSolutionsHasBeenSet = false;
  bool m_solutionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
