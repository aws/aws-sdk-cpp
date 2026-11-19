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
 * <p>Recorded facts about the matched customer for an account in search results.
 * It carries the fields that you can filter and group by.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AwsEnrichmentCustomerSummary">AWS
 * API Reference</a></p>
 */
class AwsEnrichmentCustomerSummary {
 public:
  AWS_PARTNERCENTRALSELLING_API AwsEnrichmentCustomerSummary() = default;
  AWS_PARTNERCENTRALSELLING_API AwsEnrichmentCustomerSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API AwsEnrichmentCustomerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The industry of the customer, as classified by AWS.</p>
   */
  inline const Aws::String& GetIndustry() const { return m_industry; }
  inline bool IndustryHasBeenSet() const { return m_industryHasBeenSet; }
  template <typename IndustryT = Aws::String>
  void SetIndustry(IndustryT&& value) {
    m_industryHasBeenSet = true;
    m_industry = std::forward<IndustryT>(value);
  }
  template <typename IndustryT = Aws::String>
  AwsEnrichmentCustomerSummary& WithIndustry(IndustryT&& value) {
    SetIndustry(std::forward<IndustryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the customer qualifies for account planning with AWS.</p>
   */
  inline const Aws::String& GetAccountPlanningQualification() const { return m_accountPlanningQualification; }
  inline bool AccountPlanningQualificationHasBeenSet() const { return m_accountPlanningQualificationHasBeenSet; }
  template <typename AccountPlanningQualificationT = Aws::String>
  void SetAccountPlanningQualification(AccountPlanningQualificationT&& value) {
    m_accountPlanningQualificationHasBeenSet = true;
    m_accountPlanningQualification = std::forward<AccountPlanningQualificationT>(value);
  }
  template <typename AccountPlanningQualificationT = Aws::String>
  AwsEnrichmentCustomerSummary& WithAccountPlanningQualification(AccountPlanningQualificationT&& value) {
    SetAccountPlanningQualification(std::forward<AccountPlanningQualificationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS programs that the customer is eligible for.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEligiblePrograms() const { return m_eligiblePrograms; }
  inline bool EligibleProgramsHasBeenSet() const { return m_eligibleProgramsHasBeenSet; }
  template <typename EligibleProgramsT = Aws::Vector<Aws::String>>
  void SetEligiblePrograms(EligibleProgramsT&& value) {
    m_eligibleProgramsHasBeenSet = true;
    m_eligiblePrograms = std::forward<EligibleProgramsT>(value);
  }
  template <typename EligibleProgramsT = Aws::Vector<Aws::String>>
  AwsEnrichmentCustomerSummary& WithEligiblePrograms(EligibleProgramsT&& value) {
    SetEligiblePrograms(std::forward<EligibleProgramsT>(value));
    return *this;
  }
  template <typename EligibleProgramsT = Aws::String>
  AwsEnrichmentCustomerSummary& AddEligiblePrograms(EligibleProgramsT&& value) {
    m_eligibleProgramsHasBeenSet = true;
    m_eligiblePrograms.emplace_back(std::forward<EligibleProgramsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The geographic area of the customer, as classified by AWS.</p>
   */
  inline const Aws::String& GetGeo() const { return m_geo; }
  inline bool GeoHasBeenSet() const { return m_geoHasBeenSet; }
  template <typename GeoT = Aws::String>
  void SetGeo(GeoT&& value) {
    m_geoHasBeenSet = true;
    m_geo = std::forward<GeoT>(value);
  }
  template <typename GeoT = Aws::String>
  AwsEnrichmentCustomerSummary& WithGeo(GeoT&& value) {
    SetGeo(std::forward<GeoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The country of the customer.</p>
   */
  inline const Aws::String& GetCountry() const { return m_country; }
  inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
  template <typename CountryT = Aws::String>
  void SetCountry(CountryT&& value) {
    m_countryHasBeenSet = true;
    m_country = std::forward<CountryT>(value);
  }
  template <typename CountryT = Aws::String>
  AwsEnrichmentCustomerSummary& WithCountry(CountryT&& value) {
    SetCountry(std::forward<CountryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The market segment of the customer, as classified by AWS.</p>
   */
  inline const Aws::String& GetSegment() const { return m_segment; }
  inline bool SegmentHasBeenSet() const { return m_segmentHasBeenSet; }
  template <typename SegmentT = Aws::String>
  void SetSegment(SegmentT&& value) {
    m_segmentHasBeenSet = true;
    m_segment = std::forward<SegmentT>(value);
  }
  template <typename SegmentT = Aws::String>
  AwsEnrichmentCustomerSummary& WithSegment(SegmentT&& value) {
    SetSegment(std::forward<SegmentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_industry;

  Aws::String m_accountPlanningQualification;

  Aws::Vector<Aws::String> m_eligiblePrograms;

  Aws::String m_geo;

  Aws::String m_country;

  Aws::String m_segment;
  bool m_industryHasBeenSet = false;
  bool m_accountPlanningQualificationHasBeenSet = false;
  bool m_eligibleProgramsHasBeenSet = false;
  bool m_geoHasBeenSet = false;
  bool m_countryHasBeenSet = false;
  bool m_segmentHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
