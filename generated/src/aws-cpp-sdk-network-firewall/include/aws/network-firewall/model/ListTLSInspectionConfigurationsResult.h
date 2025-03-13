/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/TLSInspectionConfigurationMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace NetworkFirewall
{
namespace Model
{
  class ListTLSInspectionConfigurationsResult
  {
  public:
    AWS_NETWORKFIREWALL_API ListTLSInspectionConfigurationsResult() = default;
    AWS_NETWORKFIREWALL_API ListTLSInspectionConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API ListTLSInspectionConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTLSInspectionConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TLS inspection configuration metadata objects that you've defined.
     * Depending on your setting for max results and the number of TLS inspection
     * configurations, this might not be the full list.</p>
     */
    inline const Aws::Vector<TLSInspectionConfigurationMetadata>& GetTLSInspectionConfigurations() const { return m_tLSInspectionConfigurations; }
    template<typename TLSInspectionConfigurationsT = Aws::Vector<TLSInspectionConfigurationMetadata>>
    void SetTLSInspectionConfigurations(TLSInspectionConfigurationsT&& value) { m_tLSInspectionConfigurationsHasBeenSet = true; m_tLSInspectionConfigurations = std::forward<TLSInspectionConfigurationsT>(value); }
    template<typename TLSInspectionConfigurationsT = Aws::Vector<TLSInspectionConfigurationMetadata>>
    ListTLSInspectionConfigurationsResult& WithTLSInspectionConfigurations(TLSInspectionConfigurationsT&& value) { SetTLSInspectionConfigurations(std::forward<TLSInspectionConfigurationsT>(value)); return *this;}
    template<typename TLSInspectionConfigurationsT = TLSInspectionConfigurationMetadata>
    ListTLSInspectionConfigurationsResult& AddTLSInspectionConfigurations(TLSInspectionConfigurationsT&& value) { m_tLSInspectionConfigurationsHasBeenSet = true; m_tLSInspectionConfigurations.emplace_back(std::forward<TLSInspectionConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTLSInspectionConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<TLSInspectionConfigurationMetadata> m_tLSInspectionConfigurations;
    bool m_tLSInspectionConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
