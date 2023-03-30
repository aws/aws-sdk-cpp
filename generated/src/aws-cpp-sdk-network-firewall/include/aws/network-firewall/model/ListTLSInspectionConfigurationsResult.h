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
    AWS_NETWORKFIREWALL_API ListTLSInspectionConfigurationsResult();
    AWS_NETWORKFIREWALL_API ListTLSInspectionConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API ListTLSInspectionConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline ListTLSInspectionConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline ListTLSInspectionConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline ListTLSInspectionConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The TLS inspection configuration metadata objects that you've defined.
     * Depending on your setting for max results and the number of TLS inspection
     * configurations, this might not be the full list.</p>
     */
    inline const Aws::Vector<TLSInspectionConfigurationMetadata>& GetTLSInspectionConfigurations() const{ return m_tLSInspectionConfigurations; }

    /**
     * <p>The TLS inspection configuration metadata objects that you've defined.
     * Depending on your setting for max results and the number of TLS inspection
     * configurations, this might not be the full list.</p>
     */
    inline void SetTLSInspectionConfigurations(const Aws::Vector<TLSInspectionConfigurationMetadata>& value) { m_tLSInspectionConfigurations = value; }

    /**
     * <p>The TLS inspection configuration metadata objects that you've defined.
     * Depending on your setting for max results and the number of TLS inspection
     * configurations, this might not be the full list.</p>
     */
    inline void SetTLSInspectionConfigurations(Aws::Vector<TLSInspectionConfigurationMetadata>&& value) { m_tLSInspectionConfigurations = std::move(value); }

    /**
     * <p>The TLS inspection configuration metadata objects that you've defined.
     * Depending on your setting for max results and the number of TLS inspection
     * configurations, this might not be the full list.</p>
     */
    inline ListTLSInspectionConfigurationsResult& WithTLSInspectionConfigurations(const Aws::Vector<TLSInspectionConfigurationMetadata>& value) { SetTLSInspectionConfigurations(value); return *this;}

    /**
     * <p>The TLS inspection configuration metadata objects that you've defined.
     * Depending on your setting for max results and the number of TLS inspection
     * configurations, this might not be the full list.</p>
     */
    inline ListTLSInspectionConfigurationsResult& WithTLSInspectionConfigurations(Aws::Vector<TLSInspectionConfigurationMetadata>&& value) { SetTLSInspectionConfigurations(std::move(value)); return *this;}

    /**
     * <p>The TLS inspection configuration metadata objects that you've defined.
     * Depending on your setting for max results and the number of TLS inspection
     * configurations, this might not be the full list.</p>
     */
    inline ListTLSInspectionConfigurationsResult& AddTLSInspectionConfigurations(const TLSInspectionConfigurationMetadata& value) { m_tLSInspectionConfigurations.push_back(value); return *this; }

    /**
     * <p>The TLS inspection configuration metadata objects that you've defined.
     * Depending on your setting for max results and the number of TLS inspection
     * configurations, this might not be the full list.</p>
     */
    inline ListTLSInspectionConfigurationsResult& AddTLSInspectionConfigurations(TLSInspectionConfigurationMetadata&& value) { m_tLSInspectionConfigurations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTLSInspectionConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTLSInspectionConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTLSInspectionConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<TLSInspectionConfigurationMetadata> m_tLSInspectionConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
