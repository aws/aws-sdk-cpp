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
 * <p>Recorded facts that we hold about the matched customer, such as the industry,
 * sector, company size, and region.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AwsEnrichmentCustomer">AWS
 * API Reference</a></p>
 */
class AwsEnrichmentCustomer {
 public:
  AWS_PARTNERCENTRALSELLING_API AwsEnrichmentCustomer() = default;
  AWS_PARTNERCENTRALSELLING_API AwsEnrichmentCustomer(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API AwsEnrichmentCustomer& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the customer, as recorded by AWS.</p>
   */
  inline const Aws::String& GetAccountName() const { return m_accountName; }
  inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }
  template <typename AccountNameT = Aws::String>
  void SetAccountName(AccountNameT&& value) {
    m_accountNameHasBeenSet = true;
    m_accountName = std::forward<AccountNameT>(value);
  }
  template <typename AccountNameT = Aws::String>
  AwsEnrichmentCustomer& WithAccountName(AccountNameT&& value) {
    SetAccountName(std::forward<AccountNameT>(value));
    return *this;
  }
  ///@}

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
  AwsEnrichmentCustomer& WithIndustry(IndustryT&& value) {
    SetIndustry(std::forward<IndustryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sub-industry of the customer, as classified by AWS.</p>
   */
  inline const Aws::String& GetSubIndustry() const { return m_subIndustry; }
  inline bool SubIndustryHasBeenSet() const { return m_subIndustryHasBeenSet; }
  template <typename SubIndustryT = Aws::String>
  void SetSubIndustry(SubIndustryT&& value) {
    m_subIndustryHasBeenSet = true;
    m_subIndustry = std::forward<SubIndustryT>(value);
  }
  template <typename SubIndustryT = Aws::String>
  AwsEnrichmentCustomer& WithSubIndustry(SubIndustryT&& value) {
    SetSubIndustry(std::forward<SubIndustryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sector of the customer, as classified by AWS.</p>
   */
  inline const Aws::String& GetSector() const { return m_sector; }
  inline bool SectorHasBeenSet() const { return m_sectorHasBeenSet; }
  template <typename SectorT = Aws::String>
  void SetSector(SectorT&& value) {
    m_sectorHasBeenSet = true;
    m_sector = std::forward<SectorT>(value);
  }
  template <typename SectorT = Aws::String>
  AwsEnrichmentCustomer& WithSector(SectorT&& value) {
    SetSector(std::forward<SectorT>(value));
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
  AwsEnrichmentCustomer& WithSegment(SegmentT&& value) {
    SetSegment(std::forward<SegmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size of the customer company.</p>
   */
  inline const Aws::String& GetCompanySize() const { return m_companySize; }
  inline bool CompanySizeHasBeenSet() const { return m_companySizeHasBeenSet; }
  template <typename CompanySizeT = Aws::String>
  void SetCompanySize(CompanySizeT&& value) {
    m_companySizeHasBeenSet = true;
    m_companySize = std::forward<CompanySizeT>(value);
  }
  template <typename CompanySizeT = Aws::String>
  AwsEnrichmentCustomer& WithCompanySize(CompanySizeT&& value) {
    SetCompanySize(std::forward<CompanySizeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The region of the customer, as classified by AWS.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  AwsEnrichmentCustomer& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sub-region of the customer, as classified by AWS.</p>
   */
  inline const Aws::String& GetSubRegion() const { return m_subRegion; }
  inline bool SubRegionHasBeenSet() const { return m_subRegionHasBeenSet; }
  template <typename SubRegionT = Aws::String>
  void SetSubRegion(SubRegionT&& value) {
    m_subRegionHasBeenSet = true;
    m_subRegion = std::forward<SubRegionT>(value);
  }
  template <typename SubRegionT = Aws::String>
  AwsEnrichmentCustomer& WithSubRegion(SubRegionT&& value) {
    SetSubRegion(std::forward<SubRegionT>(value));
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
  AwsEnrichmentCustomer& WithGeo(GeoT&& value) {
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
  AwsEnrichmentCustomer& WithCountry(CountryT&& value) {
    SetCountry(std::forward<CountryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the customer qualifies for account planning with AWS.</p>
   */
  inline const Aws::String& GetCustomerAccountPlanningQualification() const { return m_customerAccountPlanningQualification; }
  inline bool CustomerAccountPlanningQualificationHasBeenSet() const { return m_customerAccountPlanningQualificationHasBeenSet; }
  template <typename CustomerAccountPlanningQualificationT = Aws::String>
  void SetCustomerAccountPlanningQualification(CustomerAccountPlanningQualificationT&& value) {
    m_customerAccountPlanningQualificationHasBeenSet = true;
    m_customerAccountPlanningQualification = std::forward<CustomerAccountPlanningQualificationT>(value);
  }
  template <typename CustomerAccountPlanningQualificationT = Aws::String>
  AwsEnrichmentCustomer& WithCustomerAccountPlanningQualification(CustomerAccountPlanningQualificationT&& value) {
    SetCustomerAccountPlanningQualification(std::forward<CustomerAccountPlanningQualificationT>(value));
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
  AwsEnrichmentCustomer& WithEligiblePrograms(EligibleProgramsT&& value) {
    SetEligiblePrograms(std::forward<EligibleProgramsT>(value));
    return *this;
  }
  template <typename EligibleProgramsT = Aws::String>
  AwsEnrichmentCustomer& AddEligiblePrograms(EligibleProgramsT&& value) {
    m_eligibleProgramsHasBeenSet = true;
    m_eligiblePrograms.emplace_back(std::forward<EligibleProgramsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountName;

  Aws::String m_industry;

  Aws::String m_subIndustry;

  Aws::String m_sector;

  Aws::String m_segment;

  Aws::String m_companySize;

  Aws::String m_region;

  Aws::String m_subRegion;

  Aws::String m_geo;

  Aws::String m_country;

  Aws::String m_customerAccountPlanningQualification;

  Aws::Vector<Aws::String> m_eligiblePrograms;
  bool m_accountNameHasBeenSet = false;
  bool m_industryHasBeenSet = false;
  bool m_subIndustryHasBeenSet = false;
  bool m_sectorHasBeenSet = false;
  bool m_segmentHasBeenSet = false;
  bool m_companySizeHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_subRegionHasBeenSet = false;
  bool m_geoHasBeenSet = false;
  bool m_countryHasBeenSet = false;
  bool m_customerAccountPlanningQualificationHasBeenSet = false;
  bool m_eligibleProgramsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
