/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/CountryCode.h>
#include <aws/partnercentral-selling/model/Industry.h>

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
 * <p>Contains detailed information about the prospected customer account,
 * including company identifiers, geographic classification, industry segmentation,
 * and program eligibility.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ProspectingResultCustomer">AWS
 * API Reference</a></p>
 */
class ProspectingResultCustomer {
 public:
  AWS_PARTNERCENTRALSELLING_API ProspectingResultCustomer() = default;
  AWS_PARTNERCENTRALSELLING_API ProspectingResultCustomer(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API ProspectingResultCustomer& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the prospected customer account.</p>
   */
  inline const Aws::String& GetAccountName() const { return m_accountName; }
  inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }
  template <typename AccountNameT = Aws::String>
  void SetAccountName(AccountNameT&& value) {
    m_accountNameHasBeenSet = true;
    m_accountName = std::forward<AccountNameT>(value);
  }
  template <typename AccountNameT = Aws::String>
  ProspectingResultCustomer& WithAccountName(AccountNameT&& value) {
    SetAccountName(std::forward<AccountNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The geographic region classification of the prospected customer account.</p>
   */
  inline const Aws::String& GetGeo() const { return m_geo; }
  inline bool GeoHasBeenSet() const { return m_geoHasBeenSet; }
  template <typename GeoT = Aws::String>
  void SetGeo(GeoT&& value) {
    m_geoHasBeenSet = true;
    m_geo = std::forward<GeoT>(value);
  }
  template <typename GeoT = Aws::String>
  ProspectingResultCustomer& WithGeo(GeoT&& value) {
    SetGeo(std::forward<GeoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific region of the prospected customer account.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  ProspectingResultCustomer& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subregion classification of the prospected customer account.</p>
   */
  inline const Aws::String& GetSubRegion() const { return m_subRegion; }
  inline bool SubRegionHasBeenSet() const { return m_subRegionHasBeenSet; }
  template <typename SubRegionT = Aws::String>
  void SetSubRegion(SubRegionT&& value) {
    m_subRegionHasBeenSet = true;
    m_subRegion = std::forward<SubRegionT>(value);
  }
  template <typename SubRegionT = Aws::String>
  ProspectingResultCustomer& WithSubRegion(SubRegionT&& value) {
    SetSubRegion(std::forward<SubRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The country code of the prospected customer account.</p>
   */
  inline CountryCode GetCountry() const { return m_country; }
  inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
  inline void SetCountry(CountryCode value) {
    m_countryHasBeenSet = true;
    m_country = value;
  }
  inline ProspectingResultCustomer& WithCountry(CountryCode value) {
    SetCountry(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The industry classification of the prospected customer account.</p>
   */
  inline Industry GetIndustry() const { return m_industry; }
  inline bool IndustryHasBeenSet() const { return m_industryHasBeenSet; }
  inline void SetIndustry(Industry value) {
    m_industryHasBeenSet = true;
    m_industry = value;
  }
  inline ProspectingResultCustomer& WithIndustry(Industry value) {
    SetIndustry(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sub-industry classification of the prospected customer account. This
   * provides more granular categorization within the primary industry.</p>
   */
  inline const Aws::String& GetSubIndustry() const { return m_subIndustry; }
  inline bool SubIndustryHasBeenSet() const { return m_subIndustryHasBeenSet; }
  template <typename SubIndustryT = Aws::String>
  void SetSubIndustry(SubIndustryT&& value) {
    m_subIndustryHasBeenSet = true;
    m_subIndustry = std::forward<SubIndustryT>(value);
  }
  template <typename SubIndustryT = Aws::String>
  ProspectingResultCustomer& WithSubIndustry(SubIndustryT&& value) {
    SetSubIndustry(std::forward<SubIndustryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The market segment classification of the prospected customer account.</p>
   */
  inline const Aws::String& GetSegment() const { return m_segment; }
  inline bool SegmentHasBeenSet() const { return m_segmentHasBeenSet; }
  template <typename SegmentT = Aws::String>
  void SetSegment(SegmentT&& value) {
    m_segmentHasBeenSet = true;
    m_segment = std::forward<SegmentT>(value);
  }
  template <typename SegmentT = Aws::String>
  ProspectingResultCustomer& WithSegment(SegmentT&& value) {
    SetSegment(std::forward<SegmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The company size classification of the prospected customer account.</p>
   */
  inline const Aws::String& GetCompanySize() const { return m_companySize; }
  inline bool CompanySizeHasBeenSet() const { return m_companySizeHasBeenSet; }
  template <typename CompanySizeT = Aws::String>
  void SetCompanySize(CompanySizeT&& value) {
    m_companySizeHasBeenSet = true;
    m_companySize = std::forward<CompanySizeT>(value);
  }
  template <typename CompanySizeT = Aws::String>
  ProspectingResultCustomer& WithCompanySize(CompanySizeT&& value) {
    SetCompanySize(std::forward<CompanySizeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of AWS Greenfield programs that the prospected customer is eligible
   * for. Use this list to identify relevant go-to-market opportunities.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEligiblePrograms() const { return m_eligiblePrograms; }
  inline bool EligibleProgramsHasBeenSet() const { return m_eligibleProgramsHasBeenSet; }
  template <typename EligibleProgramsT = Aws::Vector<Aws::String>>
  void SetEligiblePrograms(EligibleProgramsT&& value) {
    m_eligibleProgramsHasBeenSet = true;
    m_eligiblePrograms = std::forward<EligibleProgramsT>(value);
  }
  template <typename EligibleProgramsT = Aws::Vector<Aws::String>>
  ProspectingResultCustomer& WithEligiblePrograms(EligibleProgramsT&& value) {
    SetEligiblePrograms(std::forward<EligibleProgramsT>(value));
    return *this;
  }
  template <typename EligibleProgramsT = Aws::String>
  ProspectingResultCustomer& AddEligiblePrograms(EligibleProgramsT&& value) {
    m_eligibleProgramsHasBeenSet = true;
    m_eligiblePrograms.emplace_back(std::forward<EligibleProgramsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of publicly available information about the prospected customer.
   * The system uses this summary to generate customer insights and inform engagement
   * strategies.</p>
   */
  inline const Aws::String& GetPublicProfileSummary() const { return m_publicProfileSummary; }
  inline bool PublicProfileSummaryHasBeenSet() const { return m_publicProfileSummaryHasBeenSet; }
  template <typename PublicProfileSummaryT = Aws::String>
  void SetPublicProfileSummary(PublicProfileSummaryT&& value) {
    m_publicProfileSummaryHasBeenSet = true;
    m_publicProfileSummary = std::forward<PublicProfileSummaryT>(value);
  }
  template <typename PublicProfileSummaryT = Aws::String>
  ProspectingResultCustomer& WithPublicProfileSummary(PublicProfileSummaryT&& value) {
    SetPublicProfileSummary(std::forward<PublicProfileSummaryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountName;

  Aws::String m_geo;

  Aws::String m_region;

  Aws::String m_subRegion;

  CountryCode m_country{CountryCode::NOT_SET};

  Industry m_industry{Industry::NOT_SET};

  Aws::String m_subIndustry;

  Aws::String m_segment;

  Aws::String m_companySize;

  Aws::Vector<Aws::String> m_eligiblePrograms;

  Aws::String m_publicProfileSummary;
  bool m_accountNameHasBeenSet = false;
  bool m_geoHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_subRegionHasBeenSet = false;
  bool m_countryHasBeenSet = false;
  bool m_industryHasBeenSet = false;
  bool m_subIndustryHasBeenSet = false;
  bool m_segmentHasBeenSet = false;
  bool m_companySizeHasBeenSet = false;
  bool m_eligibleProgramsHasBeenSet = false;
  bool m_publicProfileSummaryHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
