/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/OpportunitySearchExpectedCustomerSpend.h>

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
 * <p>Contains the project fields (title, AWS Partner Network (APN) programs, and
 * expected customer spend) returned for an opportunity in search
 * results.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/OpportunitySearchProject">AWS
 * API Reference</a></p>
 */
class OpportunitySearchProject {
 public:
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchProject() = default;
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchProject(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchProject& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The partner opportunity name.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  OpportunitySearchProject& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Partner Network (APN) programs associated with the opportunity's
   * products or services.</p>
   */
  inline const Aws::Vector<Aws::String>& GetApnPrograms() const { return m_apnPrograms; }
  inline bool ApnProgramsHasBeenSet() const { return m_apnProgramsHasBeenSet; }
  template <typename ApnProgramsT = Aws::Vector<Aws::String>>
  void SetApnPrograms(ApnProgramsT&& value) {
    m_apnProgramsHasBeenSet = true;
    m_apnPrograms = std::forward<ApnProgramsT>(value);
  }
  template <typename ApnProgramsT = Aws::Vector<Aws::String>>
  OpportunitySearchProject& WithApnPrograms(ApnProgramsT&& value) {
    SetApnPrograms(std::forward<ApnProgramsT>(value));
    return *this;
  }
  template <typename ApnProgramsT = Aws::String>
  OpportunitySearchProject& AddApnPrograms(ApnProgramsT&& value) {
    m_apnProgramsHasBeenSet = true;
    m_apnPrograms.emplace_back(std::forward<ApnProgramsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The estimated AWS monthly recurring revenue (MRR): amount and currency
   * only.</p>
   */
  inline const Aws::Vector<OpportunitySearchExpectedCustomerSpend>& GetExpectedCustomerSpend() const { return m_expectedCustomerSpend; }
  inline bool ExpectedCustomerSpendHasBeenSet() const { return m_expectedCustomerSpendHasBeenSet; }
  template <typename ExpectedCustomerSpendT = Aws::Vector<OpportunitySearchExpectedCustomerSpend>>
  void SetExpectedCustomerSpend(ExpectedCustomerSpendT&& value) {
    m_expectedCustomerSpendHasBeenSet = true;
    m_expectedCustomerSpend = std::forward<ExpectedCustomerSpendT>(value);
  }
  template <typename ExpectedCustomerSpendT = Aws::Vector<OpportunitySearchExpectedCustomerSpend>>
  OpportunitySearchProject& WithExpectedCustomerSpend(ExpectedCustomerSpendT&& value) {
    SetExpectedCustomerSpend(std::forward<ExpectedCustomerSpendT>(value));
    return *this;
  }
  template <typename ExpectedCustomerSpendT = OpportunitySearchExpectedCustomerSpend>
  OpportunitySearchProject& AddExpectedCustomerSpend(ExpectedCustomerSpendT&& value) {
    m_expectedCustomerSpendHasBeenSet = true;
    m_expectedCustomerSpend.emplace_back(std::forward<ExpectedCustomerSpendT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_title;

  Aws::Vector<Aws::String> m_apnPrograms;

  Aws::Vector<OpportunitySearchExpectedCustomerSpend> m_expectedCustomerSpend;
  bool m_titleHasBeenSet = false;
  bool m_apnProgramsHasBeenSet = false;
  bool m_expectedCustomerSpendHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
