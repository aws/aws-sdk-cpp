/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/OpportunityOrigin.h>
#include <aws/partnercentral-selling/model/OpportunitySearchInsights.h>

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
 * <p>Contains the AWS-sourced fields (co-sell motion and a trimmed set of
 * insights) returned for an opportunity in search results.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/OpportunitySearchAwsSummary">AWS
 * API Reference</a></p>
 */
class OpportunitySearchAwsSummary {
 public:
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchAwsSummary() = default;
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchAwsSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchAwsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether the opportunity originated from AWS or from the
   * partner.</p>
   */
  inline OpportunityOrigin GetOrigin() const { return m_origin; }
  inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
  inline void SetOrigin(OpportunityOrigin value) {
    m_originHasBeenSet = true;
    m_origin = value;
  }
  inline OpportunitySearchAwsSummary& WithOrigin(OpportunityOrigin value) {
    SetOrigin(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The engagement classification for this opportunity. Read-only.</p>
   */
  inline const Aws::String& GetCosellMotion() const { return m_cosellMotion; }
  inline bool CosellMotionHasBeenSet() const { return m_cosellMotionHasBeenSet; }
  template <typename CosellMotionT = Aws::String>
  void SetCosellMotion(CosellMotionT&& value) {
    m_cosellMotionHasBeenSet = true;
    m_cosellMotion = std::forward<CosellMotionT>(value);
  }
  template <typename CosellMotionT = Aws::String>
  OpportunitySearchAwsSummary& WithCosellMotion(CosellMotionT&& value) {
    SetCosellMotion(std::forward<CosellMotionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Curated insights returned in search results: the engagement score and quality
   * score.</p>
   */
  inline const OpportunitySearchInsights& GetInsights() const { return m_insights; }
  inline bool InsightsHasBeenSet() const { return m_insightsHasBeenSet; }
  template <typename InsightsT = OpportunitySearchInsights>
  void SetInsights(InsightsT&& value) {
    m_insightsHasBeenSet = true;
    m_insights = std::forward<InsightsT>(value);
  }
  template <typename InsightsT = OpportunitySearchInsights>
  OpportunitySearchAwsSummary& WithInsights(InsightsT&& value) {
    SetInsights(std::forward<InsightsT>(value));
    return *this;
  }
  ///@}
 private:
  OpportunityOrigin m_origin{OpportunityOrigin::NOT_SET};

  Aws::String m_cosellMotion;

  OpportunitySearchInsights m_insights;
  bool m_originHasBeenSet = false;
  bool m_cosellMotionHasBeenSet = false;
  bool m_insightsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
