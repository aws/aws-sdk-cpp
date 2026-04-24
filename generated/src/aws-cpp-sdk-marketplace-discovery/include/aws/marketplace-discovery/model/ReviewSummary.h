/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/ReviewSourceSummary.h>

#include <utility>

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
 * <p>A summary of customer reviews available for a listing, aggregated by review
 * source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/ReviewSummary">AWS
 * API Reference</a></p>
 */
class ReviewSummary {
 public:
  AWS_MARKETPLACEDISCOVERY_API ReviewSummary() = default;
  AWS_MARKETPLACEDISCOVERY_API ReviewSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API ReviewSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Review summaries from different sources, such as AWS Marketplace.</p>
   */
  inline const Aws::Vector<ReviewSourceSummary>& GetReviewSourceSummaries() const { return m_reviewSourceSummaries; }
  inline bool ReviewSourceSummariesHasBeenSet() const { return m_reviewSourceSummariesHasBeenSet; }
  template <typename ReviewSourceSummariesT = Aws::Vector<ReviewSourceSummary>>
  void SetReviewSourceSummaries(ReviewSourceSummariesT&& value) {
    m_reviewSourceSummariesHasBeenSet = true;
    m_reviewSourceSummaries = std::forward<ReviewSourceSummariesT>(value);
  }
  template <typename ReviewSourceSummariesT = Aws::Vector<ReviewSourceSummary>>
  ReviewSummary& WithReviewSourceSummaries(ReviewSourceSummariesT&& value) {
    SetReviewSourceSummaries(std::forward<ReviewSourceSummariesT>(value));
    return *this;
  }
  template <typename ReviewSourceSummariesT = ReviewSourceSummary>
  ReviewSummary& AddReviewSourceSummaries(ReviewSourceSummariesT&& value) {
    m_reviewSourceSummariesHasBeenSet = true;
    m_reviewSourceSummaries.emplace_back(std::forward<ReviewSourceSummariesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ReviewSourceSummary> m_reviewSourceSummaries;
  bool m_reviewSourceSummariesHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
