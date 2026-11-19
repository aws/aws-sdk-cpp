/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

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
 * <p>Curated opportunity quality: score only.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/OpportunitySearchOpportunityQuality">AWS
 * API Reference</a></p>
 */
class OpportunitySearchOpportunityQuality {
 public:
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchOpportunityQuality() = default;
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchOpportunityQuality(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchOpportunityQuality& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A deal quality score (0-100) assigned to the opportunity.</p>
   */
  inline int GetScore() const { return m_score; }
  inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
  inline void SetScore(int value) {
    m_scoreHasBeenSet = true;
    m_score = value;
  }
  inline OpportunitySearchOpportunityQuality& WithScore(int value) {
    SetScore(value);
    return *this;
  }
  ///@}
 private:
  int m_score{0};
  bool m_scoreHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
