/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/DependencyCriticality.h>
#include <aws/resiliencehubv2/model/QueryRange.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Contains summary information about a discovered dependency.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/DependencySummary">AWS
 * API Reference</a></p>
 */
class DependencySummary {
 public:
  AWS_RESILIENCEHUBV2_API DependencySummary() = default;
  AWS_RESILIENCEHUBV2_API DependencySummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API DependencySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the dependency.</p>
   */
  inline const Aws::String& GetDependencyId() const { return m_dependencyId; }
  inline bool DependencyIdHasBeenSet() const { return m_dependencyIdHasBeenSet; }
  template <typename DependencyIdT = Aws::String>
  void SetDependencyId(DependencyIdT&& value) {
    m_dependencyIdHasBeenSet = true;
    m_dependencyId = std::forward<DependencyIdT>(value);
  }
  template <typename DependencyIdT = Aws::String>
  DependencySummary& WithDependencyId(DependencyIdT&& value) {
    SetDependencyId(std::forward<DependencyIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
  inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
  template <typename ServiceArnT = Aws::String>
  void SetServiceArn(ServiceArnT&& value) {
    m_serviceArnHasBeenSet = true;
    m_serviceArn = std::forward<ServiceArnT>(value);
  }
  template <typename ServiceArnT = Aws::String>
  DependencySummary& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the dependency.</p>
   */
  inline const Aws::String& GetDependencyName() const { return m_dependencyName; }
  inline bool DependencyNameHasBeenSet() const { return m_dependencyNameHasBeenSet; }
  template <typename DependencyNameT = Aws::String>
  void SetDependencyName(DependencyNameT&& value) {
    m_dependencyNameHasBeenSet = true;
    m_dependencyName = std::forward<DependencyNameT>(value);
  }
  template <typename DependencyNameT = Aws::String>
  DependencySummary& WithDependencyName(DependencyNameT&& value) {
    SetDependencyName(std::forward<DependencyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DNS name associated with the dependency.</p>
   */
  inline const Aws::String& GetDnsName() const { return m_dnsName; }
  inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
  template <typename DnsNameT = Aws::String>
  void SetDnsName(DnsNameT&& value) {
    m_dnsNameHasBeenSet = true;
    m_dnsName = std::forward<DnsNameT>(value);
  }
  template <typename DnsNameT = Aws::String>
  DependencySummary& WithDnsName(DnsNameT&& value) {
    SetDnsName(std::forward<DnsNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location of the dependency.</p>
   */
  inline const Aws::String& GetLocation() const { return m_location; }
  inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
  template <typename LocationT = Aws::String>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = Aws::String>
  DependencySummary& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the dependency was last detected.</p>
   */
  inline const Aws::Utils::DateTime& GetLastDetectedTime() const { return m_lastDetectedTime; }
  inline bool LastDetectedTimeHasBeenSet() const { return m_lastDetectedTimeHasBeenSet; }
  template <typename LastDetectedTimeT = Aws::Utils::DateTime>
  void SetLastDetectedTime(LastDetectedTimeT&& value) {
    m_lastDetectedTimeHasBeenSet = true;
    m_lastDetectedTime = std::forward<LastDetectedTimeT>(value);
  }
  template <typename LastDetectedTimeT = Aws::Utils::DateTime>
  DependencySummary& WithLastDetectedTime(LastDetectedTimeT&& value) {
    SetLastDetectedTime(std::forward<LastDetectedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source Regions from which the dependency was detected.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSourceRegions() const { return m_sourceRegions; }
  inline bool SourceRegionsHasBeenSet() const { return m_sourceRegionsHasBeenSet; }
  template <typename SourceRegionsT = Aws::Vector<Aws::String>>
  void SetSourceRegions(SourceRegionsT&& value) {
    m_sourceRegionsHasBeenSet = true;
    m_sourceRegions = std::forward<SourceRegionsT>(value);
  }
  template <typename SourceRegionsT = Aws::Vector<Aws::String>>
  DependencySummary& WithSourceRegions(SourceRegionsT&& value) {
    SetSourceRegions(std::forward<SourceRegionsT>(value));
    return *this;
  }
  template <typename SourceRegionsT = Aws::String>
  DependencySummary& AddSourceRegions(SourceRegionsT&& value) {
    m_sourceRegionsHasBeenSet = true;
    m_sourceRegions.emplace_back(std::forward<SourceRegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider of the dependency.</p>
   */
  inline const Aws::String& GetProvider() const { return m_provider; }
  inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
  template <typename ProviderT = Aws::String>
  void SetProvider(ProviderT&& value) {
    m_providerHasBeenSet = true;
    m_provider = std::forward<ProviderT>(value);
  }
  template <typename ProviderT = Aws::String>
  DependencySummary& WithProvider(ProviderT&& value) {
    SetProvider(std::forward<ProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The query range data for the dependency.</p>
   */
  inline const QueryRange& GetQueryRange() const { return m_queryRange; }
  inline bool QueryRangeHasBeenSet() const { return m_queryRangeHasBeenSet; }
  template <typename QueryRangeT = QueryRange>
  void SetQueryRange(QueryRangeT&& value) {
    m_queryRangeHasBeenSet = true;
    m_queryRange = std::forward<QueryRangeT>(value);
  }
  template <typename QueryRangeT = QueryRange>
  DependencySummary& WithQueryRange(QueryRangeT&& value) {
    SetQueryRange(std::forward<QueryRangeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The criticality level of the dependency.</p>
   */
  inline DependencyCriticality GetCriticality() const { return m_criticality; }
  inline bool CriticalityHasBeenSet() const { return m_criticalityHasBeenSet; }
  inline void SetCriticality(DependencyCriticality value) {
    m_criticalityHasBeenSet = true;
    m_criticality = value;
  }
  inline DependencySummary& WithCriticality(DependencyCriticality value) {
    SetCriticality(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A user-provided comment about the dependency.</p>
   */
  inline const Aws::String& GetComment() const { return m_comment; }
  inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
  template <typename CommentT = Aws::String>
  void SetComment(CommentT&& value) {
    m_commentHasBeenSet = true;
    m_comment = std::forward<CommentT>(value);
  }
  template <typename CommentT = Aws::String>
  DependencySummary& WithComment(CommentT&& value) {
    SetComment(std::forward<CommentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dependencyId;

  Aws::String m_serviceArn;

  Aws::String m_dependencyName;

  Aws::String m_dnsName;

  Aws::String m_location;

  Aws::Utils::DateTime m_lastDetectedTime{};

  Aws::Vector<Aws::String> m_sourceRegions;

  Aws::String m_provider;

  QueryRange m_queryRange;

  DependencyCriticality m_criticality{DependencyCriticality::NOT_SET};

  Aws::String m_comment;
  bool m_dependencyIdHasBeenSet = false;
  bool m_serviceArnHasBeenSet = false;
  bool m_dependencyNameHasBeenSet = false;
  bool m_dnsNameHasBeenSet = false;
  bool m_locationHasBeenSet = false;
  bool m_lastDetectedTimeHasBeenSet = false;
  bool m_sourceRegionsHasBeenSet = false;
  bool m_providerHasBeenSet = false;
  bool m_queryRangeHasBeenSet = false;
  bool m_criticalityHasBeenSet = false;
  bool m_commentHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
