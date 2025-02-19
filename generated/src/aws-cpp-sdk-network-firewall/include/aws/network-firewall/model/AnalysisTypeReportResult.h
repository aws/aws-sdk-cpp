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
    AWS_NETWORKFIREWALL_API AnalysisTypeReportResult();
    AWS_NETWORKFIREWALL_API AnalysisTypeReportResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API AnalysisTypeReportResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of traffic captured by the analysis report.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }
    inline AnalysisTypeReportResult& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}
    inline AnalysisTypeReportResult& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}
    inline AnalysisTypeReportResult& WithProtocol(const char* value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time any domain was first accessed (within the last 30 day
     * period).</p>
     */
    inline const Aws::Utils::DateTime& GetFirstAccessed() const{ return m_firstAccessed; }
    inline bool FirstAccessedHasBeenSet() const { return m_firstAccessedHasBeenSet; }
    inline void SetFirstAccessed(const Aws::Utils::DateTime& value) { m_firstAccessedHasBeenSet = true; m_firstAccessed = value; }
    inline void SetFirstAccessed(Aws::Utils::DateTime&& value) { m_firstAccessedHasBeenSet = true; m_firstAccessed = std::move(value); }
    inline AnalysisTypeReportResult& WithFirstAccessed(const Aws::Utils::DateTime& value) { SetFirstAccessed(value); return *this;}
    inline AnalysisTypeReportResult& WithFirstAccessed(Aws::Utils::DateTime&& value) { SetFirstAccessed(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time any domain was last accessed (within the last 30 day
     * period).</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessed() const{ return m_lastAccessed; }
    inline bool LastAccessedHasBeenSet() const { return m_lastAccessedHasBeenSet; }
    inline void SetLastAccessed(const Aws::Utils::DateTime& value) { m_lastAccessedHasBeenSet = true; m_lastAccessed = value; }
    inline void SetLastAccessed(Aws::Utils::DateTime&& value) { m_lastAccessedHasBeenSet = true; m_lastAccessed = std::move(value); }
    inline AnalysisTypeReportResult& WithLastAccessed(const Aws::Utils::DateTime& value) { SetLastAccessed(value); return *this;}
    inline AnalysisTypeReportResult& WithLastAccessed(Aws::Utils::DateTime&& value) { SetLastAccessed(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most frequently accessed domains.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline AnalysisTypeReportResult& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline AnalysisTypeReportResult& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline AnalysisTypeReportResult& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of attempts made to access a observed domain.</p>
     */
    inline const Hits& GetHits() const{ return m_hits; }
    inline bool HitsHasBeenSet() const { return m_hitsHasBeenSet; }
    inline void SetHits(const Hits& value) { m_hitsHasBeenSet = true; m_hits = value; }
    inline void SetHits(Hits&& value) { m_hitsHasBeenSet = true; m_hits = std::move(value); }
    inline AnalysisTypeReportResult& WithHits(const Hits& value) { SetHits(value); return *this;}
    inline AnalysisTypeReportResult& WithHits(Hits&& value) { SetHits(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of unique source IP addresses that connected to a domain.</p>
     */
    inline const UniqueSources& GetUniqueSources() const{ return m_uniqueSources; }
    inline bool UniqueSourcesHasBeenSet() const { return m_uniqueSourcesHasBeenSet; }
    inline void SetUniqueSources(const UniqueSources& value) { m_uniqueSourcesHasBeenSet = true; m_uniqueSources = value; }
    inline void SetUniqueSources(UniqueSources&& value) { m_uniqueSourcesHasBeenSet = true; m_uniqueSources = std::move(value); }
    inline AnalysisTypeReportResult& WithUniqueSources(const UniqueSources& value) { SetUniqueSources(value); return *this;}
    inline AnalysisTypeReportResult& WithUniqueSources(UniqueSources&& value) { SetUniqueSources(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::Utils::DateTime m_firstAccessed;
    bool m_firstAccessedHasBeenSet = false;

    Aws::Utils::DateTime m_lastAccessed;
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
