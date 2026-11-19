/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/CompanySize.h>
#include <aws/partnercentral-marketing/model/Industry.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace PartnerCentralMarketing {
namespace Model {

/**
 * <p>Advisory targeting metadata for a campaign.</p> <p>Describes who the campaign
 * is *about*, and never drives a send — that is `EmailTarget`. Nothing here is
 * validated at create, because a partner refines it across the wizard.<p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/TargetAudience">AWS
 * API Reference</a></p>
 */
class TargetAudience {
 public:
  AWS_PARTNERCENTRALMARKETING_API TargetAudience() = default;
  AWS_PARTNERCENTRALMARKETING_API TargetAudience(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API TargetAudience& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Target industries.</p>
   */
  inline const Aws::Vector<Industry>& GetIndustries() const { return m_industries; }
  inline bool IndustriesHasBeenSet() const { return m_industriesHasBeenSet; }
  template <typename IndustriesT = Aws::Vector<Industry>>
  void SetIndustries(IndustriesT&& value) {
    m_industriesHasBeenSet = true;
    m_industries = std::forward<IndustriesT>(value);
  }
  template <typename IndustriesT = Aws::Vector<Industry>>
  TargetAudience& WithIndustries(IndustriesT&& value) {
    SetIndustries(std::forward<IndustriesT>(value));
    return *this;
  }
  inline TargetAudience& AddIndustries(Industry value) {
    m_industriesHasBeenSet = true;
    m_industries.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Target company sizes.</p>
   */
  inline const Aws::Vector<CompanySize>& GetCompanySizes() const { return m_companySizes; }
  inline bool CompanySizesHasBeenSet() const { return m_companySizesHasBeenSet; }
  template <typename CompanySizesT = Aws::Vector<CompanySize>>
  void SetCompanySizes(CompanySizesT&& value) {
    m_companySizesHasBeenSet = true;
    m_companySizes = std::forward<CompanySizesT>(value);
  }
  template <typename CompanySizesT = Aws::Vector<CompanySize>>
  TargetAudience& WithCompanySizes(CompanySizesT&& value) {
    SetCompanySizes(std::forward<CompanySizesT>(value));
    return *this;
  }
  inline TargetAudience& AddCompanySizes(CompanySize value) {
    m_companySizesHasBeenSet = true;
    m_companySizes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Target countries, as ISO 3166-1 alpha-2 codes.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCountries() const { return m_countries; }
  inline bool CountriesHasBeenSet() const { return m_countriesHasBeenSet; }
  template <typename CountriesT = Aws::Vector<Aws::String>>
  void SetCountries(CountriesT&& value) {
    m_countriesHasBeenSet = true;
    m_countries = std::forward<CountriesT>(value);
  }
  template <typename CountriesT = Aws::Vector<Aws::String>>
  TargetAudience& WithCountries(CountriesT&& value) {
    SetCountries(std::forward<CountriesT>(value));
    return *this;
  }
  template <typename CountriesT = Aws::String>
  TargetAudience& AddCountries(CountriesT&& value) {
    m_countriesHasBeenSet = true;
    m_countries.emplace_back(std::forward<CountriesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Industry> m_industries;

  Aws::Vector<CompanySize> m_companySizes;

  Aws::Vector<Aws::String> m_countries;
  bool m_industriesHasBeenSet = false;
  bool m_companySizesHasBeenSet = false;
  bool m_countriesHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
