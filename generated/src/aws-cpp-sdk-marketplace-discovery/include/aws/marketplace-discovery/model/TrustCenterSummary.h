/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/TrustCenterCertificationSummary.h>
#include <aws/marketplace-discovery/model/TrustCenterSourceSummary.h>

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
 * <p>A summary of trust center information associated with a
 * listing.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/TrustCenterSummary">AWS
 * API Reference</a></p>
 */
class TrustCenterSummary {
 public:
  AWS_MARKETPLACEDISCOVERY_API TrustCenterSummary() = default;
  AWS_MARKETPLACEDISCOVERY_API TrustCenterSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API TrustCenterSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Trust center source summaries associated with the listing.</p>
   */
  inline const Aws::Vector<TrustCenterSourceSummary>& GetSourceSummaries() const { return m_sourceSummaries; }
  inline bool SourceSummariesHasBeenSet() const { return m_sourceSummariesHasBeenSet; }
  template <typename SourceSummariesT = Aws::Vector<TrustCenterSourceSummary>>
  void SetSourceSummaries(SourceSummariesT&& value) {
    m_sourceSummariesHasBeenSet = true;
    m_sourceSummaries = std::forward<SourceSummariesT>(value);
  }
  template <typename SourceSummariesT = Aws::Vector<TrustCenterSourceSummary>>
  TrustCenterSummary& WithSourceSummaries(SourceSummariesT&& value) {
    SetSourceSummaries(std::forward<SourceSummariesT>(value));
    return *this;
  }
  template <typename SourceSummariesT = TrustCenterSourceSummary>
  TrustCenterSummary& AddSourceSummaries(SourceSummariesT&& value) {
    m_sourceSummariesHasBeenSet = true;
    m_sourceSummaries.emplace_back(std::forward<SourceSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A subset of certifications associated with the listing, selected by
   * importance.</p>
   */
  inline const Aws::Vector<TrustCenterCertificationSummary>& GetCertificationSummaries() const { return m_certificationSummaries; }
  inline bool CertificationSummariesHasBeenSet() const { return m_certificationSummariesHasBeenSet; }
  template <typename CertificationSummariesT = Aws::Vector<TrustCenterCertificationSummary>>
  void SetCertificationSummaries(CertificationSummariesT&& value) {
    m_certificationSummariesHasBeenSet = true;
    m_certificationSummaries = std::forward<CertificationSummariesT>(value);
  }
  template <typename CertificationSummariesT = Aws::Vector<TrustCenterCertificationSummary>>
  TrustCenterSummary& WithCertificationSummaries(CertificationSummariesT&& value) {
    SetCertificationSummaries(std::forward<CertificationSummariesT>(value));
    return *this;
  }
  template <typename CertificationSummariesT = TrustCenterCertificationSummary>
  TrustCenterSummary& AddCertificationSummaries(CertificationSummariesT&& value) {
    m_certificationSummariesHasBeenSet = true;
    m_certificationSummaries.emplace_back(std::forward<CertificationSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of distinct certifications associated with the listing,
   * including certifications omitted from <code>certificationSummaries</code>.</p>
   */
  inline long long GetTotalCertificationCount() const { return m_totalCertificationCount; }
  inline bool TotalCertificationCountHasBeenSet() const { return m_totalCertificationCountHasBeenSet; }
  inline void SetTotalCertificationCount(long long value) {
    m_totalCertificationCountHasBeenSet = true;
    m_totalCertificationCount = value;
  }
  inline TrustCenterSummary& WithTotalCertificationCount(long long value) {
    SetTotalCertificationCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TrustCenterSourceSummary> m_sourceSummaries;

  Aws::Vector<TrustCenterCertificationSummary> m_certificationSummaries;

  long long m_totalCertificationCount{0};
  bool m_sourceSummariesHasBeenSet = false;
  bool m_certificationSummariesHasBeenSet = false;
  bool m_totalCertificationCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
