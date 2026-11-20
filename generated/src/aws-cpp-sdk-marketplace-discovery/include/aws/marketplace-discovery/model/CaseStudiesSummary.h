/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>A summary of the case studies associated with a listing.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/CaseStudiesSummary">AWS
 * API Reference</a></p>
 */
class CaseStudiesSummary {
 public:
  AWS_MARKETPLACEDISCOVERY_API CaseStudiesSummary() = default;
  AWS_MARKETPLACEDISCOVERY_API CaseStudiesSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API CaseStudiesSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total number of case studies associated with the listing.</p>
   */
  inline long long GetCaseStudyCount() const { return m_caseStudyCount; }
  inline bool CaseStudyCountHasBeenSet() const { return m_caseStudyCountHasBeenSet; }
  inline void SetCaseStudyCount(long long value) {
    m_caseStudyCountHasBeenSet = true;
    m_caseStudyCount = value;
  }
  inline CaseStudiesSummary& WithCaseStudyCount(long long value) {
    SetCaseStudyCount(value);
    return *this;
  }
  ///@}
 private:
  long long m_caseStudyCount{0};
  bool m_caseStudyCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
