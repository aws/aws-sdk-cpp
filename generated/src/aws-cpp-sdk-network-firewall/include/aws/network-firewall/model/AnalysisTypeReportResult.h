/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/network-firewall/model/Hits.h>
#include <aws/network-firewall/model/UniqueSources.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>The results of a <code>COMPLETED</code> analysis report generated with
   * <a>StartAnalysisReport</a>.</p> <p>For an example of traffic analysis report
   * results, see the response syntax of
   * <a>GetAnalysisReportResults</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/AnalysisTypeReportResult">AWS
   * API Reference</a></p>
   */
  class AnalysisTypeReportResult
  {
  public:
    AWS_NETWORKFIREWALL_API AnalysisTypeReportResult() = default;
    AWS_NETWORKFIREWALL_API AnalysisTypeReportResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API AnalysisTypeReportResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of traffic captured by the analysis report.</p>
     */
    inline const Aws::String& GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    template<typename ProtocolT = Aws::String>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = Aws::String>
    AnalysisTypeReportResult& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time any domain was first accessed (within the last 30 day
     * period).</p>
     */
    inline const Aws::Utils::DateTime& GetFirstAccessed() const { return m_firstAccessed; }
    inline bool FirstAccessedHasBeenSet() const { return m_firstAccessedHasBeenSet; }
    template<typename FirstAccessedT = Aws::Utils::DateTime>
    void SetFirstAccessed(FirstAccessedT&& value) { m_firstAccessedHasBeenSet = true; m_firstAccessed = std::forward<FirstAccessedT>(value); }
    template<typename FirstAccessedT = Aws::Utils::DateTime>
    AnalysisTypeReportResult& WithFirstAccessed(FirstAccessedT&& value) { SetFirstAccessed(std::forward<FirstAccessedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time any domain was last accessed (within the last 30 day
     * period).</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessed() const { return m_lastAccessed; }
    inline bool LastAccessedHasBeenSet() const { return m_lastAccessedHasBeenSet; }
    template<typename LastAccessedT = Aws::Utils::DateTime>
    void SetLastAccessed(LastAccessedT&& value) { m_lastAccessedHasBeenSet = true; m_lastAccessed = std::forward<LastAccessedT>(value); }
    template<typename LastAccessedT = Aws::Utils::DateTime>
    AnalysisTypeReportResult& WithLastAccessed(LastAccessedT&& value) { SetLastAccessed(std::forward<LastAccessedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most frequently accessed domains.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    AnalysisTypeReportResult& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of attempts made to access a observed domain.</p>
     */
    inline const Hits& GetHits() const { return m_hits; }
    inline bool HitsHasBeenSet() const { return m_hitsHasBeenSet; }
    template<typename HitsT = Hits>
    void SetHits(HitsT&& value) { m_hitsHasBeenSet = true; m_hits = std::forward<HitsT>(value); }
    template<typename HitsT = Hits>
    AnalysisTypeReportResult& WithHits(HitsT&& value) { SetHits(std::forward<HitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of unique source IP addresses that connected to a domain.</p>
     */
    inline const UniqueSources& GetUniqueSources() const { return m_uniqueSources; }
    inline bool UniqueSourcesHasBeenSet() const { return m_uniqueSourcesHasBeenSet; }
    template<typename UniqueSourcesT = UniqueSources>
    void SetUniqueSources(UniqueSourcesT&& value) { m_uniqueSourcesHasBeenSet = true; m_uniqueSources = std::forward<UniqueSourcesT>(value); }
    template<typename UniqueSourcesT = UniqueSources>
    AnalysisTypeReportResult& WithUniqueSources(UniqueSourcesT&& value) { SetUniqueSources(std::forward<UniqueSourcesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::Utils::DateTime m_firstAccessed{};
    bool m_firstAccessedHasBeenSet = false;

    Aws::Utils::DateTime m_lastAccessed{};
    bool m_lastAccessedHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Hits m_hits;
    bool m_hitsHasBeenSet = false;

    UniqueSources m_uniqueSources;
    bool m_uniqueSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
