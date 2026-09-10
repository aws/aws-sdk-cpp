/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/DependencyCriticality.h>
#include <aws/resiliencehubv2/model/TestRunDependencySource.h>

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
 * <p>Contains summary information about a dependency that a test run blocked, as
 * captured when the run started.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/TestRunDependencySummary">AWS
 * API Reference</a></p>
 */
class TestRunDependencySummary {
 public:
  AWS_RESILIENCEHUBV2_API TestRunDependencySummary() = default;
  AWS_RESILIENCEHUBV2_API TestRunDependencySummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API TestRunDependencySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the dependency. Absent when the dependency was
   * entered manually and was not part of dependency discovery.</p>
   */
  inline const Aws::String& GetDependencyId() const { return m_dependencyId; }
  inline bool DependencyIdHasBeenSet() const { return m_dependencyIdHasBeenSet; }
  template <typename DependencyIdT = Aws::String>
  void SetDependencyId(DependencyIdT&& value) {
    m_dependencyIdHasBeenSet = true;
    m_dependencyId = std::forward<DependencyIdT>(value);
  }
  template <typename DependencyIdT = Aws::String>
  TestRunDependencySummary& WithDependencyId(DependencyIdT&& value) {
    SetDependencyId(std::forward<DependencyIdT>(value));
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
  TestRunDependencySummary& WithDependencyName(DependencyNameT&& value) {
    SetDependencyName(std::forward<DependencyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DNS name of the dependency that the test run blocked.</p>
   */
  inline const Aws::String& GetDnsName() const { return m_dnsName; }
  inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
  template <typename DnsNameT = Aws::String>
  void SetDnsName(DnsNameT&& value) {
    m_dnsNameHasBeenSet = true;
    m_dnsName = std::forward<DnsNameT>(value);
  }
  template <typename DnsNameT = Aws::String>
  TestRunDependencySummary& WithDnsName(DnsNameT&& value) {
    SetDnsName(std::forward<DnsNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The criticality classification of the dependency when the run started. A
   * dependency that was not discovered has the UNKNOWN criticality.</p>
   */
  inline DependencyCriticality GetCriticality() const { return m_criticality; }
  inline bool CriticalityHasBeenSet() const { return m_criticalityHasBeenSet; }
  inline void SetCriticality(DependencyCriticality value) {
    m_criticalityHasBeenSet = true;
    m_criticality = value;
  }
  inline TestRunDependencySummary& WithCriticality(DependencyCriticality value) {
    SetCriticality(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The origin of the dependency. A discovered dependency was found by dependency
   * discovery; a manual dependency was entered when the run started.</p>
   */
  inline TestRunDependencySource GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  inline void SetSource(TestRunDependencySource value) {
    m_sourceHasBeenSet = true;
    m_source = value;
  }
  inline TestRunDependencySummary& WithSource(TestRunDependencySource value) {
    SetSource(value);
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
  TestRunDependencySummary& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
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
  TestRunDependencySummary& WithSourceRegions(SourceRegionsT&& value) {
    SetSourceRegions(std::forward<SourceRegionsT>(value));
    return *this;
  }
  template <typename SourceRegionsT = Aws::String>
  TestRunDependencySummary& AddSourceRegions(SourceRegionsT&& value) {
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
  TestRunDependencySummary& WithProvider(ProviderT&& value) {
    SetProvider(std::forward<ProviderT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dependencyId;

  Aws::String m_dependencyName;

  Aws::String m_dnsName;

  DependencyCriticality m_criticality{DependencyCriticality::NOT_SET};

  TestRunDependencySource m_source{TestRunDependencySource::NOT_SET};

  Aws::String m_location;

  Aws::Vector<Aws::String> m_sourceRegions;

  Aws::String m_provider;
  bool m_dependencyIdHasBeenSet = false;
  bool m_dependencyNameHasBeenSet = false;
  bool m_dnsNameHasBeenSet = false;
  bool m_criticalityHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_locationHasBeenSet = false;
  bool m_sourceRegionsHasBeenSet = false;
  bool m_providerHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
