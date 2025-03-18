/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/AnalysisTypeReportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

AnalysisTypeReportResult::AnalysisTypeReportResult(JsonView jsonValue)
{
  *this = jsonValue;
}

AnalysisTypeReportResult& AnalysisTypeReportResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = jsonValue.GetString("Protocol");
    m_protocolHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FirstAccessed"))
  {
    m_firstAccessed = jsonValue.GetDouble("FirstAccessed");
    m_firstAccessedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastAccessed"))
  {
    m_lastAccessed = jsonValue.GetDouble("LastAccessed");
    m_lastAccessedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");
    m_domainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Hits"))
  {
    m_hits = jsonValue.GetObject("Hits");
    m_hitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UniqueSources"))
  {
    m_uniqueSources = jsonValue.GetObject("UniqueSources");
    m_uniqueSourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue AnalysisTypeReportResult::Jsonize() const
{
  JsonValue payload;

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", m_protocol);

  }

  if(m_firstAccessedHasBeenSet)
  {
   payload.WithDouble("FirstAccessed", m_firstAccessed.SecondsWithMSPrecision());
  }

  if(m_lastAccessedHasBeenSet)
  {
   payload.WithDouble("LastAccessed", m_lastAccessed.SecondsWithMSPrecision());
  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_hitsHasBeenSet)
  {
   payload.WithObject("Hits", m_hits.Jsonize());

  }

  if(m_uniqueSourcesHasBeenSet)
  {
   payload.WithObject("UniqueSources", m_uniqueSources.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
