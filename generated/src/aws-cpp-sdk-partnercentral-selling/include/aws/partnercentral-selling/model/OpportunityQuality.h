/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Opportunity quality score and trend.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/OpportunityQuality">AWS
 * API Reference</a></p>
 */
class OpportunityQuality {
 public:
  AWS_PARTNERCENTRALSELLING_API OpportunityQuality() = default;
  AWS_PARTNERCENTRALSELLING_API OpportunityQuality(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API OpportunityQuality& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Deal quality score based on opportunity content completeness and sales
   * methodology criteria. Values range from 0 to 100.</p>
   */
  inline int GetScore() const { return m_score; }
  inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
  inline void SetScore(int value) {
    m_scoreHasBeenSet = true;
    m_score = value;
  }
  inline OpportunityQuality& WithScore(int value) {
    SetScore(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Direction of score change since last scoring iteration. Known values:
   * <code>Improving</code>, <code>Declining</code>, <code>No Change</code>.</p>
   */
  inline const Aws::String& GetTrend() const { return m_trend; }
  inline bool TrendHasBeenSet() const { return m_trendHasBeenSet; }
  template <typename TrendT = Aws::String>
  void SetTrend(TrendT&& value) {
    m_trendHasBeenSet = true;
    m_trend = std::forward<TrendT>(value);
  }
  template <typename TrendT = Aws::String>
  OpportunityQuality& WithTrend(TrendT&& value) {
    SetTrend(std::forward<TrendT>(value));
    return *this;
  }
  ///@}
 private:
  int m_score{0};

  Aws::String m_trend;
  bool m_scoreHasBeenSet = false;
  bool m_trendHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
