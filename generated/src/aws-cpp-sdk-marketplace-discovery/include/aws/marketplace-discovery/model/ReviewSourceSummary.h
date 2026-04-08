/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/ReviewSourceId.h>

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
 * <p>A review summary from a specific source, including the average rating and
 * total review count.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/ReviewSourceSummary">AWS
 * API Reference</a></p>
 */
class ReviewSourceSummary {
 public:
  AWS_MARKETPLACEDISCOVERY_API ReviewSourceSummary() = default;
  AWS_MARKETPLACEDISCOVERY_API ReviewSourceSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API ReviewSourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the review source, such as AWS Marketplace.</p>
   */
  inline const Aws::String& GetSourceName() const { return m_sourceName; }
  inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
  template <typename SourceNameT = Aws::String>
  void SetSourceName(SourceNameT&& value) {
    m_sourceNameHasBeenSet = true;
    m_sourceName = std::forward<SourceNameT>(value);
  }
  template <typename SourceNameT = Aws::String>
  ReviewSourceSummary& WithSourceName(SourceNameT&& value) {
    SetSourceName(std::forward<SourceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The machine-readable identifier of the review source.</p>
   */
  inline ReviewSourceId GetSourceId() const { return m_sourceId; }
  inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
  inline void SetSourceId(ReviewSourceId value) {
    m_sourceIdHasBeenSet = true;
    m_sourceId = value;
  }
  inline ReviewSourceSummary& WithSourceId(ReviewSourceId value) {
    SetSourceId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL where the reviews can be accessed at the source.</p>
   */
  inline const Aws::String& GetSourceUrl() const { return m_sourceUrl; }
  inline bool SourceUrlHasBeenSet() const { return m_sourceUrlHasBeenSet; }
  template <typename SourceUrlT = Aws::String>
  void SetSourceUrl(SourceUrlT&& value) {
    m_sourceUrlHasBeenSet = true;
    m_sourceUrl = std::forward<SourceUrlT>(value);
  }
  template <typename SourceUrlT = Aws::String>
  ReviewSourceSummary& WithSourceUrl(SourceUrlT&& value) {
    SetSourceUrl(std::forward<SourceUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The average rating across all reviews from this source.</p>
   */
  inline const Aws::String& GetAverageRating() const { return m_averageRating; }
  inline bool AverageRatingHasBeenSet() const { return m_averageRatingHasBeenSet; }
  template <typename AverageRatingT = Aws::String>
  void SetAverageRating(AverageRatingT&& value) {
    m_averageRatingHasBeenSet = true;
    m_averageRating = std::forward<AverageRatingT>(value);
  }
  template <typename AverageRatingT = Aws::String>
  ReviewSourceSummary& WithAverageRating(AverageRatingT&& value) {
    SetAverageRating(std::forward<AverageRatingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of reviews available from this source.</p>
   */
  inline long long GetTotalReviews() const { return m_totalReviews; }
  inline bool TotalReviewsHasBeenSet() const { return m_totalReviewsHasBeenSet; }
  inline void SetTotalReviews(long long value) {
    m_totalReviewsHasBeenSet = true;
    m_totalReviews = value;
  }
  inline ReviewSourceSummary& WithTotalReviews(long long value) {
    SetTotalReviews(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceName;

  ReviewSourceId m_sourceId{ReviewSourceId::NOT_SET};

  Aws::String m_sourceUrl;

  Aws::String m_averageRating;

  long long m_totalReviews{0};
  bool m_sourceNameHasBeenSet = false;
  bool m_sourceIdHasBeenSet = false;
  bool m_sourceUrlHasBeenSet = false;
  bool m_averageRatingHasBeenSet = false;
  bool m_totalReviewsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
